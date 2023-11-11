#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Define circuit parameters
double R = 100;    // Resistance in ohms
double L = 0.1;    // Inductance in henrys
double Vs = 10;    // Applied voltage in volts

// Function to calculate the current through the inductor at a given time
double calculateCurrent(double t) {
    double tau = L / R;
    
    if (t < 0) {
        return 0;  // Initial condition, I(0) = 0
    } else if (t == 0) {
        return Vs / R;  // Instant charging, I(0+) = Vs / R
    } else {
        return (Vs / R) * (1 - exp(-R * t / L));  // Charging phase
    }
}

int main() {
    FILE *gnuplotPipe = popen("gnuplot -persist", "w");
    if (gnuplotPipe == NULL) {
        perror("gnuplot");
        return -1;
    }

    fprintf(gnuplotPipe, "set title 'Transient Response of RL Circuit'\n");
    fprintf(gnuplotPipe, "set xlabel 'Time (s)'\n");
    fprintf(gnuplotPipe, "set ylabel 'Current (A)'\n");
    fprintf(gnuplotPipe, "plot '-' with lines title 'I(t)'\n");

    double t, I;
    
    // Simulate the transient response and send data to gnuplot
    for (t = 0; t <= 5 * L / R; t += L / (10 * R)) {
        I = calculateCurrent(t);
        fprintf(gnuplotPipe, "%.4f %.4f\n", t, I);
    }

    // Close the gnuplot process
    fprintf(gnuplotPipe, "e\n");
    pclose(gnuplotPipe);

    return 0;
}


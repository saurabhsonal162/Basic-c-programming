#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Define circuit parameters
double R = 1000;   // Resistance in ohms
double C = 0.001;  // Capacitance in farads
double Vs = 10;    // Applied voltage in volts

// Function to calculate the voltage across the capacitor at a given time
double calculateVoltage(double t) {
    double tau = R * C;
    
    if (t < 0) {
        return 0;  // Initial condition, Vc(0) = 0
    } else if (t == 0) {
        return Vs;  // Instant charging, Vc(0+) = Vs
    } else {
        return Vs * (1 - exp(-t / tau));  // Charging phase
    }
}

int main() {
    FILE *gnuplotPipe = popen("gnuplot -persist", "w");
    if (gnuplotPipe == NULL) {
        perror("gnuplot");
        return -1;
    }

    fprintf(gnuplotPipe, "set title 'Transient Response of RC Circuit'\n");
    fprintf(gnuplotPipe, "set xlabel 'Time (s)'\n");
    fprintf(gnuplotPipe, "set ylabel 'Voltage (V)'\n");
    fprintf(gnuplotPipe, "plot '-' with lines title 'Vc(t)'\n");

    double t, Vc;
    
    // Simulate the transient response and send data to gnuplot
    for (t = 0; t <= 5 * R * C; t += R * C / 10) {
        Vc = calculateVoltage(t);
        fprintf(gnuplotPipe, "%.4f %.4f\n", t, Vc);
    }

    // Close the gnuplot process
    fprintf(gnuplotPipe, "e\n");
    pclose(gnuplotPipe);

    return 0;
}


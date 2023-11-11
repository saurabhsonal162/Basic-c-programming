#include <stdio.h>
#include <math.h>

// Circuit parameters
double R = 100;    // Resistance in ohms
double L = 0.1;    // Inductance in henrys
double C = 0.001;  // Capacitance in farads

int main() {
    double f_start = 10;   // Start frequency in Hz
    double f_end = 10000; // End frequency in Hz

    for (double f = f_start; f <= f_end; f *= 10) {
        double omega = 2.0 * M_PI * f;
        double Z = R + omega * L - 1.0 / (omega * C);
        double V = 10; // Applied voltage in volts
        double I = V / Z;
        printf("Frequency: %.2f Hz, Current: %.6f A\n", f, I);
    }

    return 0;
}


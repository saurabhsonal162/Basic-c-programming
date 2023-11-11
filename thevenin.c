#include <stdio.h>

// Function to calculate the Thevenin voltage
double calculateTheveninVoltage(double sourceVoltage, double loadResistance, double resistor1, double resistor2) {
    return sourceVoltage * (resistor2 / (resistor1 + resistor2));
}

// Function to calculate the Thevenin resistance
double calculateTheveninResistance(double resistor1, double resistor2) {
    return (resistor1 * resistor2) / (resistor1 + resistor2);
}

int main() {
    double sourceVoltage = 50.0; // Source voltage in volts
    double loadResistance = 500.0; // Load resistance in ohms
    double resistor1 = 220.0;      // Resistor 1 in ohms
    double resistor2 = 110.0;      // Resistor 2 in ohms

    double Vth = calculateTheveninVoltage(sourceVoltage, loadResistance, resistor1, resistor2);
    double Rth = calculateTheveninResistance(resistor1, resistor2);

    printf("Thevenin Voltage (Vth): %.2f V\n", Vth);
    printf("Thevenin Resistance (Rth): %.2f ohms\n", Rth);

    return 0;
}


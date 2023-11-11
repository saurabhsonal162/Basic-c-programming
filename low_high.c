#include <stdio.h>

#define NUM_SAMPLES 10

// Low-pass filter (Moving Average)
double lowPassFilter(double inputSignal[], int currentIndex) {
    double sum = 0.0;
    for (int i = 0; i < NUM_SAMPLES; i++) {
        sum += inputSignal[(currentIndex - i + NUM_SAMPLES) % NUM_SAMPLES];
    }
    return sum / NUM_SAMPLES;
}

// High-pass filter (Difference Filter)
double highPassFilter(double inputSignal[], int currentIndex) {
    double sum = 0.0;
    for (int i = 0; i < NUM_SAMPLES; i++) {
        sum += inputSignal[(currentIndex - i + NUM_SAMPLES) % NUM_SAMPLES];
    }
    double average = sum / NUM_SAMPLES;
    return inputSignal[currentIndex] - average;
}

int main() {
    double inputSignal[NUM_SAMPLES] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    int currentIndex = 0;

    printf("Input Signal: ");
    for (int i = 0; i < NUM_SAMPLES; i++) {
        printf("%.2f ", inputSignal[i]);
    }
    printf("\n");

    // Apply the low-pass filter
    double lowPassOutput = lowPassFilter(inputSignal, currentIndex);
    printf("Low-Pass Filter Output: %.2f\n", lowPassOutput);

    // Apply the high-pass filter
    double highPassOutput = highPassFilter(inputSignal, currentIndex);
    printf("High-Pass Filter Output: %.2f\n", highPassOutput);

    return 0;
}


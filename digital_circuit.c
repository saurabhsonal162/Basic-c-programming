#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Define digital components and their behaviors
struct DigitalComponent {
    char name[32];
    int numInputs;
    int numOutputs;
    bool inputs[16];
    bool outputs[16];
};

// Define basic logic gate functions
void ANDGate(struct DigitalComponent* component) {
    component->outputs[0] = component->inputs[0] && component->inputs[1];
}

void ORGate(struct DigitalComponent* component) {
    component->outputs[0] = component->inputs[0] || component->inputs[1];
}

void NOTGate(struct DigitalComponent* component) {
    component->outputs[0] = !component->inputs[0];
}

// Simulate a digital component
void SimulateComponent(struct DigitalComponent* component) {
    if (strcmp(component->name, "AND") == 0) {
        ANDGate(component);
    } else if (strcmp(component->name, "OR") == 0) {
        ORGate(component);
    } else if (strcmp(component->name, "NOT") == 0) {
        NOTGate(component);
    }
}

int main() {
    struct DigitalComponent andGate;
    strcpy(andGate.name, "AND");
    andGate.numInputs = 2;
    andGate.numOutputs = 1;

    struct DigitalComponent notGate;
    strcpy(notGate.name, "NOT");
    notGate.numInputs = 1;
    notGate.numOutputs = 1;

    // Set input values
    andGate.inputs[0] = true;
    andGate.inputs[1] = false;

    notGate.inputs[0] = true;

    // Simulate the circuit
    SimulateComponent(&andGate);
    SimulateComponent(&notGate);

    // Display the results
    printf("AND Gate Output: %d\n", andGate.outputs[0]);
    printf("NOT Gate Output: %d\n", notGate.outputs[0]);

    return 0;
}


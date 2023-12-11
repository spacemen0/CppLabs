#ifndef CIRCUIT_H
#define CIRCUIT_H
#include <vector>
#include <iostream>
#include <iomanip>
#include "Components.h"
class Circuit
{
public:
    Circuit();
    Circuit(int iterations, int printInterval, double timeStep);
    void addComponent(Component *c);
    void simulate();
    void printHeader();
    void deallocate_components();

private:
    std::vector<Component *> components;
    int iterations;
    int printInterval;
    double timeStep;
};
#endif
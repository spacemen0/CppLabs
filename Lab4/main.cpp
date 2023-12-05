﻿#include "Circuit.h"
#include "Connection.h"
#include "Components.h"

int main(int argc, char *argv[])

{
    Connection p, l, r, n;
    Circuit net(200000, 10, 0.01);
    net.addComponent(new Battery("Bat", 24.0, p, n));
    net.addComponent(new Resistor("R1", 150, p, l));
    net.addComponent(new Resistor("R2", 50, p, r));
    net.addComponent(new Capacitor("C3", 1.0, r, l));
    net.addComponent(new Resistor("R4", 300, l, n));
    net.addComponent(new Capacitor("C5", 0.75, r, n));
    net.printHeader();
    net.simulate();
    net.deallocate_components();
    return 0;
}
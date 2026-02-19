#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <string>
using namespace std;

// Appliance class stores information about electrical appliances
class Appliance {
private:
    string name;          // Name of appliance
    double powerRating;   // Power in Watts
    double hoursPerDay;   // Usage hours per day

public:
    // Constructor to initialize appliance details
    Appliance(string n, double p, double h);

    // Display appliance details
    void display() const;

    // Calculate daily energy consumption in kWh
    double calculateDailyEnergy() const;
};

#endif

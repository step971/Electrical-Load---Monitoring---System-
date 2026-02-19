#include <iostream>
#include <vector>
#include "Appliance.h"

using namespace std;

int main() {
    vector<Appliance> appliances;

    int choice;
    do {
        cout << "\n--- Electrical Load Monitoring System ---\n";
        cout << "1. Register Appliance\n";
        cout << "2. View Appliances\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            string name;
            double power, hours;

            cout << "Enter Appliance Name: ";
            cin >> name;

            cout << "Enter Power Rating (Watts): ";
            cin >> power;

            cout << "Enter Hours Used Per Day: ";
            cin >> hours;

            Appliance newAppliance(name, power, hours);
            appliances.push_back(newAppliance);

            cout << "Appliance Registered Successfully!\n";
        }

        else if (choice == 2) {
            if (appliances.empty()) {
                cout << "No appliances registered.\n";
            } else {
                for (const auto& appliance : appliances) {
                    cout << "\n-----------------\n";
                    appliance.display();
                }
            }
        }

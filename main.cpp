#include "main.h"
#include <iostream>
using namespace std;

void Print(int loop_value, vector<vector<pune> > &region, int availableWorkers, int availableGoods) {
    for (auto &row : region) {
        for (auto &city : row) {
            cout << (city.getPopulation() == 0 ? string(1, city.getType()) : to_string(city.getPopulation())) << " ";
        }
        cout << endl;
    }
    cout << endl << "Timestep " << loop_value << " Pollution: " << GetTotalPollution(region) << endl;
    cout << "Available Workers: " << availableWorkers << endl;
    cout << "Available Goods: " << availableGoods << endl;
    cout << "Press 'A' to advance the sim." << endl;
    cout << "Press 'X' to exit the sim." << endl;
    cout << "Press 'Q' to edit config file." << endl;
}

int main() {
    vector<vector<pune> > Region;
    vector<vector<int> > mapKey;
    int timeLimit = 0;
    int refreshRate = 0;
    int availableWorkers = 0; // Starting count for the workers
    int availableGoods = 0;   // Starting count for goods

    Initialize(Region, timeLimit, refreshRate, mapKey);

    for (int i = 0; i <= timeLimit; i++) {
        if (i % refreshRate == 0) {
            Print(i, Region, availableWorkers, availableGoods);
        }

        // Prompt user for input to control simulation
        char userInput;
        cout << "Enter your choice: ";
        cin >> userInput;

        if (userInput == 'X' || userInput == 'x') {
            cout << "Exiting simulation..." << endl;
            break; // Exit the loop and end the program
        }
        else if (userInput == 'A' || userInput == 'a') {
            // Advance the simulation
            Simulation(mapKey, Region, availableWorkers, availableGoods);
        }
        else if (userInput == 'Q' || userInput == 'q') {
            cout << "Editing configuration is not implemented in this example." << endl;
            // Add configuration editing logic if required
        } else {
            cout << "Invalid input. Please enter 'A', 'X', or 'Q'." << endl;
        }
    }
    return 0;
}

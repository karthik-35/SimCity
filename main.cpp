#include "main.h"
#include "init.h"
#include "seasons.h"

int main() {
    std::vector<std::vector<goa>> Region;
    std::vector<std::vector<int>> mapKey;
    int timeLimit, refreshRate;
    int availableWorkers = 0, availableGoods = 0;
    Season currentSeason = SPRING;

    Initialize(Region, timeLimit, refreshRate, mapKey);

    for (int i = 0; i < timeLimit; i++) {
        if (i % refreshRate == 0) {
            Print(i, Region, availableWorkers, availableGoods, currentSeason);
        }

        char userInput;
        cout << "Enter your choice: ";
        cin >> userInput;

        if (userInput == 'X' || userInput == 'x') {
            cout << "Exiting simulation..." << endl;
            break;
        } else if (userInput == 'A' || userInput == 'a') {
            Simulation(mapKey, Region, availableWorkers, availableGoods, currentSeason);
        } else {
            cout << "Invalid input. Please enter 'A' to advance or 'X' to exit." << endl;
        }
    }

    return 0;
}

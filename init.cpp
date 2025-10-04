#include "init.h"
#include "seasons.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

void Initialize(vector<vector<goa>> &Region, int &timeLimit, int &refreshRate, vector<vector<int>> &mapKey) {
    string regionFileName;
    string configFileName;
    cout << "Enter filename of configuration file: ";
    cin >> configFileName;

    ParseConfigFile(configFileName, regionFileName, timeLimit, refreshRate);
    ParseRegionFile(Region, regionFileName);

    cout << "Time Limit: " << timeLimit << endl;
    cout << "Refresh Rate: " << refreshRate << endl;

    mapKey.resize(Region.size(), vector<int>(Region[0].size(), 0));
    for (int i = 0; i < Region.size(); i++) {
        for (int j = 0; j < Region[i].size(); j++) {
            char type = Region[i][j].getType();
            if (type == 'R') mapKey[i][j] = 1;
            else if (type == 'I') mapKey[i][j] = 2;
            else if (type == 'C') mapKey[i][j] = 3;
        }
    }
}

void Simulation(vector<vector<int>> mapKey, vector<vector<goa>> &Region, int &availableWorkers, int &availableGoods, Season &currentSeason) {
    updateSeason(currentSeason); // Update season
    cout << "Current Season: " << getSeasonName(currentSeason) << endl;

    for (size_t i = 0; i < mapKey.size(); ++i) {
        for (size_t j = 0; j < mapKey[i].size(); ++j) {
            if (mapKey[i][j] == 1) { // Residential
                Region[i][j] = residentialProcess(Region[i][j], Region, i, j);
                availableWorkers += (Region[i][j].getPopulation() > 0) ? 1 : 0;
            } else if (mapKey[i][j] == 2) { // Industrial
                Region[i][j] = industrialProcess(Region[i][j], Region, i, j);
                availableGoods += (Region[i][j].getPopulation() > 0) ? 1 : 0;
            } else if (mapKey[i][j] == 3) { // Commercial
                Region[i][j] = commercialProcess(Region[i][j], Region, i, j);
                if (availableWorkers > 0 && availableGoods > 0) {
                    availableWorkers--;
                    availableGoods--;
                }
            }
        }
    }
}

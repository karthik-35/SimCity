#ifndef INIT_H
#define INIT_H

#include <vector>
#include <string>
#include "goa.h"
#include "seasons.h"

void Initialize(std::vector<std::vector<goa>> &Region, int &timeLimit, int &refreshRate, std::vector<std::vector<int>> &mapKey);
void Simulation(std::vector<std::vector<int>> mapKey, std::vector<std::vector<goa>> &Region, int &availableWorkers, int &availableGoods, Season &currentSeason);

#endif

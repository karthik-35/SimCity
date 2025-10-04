#ifndef MAIN_H
#define MAIN_H

#include "init.h"
#include "seasons.h"
#include "goa.h"
#include <vector>

// Function to print the simulation state at each timestep
void Print(int loop_value, std::vector<std::vector<goa>>& region, int availableWorkers, int availableGoods, Season currentSeason);

#endif

#ifndef SEASONS_H
#define SEASONS_H

#include <string>

enum Season {
    SPRING,
    SUMMER,
    FALL,
    WINTER
};

// Updates the current season to the next in the cycle
void updateSeason(Season &currentSeason);

// Returns the name of the current season as a string
std::string getSeasonName(Season currentSeason);

#endif

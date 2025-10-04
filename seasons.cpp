#include "season.h"

void updateSeason(Season &currentSeason) {
    currentSeason = static_cast<Season>((currentSeason + 1) % 4);
}

std::string getSeasonName(Season currentSeason) {
    switch (currentSeason) {
        case SPRING: return "Spring";
        case SUMMER: return "Summer";
        case FALL: return "Fall";
        case WINTER: return "Winter";
        default: return "Unknown";
    }
}

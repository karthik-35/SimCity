#include "goa.h"

// Constructor
goa::goa() : type('-'), population(0), pollution(0), powerline(false) {}

// Getters and Setters
char goa::getType() const {
    return type;
}

void goa::setType(char t) {
    type = t;
}

int goa::getPopulation() const {
    return population;
}

void goa::updatePopulation() {
    population++;
}

int goa::getPollution() const {
    return pollution;
}

void goa::setPollution(int p) {
    pollution = (p < 0) ? 0 : p; // Ensure pollution is non-negative
}

bool goa::isPowerline() const {
    return powerline;
}

void goa::setPowerline(bool hasPowerline) {
    powerline = hasPowerline;
}

// Utility functions
void goa::reset() {
    type = '-';
    population = 0;
    pollution = 0;
    powerline = false;
}

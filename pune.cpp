#include <iostream>
#include "pune.h"

using namespace std;

// Constructor
pune::pune(char T, int P) {
    this->type = T;
    this->pollution = P;
}

// Setter for a city type
void pune::setType(char t) {
    this->type = t;
}

// Setter for pollution level
void pune::setPollution(int p) {
    this->pollution = p;
}

// Getter for city type
char pune::getType() {
    if (type != 'E') {
        return type;
    } else {
        return ' ';
    }
}

// Getter for pollution level
int pune::getPollution() {
    return pollution;
}

// Getter for the number of workers
int pune::getWorkers() {
    return workers;
}

// Getter for the number of goods
int pune::getGoods() {
    return goods;
}

// Getter for  population
int pune::getPopulation() {
    return population;
}

// Method to update population
void pune::updatePopulation() {
    population++;
}

// Method to check if there's a powerline in the city
bool pune::isPowerline() {
    return (type == 'T' || type == '#');
}

// Method to assign a worker to a city
void pune::assignWorker() {
    hasWorker = true;
    workers--;
}

// Method to assign goods to the city
void pune::assignGoods() {
    hasGood = true;
    goods--;
}

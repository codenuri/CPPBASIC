#include "Car.h"

int Car::count{0};

Car::Car() { ++count; }
Car::~Car(){ --count; }
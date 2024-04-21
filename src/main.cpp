#include "compute_speed.h"
#include "mp-units/systems/si/unit_symbols.h"

#include <cstdio>

using mp_units::si::unit_symbols::Mm;
using mp_units::si::unit_symbols::Ms;

int main() {
    auto distance = 40.63F * km;
    auto time = 0.89F * h;

    auto speed = computeSpeed(distance, time);

    printf("The speed is %f km/h, or %f Mm/Ms\n", speed.numerical_value_in(km / h), speed.numerical_value_in(Mm/Ms));
}

#pragma once

#include "mp-units/systems/isq/isq.h"
#include "mp-units/systems/isq/space_and_time.h"
#include "mp-units/systems/si/unit_symbols.h"

using namespace mp_units;
using si::unit_symbols::km;
using si::unit_symbols::h;

quantity<isq::speed[km /h], float> computeSpeed(quantity<isq::distance[km], float> distance, quantity<isq::time[h], float> time);

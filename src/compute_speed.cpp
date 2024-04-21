#include "compute_speed.h"

quantity<isq::speed[km /h], float> computeSpeed(quantity<isq::distance[km], float> distance, quantity<isq::time[h], float> time) {
    return distance / time;
}

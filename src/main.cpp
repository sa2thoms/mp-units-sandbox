#include "compute_speed.h"

#include <cstdio>

int main() {
    float distance = 40.63F;
    float time = 0.89F;

    float speed = computeSpeed(distance, time);

    printf("The speed is %f\n", speed);
}

#include "pid_snappy.h"
#include <stdio.h>

int main() {

    // PID(dt,
    // MAX of manipulated variable,MIN of manipulated variable,
    // Kp,Kd,Ki )
    // MAX PWM of 1950 for full forward thrusters
    // MIN PWM of 1100 for full reverse thrusters
    PID pid = PID(0.1, 1950, 1100, 0.1, 0.01, 0.5);

    //val is velocity input(??)
    double val = 20;
    for (int i = 0; i < 100; i++) {
        double inc = pid.calculate(0, val);
        printf("val:% 7.3f inc:% 7.3f\n", val, inc);
        val += inc;
    }

    return 0;
}

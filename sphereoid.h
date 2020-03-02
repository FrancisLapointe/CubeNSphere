//
// Created by flapo on 2/5/2020.
//

#ifndef UNTITLED13_SPHEREOID_H
#define UNTITLED13_SPHEREOID_H
#define _USE_MATH_DEFINES
#include <math.h>

class Spheroid {
private:
    float radius;
public:
    Spheroid(float startingRadius) {
        radius = startingRadius;
    }

    float  Area() {
        return  M_PI * pow(radius,2);
    }
        float  volume(); {
            return 4* M_PI*(pow(radius,3)/3);
        }

        float setRadius(float newRadius); {
            radius = newRadius;
        }
        float getRadius();{

        }
        float surfaceArea();{

        }

};
#endif //UNTITLED13_SPHEREOID_H

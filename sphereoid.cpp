//
// Created by flapo on 2/5/2020.
//
#include <iostream>
#include "sphereoid.h"
#include <cmath>

    Spheroid :: Spheroid (float startingRadius) {
      radius = startingRadius;
    }
    float Spheroid :: Area(){
        return M_PI * pow(radius,2);
    }
    float Spheroid :: volume(){
        return 4*M_PI*(pow(radius,3)/3);
}
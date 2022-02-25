/************************************************
 * bullet.hpp
 * skeet
 *
 * Created by Mauricio Takashi Kiyama on 11/6/17.
 *  Copyright © 2017 a+. All rights reserved.
*************************************************/

#ifndef bullet_h
#define bullet_h

#define BULLET_SPEED 10
#define BULLET_LIFE 25

#include "flyingObject.h"
#include "uiDraw.h"
#include "ship.h"
#include <stdio.h>
#include <cmath> // used for sin, cos, and M_PI

/*************************************************
 * BULLET
 *   class containing the bullet function
 *************************************************/
class Bullet : public FlyingObject
{
    
public:
    Bullet();
    void kill();
    void draw();
    void fire(Point, float);
    int lifeSpam = 0;
    
};


#endif /* bullet_h */

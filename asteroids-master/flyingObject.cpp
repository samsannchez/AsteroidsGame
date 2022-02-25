//  flyingObject.cpp
//  skeet
//
//  Created by Mauricio Takashi Kiyama on 11/6/17.
//  Copyright © 2017 a+. All rights reserved.
//

#include "flyingObject.h"
#include "point.h"
#include "velocity.h"

/*********************************
 * GET POINT
 *   gets the point
 *********************************/
Point FlyingObject :: getPoint() const
{
    return point;
}

/************************************
 * GET VELOCITY
 *   gets the velocity
 ************************************/
Velocity FlyingObject :: getVelocity() const
{
    return velocity;
}

/************************************
 * IS ALIVE
 *   checks if the object is alive
 ************************************/
bool FlyingObject :: isAlive()
{
    return alive;
}

/************************************
 * SET POINT
 *   sets the point of the object
 ************************************/
void FlyingObject :: setPoint(Point point)
{
    this->point = point;
}

/************************************
 * SET VELOCITY
 *   sets the velocity of the object
 ************************************/
void FlyingObject :: setVelocity(Velocity velocity)
{
    this->velocity = velocity;
}

/*********************************
 * SET ALIVE
 *   sets the object alive
 *********************************/
void FlyingObject :: setAlive(bool alive)
{
    this->alive = alive;
}

/*********************************
 * KILL
 *   sets alive to false
 *********************************/
void FlyingObject :: kill()
{
    alive = false;
}

/*********************************
 * ADVANCE
 *   advances the object
 *********************************/
void FlyingObject :: advance(int screenSize)
{
    point.addX(velocity.getDx());
    point.addY(velocity.getDy());
    if (point.getX() > screenSize / 2)
        point.addX(-screenSize);
    if (point.getX() < -screenSize / 2)
        point.addX(screenSize);
    if (point.getY() > screenSize / 2)
        point.addY(-screenSize);
    if (point.getY() < -screenSize / 2)
        point.addY(screenSize);
}

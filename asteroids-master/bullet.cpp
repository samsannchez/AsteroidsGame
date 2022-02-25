/************************************************
//  bullet.cpp
//  skeet
//
//  Created by Mauricio Takashi Kiyama on 11/6/17.
//  Copyright © 2017 a+. All rights reserved.
*************************************************/

#include "bullet.h"
#include <cmath> //for fire(int angle) cos and sin


/*********************************
 * BULLET
 *   default constructor
 *********************************/
Bullet :: Bullet()
{
    setAlive(true);
}

/*********************************
 * KILL
 *   Set alive to false
 *********************************/
void Bullet :: kill()
{
    setAlive(false);
}

/*********************************
 * DRAW
 *   Draws the bullet
 *********************************/
void Bullet :: draw()
{
    drawDot(getPoint());
    
    if (lifeSpam == (BULLET_LIFE - 1))
    {
        kill();
    }
    
    lifeSpam++;
}

/*********************************
 * FIRE
 *   fires the bullet
 *********************************/
void Bullet :: fire(Point shipPoint, float angle)
{
    setPoint(shipPoint);
    
    Velocity velocity;
    
    velocity.setDx(cos((float)(91 + angle) * M_PI/180) * BULLET_SPEED);
    velocity.setDy(sin((float)(91 + angle) * M_PI/180) * BULLET_SPEED);
    
    setVelocity(velocity);
}


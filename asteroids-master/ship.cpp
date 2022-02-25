#include "ship.h"


#include <cassert>

// Put your ship methods here

/******************************************************************
 * DEFAULT CONSTRUCTOR
 *
 ******************************************************************/
Ship:: Ship()
{
    alive = true;
    thrust = false;
    angle = 0;
    
}

/******************************************************************
 * DRAW
 *  Draws the ship
 ******************************************************************/
void Ship :: draw()
{
    drawShip(point, angle, thrust);
}

/******************************************************************
 * KILL
 *  kills the ship
 ******************************************************************/
void Ship :: kill()
{
    setAlive(false);
}

/******************************************************************
 * MOVE LEFT
 *  turn the ship to the left
 ******************************************************************/
void Ship :: moveLeft()
{
    angle -= SHIP_MOVE_AMOUNT;
    

}

/******************************************************************
 * MOVE RIGHT
 *  Turn the ship to the right
 ******************************************************************/
void Ship :: moveRight()
{
    angle += SHIP_MOVE_AMOUNT;
}

/******************************************************************
 * APPLY THRUST BOTTOM
 *  Increase velocity to by 0.2 pixels / frame
 ******************************************************************/
void Ship :: applyThrustBottom()
{
    thrust = true;
    velocity.setDx(velocity.getDx() + cos((float)(91 + angle) * M_PI/180) * SHIP_SPEED);
    velocity.setDy(velocity.getDy() + sin((float)(91 + angle) * M_PI/180) * SHIP_SPEED);
    
}

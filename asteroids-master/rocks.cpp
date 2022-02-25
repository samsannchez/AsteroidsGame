#include "rocks.h"



/****************************ROCK**********************************/


/******************************************************************
 * ROCK - CONSTRUCTOR
 ******************************************************************/
Rock :: Rock()
{
    setAlive(true);
    setRockId(0);
}

/******************************************************************
 * GET ROCK ID
 *   gets the id of the rock's
 ******************************************************************/
int Rock :: getRockId()
{
    return rockId;
}

/******************************************************************
 * SET ROCK ID
 *   sets the rock's id
 ******************************************************************/
void Rock ::setRockId(int rockId)
{
    this->rockId = rockId;
}

/******************************************************************
 * ROCK - KILL
 *   sets alive to false
 ******************************************************************/
void Rock :: kill()
{
    setAlive(false);
}
 
/******************************************************************
 * GET RADIUS
 *    gets the radius of the object
 ******************************************************************/
int Rock :: getRadius()
{
    return radius;
}

/******************************************************************
 * SET RADIUS
 *   sets the radius of the object
 ******************************************************************/
void Rock :: setRadius(int radius)
{
    this->radius = radius;
}

/******************************************************************
 * ROCK HIT
 *   hit function that happens when the rock is hit
 ******************************************************************/
void Rock :: hit()
{
}

/******************************************************************
 * ROCK DRAW
 *   function to draw the rock
 ******************************************************************/
void Rock :: draw()
{
}

/***************************BIG ROCK*******************************/


/******************************************************************
 * BIG ROCK - CONSTRUCTOR
 ******************************************************************/
BigRock :: BigRock()
{
    int rand = random(1,3);
    int dx = 0;
    int dy = 0;
    int x = 0;
    int y = 0;

    if (rand == 2)
    {
        x = -200;
        dx = 1;
        y = random( -200, 200);
        dy = 1;
    }
    else
    {
        x = 200;
        dx = -1;
        y = random( -200, 200);
        dy = -1;
    }
    
    if (y >= 0)
    {
        Velocity velocity(dx,-dy);
        setVelocity(velocity);
    }

    if (y < 0)
    {
        Velocity velocity(dx,dy);
        setVelocity(velocity);
    }

    Point point(x,y);
    setPoint(point);
    setAlive(true);
    setRockId(1);
    setRadius(17);
    rotation = 2;
}

/******************************************************************
 * BIG ROCK - DRAW
 *****************************************************************/
void BigRock :: draw()
{
    drawLargeAsteroid(point, rotation);

    for (int i = 0; i < 2; i++)
    ++rotation;
}

/******************************************************************
 * BIG ROCK - HIT
 ******************************************************************/
void BigRock :: hit()
{
    kill();
}


/*************************MEDIUM ROCK******************************/


/******************************************************************
 * MEDIUM ROCK - CONSTRUCTOR
 ******************************************************************/
MediumRock :: MediumRock(Point bPoint, int mRock)
{

    int dx = 2;
    int dy = 2;
    
    if (mRock == 2)
    {
        dx = -2;
        dy = -2;
    }
    
    Velocity velocity(dx,dy);
    setVelocity(velocity);
    
    Point point(bPoint.getX(),bPoint.getY());
    setPoint(point);
    
    setAlive(true);
    setRockId(2);
    setRadius(9);
    rotation = 0;

}


/******************************************************************
 * MEDIUM ROCK - DRAW
 ******************************************************************/
void MediumRock :: draw()
{
    drawMediumAsteroid(point, rotation);
    
    for (int i = 0; i < 5; i++)
        ++rotation;
    
}

/******************************************************************
 * MEDIUM ROCK - HIT
 ******************************************************************/
void MediumRock :: hit()
{
    kill();
}


/**************************SMALL ROCK******************************/


/******************************************************************
 * SMALL ROCK - CONSTRUCTOR
 ******************************************************************/
SmallRock :: SmallRock(Point sPoint, int sRock)
{
    
    int dx = 3;
    int dy = 3;
    
    if (sRock == 2)
    {
        dx = -3;
        dy = -3;
    }

    Velocity velocity(dx,dy);
    setVelocity(velocity);
    
    Point point(sPoint.getX(),sPoint.getY());
    setPoint(point);
    
    setAlive(true);
    setRockId(3);
    setRadius(5);
    rotation = 0;
    
}

/******************************************************************
 * SMALL ROCK - DRAW
 ******************************************************************/
void SmallRock :: draw()
{
    drawSmallAsteroid(point, rotation);
    
    for (int i = 0; i < 10; i++)
        rotation++;
}

/******************************************************************
 * SMALL ROCK - HIT
 ******************************************************************/
void SmallRock :: hit()
{
    kill();
}


/*************************ULTRA SHIP******************************/


/******************************************************************
 * ULTRA SHIP - CONSTRUCTOR
 ******************************************************************/
UltraShip :: UltraShip()
{
    int rand = random(1,3);
    int dx = 0;
    int dy = 0;
    int x = 0;
    int y = 0;
    
    if (rand == 2)
    {
        x = -200;
        dx = 1;
        y = random( -200, 200);
        dy = 1;
    }
    else
    {
        x = 200;
        dx = -1;
        y = random( -200, 200);
        dy = -1;
    }
    
    if (y >= 0)
    {
        Velocity velocity(dx,-dy);
        setVelocity(velocity);
    }
    
    if (y < 0)
    {
        Velocity velocity(dx,dy);
        setVelocity(velocity);
    }
    
    Point point(x,y);
    setPoint(point);
    setAlive(true);
    setRockId(4);
    setRadius(35);
    hits = 49;
}

/******************************************************************
 * ULTRA SHIP - DRAW
 *****************************************************************/
void UltraShip :: draw()
{
    drawUltraAsteroid(point, hits);
}

/******************************************************************
 * ULTRA SHIP - HIT
 ******************************************************************/
void UltraShip :: hit()
{
    
    if (hits == 0)
        kill();
    
    --hits;
}




#ifndef rocks_h
#define rocks_h


#define BIG_ROCK_SPIN 2
#define MEDIUM_ROCK_SPIN 5
#define SMALL_ROCK_SPIN 10

#include "flyingObject.h"
#include "uiDraw.h"


class Rock : public FlyingObject
{
    
public:
    Rock();
    
    int getRockId();
    void setRockId(int rockId);
    
    virtual void kill();
    virtual void draw();
    virtual void hit();
    int getRadius();
    void setRadius(int);
    
private:
    int rockId;
    int radius;
    
};



/******************************************************************
 * BIG ROCK
 *  Large asteroid
 ******************************************************************/
class BigRock : public Rock
{
    
public:
    BigRock();
    virtual void draw();
    virtual void hit();
    int hits;
    
private:
    int angle;
    int rotation;
};

/******************************************************************
 * MEDIUM ROCK
 *  Medium asteroid
 ******************************************************************/
class MediumRock : public Rock
{
    
public:
    MediumRock(Point, int);
    virtual void draw();
    virtual void hit();
    
private:
    int angle;
    int rotation;
};

/******************************************************************
 * Small ROCK
 *  Small asteroid
 ******************************************************************/
class SmallRock : public Rock
{
public:
    SmallRock(Point, int);
    virtual void draw();
    virtual void hit();
    
    
private:
    int rotation;
   
};

/******************************************************************
 * ULTRA SHIP
 *  A ship that has 80 lives and will destroy you
 ******************************************************************/
class UltraShip : public Rock
{
    
public:
    UltraShip();
    virtual void draw();
    virtual void hit();
    
private:
    int angle;
    int hits;
};


#endif /* rocks_h */

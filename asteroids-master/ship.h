#ifndef ship_h
#define ship_h


#include "uiInteract.h"
#include "uiDraw.h"
#include "flyingObject.h"


#define ROTATE_AMOUNT 6
#define SHIP_SPEED 0.1
#define SHIP_MOVE_AMOUNT 3


// Put your Ship class here
class Ship : public FlyingObject
{
    
public:
    Ship();
    
    float getAngle() const { return angle; }
    Point getPoint() const { return point; }
    
    void draw();
    void kill();
    
    void moveLeft();
    void moveRight();
    void applyThrustBottom();
    bool thrust;
    
private:
    float angle;
    int bottom;
    
    
    
};

#endif /* ship_h */

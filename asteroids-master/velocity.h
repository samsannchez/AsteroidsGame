#ifndef velocity_h
#define velocity_h


class Velocity
{
public:
    Velocity();
    Velocity(float dx, float dy);
    
    // mutators
    float getDx() const;
    float getDy() const;
    void setDx(float);
    void setDy(float);
    
private:
    float dx;
    float dy;
    
};

#endif /* velocity_h */


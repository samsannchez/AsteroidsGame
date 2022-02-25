/*********************************************************************
 * File: game.h
 * Description: Defines the game class for Asteroids
 *
 *********************************************************************/

#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
#include "point.h"
#include "uiDraw.h"
#include "uiInteract.h"
#include "bullet.h"
#include "ship.h"
#include "rocks.h"

/*************************************************
 * GAME
 *   this is the main part of the game. It helps to
 *   keep the game going
 *************************************************/
class Game
{
    
public:
    Game();
    Game(Point topLeft, Point bottomRight);
    void advance();
    void advanceShip();
    void handleInput(const Interface &ui);
    void draw(Interface something);
    
private:
    Point topLeft;
    Point bottomRight;
    int score;
    int level;
    std::vector<Bullet*> bullets;
    Ship * ship;
    std::vector<Rock*> rocks;
    
/*************************************************
* Private methods to help with the game logic.
*************************************************/
    bool isOnScreen(const Point & point);
    void advanceBullets();
    void advanceRocks();
    void handleCollisions();
    void cleanUpZombies();
    void createBigRock();
    void createMediumRock(Point, int);
    void createSmallRock(Point, int);
    void createUltraShip();
    float getClosestDistance(const FlyingObject &obj1, const FlyingObject &obj2) const;
    
    
};

#endif /* GAME_H */

####################################################################
# Program:
#     Project 13, Asteroids
#     Brother Macbeth, CS165
# Author:
#     Mauricio Kiyama
# Summary:
#     The game asteroids is composed of a ship that shoot and tries
#     to destroy asteroids that are appearing in the screen
# Above and Beyond
#     1-Color: I added color to the game where the ship is yellow,
#     the fire when thrust is on is red, the rocks are brown, the
#     bullets are white and the death star is a gradient red as the
#     lives go down
#     2-Score Board: each time the ship hits a rock it gets one point
#     When the score reaches 40 and all rocks were killed, goes to
#     level 2.
#     3-Level 2: Level 2 is composed of 4 death stars with diameter 40
#     that have 50 lives each.
#     4-Press "k": If you press the "k" button on your keyboard, you
#     will jump to level 2.
#
####################################################################


LFLAGS = -lglut -lGLU -lGL

####################################################################
# Build the main game
####################################################################
a.out: driver.o game.o uiInteract.o uiDraw.o point.o velocity.o flyingObject.o ship.o bullet.o rocks.o
	g++ driver.o game.o uiInteract.o uiDraw.o point.o velocity.o flyingObject.o ship.o bullet.o rocks.o $(LFLAGS)

###############################################################
# Individual files
#    uiDraw.o       Draw polygons on the screen and do all OpenGL graphics
#    uiInteract.o   Handles input events
#    point.o        The position on the screen
#    game.o         Handles the game interaction
#    velocity.o     Velocity (speed and direction)
#    flyingObject.o Base class for all flying objects
#    ship.o         The player's ship
#    bullet.o       The bullets fired from the ship
#    rocks.o        Contains all of the Rock classes
###############################################################
uiDraw.o: uiDraw.cpp uiDraw.h
	g++ -c uiDraw.cpp

uiInteract.o: uiInteract.cpp uiInteract.h
	g++ -c uiInteract.cpp

point.o: point.cpp point.h
	g++ -c point.cpp

driver.o: driver.cpp game.h
	g++ -c driver.cpp

game.o: game.cpp game.h uiDraw.h uiInteract.h point.h velocity.h flyingObject.h bullet.h rocks.h ship.h
	g++ -c game.cpp

velocity.o: velocity.cpp velocity.h point.h
	g++ -c velocity.cpp

flyingObject.o: flyingObject.cpp flyingObject.h point.h velocity.h uiDraw.h
	g++ -c flyingObject.cpp

ship.o: ship.cpp ship.h flyingObject.h point.h velocity.h uiDraw.h
	g++ -c ship.cpp

bullet.o: bullet.cpp bullet.h flyingObject.h point.h velocity.h uiDraw.h
	g++ -c bullet.cpp

rocks.o: rocks.cpp rocks.h flyingObject.h point.h velocity.h uiDraw.h
	g++ -c rocks.cpp


###############################################################
# General rules
###############################################################
clean:
	rm a.out *.o

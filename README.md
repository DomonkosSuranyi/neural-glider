# neural-glider
A small neural-net game only for learning purposes.

The game
--------
There are gliders (>). The glider's favourite food is the apple (@). So they should learn how to collect as many delicious apple as possible. But when two glider crashes they lose a collected apple.

Behind the scene
----------------
The game realizes a genetic evolution of gliders.
At the beginning of a generation the gliders and the apples are placed on a random position of the area.
Each glider has a neural-net based AI.
The inputs of the ANN:
- all the other glider's position and their direction
- the glider's own position and direction
- all the apple's position

The game is happening on ticks. The gliders can do the following things at one tick (the outputs of the ANN):
- step one forward
- turn left 90 deg
- turn right 90 deg

The following events can be happen at tick:
- a glider reaches an apple --> the glider earn one point
- two glider crashes        --> both gliders lose one point

The generation ends when there are no more apples on the area.

The fitness value of the glider is represented by the number of collected apples

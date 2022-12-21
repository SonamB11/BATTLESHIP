# BATTLESHIP
A 2 player battleship game that stores and updates the grid for both players, showing the respective self and opponent grids to both players.
The object of Battleship is to try and sink all the other player's before they sink all your ships. 
All the other player's ships are somewhere on his/her board. You try and hit them by calling out the coordinates of one of the squares on the board.
The other player also tries to hit your ships by callingout coordinates.
Neither you nor the other player can see the other's board so you must try to guess where they are.
##Starting a New Game
Each player places the 5 ships somewhere on their board.
The ships can only be placed vertically orhorizontally.
Diagonal placement is not allowed. Ships cannot hang off the board, nor can they be placed one over another.
Once the guessing begins, the players may not move the ships.
The 5 ships are: Aircraft carrier (occupies 5 spaces), Battleship (4 spaces), Destroyer (3 spaces), Corvette(2 spaces) and Frigate (1 space)
##Playing the Game
Player's take turns guessing by calling out the coordinates. The opponent responds with "hit" or "miss" as appropriate. Both players should mark their board with pegs: H for hit, * for miss.
For example, if you call out F6 and your opponent does not have any ship located at F6, your opponent will respond with "miss".
You record the miss F6 by placing a *on the lower part of your board at F6.
When all the squares that one of your ships occupies have been hit, the ship will be sunk.
You should announce "hit and sunk". In the physical game, a red peg is placed on the top edge of the vertical board to indicate a sunk ship.
As soon as all of one player's ships have been sunk, the game ends.

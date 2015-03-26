This project has the game LedsHunt.
LedsHunt is a game made of leds and an arduino board.
The game is done by a board of leds 10x10, and each cell have three posibles
states: Green, for representing our player; Red, for representing our enemies, and Yellow for representing the floor.

Then the materials will be:
-An arduino board(I'm using the mega 2560 r3)
-100 Green leds, 100 Red leds and 100 Yellow leds.(One for each cell).
-4 Decoders 16:4 for select one led to be turn on at a time, between the 300 leds. (There will only be one led on, at a time but it will change to the others so quickly that we will percive all selected turn on at a time).
-4 bottons for controling the position of the player led.

The game rules:
You control your player(Green Leds), using the bottons.
Your enemies(Red Leds) follows you and try to catch you. If they arrive the cell where your player is you lose.
You can only walk over the floor cells(Yellow Led).

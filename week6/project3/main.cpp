/*********************************************************************
** Program name: main.cpp
** Author: James G Wilson (wilsjame)
** Date: 2/18/2017
** Description: Project 3 CS 162
** This program plays a fantasy battle game using the Game
** class.
**
** It should be used to test the Game, Creature, and Creature 
** child classes.
**
** Use the accompanying Makefile to create an executable named main.
** Run it and have fun!
*********************************************************************/
#include "Game.hpp"
#include <ctime> //random number seeding
#include <cstdlib> //random number seeding
#include <iostream>

int main(){

	//seed random number generator
	unsigned seed;
	seed = time(0);
	srand(seed);
	
	//create a game class object
	Game newGame;
	std::cout << "\nGame over\n";

	return 0;
}

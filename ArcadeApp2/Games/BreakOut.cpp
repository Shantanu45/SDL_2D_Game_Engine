#include "BreakOut.h"

#include <iostream>

/*
 *	Paddle
 *		- Can move side to side (by the user)
 *		- Stops at the edge of the screen
 *		- Width and Height
 *		- Bounces the ball
 *			-- Bounces the ball differently based on the position that was hit on the paddle
 *
 *	Ball
 *		- Bounces off of the walls and the paddle
 *		- Width and height
 *		- velocity, position
 *
 *	Blocks
 *		- Part of the level
 *		- Has HP - One hit by the ball is -1 HP
 *		- Color and position, Width and Height
 *		- Bounces the ball
 *
 *	Level
 *		- Container that holds all of the blocks
 *		- Should be able to load a level from the levels.txt file
 *
 *	Game
 *		- Contains all of the objects (Paddle, Ball, Levels)
 *		- Player which has 3 levels
 *		- States - Serve the ball, In Game, Game Over.
 *		- Reset the game.
 */

void BreakOut::Init(GameController& controller)
{
	std::cout << "Breakout Game Init()" << std::endl;
}

void BreakOut::Update(uint32_t dt)
{
	std::cout << "Breakout Game Update()" << std::endl;
}

void BreakOut::Draw(Screen& screen)
{
	std::cout << "Breakout Game Draw()" << std::endl;
}

std::string BreakOut::GetName() const
{
	return "Break Out";
}

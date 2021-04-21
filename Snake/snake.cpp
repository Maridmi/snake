#include <iostream>
#include <vector>
#include "snake.h"
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 77
#define KEY_RIGHT 75

Game::Game(std::string s) 
{
	_s = s;
}

void Game::generateField()
{
	int x = 13;
	int y = 14;
	for (int i = 0; i < x; i++)
	{
		for (int k = 0; k < y; k++)
		{
			if (i == 0 && k != y - 1 || i == x - 1 && k != y - 1 || k == 0 || k == y - 2)
				_s += "X ";
			else if (k == y - 1)
				_s += '\n';
			else
				_s += "  ";
		}
	}
	std::cout << _s;
}

void Game::setMeal()
{

}

//void Game::generateSnake()
//{
//
//}

//
//void Game::makeStep() //unshift, remove last cell
//{
//
//}

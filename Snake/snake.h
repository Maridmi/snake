#include <iostream>
#include <vector>

class Game
{
public:
	Game(std::string s);
private:
	std::string _s;
public:
	void generateField();
	void setMeal();
	void generateSnake();
	uint32_t getNextStep(char direction);
};

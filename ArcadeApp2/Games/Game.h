#pragma once

#include <string>
#include <cstdint>

class GameController;
class Screen;

class Game
{
public:
	virtual ~Game() {};
	virtual void Init(GameController& controller) = 0;
	virtual void Update(uint32_t dt) = 0;
	virtual  void Draw(Screen& screen) = 0;
	virtual std::string GetName() const = 0;
};
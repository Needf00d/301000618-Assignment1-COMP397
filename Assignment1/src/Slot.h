#pragma once
#ifndef __SLOT__
#define __SLOT__

#include "DisplayObject.h"
#include <SDL_hints.h>
#include "Label.h"
/*
Author:seoyoung
*/
class Slot : public DisplayObject
{
public:
	Slot(std::string imagePath = "../Assets/textures/Slot.png",
		std::string buttonName = "Jackpot",
		GameObjectType type = BACKGROUND,
		glm::vec2 position = glm::vec2(400.0f, 300.0f), bool isCentered = true);

	virtual ~Slot();

	void draw() override;
	void update() override;
	void clean() override;
	int getBet();
	int getMoney();
	void placeABet(int bet);

private:

	Uint8 m_alpha;
	std::string m_name;
	bool m_isCentered;
	glm::vec2 m_mousePosition;
	int m_money = 1000;
	int m_bet = 10;
	std::string m_message = "";
	std::string m_defaultMessage = "Your money: " + m_money;
};

#endif 
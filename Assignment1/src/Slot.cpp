#include "Slot.h"
#include "Game.h"
/*
Author:seoyoung
*/
Slot::Slot()
{
	TheTextureManager::Instance()->load("../Assets/textures/slot.png", "slot",
		TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("slot");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(55.0f, 150.0f));
	setType(SLOT);


}
	
Slot::~Slot()
{

}

void Slot::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("slot", xComponent, yComponent, TheGame::Instance()->getRenderer(), 0, 255, false);

}

void Slot::update()
{
}

void Slot::clean()
{

}

int Slot::getBet()
{
	return m_bet;
}

int Slot::getMoney()
{
	return m_money;
}

void Slot::placeABet(int bet)
{
	m_bet += bet;
}

std::string Slot::getMessage()
{
	return m_message;
}


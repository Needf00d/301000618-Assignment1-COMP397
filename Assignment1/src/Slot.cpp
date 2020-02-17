#include "Slot.h"
#include "Game.h"
/*
Author:seoyoung
*/
Slot::Slot(std::string imagePath, std::string buttonName, GameObjectType type, glm::vec2 position, bool isCentered) : m_name(buttonName), m_isCentered(isCentered), m_alpha(255)
{
	TheTextureManager::Instance()->load(imagePath,
		m_name, TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize(m_name);
	setWidth(size.x);
	setHeight(size.y);
	setPosition(position);
	setType(type);


	
}
	


Slot::~Slot()
{
}

void Slot::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw(m_name, xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, m_alpha, true);

}

void Slot::update()
{
}

void Slot::clean()
{

}



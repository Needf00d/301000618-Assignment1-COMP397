#include "Slotimage.h"
#include "Game.h"

Slotimage::Slotimage()
{

	TheTextureManager::Instance()->load("../Assets/textures/cherries.png", "fruit",
		TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/cherries.png", "fruit",
		TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/cherries.png", "fruit",
		TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/cherries.png", "fruit",
		TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/cherries.png", "fruit",
		TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/cherries.png", "fruit",
		TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/cherries.png", "fruit",
		TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/cherries.png", "fruit",
		TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("fruit");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(55.0f, 150.0f));
	setType(SLOT);
}

Slotimage::~Slotimage()
{
}

void Slotimage::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("fruit", xComponent, yComponent, TheGame::Instance()->getRenderer(), 0, 255, false);
}

void Slotimage::update()
{
}

void Slotimage::clean()
{
}

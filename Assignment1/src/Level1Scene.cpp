#include "Level1Scene.h"
#include "Game.h"
#include <iostream>

Level1Scene::Level1Scene()
{
	start();
}

Level1Scene::~Level1Scene()
{
}

void Level1Scene::draw()
{
	m_pSlot->draw();
	m_pBet->draw();
	m_pSpin->draw();

}

void Level1Scene::update()
{
	m_pBet->setMousePosition(m_mousePosition);
	m_pBet->ButtonClick();
	m_pSpin->setMousePosition(m_mousePosition);
	m_pSpin->ButtonClick();
}

void Level1Scene::clean()
{
}

void Level1Scene::handleEvents()
{

	int wheel = 0;

	SDL_Event event;
	if (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			TheGame::Instance()->quit();
			break;
		case SDL_MOUSEMOTION:
			m_mousePosition.x = event.motion.x;
			m_mousePosition.y = event.motion.y;
			break;

		case SDL_MOUSEBUTTONDOWN:
			switch (event.button.button)
			{
			case SDL_BUTTON_LEFT:
				m_pSpin->setMouseButtonClicked(true);
				m_pBet->setMouseButtonClicked(true);
				break;
			}

			break;
		case SDL_MOUSEBUTTONUP:
			switch (event.button.button)
			{
			case SDL_BUTTON_LEFT:
				m_pSpin->setMouseButtonClicked(false);
				m_pBet->setMouseButtonClicked(false);
				break;
			}
			break;
		}
	}
		
}

void Level1Scene::start()
{
\
	// allocates memory on the heap for this game object
	m_pSlot = new Slot();
	m_pSlot->setParent(this);
	addChild(m_pSlot);

	m_pSpin = new Spin;
	m_pSpin->setParent(this);
	addChild(m_pSpin);
	m_pSpin->setMouseButtonClicked(false);

	m_pBet = new Bet;
	m_pBet->setParent(this);
	addChild(m_pBet);
	m_pBet->setMouseButtonClicked(false);
}

glm::vec2 Level1Scene::getMousePosition()
{
	return glm::vec2();
}

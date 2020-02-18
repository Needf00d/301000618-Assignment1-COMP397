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
	m_pBetLabel->draw();
	m_pMoneyLabel->draw();
	m_pSlotlabel->draw();
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
				if (m_pSpin->getMouseOver()) 
				{

				}
				m_pBet->setMouseButtonClicked(true);
				if (m_pBet->getMouseOver())
				{

					m_pSlot->placeABet(10);
					m_pBetLabel->setText("Bet: " + std::to_string(m_pSlot->getBet()));
				}
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

	SDL_Color blue = { 0, 0, 255, 255 };


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

	m_pMoneyLabel = new Label("Money: " + std::to_string(m_pSlot->getMoney()), "Consolas", 30, blue, glm::vec2(400.0f, 500.0f));
	m_pMoneyLabel->setParent(this);
	addChild(m_pMoneyLabel);

	m_pBetLabel = new Label("Bet: " + std::to_string(m_pSlot->getBet()), "Consolas", 30, blue, glm::vec2(400.0f, 550.0f));
	m_pBetLabel->setParent(this);
	addChild(m_pBetLabel);

	m_pSlotlabel = new Label("Slot Machine!" , "Consolas", 80, blue, glm::vec2(400.0f, 100.0f));
	m_pSlotlabel->setParent(this);
	addChild(m_pSlotlabel);
	
}

glm::vec2 Level1Scene::getMousePosition()
{
	return glm::vec2();
}

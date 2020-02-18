#pragma once
#ifndef __LEVEL_1_SCENE__
#define __LEVEL_1_SCENE__

#include "Scene.h"
#include "Slot.h"
#include "bet.h"
#include "Spin.h"
#include "Label.h"
#include "Slotimage.h"

class Level1Scene : public Scene
{
public:
	Level1Scene();
	~Level1Scene();
	
	void draw() override;
	void update() override;
	void clean() override;
	void handleEvents() override;
	void start() override;

	// getters
	glm::vec2 getMousePosition();

private:

	glm::vec2 m_mousePosition;

	// game objects
	Bet* m_pBet;
	Slot* m_pSlot;
	Spin* m_pSpin;
	Slotimage* m_pSlotimage;

	Label* m_pMoneyLabel;
	Label* m_pBetLabel;
	Label* m_pSlotlabel;

};

#endif /* defined (__LEVEL_1_SCENE__) */

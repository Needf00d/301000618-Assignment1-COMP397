#pragma once
#ifndef __SLOT__
#define __SLOT__

#include "DisplayObject.h"
#include <SDL_hints.h>
#include "Label.h"
#include "Slotimage.h"


class Slot : public DisplayObject
{
public:
	Slot();
   ~Slot();

	void draw() override;
	void update() override;
	void clean() override;
	int getBet();
	int getMoney();
	void placeABet(int bet);
	std::string getMessage();

private:

	Slotimage* top[3];
	Slotimage* middle[3];
	Slotimage* bottom[3];
	int m_money = 100;
	int m_bet = 0;
	std::string m_message = "";
	std::string m_defaultMessage = "Your money: " + m_money;


};

#endif 
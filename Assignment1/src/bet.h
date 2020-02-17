#pragma once
#ifndef __BET__
#define __BET__

#include "Button.h"
/*
Author:seoyoung
*/
class Bet : public Button
{
public:
	Bet();
	~Bet();
	bool getMouseOver();
	bool ButtonClick() override;
private:
	bool m_isClicked;
};

#endif /* defined (__START_BUTTON__) */#pragma once

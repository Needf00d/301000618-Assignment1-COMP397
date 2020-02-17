#pragma once
#ifndef __Spin__
#define __Spin__

#include "Button.h"
/*
Author:seoyoung
*/
class Spin : public Button
{
public:
	Spin();
	~Spin();

	bool getMouseOver();
	bool ButtonClick() override;
private:
	bool m_isClicked;
};

#endif /* defined (__START_BUTTON__) */#pragma once

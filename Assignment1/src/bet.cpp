#include "Bet.h"
#include "Game.h"
/*
Author:seoyoung
*/
Bet::Bet()
// call super constructor
	:Button(
		"../Assets/textures/bet.png",
		"bet",
		START_BUTTON, glm::vec2(350.0f, 410.0f)), m_isClicked(false)
{

}

Bet::~Bet()
{
}
bool Bet::getMouseOver()
{
	return m_mouseOver();
}
//click function
bool Bet::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			std::cout << "Bet" << std::endl;
			m_isClicked = true;
		}
		return true;
	}
	else
	{
		m_isClicked = false;
	}

	return false;
}



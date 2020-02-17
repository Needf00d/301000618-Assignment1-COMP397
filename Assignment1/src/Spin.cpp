#include "Spin.h"
#include "Game.h"
/*
Author:seoyoung
*/
Spin::Spin()
// call super constructor
	:Button(
		"../Assets/textures/Spin.png",
		"Spin",
		START_BUTTON, glm::vec2(450.0f, 410.0f)), m_isClicked(false)
{

}

Spin::~Spin()
{
}

bool Spin::getMouseOver()
{
	return m_mouseOver();
}

bool Spin::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			std::cout << "Spin" << std::endl;
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
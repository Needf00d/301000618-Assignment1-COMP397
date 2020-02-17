#pragma once
#ifndef __SLOT__
#define __SLOT__

#include "DisplayObject.h"
#include <SDL_hints.h>
/*
Author:seoyoung
*/
class Slot : public DisplayObject
{
public:
	Slot(std::string imagePath = "../Assets/textures/Slot.png",
		std::string buttonName = "Jackpot",
		GameObjectType type = BACKGROUND,
		glm::vec2 position = glm::vec2(400.0f, 300.0f), bool isCentered = true);

	virtual ~Slot();

	void draw() override;
	void update() override;
	void clean() override;
	
private:

	Uint8 m_alpha;
	std::string m_name;
	bool m_isCentered;
	glm::vec2 m_mousePosition;
};

#endif 
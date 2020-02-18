#pragma once
#ifndef __SLOTIMAGE__
#define __SLOTIMAGE__

#include "DisplayObject.h"

class Slotimage : public DisplayObject
{
public:
	Slotimage();
	~Slotimage();
	void draw() override;
	void update() override;
	void clean() override;


private:
	std::string m_id;
	int m_alpha = 255;
	glm::vec2 m_position;
};

#endif
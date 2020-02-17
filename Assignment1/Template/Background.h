#pragma once
#ifndef __BACKGROUND__
#define __BACKGROUND__

#include "DisplayObject.h"

class Background : public DisplayObject
{
public:
	Background();
	~Background();

	void draw() override;

	void update() override;

	void clean() override;

};

#endif /* defined (__START_BUTTON__) */#pragma once

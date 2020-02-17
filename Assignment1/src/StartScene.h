#pragma once
#ifndef __START_SCENE__
#define __START_SCENE__

#include "Scene.h"
#include "Label.h"
#include "StartButton.h"
#include "Background.h"

class StartScene : public Scene
{
public:
	// constructor
	StartScene();
	// destructor
	~StartScene();

	// Inherited via Scene
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;
	virtual void handleEvents() override;
	virtual void start() override;

	glm::vec2 getMousePosition();

private:

	glm::vec2 m_mousePosition;

	StartButton* m_pStartButton;


	Background* m_pBackground;
};

#endif /* defined (__START_SCENE__) */
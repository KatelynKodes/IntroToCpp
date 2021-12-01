#pragma once
#include "Entity.h"

class Engine
{
public:
	Engine();
	void run();
	bool getApplicationShouldClose() { return m_applicationShouldClose; }
	static void setApplicationShouldClose(bool value) { m_applicationShouldClose = value; }

private:
	void start();
	void update();
	void end();
	void draw();

private:
	static bool m_applicationShouldClose;
	Entity m_entities[50];
	Entity m_currFighter1;
	Entity m_currFighter2;

	int m_currFighterIndex;
	int m_entityCount;

};
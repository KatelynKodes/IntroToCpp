#pragma once
#include "Entity.h"
#include "Scene.h"

class Engine
{
public:
	Engine();
	~Engine();
	void run();
	bool getApplicationShouldClose() { return m_applicationShouldClose; }
	static void setApplicationShouldClose(bool value) { m_applicationShouldClose = value; }

	static void addScene(Scene* scene);
	static Scene* getCurrentScene();
	static void setCurrentScene(int index);

private:
	void start();
	void update();
	void end();
	void draw();

private:
	static bool m_applicationShouldClose;
	static Scene** m_Scenes;
	static int m_sceneCount;

};
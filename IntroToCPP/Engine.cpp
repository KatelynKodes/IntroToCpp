#include "Engine.h"
#include "Entity.h"
#include <iostream>

bool Engine::m_applicationShouldClose = false;

Engine::Engine()
{
	m_applicationShouldClose = false;
}

Engine::~Engine()
{
	delete[] m_Scenes;
}

void Engine::run()
{
	start();

	while (!getApplicationShouldClose())
	{
		draw();
		update();
	}

	end();
}

void Engine::addScene(Scene* scene)
{
}

Scene* Engine::getCurrentScene()
{
	return nullptr;
}

void Engine::setCurrentScene(int index)
{
}

void Engine::start()
{
	Entity wompus = Entity('W', 3, 1, 1);
	Entity LittleSkele = Entity('S', 2, 1, 0);
	Entity UnclePhil = Entity('U', 1, 2, 0);

}

void Engine::update()
{
	//Check death
	if (m_currFighter1 -> getHealth() <= 0 && m_currFighterIndex < m_entityCount)
	{
		m_currFighter1 = &m_entities[m_currFighterIndex];
		m_currFighterIndex++;
	}
	if (m_currFighter2->getHealth() <= 0 && m_currFighterIndex < m_entityCount)
	{
		m_currFighter2 = &m_entities[m_currFighterIndex];
		m_currFighterIndex++;
	}

	if ((m_currFighter1->getHealth() <= 0 || m_currFighter2->getHealth() <= 0) && m_currFighterIndex >= m_entityCount)
	{
		m_applicationShouldClose = true;
		return;
	}

	m_currFighter1 -> attack(m_currFighter2);
	m_currFighter1 -> attack(m_currFighter1);
}

void Engine::end()
{

}

void Engine::draw()
{
	m_currFighter1->printStats();
	m_currFighter2->printStats();
	system("pause");
	system("cls");
}
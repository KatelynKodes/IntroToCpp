#include "Engine.h"
#include "Entity.h"

bool Engine::m_applicationShouldClose = false;

Engine::Engine()
{
	m_applicationShouldClose = false;
	m_entityCount = 0;
	m_currFighterIndex = 0;
}

void Engine::run()
{
	start();

	while (!getApplicationShouldClose())
	{
		update();
		draw();
	}

	end();
}

void Engine::start()
{
	Entity wompus = Entity('W', 2000, 57000, 8000);
	Entity LittleSkele = Entity('S', 30000, 25000, 13000);
	Entity UnclePhil = Entity('U', 1, 0, 69000);

	m_entities[0] = wompus;
	m_entities[1] = LittleSkele;
	m_entities[2] = UnclePhil;
	m_entityCount = 3;

	m_currFighter1 = &m_entities[0];
	m_currFighter2 = &m_entities[1];
	m_currFighterIndex = 2;

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

}
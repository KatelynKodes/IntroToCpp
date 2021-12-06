#include "Entity.h"
#include <iostream>


Entity::Entity() : Actor()
{
	m_health = 0;
	m_attackPower = 0;
	m_defensePower = 0;
}

Entity::Entity(const char* name, float health, float attackPwr, float defensePwr) : Actor(name)
{
	m_health = health;
	m_attackPower = attackPwr;
	m_defensePower = defensePwr;
}

float Entity::takeDamage(float dmgAmount)
{
	float dmgTaken = dmgAmount - getDefPower();

	if (dmgTaken <= 0)
	{
		dmgTaken = 0;
	}

	m_health -= dmgTaken;

	if (m_health <= 0)
	{
		m_health = 0;
	}

	return dmgTaken;
}

float Entity::attack(Entity* entity)
{
	return entity -> takeDamage(getAttkPower());
}

void Entity::printStats()
{
	std::cout << getName() << std::endl;
	std::cout << "Health: " << getHealth() << std::endl;
	std::cout << "Attack Power: " << getAttkPower() << std::endl;
	std::cout << "Defense Power: " << getDefPower() << std::endl;
}

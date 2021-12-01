#include "Entity.h"


Entity::Entity()
{
	m_icon = '\0';
	m_health = 0;
	m_attackPower = 0;
	m_defensePower = 0;
}

Entity::Entity(char icon, float health, float attackPwr, float defensePwr)
{
	m_icon = icon;
	m_health = health;
	m_attackPower = attackPwr;
	m_defensePower = defensePwr;
}

float Entity::TakeDamage(float dmgAmount)
{
	float dmgTaken = dmgAmount - GetDefPower();

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
	return entity -> TakeDamage(GetAttkPower());
}

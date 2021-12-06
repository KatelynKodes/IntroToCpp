#pragma once
#include "Actor.h"

class Entity : public Actor
{
public:
    Entity();
    Entity(const char* name, float health, float attackPwr, float defensePwr) : Actor(name) {};
    float getHealth() { return m_health; }
    float getAttkPower() { return m_attackPower; }
    float getDefPower() { return m_defensePower; }

    float takeDamage(float dmgAmount);
    float attack(Entity* entity);

    void printStats();

private:
    float m_health;
    float m_attackPower;
    float m_defensePower;
};
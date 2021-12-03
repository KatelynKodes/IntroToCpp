#pragma once


class Entity
{
public:
    Entity();
    Entity(char icon, float health, float attackPwr, float defensePwr);
    char getIcon() { return m_icon; }
    float getHealth() { return m_health; }
    float getAttkPower() { return m_attackPower; }
    float getDefPower() { return m_defensePower; }

    float takeDamage(float dmgAmount);
    float attack(Entity* entity);

    void printStats();

private:
    char m_icon;
    float m_health;
    float m_attackPower;
    float m_defensePower;
};
#pragma once


class Entity
{
public:
    Entity();
    Entity(char icon, float health, float attackPwr, float defensePwr);
    char getIcon() { return m_icon; }
    float getHealth() { return m_health; }
    float GetAttkPower() { return m_attackPower; }
    float GetDefPower() { return m_defensePower; }

    float TakeDamage(float dmgAmount);
    float attack(Entity* entity);

private:
    char m_icon;
    float m_health;
    float m_attackPower;
    float m_defensePower;
};
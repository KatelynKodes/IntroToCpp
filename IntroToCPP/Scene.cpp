#include "Scene.h"
#include "Actor.h"

Scene::Scene()
{
	m_actorCount = 0;
	m_actors = new Actor * [m_actorCount];
}

Scene::~Scene()
{
	m_actorCount = 0;
	delete[] m_actors;
}

void Scene::addActor(Actor* actor)
{
	for (int i = 0; i < m_actorCount; i++)
	{

	}
}

bool Scene::removeActor(Actor* actor)
{
	return false;
}

void Scene::update()
{
}

void Scene::draw()
{
}

void Scene::end()
{
}

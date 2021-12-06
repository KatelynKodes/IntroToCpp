#include "Scene.h"
#include "Actor.h"

Scene::Scene()
{
	m_actorCount = 0;
}

Scene::~Scene()
{
	m_actorCount = 0;
}

void Scene::addActor(Actor* actor)
{
	m_actors.addActor(actor);
}

bool Scene::removeActor(Actor* actor)
{
	return m_actors.removeActor(actor);
}


/*
	Loops through the actors array to run the update function for each actor
*/
void Scene::update()
{
	for (int i = 0; i < m_actors.getLength(); i++)
	{
		if (!m_actors.getActor(i).getStarted())
			m_actors.getActor(i).start();

		m_actors.getActor(i).update;
	}
}

/*
	Loops through the actors array to run the draw function for each actor
*/
void Scene::draw()
{
	for (int i = 0; i < m_actors.getLength(); i++)
	{
		m_actors.getActor(i).draw();
	}
}

/*
	Loops through the actors array to run the end function for each actor
*/
void Scene::end()
{
	for (int i = 0; i < m_actors.getLength(); i++)
	{
		m_actors.getActor(i).end();
	}
}

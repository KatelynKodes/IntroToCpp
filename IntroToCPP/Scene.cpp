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

/*
	Adds an actor pointer to the actors array.
*/
void Scene::addActor(Actor* actor)
{
	int newLength = m_actorCount + 1;
	Actor** NewActors = new Actor * [newLength];

	//Loops to the current number of the actorCount variable
	for (int i = 0; i < m_actorCount; i++)
	{
		//Sets the value of NewActors[i] to the value of m_actors[i]
		NewActors[i] = m_actors[i];
	}

	//Sets the last variable of the new actors array to the actor being passed in
	NewActors[newLength - 1] = actor;

	//Deletes the values of the actors array 
	delete[] m_actors;

	//Sets the actors array to be the newActors array and set the actor count to the new length
	m_actors = NewActors;
	m_actorCount = newLength;
}

/*
	Removes an actor pointer from an actor array
*/
bool Scene::removeActor(Actor* actor)
{
	bool actorRemoved = false;
	int newLength = m_actorCount - 1;

	Actor** newActors = new Actor * [newLength];

	int j = 0;

	//Loops as long as i is less than newLength
	for (int i = 0; i < newLength; i++)
	{
		//If m_actors[i] value is not equal to the actor the method is trying to remove
		if (m_actors[i] != actor)
		{
			//newActors[j] is set to the value of m_actors[i]
			newActors[j] = m_actors[i];

			//j is increased
			j++;
		}
		//Else..
		else
		{
			//actorRemoved is set to true
			actorRemoved = true;
		}
	}

	//If the actor was removed...
	if (actorRemoved)
	{
		//...Delete the old actors array values
		delete[] m_actors;

		//Sets the actors array to be the newActors array and set the actor count to the new length
		m_actors = newActors;
		m_actorCount = newLength;
	}

	return actorRemoved;
}

/*
	Loops through the actors array to run the update function for each actor
*/
void Scene::update()
{
	for (int i = 0; i < m_actorCount; i++)
	{
		if (!m_actors[i]->getStarted())
			m_actors[i]->start();

		m_actors[i]->update();
	}
}

/*
	Loops through the actors array to run the draw function for each actor
*/
void Scene::draw()
{
	for (int i = 0; i < m_actorCount; i++)
	{
		m_actors[i]->draw();
	}
}

/*
	Loops through the actors array to run the end function for each actor
*/
void Scene::end()
{
	if (int i = 0; i < m_actorCount i++)
	{
		m_actors[i]->end();
	}
}

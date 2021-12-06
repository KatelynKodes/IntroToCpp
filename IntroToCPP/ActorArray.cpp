#include "ActorArray.h"

void ActorArray :: addActor(Actor* actor)
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

bool ActorArray::removeActor(Actor* actor)
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

bool ActorArray::removeActor(int index)
{
	return false;
}

Actor ActorArray::getActor(int index)
{
	if (index < 0 || index > m_actorCount)
	{
		return nullptr;
	}

	return m_actors[index];
}

int ActorArray::getLength()
{
	return 0;
}

bool ActorArray::contains(Actor* actor)
{
	for (int i = 0; i < m_actorCount; i++)
	{
		if (m_actors[i] == actor)
		{
			return true;
		}
	}
	return false;
}

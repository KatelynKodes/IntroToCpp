#pragma once

class Actor;

class ActorArray
{
public:
	void addActor(Actor* actor);
	bool removeActor(Actor* actor);
	bool removeActor(int index);
	Actor getActor(int index);

	int getLength();
	bool contains(Actor* actor);
private:
	Actor** m_actors;
};


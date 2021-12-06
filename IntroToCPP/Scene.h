#pragma once
#include "Actor.h"
#include "ActorArray.h"

class Scene
{
public:
	Scene();
	~Scene();
	bool getStarted() { return m_started; }
	void addActor(Actor* actor);
	bool removeActor(Actor* actor);

	virtual void start() { m_started = true; }
	virtual void update();
	virtual void draw();
	virtual void end();

private:
	ActorArray m_actors;
	bool m_started;
	int m_actorCount;
};

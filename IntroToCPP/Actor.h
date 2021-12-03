#pragma once

class Actor
{
public:
	Actor(char* name) { m_name = name; }

	virtual void start() { m_started = true; }
	virtual void update() {};
	virtual void draw() {};
	virtual void end() {};

private:
	char* m_name;
	bool m_started;
};

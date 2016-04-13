#pragma once
#include "GameState.h"
#include "SDLGameObject.h"
#include <string>
#include <vector>

class PlayState :
	public GameState
{
public:
	PlayState();
	~PlayState();

	void update() override;
	void render() override;
	bool onEnter() override;
	bool onExit() override;


	void addGameObjects();

	std::string getStateID() const override { return m_playStateID; }

private:
	static const std::string m_playStateID;
	std::vector<SDLGameObject*> m_gameObjects;
};


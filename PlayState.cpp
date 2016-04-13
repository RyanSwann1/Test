#include "PlayState.h"
#include "Player.h"
#include "Opponent.h"
#include <iostream>

const std::string PlayState::m_playStateID = "Play";

PlayState::PlayState()
{

}

PlayState::~PlayState()
{
}

void PlayState::update()
{
	//Update all game objects
	for(auto &gameObject : m_gameObjects)
	{ 
		gameObject->update();
	}
}

void PlayState::render()
{
	//Draw all game objects
	for (auto &gameObject : m_gameObjects)
	{
		gameObject->draw();
	}
}

bool PlayState::onEnter()
{
	addGameObjects();
	std::cout << "Entering the play state.\n";
	return true;
}

bool PlayState::onExit()
{
	std::cout << "Exiting the play state.\n";
	return true;
}

void PlayState::addGameObjects()
{
	//Upon entering the play state. Add all neccessary game objects
	m_gameObjects.push_back(new Player());
	m_gameObjects.push_back(new Opponent());
	
	
}

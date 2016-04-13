#pragma once
#include "SDLGameObject.h"
#include "Vector2.h"
#include <SDL.h>
#include <string>
class Player :
	public SDLGameObject
{
public:
	Player();
	~Player();

	void update() override;
	void draw() override;
	void handleEvents() override;
	std::string getTextureID() const override;

private:
	int sizeWidth;
	int sizeHeight;
	Vector2 m_position; //Position of player
	Vector2 m_velocity; //Velocity of player
	static const std::string m_textureID;
};


#include "Player.h"
#include "InputHandler.h"
#include "TextureManager.h"
#include "Game.h"
#include <iostream>

const std::string Player::m_textureID = "Player";

Player::Player()
{
	sizeHeight = 80;
	sizeWidth = 25;

	//Starting position
	m_position.setX(50);
	m_position.setY(200);

	m_velocity.setX(3);
	m_velocity.setY(3);
}


Player::~Player()
{
}

void Player::update()
{
	//If player is within bounds 
	if (m_position.getX() >= 0 && m_position.getX() <= Game::instance()->getPlayingFieldWidth() &&
		m_position.getY() >= 0 && m_position.getY() <= Game::instance()->getPlayingFieldHeight()) {
		//Move onto the event 
		handleEvents();
	}


}

void Player::draw()
{
	TextureManager::instance()->draw(m_position.getX(), m_position.getY(), sizeWidth, sizeHeight, Game::instance()->getRenderer(), m_textureID);
}

void Player::handleEvents()
{
	Vector2 newPos; //New position in which to move

	if (InputHandler::instance()->isKeyDown(SDL_SCANCODE_W))
	{
		newPos.m_y = m_position.m_y - m_velocity.m_y;
		//Check requested movement is within bounds
		if (newPos.m_y >= 0) {
			m_position.m_y -= m_velocity.m_y;
		}
		newPos.m_y = 0; //Reset new Pos
	}

	else if (InputHandler::instance()->isKeyDown(SDL_SCANCODE_S)) 
	{
		newPos.m_y = (m_position.m_y + 80) + m_velocity.m_y;
		if (newPos.m_y <= Game::instance()->getPlayingFieldHeight()) {
			m_position.m_y += m_velocity.m_y;
		}
		newPos.m_x = 0; //Reset newPos;
	}

}

std::string Player::getTextureID() const
{
	return m_textureID;
}

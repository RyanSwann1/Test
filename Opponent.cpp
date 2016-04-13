#include "Opponent.h"
#include "TextureManager.h"
#include "Game.h"

const std::string m_textureID = "Opponent";

Opponent::Opponent()
{
	sizeHeight = 80;
	sizeWidth = 25;

	//Starting position
	m_position.setX(450);
	m_position.setY(200);

	m_velocity.setX(3);
	m_velocity.setY(3);
}


Opponent::~Opponent()
{
}

void Opponent::update()
{
	if (m_position.m_x >= 0 && m_position.m_x <= Game::instance()->getPlayingFieldWidth() &&
		m_position.m_y >= 0 && m_position.m_y <= Game::instance()->getPlayingFieldHeight()) {
		handleMovement();
	}
}

void Opponent::draw()
{
	//02084287520
}

void Opponent::handleEvents()
{
}

void Opponent::handleMovement()
{

}

std::string Opponent::getTextureID() const
{
	return m_textureID;
}

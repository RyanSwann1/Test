#ifndef OPPONENT_H
#define OPPONENT_H

#include "SDLGameObject.h"
#include "Vector2.h"
#include <string>
class Opponent :
	public SDLGameObject
{
public:
	Opponent();
	~Opponent();

	void update() override;
	void draw() override;
	void handleEvents() override;
	void handleMovement();
	std::string getTextureID() const;

private:
	Vector2 m_position;
	Vector2 m_velocity;
	int sizeWidth;
	int sizeHeight;
	static const std::string m_textureID;
};
#endif // !OPPONENT_H

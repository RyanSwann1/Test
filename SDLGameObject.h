#ifndef SDL_GAME_OBJECT_H
#define SDL_GAME_OBJECT_H

#include <string>

class SDLGameObject
{
public:
	SDLGameObject();
	~SDLGameObject();

	virtual void update() = 0;
	virtual void draw() = 0;
	virtual void handleEvents() = 0;
	virtual std::string getTextureID() const = 0;

private:

};
#endif // !SDL_GAME_OBJECT_H

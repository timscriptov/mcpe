#pragma once

#include <string>

#include "AppPlatform_sdl_base.hpp"

#define EM_BOOL bool
#define EM_TRUE true
#define EM_FALSE false

class AppPlatform_sdl : public AppPlatform_sdl_base
{
public:
	AppPlatform_sdl(std::string storageDir, SDL_Window *window);

	void saveScreenshot(const std::string& fileName, int width, int height) override;
	Texture loadTexture(const std::string& path, bool b = false) override;
	
	bool hasFileSystemAccess() override;
	
protected:
	void ensureDirectoryExists(const char* path) override;
};

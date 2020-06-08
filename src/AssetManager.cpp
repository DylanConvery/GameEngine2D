#include "AssetManager.hpp"

AssetManager::AssetManager(EntityManager* manager) : _manager(manager) {}

AssetManager::~AssetManager() {}

//clears our asset manager
void AssetManager::clear() {
    _textures.clear();
}

//inserts a texture into asset manager
void AssetManager::addTexture(std::string textureID, std::string path) {
    _textures.emplace(textureID, TextureManager::loadTexture(path));
}

//returns a point to a texture with matching textureID
SDL_Texture* AssetManager::getTexture(std::string textureID) {
    auto element = _textures.find(textureID);
    if(element == _textures.end()){
            std::cerr << "[ERROR] Texure not found\n";
        return nullptr;
    } else {
        return element->second;
    }
}
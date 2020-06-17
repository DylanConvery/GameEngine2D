#include "Collision.hpp"

//Axis-Aligned Bounding Box or AABB algorithm
bool Collision::checkCollision(const SDL_Rect& rect_a, const SDL_Rect& rect_b) {
    return (rect_a.x < rect_b.x + rect_b.w &&
            rect_a.x + rect_a.w > rect_b.x &&
            rect_a.y < rect_b.y + rect_b.h &&
            rect_a.y + rect_a.h > rect_b.y);
}
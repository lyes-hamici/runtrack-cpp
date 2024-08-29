#include "GameObject.hpp"

// Constructeur par défaut
GameObject::GameObject() : Vector2d() {}

// Constructeur avec paramètres
GameObject::GameObject(double x, double y) : Vector2d(x, y) {}

#pragma once

#include <chrono>

constexpr int FPS = 60;

constexpr float PLAYER_RADIUS = 0.35f;
constexpr float PLAYER_ACCELERATION = 8.0f;
constexpr float PLAYER_DECELERATION = 10.0f;
constexpr float PLAYER_FRICTION = 2.0f;
constexpr float PLAYER_MAX_SPEED = 5.0f;
constexpr float PLAYER_EPISILON_SPEED =
    (PLAYER_DECELERATION + PLAYER_FRICTION) * 1.2f /
    (PLAYER_RADIUS * PLAYER_RADIUS * 3.14) / FPS;
constexpr float PLAYER_INTERACT_DISTANCE = 1.3f;
constexpr float PLAYER_PUTORPICK_DISTANCE = 1.5f;

constexpr int PLAYER_RESPAWN_TIME = 5 * FPS;
constexpr int CONTAINER_RESPAWN_TIME = 5 * FPS;
constexpr int OVERCOOK_TIME = 10 * FPS;
constexpr int GENERAL_COOKING_TIME = 10 * FPS;
constexpr int PLATE_WASHING_TIME = 3 * FPS;
constexpr int PLATE_RETURN_DELAY = 5 * FPS;

constexpr std::chrono::milliseconds FIRST_RESPONSE_TIMEOUT{5000};
constexpr std::chrono::milliseconds NORMAL_RESPONSE_TIMEOUT{20};

constexpr float SCALE = 30;
constexpr float BORDERWIDTHS = 1;

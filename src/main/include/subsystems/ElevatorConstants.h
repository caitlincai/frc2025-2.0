#pragma once

#include <units/length.h>
#include <units/velocity.h>
#include <units/acceleration.h>

namespace ElevatorConstants {

constexpr int leaderMotorID = 0;
constexpr int followerMotorID = 1;

constexpr std::string canBus = "rio"; 

constexpr double gearRatio = 12.0;
// constexpr units::meter_t kDrumRadius = 0.0254_m;  // 1 inch

constexpr units::meter_t minHeight = 0.0_m;
constexpr units::meter_t maxHeight = 1.6_m;

constexpr units::meters_per_second_t maxVelocity = 3.0_mps;
constexpr units::meters_per_second_squared_t maxAcceleration = 6.0_mps_sq;

constexpr double kP = 12.0;
constexpr double kI = 0.0;
constexpr double kD = 0.2;

} 
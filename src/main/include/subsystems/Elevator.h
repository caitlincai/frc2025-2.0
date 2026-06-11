//#pragma once

using namespace ctre::phoenix6;

class Elevator : public frc2::SubsystemBase {
 public:
  Elevator();
  
  void elevateTo(double goalHeight);
  bool atHeight(double goalHeight, double currHeight);
  
  private:
    double _goalHeight;
    double _curHeight;

    ctre::phoenix6::hardware::TalonFX _leader(ElevatorConstants::leaderMotorID, ElevatorConstants::canBus);
    ctre::phoenix6::hardware::TalonFX _follower(ElevatorConstants::followerMotorID, ElevatorConstants::canBus);
};
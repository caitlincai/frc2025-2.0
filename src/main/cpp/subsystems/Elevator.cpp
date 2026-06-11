#include "src/main/include/subsystems/Elevator.h"
#include "src/main/include/subsystems/ElevatorConstants.h"

Elevator::Elevator() {};

void Elevator::elevateTo(double goalHeight) {
  ctre::phoenix6::controls::PositionVoltage request{0_tr}; // "turns" wtv that means
  _leader.SetControl(request.WithPosition(goalHeight).WithSlot(0));

}


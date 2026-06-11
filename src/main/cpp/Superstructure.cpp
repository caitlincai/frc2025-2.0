#include "src/main/include/Superstructure.h"
#include "src/main/include/senders/DoubleSender.h"

Superstructure::Superstructure() {
  DoubleSender _elevatorHeightSender([this](double height) -> void {Superstructure::_superLogic.updateElevatorHeight(height);}, "Elevator Height");
};
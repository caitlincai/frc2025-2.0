#include "src/main/include/SuperLogic.h"
#include "src/main/include/senders/DoubleSender.h"

SuperLogic::SuperLogic() {}

void SuperLogic::updateElevatorHeight(double newHeight) {
    _elevatorHeight = newHeight;
}

void SuperLogic::updateSubsystems(DoubleSender elevatorSender) {
    elevatorSender.sendData(_elevatorHeight);
}
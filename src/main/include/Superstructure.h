#include "src/main/include/subsystems/Elevator.h"
#include "src/main/include/senders/DoubleSender.h"
#include "src/main/include/SuperLogic.h"

class Superstructure {
public:
    Superstructure();
    void Periodic();
    void onEnable();
    void onDisable();
    
    SuperLogic _superLogic;
    Elevator _elevator;

private:
    DoubleSender _elevatorHeightSender;
};


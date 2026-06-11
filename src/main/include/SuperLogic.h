#include "src/main/include/senders/DoubleSender.h"

class SuperLogic  {
    public:
        SuperLogic();
        void updateSubsystems(DoubleSender elevatorSender);
        void updateElevatorHeight(double newHeight);
    private:
        double _elevatorHeight = 0.0;
};
#include <string>
#include "src/main/include/senders/GenericWatcher.h"


class DoubleSender {
public:
    DoubleSender(GenericWatcher<double> watcher, std::string name);
    DoubleSender();
    void sendData(double data);

private:
    std::string _name;
    GenericWatcher<double> _watcher;
};
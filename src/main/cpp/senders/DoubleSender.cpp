#include "src/main/include/senders/DoubleSender.h"
#include "src/main/include/senders/GenericWatcher.h"

DoubleSender::DoubleSender(GenericWatcher<double> watcher, std::string name) : _watcher(watcher), _name(name) {
};

void DoubleSender::sendData(double data) {
    _watcher.receive(data);
};
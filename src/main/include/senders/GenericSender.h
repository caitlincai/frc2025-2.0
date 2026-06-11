#include "GenericWatcher.h";
#include <string>

template <typename T>
class GenericSender {
    public:
        GenericSender(GenericWatcher watcher, std::string name);
        void send(T data);
    private:
        std::string _name;
        GenericWatcher _watcher;
};
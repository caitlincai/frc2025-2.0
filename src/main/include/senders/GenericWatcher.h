
template <typename T>
class GenericWatcher {
    public:
        GenericWatcher();
        template <typename T> T receive(T data) {}
};
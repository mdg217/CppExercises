#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Singleton {
protected:
    Singleton(const T value) : value_(value) {}

    static Singleton<T>* singleton_;

    T value_;

public:
    Singleton(Singleton& other) = delete;

    void operator=(const Singleton&) = delete;

    static Singleton<T>* GetInstance(const T& value);

    void logic() {}

    T getValue() const {
        return value_;
    }
};

template <typename T>
Singleton<T>* Singleton<T>::singleton_ = nullptr;

template <typename T>
Singleton<T>* Singleton<T>::GetInstance(const T& value) {
    if (singleton_ == nullptr) {
        singleton_ = new Singleton(value);
    }
    return singleton_;
}

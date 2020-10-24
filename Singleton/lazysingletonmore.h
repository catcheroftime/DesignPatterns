#ifndef LAZYSINGLETONMORE_H
#define LAZYSINGLETONMORE_H

#include <iostream>
#include <mutex>

class LazySingletonMore
{
private:
    static LazySingletonMore* instance;
    static std::mutex mutex;

private:
    LazySingletonMore() { std::cout << "LazySingletonMore create" << std::endl;}
    ~LazySingletonMore() {}
    LazySingletonMore(const LazySingletonMore&)=delete;
    LazySingletonMore& operator=(const LazySingletonMore&)=delete;
public:
    static LazySingletonMore* getInstance()
    {
        if(instance == nullptr) {
            std::lock_guard<std::mutex> lock(mutex);
            if(instance == nullptr)
                instance = new LazySingletonMore();
        }

        return instance;
    }
};

LazySingletonMore* LazySingletonMore::instance = nullptr;
std::mutex LazySingletonMore::mutex;

#endif // LAZYSINGLETONMORE_H

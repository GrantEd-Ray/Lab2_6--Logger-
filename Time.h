#include <ctime>

class Time
{
private:
    std::time_t now = std::time(nullptr);
public:
    Time(){};
    ~Time(){};
};

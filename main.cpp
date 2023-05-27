#include "Log.h"
#include <string>

int main() {
    Log::SetLogPath("log.txt");
    Log::SetLogLevel(LogLevel::DEBUG);
    Log::Write("Hello, world!");
    Log::Write("1111111");

    std::string message;
    std::cin >> message;

    Log::Write(message);

    return 0;
}

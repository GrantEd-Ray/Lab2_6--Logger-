#include "Log.h"
#include <ctime>

std::ofstream Log::m_out;
LogLevel Log::m_logLevel;
std::time_t Log::now = std::time(nullptr);
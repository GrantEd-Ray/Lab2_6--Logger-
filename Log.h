#pragma once
#include <fstream>
#include <iostream>
#include <ctime>

enum class LogLevel
{
    DEBUG,
    RELEASE
};

class Log
{
private:
    static std::ofstream m_out;
    static LogLevel m_logLevel;
    static std::time_t now;
public:
    Log()
    {
        std::cout << "Constr" << std::endl;
    }

    static void SetLogLevel(LogLevel logLevel)
    {
        m_logLevel = logLevel;
    }

    static void SetLogPath(const std::string& path)
    {
        m_out.open(path);
    }

    // Static method
    static void Write(const std::string& msg)
    {
        if (m_logLevel == LogLevel::DEBUG)
            std::cerr<< std::ctime(&now) << msg << std::endl;
        m_out << msg << std::endl;
        m_out.flush();
    }
    ~Log()
    {
        std::cout << "Destr" << std::endl;
    }
};
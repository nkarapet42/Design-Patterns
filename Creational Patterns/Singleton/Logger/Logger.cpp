#include "Logger.hpp"

Logger* Logger::instance = nullptr;

Logger::Logger() {
    logFile.open("log.txt", std::ios::app);
    if (!logFile)
        std::cerr << "Error opening log file!" << std::endl;
}

Logger* Logger::getInstance() {
    if (!instance)
        instance = new Logger();
    return instance;
}

void Logger::log(const std::string& message) {
    logFile << message << std::endl;
}

Logger::~Logger() {
    if (logFile.is_open())
        logFile.close();
}

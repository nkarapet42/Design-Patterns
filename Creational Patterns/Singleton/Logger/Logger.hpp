#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <iostream>
#include <fstream>
#include <string>

class Logger {
private:
    static Logger* instance;
    std::ofstream logFile;

    Logger();

public:
    static Logger* getInstance();
    void log(const std::string& message);

    ~Logger();
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;
};

#endif

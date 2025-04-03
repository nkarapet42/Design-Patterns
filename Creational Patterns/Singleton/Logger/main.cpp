#include "Logger.hpp"

int main() {
    Logger::getInstance()->log("Application started");
    Logger::getInstance()->log("Performing operations...");
    Logger::getInstance()->log("Application ended");

    std::cout << "Logs written to log.txt" << std::endl;
}
#include "Logger.hpp"

// -------------------------------------- ENGLISH --------------------------------------
// Singleton is a creational pattern that ensures a class has only one instance and provides 
// a global point of access to it. It’s commonly used for managing shared resources or services. 

// Example use case: Game settings or logger class where only one instance is needed 
// throughout the application’s lifecycle.

// -------------------------------------- РУССКИЙ --------------------------------------
// Одиночка — это порождающий паттерн, который гарантирует наличие единственного экземпляра класса 
// и предоставляет глобальную точку доступа к нему. Часто используется для управления общими ресурсами 
// или сервисами. 

// Пример использования: Настройки игры или класс логгера, где требуется единственный экземпляр 
// на протяжении всего жизненного цикла приложения.


int main() {
    Logger::getInstance()->log("Application started");
    Logger::getInstance()->log("Performing operations...");
    Logger::getInstance()->log("Application ended");

    std::cout << "Logs written to log.txt" << std::endl;
}
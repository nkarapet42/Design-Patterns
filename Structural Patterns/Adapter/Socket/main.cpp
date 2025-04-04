#include <iostream>
#include "SocketAdapter.hpp"
#include "AmericanSocket.hpp"

// -------------------------------------- ENGLISH --------------------------------------
// Adapter pattern in action:
// A European plug (round pins, 220V) is not directly compatible with an American socket (flat pins, 110V).
// We use an adapter to let the European plug be used where an American socket is expected.

// -------------------------------------- РУССКИЙ --------------------------------------
// Применение паттерна Адаптер:
// Европейская вилка (круглые штыри, 220В) не совместима напрямую с американской розеткой (плоские штыри, 110В).
// Мы используем адаптер, чтобы европейская вилка могла использоваться там, где ожидается американская розетка.

int main() {

    EuropeanPlug    euroPlug;
    SocketAdapter   adapter(&euroPlug);
    AmericanSocket  amerSocket;

    std::cout << amerSocket.plugIn() << std::endl;
    std::cout << adapter.plugIn() << std::endl;

    return 0;
}

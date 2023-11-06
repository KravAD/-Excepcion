#include <iostream>
#include <stdexcept>

void lanzarExcepcion() {
    try {
        throw std::runtime_error("Una excepción ha sido lanzada.");
    } catch (const std::runtime_error& e) {
        std::cout << "Excepción capturada en lanzarExcepcion: " << e.what() << std::endl;
        std::cout << "Manejo de la excepción en LanzarExpresión..." << std::endl;
        throw;
    }
}

int main() {
    try {
        lanzarExcepcion();
    } catch (const std::runtime_error& e) {
        std::cout << "Excepción capturada en main: " << e.what() << std::endl;
        std::cout << "Manejo de la excepción en main..." << std::endl;
    }

    return 0;
}

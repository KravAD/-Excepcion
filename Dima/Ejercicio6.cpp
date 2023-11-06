#include <iostream>

int main() {
    try{
        throw std::runtime_error("Esta es una excepcion de capturada");
    }
    catch (const std::exception& e){
        std::cerr << "Excepcion capturada: " << e.what() << std::endl;
    }
    std::cout << "Este mensaje no se imprimira" <<  std::endl;
    return 0;
}
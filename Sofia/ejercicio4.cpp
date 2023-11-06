#include <iostream>
#include <exception>
#include <string>

class Miexcepecion: public std::exception {
private:
    std::string mensaje;
public:
    explicit Miexcepecion( const std::string& msg) : mensaje (msg){}
    const char* what () const noexcept override {
        return mensaje.c_str();
    }
};

void lanzaExcepcion(){
    throw Miexcepecion ("Ocurrio un error en la funcion lanzaExcepcion");

}
int main (){
    try {
        lanzaExcepcion();
    }
    catch (const Miexcepecion& e){
        std:: cout <<"Excepcion capturada: "<<e.what() << std:: endl;
    }
}





#include <iostream>
#include <stdexcept>
using namespace std;

int divideError(int a, int b) {
    if (b == 0){
        return -1;
    }
    else {
        return a / b;
    }
}

int DivideException (int a, int b) {
    if (b == 0) {
        throw invalid_argument ("Division por 0");
    }
    else {
        return a / b;
    }
}

int main() {

    int resultError = divideError(5, 5);
    if (resultError == -1){
        cout << "Error: division por 0" << endl;
    }
    try {
        int resultException = DivideException(5, 5);
    }
    catch(const std::invalid_argument& e) {
        cout << "Excepcion: " << e.what() << endl;

    }

    return 0;
}
#include <iostream>

bool errorflag = false;

void simulateError() {
    errorflag = true;
}

void handleErrors() {
    if (errorflag) {
        std::cout << "Error!" << std::endl;
        errorflag= false;
    } else {
        std::cout << "No error." << std::endl;
    }
}

int main() {
    simulateError();
    handleErrors();
    handleErrors();
    return 0;
}

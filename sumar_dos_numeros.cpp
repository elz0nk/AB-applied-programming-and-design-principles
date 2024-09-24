#include <iostream>
int Add(int x, int y) {
    std::cout << "En Add(), recibido" <<x<< " y " <<y;
    return (x+y);
}
int main() {
    std::cout << "En main ()\n";
    std::cout << "\nllamada a Add () \n";
    std::cout << "El valor devuelto es: " << Add (3,4);
    std::cout << "\nvuelta a main (). \n";
    std::cout << "\nsaliendo...\n\n";
}
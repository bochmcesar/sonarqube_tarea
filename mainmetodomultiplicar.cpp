#include <iostream>
using namespace std;

// 1. Método para multiplicar dos números
int multiplicar(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2;

    // Pedimos al usuario dos números
    cout << "Ingresa el primer número: ";
    cin  >> num1;
    cout << "Ingresa el segundo número: ";
    cin  >> num2;

    // 2. Llamado al método multiplicar
    int producto = multiplicar(num1, num2);

    // Mostramos el resultado
    cout << "El producto de " << num1 
         << " por " << num2 
         << " es: " << producto << endl;

    return 0;
}

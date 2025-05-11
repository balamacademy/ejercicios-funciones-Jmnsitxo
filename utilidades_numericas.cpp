#include <iostream>
using namespace std;

int esPrimo(int n) {
    if(n <= 1) return 0;
    for(int i = 2; i*i <= n; i++)
        if(n % i == 0) return 0;
    return 1;
}

int factorial(int n) {
    int fact = 1;
    for(int i = 2; i <= n; i++) fact *= i;
    return fact;
}

int contarDigitos(int n) {
    int cont = 0;
    while(n != 0) { n /= 10; cont++; }
    return cont;
}

int sumarDigitos(int n) {
    int suma = 0;
    while(n != 0) { suma += n % 10; n /= 10; }
    return suma;
}

int main() {
    int opcion, num;
    
    do {
        cout << "\nUTILIDADES NUMERICAS\n";
        cout << "1. Verificar si es primo\n";
        cout << "2. Calcular factorial\n";
        cout << "3. Contar digitos\n";
        cout << "4. Sumar digitos\n";
        cout << "5. Salir\n";
        cout << "selecciona una opcion: ";
        cin >> opcion;
        
        if(opcion >= 1 && opcion <= 4) {
            cout << "Ingresa un numero: ";
            cin >> num;
        }
        
        switch(opcion) {
            case 1:
                cout << num << (esPrimo(num) ? " es primo" : " no es primo") << endl;
                break;
            case 2:
                cout << "Factorial: " << factorial(num) << endl;
                break;
            case 3:
                cout << "Digitos: " << contarDigitos(num) << endl;
                break;
            case 4:
                cout << "Suma digitos: " << sumarDigitos(num) << endl;
                break;
            case 5:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opcion no valida\n";
        }
    } while(opcion != 5);
    
    return 0;
}
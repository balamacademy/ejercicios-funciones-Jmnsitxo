#include <iostream>
using namespace std;


void mostrarDigitos(int n, int base) {
    if (n == 0) return;
    
    mostrarDigitos(n / base, base);
    
    int digito = n % base;
    if (digito < 10) {
        cout << digito;
    } else {
        cout << char('A' + digito - 10);
    }
}

int main() {
    int opcion, num;
    
    do {
        cout << "\nCONVERSION DE BASES\n";
        cout << "1. Decimal a Binario\n";
        cout << "2. Decimal a Octal\n";
        cout << "3. Decimal a Hexadecimal\n";
        cout << "4. Salir\n";
        cout << "Selecciona una opcion: ";
        cin >> opcion;
        
        if(opcion >= 1 && opcion <= 3) {
            cout << "Ingresa un numero decimal: ";
            cin >> num;
            cout << "Resultado: ";
            
            if (num == 0) {
                cout << "0";
            } else {
                switch(opcion) {
                    case 1: mostrarDigitos(num, 2); break;
                    case 2: mostrarDigitos(num, 8); break;
                    case 3: mostrarDigitos(num, 16); break;
                }
            }
            cout << endl;
        } else if (opcion != 4) {
            cout << "Opcion no valida\n";
        }
    } while(opcion != 4);
    
    cout << "Saliendo...\n";
    return 0;
}
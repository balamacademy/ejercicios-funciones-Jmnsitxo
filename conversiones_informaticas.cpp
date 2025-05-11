#include <iostream>
using namespace std;

float bitsABytes(float bits) { return bits / 8; }
float kilobytesABytes(float kb) { return kb * 1024; }
float megabytesAKilobytes(float mb) { return mb * 1024; }
float gigabytesAMegabytes(float gb) { return gb * 1024; }

int main() {
    int opcion;
    float valor;
    
    do {
        cout << "\nCONVERSIONES INFORMATICAS\n";
        cout << "1. Bits a Bytes\n";
        cout << "2. Kilobytes a Bytes\n";
        cout << "3. Megabytes a Kilobytes\n";
        cout << "4. Gigabytes a Megabytes\n";
        cout << "5. Salir\n";
        cout << "Selecciona una opcion: ";
        cin >> opcion;
        
        if(opcion >= 1 && opcion <= 4) {
            cout << "Ingresa el valor a convertir: ";
            cin >> valor;
        }
        
        switch(opcion) {
            case 1:
                cout << valor << " bits = " << bitsABytes(valor) << " bytes\n";
                break;
            case 2:
                cout << valor << " KB = " << kilobytesABytes(valor) << " bytes\n";
                break;
            case 3:
                cout << valor << " MB = " << megabytesAKilobytes(valor) << " KB\n";
                break;
            case 4:
                cout << valor << " GB = " << gigabytesAMegabytes(valor) << " MB\n";
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
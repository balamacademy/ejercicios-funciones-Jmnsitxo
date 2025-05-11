#include <iostream>
using namespace std;

float celsiusAFahrenheit(float c) { return c * 9/5 + 32; }
float fahrenheitACelsius(float f) { return (f - 32) * 5/9; }
float metrosAPies(float m) { return m * 3.28084; }
float kilogramosALibras(float kg) { return kg * 2.20462; }

int main() {
    int opcion;
    float valor;
    
    do {
        cout << "\nCONVERSIONES\n";
        cout << "1. Celsius a Fahrenheit\n";
        cout << "2. Fahrenheit a Celsius\n";
        cout << "3. Metros a Pies\n";
        cout << "4. Kilogramos a Libras\n";
        cout << "5. Salir\n";
        cout << "Selecciona una opcion: ";
        cin >> opcion;
        
        if(opcion >= 1 && opcion <= 4) {
            cout << "Ingresa el valor a convertir: ";
            cin >> valor;
        }
        
        switch(opcion) {
            case 1:
                cout << valor << "°C = " << celsiusAFahrenheit(valor) << "°F\n";
                break;
            case 2:
                cout << valor << "°F = " << fahrenheitACelsius(valor) << "°C\n";
                break;
            case 3:
                cout << valor << "m = " << metrosAPies(valor) << " pies\n";
                break;
            case 4:
                cout << valor << "kg = " << kilogramosALibras(valor) << " lb\n";
                break;
            case 5:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "opcion no valida\n";
        }
    } while(opcion != 5);
    
    return 0;
}
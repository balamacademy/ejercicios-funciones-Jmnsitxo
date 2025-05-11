#include <iostream>
using namespace std;


int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);

int main() {
    int opcion, num1, num2;
    
    do {
       
        cout << "\ncalculadora\n";
        cout << "1. Sumar dos numeros\n";
        cout << "2. Restar dos numeros\n";
        cout << "3. Multiplicar dos numeros\n";
        cout << "4. Dividir dos numeros\n";
        cout << "5. Salir\n";
        cout << "Selecciona una opcion: ";
        cin >> opcion;
        
        if(opcion >= 1 && opcion <= 4) {
            cout << "Ingresa el primer numero: ";
            cin >> num1;
            cout << "Ingresa el segundo numero: ";
            cin >> num2;
        }
        
        switch(opcion) {
            case 1:
                cout << "Resultado: " << sumar(num1, num2) << endl;
                break;
            case 2:
                cout << "Resultado: " << restar(num1, num2) << endl;
                break;
            case 3:
                cout << "Resultado: " << multiplicar(num1, num2) << endl;
                break;
            case 4:
                if(num2 != 0) {
                    cout << "Resultado: " << dividir(num1, num2) << endl;
                } else {
                    cout << "error: no se puede dividir entre cero.\n";
                }
                break;
            case 5:
                cout << "saliendo...\n";
                break;
            default:
                cout << "opcion no valida.\n";
        }
        
    } while(opcion != 5);
    
    return 0;
}

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

float dividir(int a, int b) {
    return (float)a / b;
}
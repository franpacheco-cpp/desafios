/*
Una maquina de alimentos tiene productos de tres tipos, A, B y C, que valen respectivamente $270, $340 y $390. La maquina acepta y da de vuelto monedas de $10, $50 y $100.

Escriba un programa que pida al usuario elegir el producto y luego le pida ingresar las monedas hasta alcanzar el monto a pagar. Si el monto ingresado es mayor que el precio del producto, el programa debe entregar las monedas de vuelto, una por una.
*/

#include<iostream>

using namespace std;

int main()
{
    int precioA = 270;
    int precioB = 340;
    int precioC = 390;
    int ingresado = 0;
    int vuelto = 0;
    string seleccion = "D";
    int moneda = 0;
    cout<<"Producto A: $270\nProducto B: $340\nProducto C: $390\n";
    cout<< "Selecciona cual de los 3 productos elegiras: "; cin >> seleccion;
    if (seleccion == "A" or seleccion == "a") {
    do {
        cout<<"\nIntroduciste $" <<ingresado<<" pesos";
        cout<<"\nQue monedas introduciras? (10, 50, 100)"; cin >> moneda;
        switch (moneda){
            case 10:
                ingresado+=10;
                break;
            case 50:
                ingresado+=50;
                break;
            case 100:
                ingresado+=100;
                break;
            default:
                cout<<"Monto de monedas no aceptado";
                break;
        }
    }
    while(ingresado < precioA);
    if (ingresado > precioA) {
        vuelto = ingresado - precioA;
        while (vuelto > 0) {
                if (vuelto >= 100) {
                    cout << "Entregar moneda de $100\n";
                    vuelto -= 100;
                } else if (vuelto >= 50) {
                    cout << "Entregar moneda de $50\n";
                    vuelto -= 50;
                } else if (vuelto >= 10) {
                    cout << "Entregar moneda de $10\n";
                    vuelto -= 10;
                }
            }
    }
    else{
        cout<<"No tienes vuelto";
    }
    } else if (seleccion == "B" or seleccion == "b") {
    do {
        cout<<"\nIntroduciste $" <<ingresado<<" pesos";
        cout<<"\nQue monedas introduciras? (10, 50, 100)"; cin >> moneda;
        switch (moneda){
            case 10:
                ingresado+=10;
                break;
            case 50:
                ingresado+=50;
                break;
            case 100:
                ingresado+=100;
                break;
            default:
                cout<<"Monto de monedas no aceptado";
                break;                
        }
    } while(ingresado < precioB);
    if (ingresado > precioB) {
        vuelto = ingresado - precioB;
        while (vuelto > 0) {
                if (vuelto >= 100) {
                    cout << "Entregar moneda de $100\n";
                    vuelto -= 100;
                } else if (vuelto >= 50) {
                    cout << "Entregar moneda de $50\n";
                    vuelto -= 50;
                } else if (vuelto >= 10) {
                    cout << "Entregar moneda de $10\n";
                    vuelto -= 10;
                }
            }
    }
    else{
        cout<<"No tienes vuelto";
    }
    } else if (seleccion == "C" or seleccion == "c") {
    do {
        cout<<"\nIntroduciste $" <<ingresado<<" pesos";
        cout<<"\nQue monedas introduciras? (10, 50, 100)"; cin >> moneda;
        switch (moneda){
            case 10:
                ingresado+=10;
                break;
            case 50:
                ingresado+=50;
                break;
            case 100:
                ingresado+=100;
                break;
            default:
                cout<<"Monto de monedas no aceptado";
                break;                
        }
    } while(ingresado < precioC);
    if (ingresado > precioC) {
        vuelto = ingresado - precioC;
        while (vuelto > 0) {
                if (vuelto >= 100) {
                    cout << "Entregar moneda de $100\n";
                    vuelto -= 100;
                } else if (vuelto >= 50) {
                    cout << "Entregar moneda de $50\n";
                    vuelto -= 50;
                } else if (vuelto >= 10) {
                    cout << "Entregar moneda de $10\n";
                    vuelto -= 10;
                }
            }
    }
    else{
        cout<<"No tienes vuelto";
    }
    }else{
        cout<<"Eleccion invalida";
    }
    
    return 0;
}

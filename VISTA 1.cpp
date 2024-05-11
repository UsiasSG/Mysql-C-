// VISTA 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Cliente.h"
using namespace std;

int main()
{
    
    
    
    string nombres, apellidos, nit, genero, correo_electronico, fecha_ingreso;
    int telefono;
    cout << "Ingrese Nombres:";
    getline(cin, nombres);
    cout << "Ingrese Apellidos:";
    getline(cin, apellidos);
    cout << "Ingrese Nit:";
    getline(cin, nit);
    cout << "Ingrese Genero:";
    getline(cin, genero);
    cout << "Ingrese Telefono:";
    cin >> telefono;
    cin.ignore();
    cout << "Ingrese Correo Electronico:";
    getline(cin, correo_electronico);
    cout << "Ingrese Fecha Ingreso:";
    cin >> fecha_ingreso;

   
    Cliente c = Cliente(nombres, apellidos,genero,telefono,correo_electronico,fecha_ingreso,nit);
    c.crear();
    c.leer();

    
    system("pause");
    return 0;
}

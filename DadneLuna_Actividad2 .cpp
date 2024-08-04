#include <iostream>

using namespace std;

int main() {
     
     // Declaracion de variables para los numeros ingresados por el usuario
     
     double num1, num2;
     
    // Solicitud de entrada del primer numero 
    
    cout << "Escribe el primer numero:  ";
    cin >> num1;
    
    // Solicitud de entrada del segundo numero 
    
    cout << "Escribe el segundo numero:  ";
    cin >> num2;
    
    // Realizacion de las operaciones aritmeticas
    
    double suma = num1 + num2;
    double resta = num1 - num2;
    double multiplicacion = num1 * num2;
    double division = num1 / num2;
    
    // Muestra de los resultados con sus resustados respectivos enunciados
    
    cout << "La suma es:   " << suma << endl;
    cout << "La resta es:  " << resta << endl;
    cout << "La multiplicacion es:  " << multiplicacion << endl;
    cout << "La division es:  " << division << endl;
    
    return 0;
}
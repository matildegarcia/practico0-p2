// PRÁCTICO 0 PROGRAMACIÓN 2 
// EJERCICIO-2 

#include "iostream"

using namespace std;
 int PromClase();  // debo declarar antes del main las funciones que voy a usar

int main()            
{

   int resultado= PromClase();
    cout << "El promedio es:  " << resultado << "\n";
}
// el main, la funcion principal
  
  
int PromClase(){ // la funcion que me pidieron

int i, menor, numeros[5]; 

//..............................................................................
 for (i = 0; i<5; i++){ // esto se repite 10 veces, desde el numero 0 hasta el 9
cout<< "ingrese un numero: " ;
cin>> numeros[i];
}
menor = numeros[0];
//..............................................................................
 for (i=0; i<5; i++){
if (numeros[i]< menor) {
menor = numeros[i];  
        }
}
//..............................................................................

cout << "El menor es:  " << menor << "\n"; 
int suma= 0;
float promedio = 0;

//..............................................................................
for  (i=0; i<5; i++){
if (menor < numeros[i]) {
suma = suma+numeros[i];
         }     
}
//................................................................................

  return promedio = suma/4; // la funcion retorna como resultado el promedio

 
 }



// idea: hacer un arreglo, descubrir cual es el menor, y sumar los otros valores recorriendo el arreglo.
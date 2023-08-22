// PRÁCTICO 0 PROGRAMACIÓN 2 
// EJERCICIO-3

#include "iostream"
using namespace std;

int Ocurrencias(); // funcion


int main() {


  cout<< " Su ocurrencia es: " <<  Ocurrencias();
}



int Ocurrencias(){

char frase[100];
int largo;
int letra;


cout<< "ingrese el largo de la frase: " ;
cin>> largo;

cout<< " la frase:  " ;

 for (int i= 0; i<largo; i++){ 
cin>> frase[i];
}

cout<< "ingrese la letra para ver su ocurrencia:  " ;
cin>> letra;
int contador=0;

 for (int j=0; j<largo; j++){ 
    if (frase[j]==letra){
        contador++;
    }
}

return contador;

}
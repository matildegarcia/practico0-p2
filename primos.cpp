// PRÁCTICO 0 PROGRAMACIÓN 2 
// EJERCICIO-1 

#include "iostream"
using namespace std;
void Primos();



int main(){

Primos();

}

//................................................................................................

void Primos(){
 
int entero1;
int entero2;
int numdivisores=0;

 cout<< "ingrese un entero mayor a cero: " ; // ingresa el primer entero
 cin>> entero1;
 //.
 cout<< "ingrese otro entero mayor a cero: " ; // ingresa el segundo entero 
 cin>>  entero2;

int menor;
int mayor;


if (entero1<entero2){  // evaluacion entero 1 
    menor=entero1;
}
else{
mayor=entero1;
}


if (entero2<entero1){  // evaluacion entero 2
    menor=entero2;
}
else{
mayor=entero2;
}
  
int k;
  
//......................................................................................................

  for (int i=menor; i<mayor; i++){


        k=2;          //i es el divisor
        while(i%k!=0) //mientras el número sea divisible por el divisor
        {
            k++;      //siguiente divisor
        }
        //cuando sale del while, si el divisor es el propio número
        //entonces el número es primo
        if(k==i)      
            cout << i <<  " ";
     }
  }







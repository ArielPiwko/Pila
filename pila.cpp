#include<iostream>
#include<conio.h>

using namespace std;

struct Nodo{
 int dato;
 Nodo *siguiente;
};

void agregarpila(Nodo *&, int);
void sacarpila(Nodo *&, int &);

int main(){

    Nodo *pila = NULL;
    int dato;
    int tam;

    cout<<"Cuantos numeros va a introducir en la pila?: ";
    cin>>tam;

    for(int i=0;i<tam;i++){
        cout<<"\nDigite un numero: ";
        cin>>dato;
        agregarpila(pila,dato);
    }

    cout<<"\nSacando los elementos de la pila: ";
     while(pila!=NULL){
        sacarpila(pila,dato);
        if(pila!=NULL){
            cout<<dato<<", ";
        }
        else{
            cout<<dato<<".";
        }
     }

    sacarpila(pila,dato);

    getch();
    return 0;
}

void agregarpila(Nodo *&pila, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo -> dato = n;
    nuevo_nodo -> siguiente = pila;
    pila = nuevo_nodo;
}

void sacarpila(Nodo *&pila, int &n){
    Nodo *aux = pila;
    n = aux -> dato;
    pila = aux -> siguiente;
    delete aux;
}

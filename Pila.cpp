#include <iostream>
#include "ListaPuntatori.cpp"

template <typename T>
class Pila{
 private:
  ListaPuntatori<T> angela;
 public: 
  void push (T elem){
    angela.insLista(elem, 1);
    }

 T pop(){
  T elem = angela.leggiLista(1);
  angela.cancLista(1);

 return elem;
 }

 T top(){
   return angela.leggiLista(1);
 }

 bool isEmpty(){
   if (angela.listaVuota() == true){
    return true;
    }
    else{
     return false;
     }
 }

 int size(){
   return angela.lunghezza();
   }
};


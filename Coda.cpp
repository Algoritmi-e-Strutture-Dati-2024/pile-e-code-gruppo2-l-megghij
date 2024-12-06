template <typename T>
class Coda{
 private: 
  ListaPuntatori<T> angela;
 public: 
  void enqueue (T elem){
    angela.inLista(elem, ultimo);
    ultimo++;
  }

 T dequeue(){
   T elem = angela.leggiLista(1);
   angela.cancLista(1);

 return elem;
 }

 T front(){
   return angela.leggLista(1);
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

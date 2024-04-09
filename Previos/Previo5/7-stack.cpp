#include <iostream>
using namespace std;


#define MAX 10               // variable de reemplazo
int Size = 0;           // variable global

// Creando estructura tipo stack
struct Stack {
  int items[MAX];
  int top;
};

// declarando st como estructura de tipo stack
typedef struct Stack st;

// Función para crear un st
void createEmptyStack(st *s){
  s->top = -1;                      // s->top = -1 cuando está vacia
}

int isfull(st *s){
  if (s->top == MAX - 1)           // Cuando el indice es 9 está llena
    return 1;
  else
    return 0;
}

int isempty(st *s){
  if (s->top == -1) 
    return 1;
  else
    return 0;
}

// Añadiendo elementos en la pila
void push(st *s, int newitem) {
  if (isfull(s)){
    cout << "STACK FULL" << endl;
  } else {                              // Si la pila NO está llena

    s->top++;                           // Se aumenta el indice en 1
    s->items[s->top] = newitem;         // Se agrega el elemento a dicho indice
    Size++;                             // Se aumenta el tamaño de la pila
  }
}

// Removiendo elementos en la pila
void pop(st *s){
  if (isempty(s)){                    
    cout << "\n STACK EMPTY \n";
  } else {                              // Si la pila no está vacia

    cout << "Item popped = "            // Se muestra el elemento removido   
      << s->items[s->top];
     s->top--;                          // Se reduce el indice en 1
    Size--;                             // Se aumenta el tamaño de la pila
  }
  cout << endl;
}

// Mostrando elementos en la pila
void printStack(st *s){
 cout << "Stack: ";
  for (int i = 0; i < Size; i++){
    cout << s->items[i] << " ";
  }
  cout << endl;
}


int main() {
  st *s = (st *) malloc(sizeof(st));

  createEmptyStack(s);

  push(s,1);
  push(s,1);
  push(s,2);
  push(s,2);
  push(s,9);
  push(s,100);
  push(s,100);
  push(s,200);
  push(s,200);
  push(s,900);
  push(s,15);
  push(s,30);

  printStack(s); 

  pop(s);
  pop(s);
  pop(s);
  cout << "\nAfter popping out\n";
  printStack(s);

return 0;
}

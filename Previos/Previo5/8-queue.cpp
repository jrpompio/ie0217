#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
  private:
    int items[SIZE], front, rear;
 
  public:             
    Queue(){                      // Ambos valores rear y front
      front = -1;                 // empiezan en -1
      rear = -1;                  // ya que aún no hay valores en la cola
    }

// Comprobación de lista llena
    bool isFull(){
    if (front == 0 && rear == SIZE - 1){
      return true;
        }
      return false;
    }
// Comprobación de lista vacia    
    bool isEmpty(){
      if (front == -1) {
        return true;
      }
      return false;
    }

// Función para encolar elemento
    void enQueue(int element){
      if (isFull()){
        cout << "Queue is full";
      } else {
        if (front == -1) front = 0;
        rear++;
        items[rear] = element;
        cout << endl << "Inserted: " << element << endl;
      }
    }

// Función para decolar elemento
    int deQueue(){
        int element;
        if (isEmpty()){
          cout << "Queue is empty" << endl;
        return (-1);
        } else {
          element = items[front];
          if (front >= rear) {
            front = -1;
            rear = -1;
          } else {
            front++;
          }
          cout << endl << "Deleted -->" << element
            << endl;
          return (element);
        }
    } 

// Función para mostrar la cola
    void display(){
      int i;
      if (isEmpty()){
        cout << endl
          << "Empty Queue" << endl;
      } else { 
        cout << endl << "Front index--> " << front;
        cout << endl << "Items--> ";
        for (i=front; i <= rear; i++) 
          cout << items[i] << "  ";
        cout << endl << "Rear index--> " << rear << endl;

      } 
    }
};

    
int main() {
  Queue q;

  // Probando decolar con lista vacia
  q.deQueue();
  
  // encolando 5 elementos
  q.enQueue(1);
  q.enQueue(2);
  q.enQueue(3);
  q.enQueue(4);
  q.enQueue(5); 
 
  // encolando 1 elemento con lista llena 
  q.enQueue(6);

  q.display();    // Mostrando elementos en la cola
  q.deQueue();    // decolando un elemento
  q.display();    // Mostrando elementos en la cola nuevamente

return 0;
} 

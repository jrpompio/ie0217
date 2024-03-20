#include <iostream>
#include <cstring>

using namespace std;

struct Book 
{
    char tittle[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main(){
    struct Book book1;
    struct Book book2;

    strcpy(book1.tittle , " Mimetis "  );
    strcpy(book1.author , "Carlos santana"  );
    strcpy(book1.subject , " Cosas " );
    book1.book_id = 66666668;

    strcpy(book2.tittle , " Alcachofa "  );
    strcpy(book2.author , "Marlon bornone"  );
    strcpy(book2.subject , " Cocina " );
    book2.book_id = 66666669;

    cout<< "titulo del libro 1: " << book1.tittle <<endl;
    cout<< "autor del libro 1: " << book1.author <<endl;
    cout<< "tema del libro 1: " << book1.subject <<endl;
    cout<< "id del libro 1: " << book1.book_id <<endl;
    cout<<endl;   
    cout<< "titulo del libro 2: " << book2.tittle <<endl;
    cout<< "autor del libro 2: " << book2.author <<endl;
    cout<< "tema del libro 2: " << book2.subject <<endl;
    cout<< "id del libro 2: " << book2.book_id <<endl;

    return 0;
}
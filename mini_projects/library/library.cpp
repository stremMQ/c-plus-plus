#include "library.h"
#include <iostream>
#include <memory>
using namespace std;

void Library::AddBook(unique_ptr<Book> book){
    books.push_back(move(book));

}

void Library::All(){
    if(books.empty()){
        cout << "Library books" << endl;
        for(auto& book: books){
            book->GetInfo();
        }
    }
}
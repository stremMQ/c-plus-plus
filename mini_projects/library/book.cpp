#include <iostream>
#include "book.h"
using namespace std;

Book::Book(const string& name_, int year_, shared_ptr<Author> autor_): name(name_), year(year_), autor(autor_) {}

void Book::GetInfo(){
    cout << name << " (" << year << ") by " << autor->GetName() << " " << autor->GetSurname() << endl;
}
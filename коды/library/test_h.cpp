#include <iostream>
#include "library.h"
#include "book.h"
#include "autor.h"
using namespace std;

int main(){

    Library MyLib;

    auto alxov = make_shared<Author>("A.A.A", "ALXOV");

    MyLib.AddBook(make_unique<Book>("Red Book", 1999, alxov));

    MyLib.All();
    return 0;
}
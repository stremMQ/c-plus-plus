#include <iostream>
#include "autor.h"
using namespace std;


Author::Author(const string& name_, const string& surname_): name(name_), surname(surname_) {}

string Author::GetName(){return name;}
string Author::GetSurname(){return surname;}
#pragma once
#include "autor.h"
#include <string>
#include <memory>

class Book{
private:
    std::string name;
    std::shared_ptr<Author> autor;
    int year;
public:
    Book(const std::string& name_, int year_, std::shared_ptr<Author> autor_);

    void GetInfo();

};
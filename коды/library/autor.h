#pragma once
#include <string>

class Author{
private:
    std::string name;
    std::string surname;
public:
    Author(const std::string& name_, const std::string& surname_);

    std::string GetName();
    std::string GetSurname();
};
#include <string>
#include "book.h"
#include <memory>
#include <vector>

class Library{
private:
    std::vector<std::unique_ptr<Book>> books;
public:
    void AddBook(std::unique_ptr<Book> book);
    void All();
};
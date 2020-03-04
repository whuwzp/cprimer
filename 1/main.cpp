/* 1.20
#include "Sales_item.h"

int main() {
    Sales_item book;
    std::cout << "input record" << std::endl;
    while (std::cin >> book) {
        std::cout << book << std::endl << std::endl;
    }
    return 0;
}*/

/* 1.21
#include "Sales_item.h"

int main() {

    Sales_item book1, book2;
again:
    std::cout << "input some isbn book:" << std::endl;
    std::cin >> book1 >> book2;
    if (book1.isbn() != book2.isbn()) {
        std::cout << "the isbn is not same" << std::endl;
        goto again;
    }
    std::cout << "sum: " << book1 + book2 << std::endl;
    return 0;
}*/

/* 1.22
#include "Sales_item.h"

int main() {

    Sales_item sum, book;
    std::cout << "input some isbn book:" << std::endl;
    std::cin >> sum;
    while (std::cin >> book) {
        if (!compareIsbn(sum, book)) {
            std::cout << "not same isbn" << std::endl;
            continue;
        }
        sum += book;
    }
    std::cout << "sum: " << sum << std::endl;
    return 0;
}*/




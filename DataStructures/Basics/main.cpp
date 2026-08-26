#include <iostream>

int main() {
    std::cout << "C++ Basics" << std::endl;             //Note using ::endl is not best practice. Leave it blank and use \n instead

    std::cout << "Initialization \n";
    int a = 5;      // traditional initialization
    int b = (7);     // direct initialization. Introduced in C++11. This is the same as int d = 7
    int c (8);     // direct initialization. Introduced in C++11. This is the same as int d = 7

    //Modern Initialization
    int d{4};      // brace initialization. Introduced in C++11. This is the same as int b = 4
    int e = {6};    // brace initialization. Introduced in C++11. This is the same as int c = 6

    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';
    std::cout << d << '\n';
    std::cout << e << '\n';

    // ---------------------------------------

    std::cout << "\nUser Input\n";
    std::cout << "Enter A Number: \n";
    int x{};
    std::cin >> x ;
    std::cout << "Standard Input: " << x << '\n';

    std::cout << "\nEnter Two Numbers: \n";
    int y{};
    int z{};
    std::cin >> y >> z;
    std::cout << y << " And " << z << '\n';

    std::cout << "\nUser Input\n";
    std::cout << "Enter an Invalid Number: \n";
    int invalid{};
    std::cin >> invalid ;
    std::cout << "Standard Input: " << invalid << '\n';
    std::cout << "-> Notice we only extracted the digits and not the letters \n";


    // ---------------------------------------

    return 0;
}

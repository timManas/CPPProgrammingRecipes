#include <iostream>

// Important. Functions need to be defined at the top of the file. Not at the bottom

int multiplier(int x) {
    return x*x;
}

void executeThisMethod() {
    std::cout << "Print Empty Function" << std::endl;
}

void useForwardDeclarationMethod();
int forwardDeclarationMethod(int x);

int anotherFileMethod(int i);

int main() {
    std::cout << "C++ Basics" << std::endl;             //Note using ::endl is not best practice. Leave it blank and use \n instead

    std::cout << "Initialization \n";
    int a = 5;      // traditional initialization
    std::cout << a << '\n';

    int b = (7);     // direct initialization. Introduced in C++11. This is the same as int b = 7
    std::cout << b << '\n';

    int c (8);     // direct initialization. Introduced in C++11. This is the same as int c = 9
    std::cout << c << '\n';

    //Modern Initialization
    int d{4};      // brace initialization. Introduced in C++11. This is the same as int d = 4
    std::cout << d << '\n';

    int e = {6};    // brace initialization. Introduced in C++11. This is the same as int e = 6
    std::cout << e << '\n';

    int f = {1 + 2 + 3 + 4 + 5};    // Numbers inside the {} are addable
    std::cout << f << '\n';

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


    // Undefined value ---------------------------------------

    // This is an undefined value
    int undefined;
    std:: cout << "\n" << "Undefined value: " + undefined << '\n';

    // Functions ---------------------------------------

    int functionResult = multiplier(5);
    std::cout << "\n" << "function Result:" << functionResult << "\n" ;

    // Execute this method
    executeThisMethod();

    int fwd = forwardDeclarationMethod(5);
    std::cout << "Forward Declaration Method Result: " << fwd << "\n" << std::endl;

    //NOTE: This is like IMPORTING !!! The function lives in another file.
    // We technically 'import' using forwardDeclarationMethod
    int getValueFromAnotherFile = anotherFileMethod(5);
    std::cout << "Another File Method Result: " << getValueFromAnotherFile << "\n" << std::endl;

    return EXIT_SUCCESS;
}

void useForwardDeclarationMethod() {
    std::cout << "Print Forward Declaration Method" << "\n" << std::endl;
}

int forwardDeclarationMethod(int x) {
    return x * x;
}

#include <iostream>
#include "PalindromeChecker.h"

using namespace std;

int main() {
    //std::cout << "Hello, World!" << std::endl;

    string input;
    cout << "Digite uma palavra ou frase: ";
    getline(cin, input);

    PalindromeChecker checker;
    if (checker.isPalindrome(input)) {
        cout << "É um palíndromo!" << endl;
    } else {
        cout << "Não é um palíndromo!" << endl;
    }
    return 0;
}

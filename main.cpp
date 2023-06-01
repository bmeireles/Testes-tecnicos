#include <iostream>
#include "PalindromeChecker.h"
#include "CPFValidator.h"

using namespace std;

int main() {
    //std::cout << "Hello, World!" << std::endl;
//----Palindrome--------------
    string input;
    cout << "Digite uma palavra ou frase: ";
    getline(cin, input);

    PalindromeChecker checker;
    if (checker.isPalindrome(input)) {
        cout << "É um palíndromo!" << endl;
    } else {
        cout << "Não é um palíndromo!" << endl;
    }

//----CPF validator-----------
    string cpf;
    cout << "Digite o CPF (formato 999.999.999-99): ";
    getline(cin, cpf);

    CPFValidator validator;
    if (validator.isValidCPF(cpf)) {
        cout << "CPF válido!" << endl;
    } else {
        cout << "CPF inválido!" << endl;
    }
    

    return 0;
}

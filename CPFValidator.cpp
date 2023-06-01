//
// Created by ludmila on 01/06/23.
//

#include "CPFValidator.h"
#include <regex>

bool CPFValidator::isValidCPF(const std::string& cpf) {
    // Expressão regular para verificar a máscara do CPF
    std::regex regexCPF(R"(^\d{3}\.\d{3}\.\d{3}-\d{2}$)");

    return std::regex_match(cpf, regexCPF);
}
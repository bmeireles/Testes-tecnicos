cmake_minimum_required(VERSION 3.25)
project(Testes_tecnicos)

set(CMAKE_CXX_STANDARD 17)

add_executable(Testes_tecnicos main.cpp PalindromeChecker.cpp PalindromeChecker.h CPFValidator.cpp CPFValidator.h)

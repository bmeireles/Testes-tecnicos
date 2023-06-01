//
// Created by ludmila on 01/06/23.
//

#include "PalindromeChecker.h"
#include <algorithm>

bool PalindromeChecker::isPalindrome(const std::string& str) {
    std::string reversedStr = str;
    std::reverse(reversedStr.begin(), reversedStr.end());
    return (str == reversedStr);
}
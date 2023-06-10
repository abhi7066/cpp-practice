#include <iostream>
#include <string>

bool solution(std::string str, std::string ending) {
    if (str.length() < ending.length()) {
        return false;
    }
    return str.substr(str.length() - ending.length()) == ending;
}

int main() {
    std::cout << std::boolalpha << solution("abc", "bc") << std::endl; // true
    std::cout << std::boolalpha << solution("abc", "d") << std::endl; // false
    return 0;
}

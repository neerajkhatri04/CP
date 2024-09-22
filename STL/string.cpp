#include <iostream>
#include <algorithm>
#include <string>

int main () {
    std::string s0 = "hello!";
    std::string s1("hello! world!");
    std::string s2(s1);
    char ch[] = {'a', 'b', 'c', '\0'};
    std::string s4 = ch;

    s4.append(" hello");

    std::cout << "s0: " << s0 << std::endl;
    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;
    std::cout << "s4: " << s4 << std::endl;

    for(auto c: s1) {
        std::cout << c << ":";
    }
    std::cout << std::endl;

    for(auto it = s1.begin(); it != s1.end(); it++) {
        std::cout << (*it) << ":";
    }

    return 0;
}
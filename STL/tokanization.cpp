#include <iostream>
#include <cstring>

int main() {

    char str[100] = "Hello my name is neeraj khatri";

    char *ptr = strtok(str, " ");
    while (ptr!= nullptr) {
        std::cout << ptr << std::endl;
        ptr = strtok(nullptr, " ");
    }

    return 0;
}
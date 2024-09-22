#include <iostream>
#include <algorithm>

int main () {
    int arr[] = {1,2,3,4,5,5,6,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 5;

    bool present = std::binary_search(arr, arr+size, key);

    if (present) {
        std::cout << "Element found in array" << std::endl;
    }  else {
        std::cout << "Element not found in array" << std::endl;
    }
}
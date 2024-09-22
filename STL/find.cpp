#include <iostream>
#include <algorithm>

int main () {
    int arr[] = {1,2,3,4,5,5,6,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 10;

    auto it = std::find(arr, arr+size, key);

    int index = it - arr;

    if(index == size) {
        std::cout<<"Element not found";
    } else {
        std::cout<<"Element found at index "<<index;
    }
}
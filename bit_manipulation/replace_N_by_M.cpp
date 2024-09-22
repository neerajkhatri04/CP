#include <iostream>


int replaceBits(int N, int M, int i, int j) {
    int m1 = (~0) << j;
    int m2 = ~((~0) << i);
    int new_N = (m1|m2) & N;
    int new_M = M << i;

    return new_N|new_M;
}

int main() {

    std::cout<<replaceBits(5,9,2,4);

    return 0;
}
#include <iostream>


bool isOdd(int n) {
    return (n&1);
}

int getBit(int n, int i) {
    int mask = 1<<i;
    return ((mask&n)!=0)  ? 1 : 0;
}

int setBit(int n, int i) {
    int mask = 1<<i;
    return n|mask;
}

int clearBit(int n, int i) {

    int mask = 1<<i;
    mask = ~mask;
    return n&mask;
}

int updateBit(int n, int i, int v) {
    int mask = ~(1<<i);
    int cleared_n = n&mask;

    return cleared_n | (v<<i);
}

int clearLastIBits(int n, int i) {
    int mask = (~0) << i;
    return n&mask;
}

int clearRangeOfBits(int n, int i, int j) {
    int mask1 = (-1) << i;
    int mask2 = ~((-1) << j);
    int mask = mask1 | mask2;

    return n&mask;
}

int main() {
    
    // std::cout<<isOdd(5);
    // std::cout<<getBit(7,0);
    //  std::cout<<setBit(0,0);
    //   std::cout<<clearBit(5,2);
    //    std::cout<<updateBit(5,0,0);
    //    std::cout<<clearLastIBits(5,1);
       std::cout<<clearRangeOfBits(31,4,1);

    return 0;
}
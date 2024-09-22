#include <iostream>
#include <vector>

int posOfSetBit(int n) {
    
    int pos = -1;
    
    while(n > 0) {
        pos++;
        if(n&1){
            break;
        }
        n = n>>1;
    }

    return pos;
}

bool bitIsSet(int n, int i) {
    while(i){
        n = n>>1;
        i--;
    }
     return n&1;
}


int main() {


    int arr[] = {1,2,3,1,2,4,5,4,5,7,7,99,99,3,65,25,65,0,0,15};
    int x = 0;
    int unique1 = 0;
    std::vector<int> nums;

    for(auto i : arr) {
        x^=i;
    }

    // std::cout<<"x:"<<x<<std::endl;

    int pos = posOfSetBit(x);

    // std::cout<<"posofx: "<<pos<<std::endl;

    for(auto i : arr) {
        if(bitIsSet(i, pos)){
            nums.push_back(i);
        }
    }

    // for(auto i: nums) {
    //     std::cout<<i<<":";
    // }
    // std::cout<<std::endl;

    for(auto i : nums) {
        unique1^=i;
    }

    int unique2 = unique1^x;

    std::cout<<"Unique no. 1: "<<unique1<<std::endl;
    std::cout<<"Unique no. 2: "<<unique2<<std::endl;



    return 0;
}
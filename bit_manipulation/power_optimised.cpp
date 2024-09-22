#include <iostream>

int powerOptimised(int n, int pow) {
    int ans = 1;

    while(pow > 0) {
        if(pow&1) {
            ans*=n;
        }
        n*=n;
        pow = pow>>1;
    }
    
    return ans;
}


int main() {
    std::cout<<"Hellow"<<std::endl;
    std::cout<<powerOptimised(2,2);

    return 0;
}
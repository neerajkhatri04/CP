#include <iostream>
#include <vector>
#include <unordered_map>

int main() {

    int arr[] = {1,2,2,5,6,5,6,7,1};

    // std::unordered_map<int, int> m;

    // int ans = NULL;

    // for(int i : arr) {

    //     auto it = m.find(i);

    //     if(it == m.end()) {
    //         m.insert({i,1});
    //     } else {
    //         it->second = 2;
    //     }
    // }

    // for(auto i : m) {
    //     if(i.second == 1) {
    //         ans = i.first;
    //     }
    // }

    // if(ans == NULL) {
    //     std::cout<<"No unique number"<<std::endl;
    // } else {
    //     std::cout<<"Unique number is "<<ans<<std::endl;
    // }

    // ***Efficient way (Using bit manipulation) ****/

    int res = 0;
    for(int i : arr) {
        res ^= i;
    }

    std::cout<<"Unique number(using bit manipulation) is "<<res<<std::endl;




    return 0;
}
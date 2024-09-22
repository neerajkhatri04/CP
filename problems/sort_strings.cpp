#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>


bool comp(const std::string &a, const std::string &b) {
    //If a is prefix of b and b is longer ---> b comes first
    if(b.find(a) == 0 && b.length() >= a.length()){
        return false;
    }
    //If b is prefix of a and a is longer ---> a comes first
    else if(a.find(b) == 0 && a.length() >= b.length()) {
        return true;
    }
    //Else keep the lexgraphical order
    else {
        return a < b;
    } 
}

int main () {

    std::vector<std::string> v = {"bat", "apple", "batman"};
    
    sort(v.begin(), v.end(), comp);

    for(std::string i : v) {
        std::cout<<i<<" ";
    }

    return 0;
}
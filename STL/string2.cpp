#include <iostream>
#include <algorithm>
#include <string>

bool compare(std::string a, std::string b) {

    if(a.length() == b.length()){
        return a < b;
    }

    return a.length() < b.length();
}

int main () {

    std::string str[100];
    int n;
    std::cin>>n;
    std::cin.get();

    for(int i=0; i<n; i++){
        std::getline(std::cin, str[i]);
    }

    std::sort(str, str+n, compare);

    for(auto s: str) {
        std::cout<<s<<std::endl;
    }


    return 0;
}
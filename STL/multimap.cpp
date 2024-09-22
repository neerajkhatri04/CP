#include <iostream>
#include <map>
#include <string>

int main() {

    std::multimap<char, std::string> m;

    int n;
    std::cin>>n;
    char key;
    std::string value;

    for(int i = 1; i <= n; i++) {
        std::pair<char, std::string> p;
        std::cout<<"Enter key value "<<i<<"->";
        std::cin>>key;
        std::cin>>value;
        p.first = key;
        p.second = value;
        m.insert(p);
    }

    for(auto i : m) {
        std::cout<<i.first<<":"<<i.second<<std::endl;
    }

    return 0;
}
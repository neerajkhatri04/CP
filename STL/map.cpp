#include <iostream>
#include <map>
#include <string>
int main() {

    std::map<std::string, int> m;

    m.insert(std::make_pair("apple", 20));

    std::pair<std::string, int> p;
    p.first = "banana";
    p.second = 30;
    m.insert(p);

    m["kiwi"] = 60;
    m["litchi"] = 40;
    m["melon"] = 80;

    std::string fruit;
    std::cin>>fruit;

    // auto it = m.find(fruit);

    // if(it != m.end()) {
    //     std::cout<<"Price of "<<fruit<<" is "<<m[fruit]<<std::endl;
    // } else {
    //     std::cout<<fruit <<" is not available!"<<std::endl;
    // }

    if(m.count(fruit)) {
        std::cout<<"Price of "<<fruit<<" is "<<m[fruit]<<std::endl;
    } else {
        std::cout<<fruit <<" is not available!"<<std::endl;
    }

    for(auto it = m.begin(); it != m.end(); it++){
        std::cout<<it->first<<":"<<it->second<<std::endl;
    } 

    return 0;
}
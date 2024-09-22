#include <iostream>
#include <list>
#include <string>

int  main() {

    std::list<int> l = {2,3,5,1,4,5};
    std::list<std::string> s = {"apple", "orange", "kiwi", "banana"};

    //sort
    l.sort();

    l.pop_front();
    l.push_front(8);

    s.push_back("apple");

    //Remove all apples
    s.remove("apple");

    for(auto i : s) {
        std::cout << i << "->";
    }

    return 0;
}
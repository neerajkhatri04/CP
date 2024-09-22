#include <iostream>
#include <queue>
#include <string>


class Person {
public:
    int age;
    std::string name;

    Person(){};

    Person(int age, std::string name) : age(age), name(name) {};
};

class PersonCompare {
public:
    bool operator()(const Person& lhs, const Person& rhs) const {
        return lhs.age < rhs.age;
    }
};

int main() {

    std::priority_queue<Person, std::vector<Person>, PersonCompare> pq;

    Person p1(12, "John");
    Person p2(16, "Neeraj");
    Person p3(10, "Peter");
    Person p4(14, "Anna");

    pq.push(p1);
    pq.push(p2);
    pq.push(p3);
    pq.push(p4);

    for(int i = 0; i < 3; i++) {
        Person person = pq.top();
        std::cout << "Person " << i + 1 << ": " << person.name << ", age: " << person.age << std::endl;
        pq.pop();
    }


    return 0;
}
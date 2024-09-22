#include <iostream>
#include <unordered_map>
#include <string>

class Student {
public:
    std::string fname;
    std::string lname;
    int roll;


    Student(std::string fname, std::string lname, int roll) {
        this->fname = fname;
        this->lname = lname;
        this->roll = roll;
    }

    bool operator==(const Student &s) const{
        return roll == s.roll;
    }
};

class HashFun {
public:
    size_t operator()(const Student &s) const{
        return s.fname.length() + s.lname.length();
    }
};

int main() {

    std::unordered_map<Student, int, HashFun> um;

    Student s1("neeraj", "khatri", 66);
    Student s2("karan", "kumar", 69);
    Student s3("kritik", "goel", 77);
    Student s4("neeraj", "khatri", 89);

    um[s1] = 110;
    um[s2] = 141;
    um[s3] = 111;
    um[s4] = 104;

    for(auto i:um) {
        std::cout<<i.first.fname<<" "<<i.first.lname<<":"<<i.second<<std::endl;
    }

    return 0;
}
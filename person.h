#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using namespace std;

class Person {
    
    friend ostream& operator<<(ostream& out, const Person& person);
    public:
    Person();
    Person(string& first_name, string& last_name);

    //getters
    string getFirstName() const{
        return First_name;
    }
    string getLastName () const{
        return Last_name;
    }

    //setters
    void setFirstName(string_view fn){
        First_name=fn;
    }
    void setLastName(string_view ln){
        Last_name=ln;
    }

    protected:
    string First_name{"Mysterious"};
    string Last_name {"Player"};
};

#endif //PERSON_H
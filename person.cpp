#include "person.h"
using namespace std;

Person::Person(){
}

Person::Person(string& first_name, string& last_name)
            : First_name(first_name), Last_name(last_name)
    {       
    }

    ostream& operator<<(ostream& out, const Person& person){
        out<<"Person ["<<person.First_name<<""<<person.Last_name<<"]";
        return out;
    }



#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    int age;
    Person(string name,int age){
        this->name = name;
        this->age = age;
    }
    void personDetails(){
        cout << "Name : " << name << " Age : " << age << '\n';
    }

};

class Company{
    public:
    string cname,location;
    Company(string cname,string location){
        this->cname = cname;
        this->location = location;
    }
    void companyDetails(){
        cout << "Company Name = " << cname << " Location = " << location << '\n';

    }
};

class Employee: public Person , public Company{
   public:
   Employee(const string&name , int age , const string&cname , const string&location) : Person(name , age) , Company(cname , location) {}
};

int main()
{
    Employee e("Labib",21,"Google","USA");
    e.companyDetails();
    e.personDetails();

}
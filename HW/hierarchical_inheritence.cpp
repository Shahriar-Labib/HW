#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    string name;
    Animal(string name){
        this->name = name;
    }
    void introduction(){
        cout << "Name : " << name << '\n';
    }

};

class Cat : public Animal{
    public:
    Cat(const string& n) : Animal(n) {}

    void sound(){
        cout << "sounds like Meoww" << '\n';
    }
};

class Dog : public Animal{
    public:
    Dog(const string& n) : Animal(n) {}

    void sound(){
        cout << "Sounds like gheuu" << '\n';
    }
};

int main()
{
    Cat c("Cat");
    c.introduction();
    c.sound();

    Dog d("Dog");
    d.introduction();
    d.sound();

}
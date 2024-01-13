#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    string name;
    Animal(string name){
        this->name = name;
    }
    void introduction(){
        cout << "Name is " << name << '\n';
    }
};

class Cat : public Animal{
public:

   Cat(const string& n) : Animal(n) {}
   void sound()
   {
    cout << "Meoww" << '\n';
   }
   
   friend std::ostream& operator<<(std::ostream& os, const Cat& cat) {
        return os << "Cat Class";
    }
   
   
};

int main()
{

    Cat c("Cat");
    c.introduction();
    c.sound();
    cout << c << '\n';

}
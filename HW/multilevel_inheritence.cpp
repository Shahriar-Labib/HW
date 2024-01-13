#include<bits/stdc++.h>
using namespace std;
class GrandParent{
    public:
    void property(){
        cout << "I have 5 koti taka" << '\n';
    }
};

class Parent : public GrandParent{
    public:
    void property(){
        cout << "I have 3 koti taka" << '\n';
    }

    void father_property(){
        GrandParent :: property();
    }
};

class Child : public Parent{
    public:
    void property(){
        cout << "I have 2 koti taka" << '\n';
    }

    void father_property(){
        Parent :: property();
    }

    void GrandParent_property(){
        Parent :: father_property();
    }
};

int main()
{
    Child c;
    c.property();
    c.father_property();
    c.GrandParent_property();
}
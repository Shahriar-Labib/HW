#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
    string name;
    int id;
    public:
    Student(string name, int id){
        this->name = name;
        this->id = id;
    }

    void details(){
        cout << "Name = " << name << ". Id = " << id << '\n';
    }

    const string& getName(){
        return name;
    }
};

int main()
{
    Student s("shoily" , 2);
    s.details();
}
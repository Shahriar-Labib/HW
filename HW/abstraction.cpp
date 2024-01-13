#include<bits/stdc++.h>
using namespace std;
class Project{
    public:
    static int balance;

    virtual void details(){
        cout << "Total Balance: " << balance << '\n';
    }

   virtual void security() = 0;
};

int Project :: balance = 50;

class App : public Project{
    public:
    void security() override{
        //pass
    }

    void details() override{
        cout << "Inside the app" << '\n';
    }
};

int main()
{
    App p;
    p.details();
    p.Project::details();
}

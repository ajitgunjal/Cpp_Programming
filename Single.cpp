#include<iostream>

using namespace std;

class Base
{
    public:
        int i,j;
        void fun()
        {
            cout<<"Inside Base fun\n";
        }
};

class Derived : public Base
{
    public:
        int x;

        void Gun()
        {
            cout<<"Inside Derived /n";
        }
};
int main()
{
Base bobj;
Derived dobj;

cout<<"size of Base class object:"<<sizeof(bobj)<<"\n";
cout<<"size of Derived class object:"<<sizeof(dobj)<<"\n";
    


    return 0;
}
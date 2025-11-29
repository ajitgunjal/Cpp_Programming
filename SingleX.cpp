#include<iostream>

using namespace std;

class Base
{
    public:
        int i,j;
        void Fun()
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
            cout<<"Inside Derived gun \n";
        }
};
int main()
{
Base bobj;
Derived dobj;

bobj.Fun();

dobj.Fun();
dobj.Gun();


    return 0;
}
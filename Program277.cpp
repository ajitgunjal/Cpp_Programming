//oop approch
#include<iostream>
using namespace std;
class Aritematic
{
    public:
      int No1;
      int No2;

      Aritematic(int A, int B)
      {
        No1=A;
        No2=B;
      }

      int Addition()
      {
        int Ans=0;
        Ans=No1+No2;
        return Ans;
      }

      int Substraction()
      {
        int Ans=0;
        Ans=No1-No2;
        return Ans;
      }
};


int main()
{
  Aritematic aobj(11,10);

  cout<<aobj.Addition()<<"\n";
  cout<<aobj.Substraction()<<"\n";
  
    return 0;
}
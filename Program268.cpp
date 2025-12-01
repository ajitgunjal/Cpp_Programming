#include<iostream>
using namespace std;
int Summation(int Arr[],int iSize)
{
    int sum= 0,icnt=0;
    for(icnt=0;icnt<iSize;icnt++)
    {
         int iSum = iSum +Arr[icnt];
    }

return iSum;

}
int main()
{
    int Brr[]={10,20,30,40,50};
    int iRet= 0;

    iRet = Summation(Brr,5);
    cout<<"Summation is :"<<iRet<<"\n";
    return 0;
}
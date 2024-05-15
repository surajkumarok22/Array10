#include<iostream>
using namespace std;

int main()
{
       
       int a = 5;
       int *ptr = &a;

       cout<<ptr<<endl; // print address of a 0x...
       cout<<*ptr<<endl; // print value of a  5

    return 0;
}
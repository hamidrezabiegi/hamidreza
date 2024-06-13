/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#define pi 3.14
using namespace std;
float zahra(int t)
{
 return pi*t*t;
}
float khl(int o)
{
 return pi*o*2;
}
int main()
{
 int r;
 cout<<"enter Radius:";
 cin>>r;
 cout<<"Area of circle is:"<<zahra(r)<<endl;
 cout<<"perimeter of circle is :"<<khl(r);
 return 0;
}
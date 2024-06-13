/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
int f(int a){
 if(a<10){
 return a;
 }
 else{
 cout<<a%10;
 return f(a/10);
 }
}
int main()
{
 int i;
 cout<<"enter a num";
 cin>>i;
 cout<<f(i);
 return 0;
}
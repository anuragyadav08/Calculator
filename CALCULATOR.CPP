// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int Add(int x,int y)
{ 
  return x+y;
}
int Sub(int x,int y)
{ 
  return x-y;
}
int Mul(int x,int y)
{ 
  return x*y;
}
int Div(int x,int y)
{ 
  return x/y;
}
int Mod(int x,int y)
{ 
  return x%y;
}
int main() 
{
    int num1,num2,ch,res;
    cout<<"Choices :"<<endl<<"1:Addition\n2:Subtraction\n3:Multiplication\n4:Division\n5:modulus"<<endl;
    cout<<"Enter Choice:";
    cin>>ch;
    cout<<"Enter First Number:";
    cin>>num1;
    cout<<"Enter Second Number:";
    cin>>num2;
    if(ch==1)
    {
       
        res=Add(num1,num2);
        cout<<"Sum of "<<num1<<" And "<<num2<<" is "<<res;
    }
    else if(ch==2)
    {
        res=Sub(num1,num2);
        cout<<"Subtraction of "<<num1<<" And "<<num2<<" is "<<res;
    }
    else if(ch==3)
    {
        res=Mul(num1,num2);
        cout<<"Multiplication of "<<num1<<" And "<<num2<<" is "<<res;
    }
    else if(ch==4)
    {
         int res1;
        res1=Mod(num1,num2);
        res=Div(num1,num2);
        cout<<"Division of "<<num1<<" And "<<num2<<" : Quotient is "<<res<<" And Remainder is "<<res1;
    }
    else if(ch==5)
    {
        res=Mod(num1,num2);
        cout<<"Modulus of "<<num1<<" And "<<num2<<" is "<<res;
    }
    else
    {
        cout<<"Invalid Choice !";
    }
    return 0;
}
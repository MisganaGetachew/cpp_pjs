#include <iostream>
using namespace std;
// ascending order
int main (){
 double num1,num2,num3;
 cout<<"Enterthe 1st number:"<<endl;  //accepting value from the user
 cin>>num1;
 cout<<"Enterthe 2nd number:"<<endl;
 cin>>num2;
  cout<<"Enterthe 3rd number:"<<endl;
  cin>>num3;
 if(num1>num2& num2>num3)                  //conditions to check which is greater than which
 cout<<num3<<","<<num2<< ","<<num1;
 else if (num1>num3 & num3 > num2)
 cout<<"The ascending order is:"<<num2<< ","<<num3<< ","<<num1;
 else if (num2> num1 & num1> num3)
 cout<<"The ascending order is:"<<num3<< ","<<num1<< ","<<num2;
 else if (num2> num3 & num3 > num1)
 cout<<"The ascending order is:"<<num1<< ","<<num3<<","<<num2;
 else if (num3> num1 & num1> num2)
 cout<<"The ascending order is:"<<num2<< ","<<num1<<","<<num3;
 else if (num3> num2 & num2 > num1)
 cout<<"The ascending order is:"<< num1<< ","<<num2<<","<<num3;
 else 
   cout <<"Error! please enter the numbers that are not equal";
 return0;
}


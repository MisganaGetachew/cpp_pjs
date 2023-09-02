#include<iostream>
using namespace std;
int main()
{    // sum serious of number increasing five 
    int i,sum = 0 ,n = 50;
    for (i = 0,n = 50; i <= n; i=i+5)
    { 
         sum=sum+i;
    }
    
    cout<<"the sum is: "<<sum;
    
    return 0;
   }



#include<iostream>
#include <cmath>
using namespace std;

int main() // count number of digits 
{
    cout<<"insert a number so that i will tell you the number of digits : ";
    double numb1,poweredBy,quotient,i=1,k = 0;
    cin>>numb1;
    poweredBy  = pow(10,i);
    quotient = numb1/poweredBy;
    if(quotient <= 1){
        cout<<"the digit has 1 digit";
    }
    else if (quotient >= 1)
    {
     for(; quotient >= 1; i++  ){
        poweredBy  = pow(10,i);
        quotient = numb1/poweredBy;
            k = i;
    }
    cout<<"the number has "<<k<<" digits";

    }


}


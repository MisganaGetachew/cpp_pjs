#include <iostream>
#include <cmath>
using namespace std;
// grade calculator
int main(){

    int mid,final,sum;
    char grade;
    string close;
    do{
    cout<<" enter your mid result (40): ";
    cin>>mid;
    while(mid>40||mid<0){

    cout<<"enter a valid number between 0 and 40: ";
    cin>>mid;
}
    cout<<"enter your final result(60): ";
    cin>>final;
    while(final>60||final<0)
    {
        cout<<"enter a valid number between 0 and 60: ";
        cin>>final;

    }

    sum= mid +final;

    if(sum >= 90)
    cout<<" your grade is A+";
    else if( sum >= 85)
    cout<<"your grade is A";
    else if(sum >= 80)
    cout<<"your grade is A-";
    else if(sum >= 75)
    cout<<"your grade is B+";
    else if(sum >= 70)
    cout<<"your grade is B";
    else if(sum >= 65)
    cout<<"your grade is B-";
    else if(sum >= 60)
    cout<<"your grade is C+";
    else if(sum >= 55)
    cout<<"your grade is C";
    else if(sum >= 50)
    cout<<"your grade is C-";
    else if(sum >= 40)
    cout<<"your grade is D";
    else if(sum < 40)
       cout<<"your grade is F";
cout<<" \n if you don't want to continue insert 's' else press any character: ";
    cin>>close;


    }
    while(close != "s" && close != "S" );
}



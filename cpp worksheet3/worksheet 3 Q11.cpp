#include <iostream>
using namespace std;
int main(){ // weather calculator program

float tempR, sum = 0, i = 1;
    cout<<" average temperature of 10 previous days, insert temperature\n";
while(i<11){
        cout<<"temperature of day "<<i<<": ";
    cin>>tempR;
    sum += tempR;
        i++;


}
cout <<"the average is temperature : "<<sum/10;

}


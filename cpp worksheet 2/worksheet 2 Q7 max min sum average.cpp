#include<iostream>
using namespace std;
// max min sum average
int main() {
  while(true) {
  double num1, num2, num3, max, min;
  double sum, average;

  cout << "Enter three Numbers : ";
  cin >> num1 >> num2 >> num3;
 
  sum = num1 + num2 + num3;

  average = sum / 3;

if(num1>num2) {
    if (num2>num3) {
       max=num1;
       min=num3;
      }
       else if(num1 > num3){
       max=num1;
       min=num2;
       }
       else {
           max = num3;
           min = num2;
       }
}
else if(num2>num3) {
      if(num1>num3){
         max=num2;
        min=num3;
      }
          else {
         max=num2;
        min=num1;
          }
}
   else {
      if (num2>num1) {
           max =num3;
          min = num1;
      }
          else {
          max =num3;
          min = num2;
          }
   }
    
    cout << "The maximum number is : " <<max << endl 
          << "The minimum number is : " << min << endl
         << "Sum = " << sum << endl
         << "Average = " << average << endl;
  }
    return 0;
}


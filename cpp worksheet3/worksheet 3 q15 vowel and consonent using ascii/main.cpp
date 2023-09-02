#include <iostream>
using  namespace std;

int function(int num){

 if( num == 1){
      return 1;
 }
 else if(num == 0){
      return 0;
 }
  
  else{
            return function(num-1) + function(num-2);
      }
}

int main (){

cout<<" "<<function(3);
}

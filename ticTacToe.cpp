    // c++ project tic tac toe game 
#include <iostream>
using namespace std;
char input1[9] = {0,0,0,0,0,0,0,0,};
void gameDesign(){
    cout<<" ___________ ___________ ___________"<<endl;
    cout<<"|      1    |     2     |     3     |"<<endl;
    cout<<"|___________|___________|___________|"<<endl;
    cout<<"|      4    |     5     |     6     | "<<endl;
    cout<<"|___________|___________|___________|"<<endl;
    cout<<"|      7    |     8     |     9     |"<<endl;
    cout<<"|___________|___________|___________|"<<endl;
}

void inputByUser(int input){
for (int i = 0; i <= input ; i++){
    if (input == i){
        input1[input -1] = 'X';
    } 

}

    
     cout<<" __________ _________  ___________ "<<endl;
    cout<<"|    "<<input1[0]<<"      |    "<<input1[1]<<"      |   "<<input1[2]<<"        |"<<endl;
    cout<<"|__________|_________ |___________|"<<endl;
    cout<<"|    "<<input1[3]<<"      |    "<<input1[4]<<"      |   "<<input1[5]<<"        | "<<endl;
    cout<<"|__________|_________ |___________|"<<endl;
    cout<<"|    "<<input1[6]<<"      |    "<<input1[7]<<"      |   "<<input1[8]<<"        |"<<endl;
    cout<<"|__________|_________ |___________|"<<endl;
}

void inputByUser2(int input){
 for (int i = 0; i <= input ; i++){
     if (input == i){
         input1[input -1] = 'O';
    } 

 }

    
    cout<<" __________ _________  ___________ "<<endl;
    cout<<"|    "<<input1[0]<<"      |    "<<input1[1]<<"      |   "<<input1[2]<<"        |"<<endl;
    cout<<"|__________|_________ |___________|"<<endl;
    cout<<"|    "<<input1[3]<<"      |    "<<input1[4]<<"      |   "<<input1[5]<<"        | "<<endl;
    cout<<"|__________|_________ |___________|"<<endl;
    cout<<"|    "<<input1[6]<<"      |    "<<input1[7]<<"      |   "<<input1[8]<<"        |"<<endl;
    cout<<"|__________|_________ |___________|"<<endl;
}

void winner(){
if ((input1[0] == 'X' && input1[1] == 'X' && input1[2] == 'X') 
  ||(input1[3] == 'X' && input1[4] == 'X' && input1[5] == 'X')  
  ||(input1[6] == 'X' && input1[7] == 'X' && input1[8] == 'X')
  ||(input1[0] == 'X' && input1[4] == 'X' && input1[8] == 'X')
  ||(input1[2] == 'X' && input1[4] == 'X' && input1[6] == 'X')
  ||(input1[0] == 'X' && input1[3] == 'X' && input1[6] == 'X')
  ||(input1[1] == 'X' && input1[4] == 'X' && input1[7] == 'X')
  ||(input1[2] == 'X' && input1[5] == 'X' && input1[8] == 'X'))
  cout<<" X is the winner!";
   else if((input1[0] == 'O' && input1[1] == 'O' && input1[2] == 'O')
  ||(input1[3] == 'O' && input1[4] == 'O' && input1[5] == 'O')
  ||(input1[6] == 'O' && input1[7] == 'O' && input1[8] == 'O')
  ||(input1[0] == 'O' && input1[4] == 'O' && input1[8] == 'O')
  ||(input1[2] == 'O' && input1[4] == 'O' && input1[6] == 'O')
  ||(input1[0] == 'O' && input1[3] == 'O' && input1[6] == 'O')
  ||(input1[1] == 'O' && input1[4] == 'O' && input1[7] == 'O')
  ||(input1[2] == 'O' && input1[5] == 'O' && input1[8] == 'O')){
    cout<<" O is the winner!";
  }
}


int main(){
        cout<<"\n-------- TIC TAC TOE --------\n";
        int input = 2, count = 0;
    gameDesign();
    
   inputByUser2(9);


   cout<<"insert a position : ";
   while(count <= 9 ){
   cin>>input;
   inputByUser(input);
  winner();
  cin>>input;
  inputByUser2(input);
  winner();
  count++;
  }


   

}
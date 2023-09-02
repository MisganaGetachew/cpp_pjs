#include <iostream>
#include <string.h>
using namespace std;
// quiz APP
int result = 0,count = 0;
struct quiz{
    string statement;
    string choice[3];
    int  answer;      
};

void displayquiz(quiz questions)
{
cout<<questions.statement<<endl;
for(int i = 0; i < 3; i++){
    cout<<i +1<<", "<<questions.choice[i]<<"\n";
}
count += 1;
}

void acceptAnswer(quiz questions, int realAnswer){
    int answer;
    cout<<"insert your choice 1 - 3 : ";
    cin>>answer;
if(answer == realAnswer){
    cout<<" correct!";
    result++;
}
else{
    cout<<" incorrect";
    cout<<"\nthe answer is "<<questions.choice[realAnswer-1];
}
}

void showResult(){
    if(result >= 7){
        cout<<"\nyou are brilliant"<<" you got "<<result<<" out of "<<count<<"!";
    }
    else{
    cout<<"\nyou finished your quiz and you got "<<result<<" out of "<<count<<"!";
    }
}

int main (){

    cout<< " ---------------- QUIZ TIME ----------------- ";
    int answer;
quiz question1;
question1.statement = "\nhow many continents are there on the planet earth? ";
// getline(cin, question1.statement);
question1.choice[0] =  "5";
question1.choice[1] =  "6";
question1.choice[2] =  "7";
//question1.answer = 3;
displayquiz(question1);
acceptAnswer(question1, 3);


quiz question2;
question2.statement = "\nwhat is the longest river called? ";
question2.choice[0] =  "Mississippi";
question2.choice[1] =  "Nile";
question2.choice[2] =  "Awash";
//question2.answer = 2;
displayquiz(question2);
acceptAnswer(question2, 2 );

quiz question3;
question3.statement = "\nhow many langauges can a man speak in maximum? ";
question3.choice[0] =  "4";
question3.choice[1] =  "3";
question3.choice[2] =  "5";
//question3.answer = 1;
displayquiz(question3);
acceptAnswer(question3, 1);

quiz question4;
question4.statement = "\nWhich is the only body part that is fully grown from birth? ";
question4.choice[0] =  "Eyes";
question4.choice[1] =  "Ears";
question4.choice[2] =  "palm";
//question4.answer = 1;
displayquiz(question4);
acceptAnswer(question4, 1);

quiz question5;
question5.statement = "\nIn what country was Elon Musk born?  ";
question5.choice[0] =  "England";
question5.choice[1] =  "South Africa";
question5.choice[2] =  "North America";
//question5.answer = 2;
displayquiz(question5);
acceptAnswer(question5, 2);

quiz question6;
question6.statement = "\nWhat planet is closest to the sun?   ";
question6.choice[0] =  "Mercury";
question6.choice[1] =  "Earth";
question6.choice[2] =  "Venus";
//question6.answer = 1;
displayquiz(question6);
acceptAnswer(question6, 1);

quiz question7;
question7.statement = "\nWhat is the only continent with land in all four hemispheres?  ";
question7.choice[0] =  "Europe";
question7.choice[1] =  "Africa";
question7.choice[2] =  "Asia";
//question7.answer = 2;
displayquiz(question7);
acceptAnswer(question7, 2);

quiz question8;
question8.statement = "\nWhat country has won the most World Cups?   ";
question8.choice[0] =  "Brazil";
question8.choice[1] =  "France";
question8.choice[2] =  "Germany";
//question8.answer = 1;
displayquiz(question8);
acceptAnswer(question8, 1);

quiz question9;
question9.statement = "\nWhat does CIA stand for?  ";
question9.choice[0] =  "Centeral Insider Analysis";
question9.choice[1] =  "Centeral International Acquaintance";
question9.choice[2] =  "Central Intelligence Agency";
//question9.answer = 3;
displayquiz(question9);
acceptAnswer(question9, 3);

quiz question10;
question10.statement = "\nHow many rings is the Olympic symbol made up of?  ";
question10.choice[0] =  "Six";
question10.choice[1] =  "Four";
question10.choice[2] =  "Five";
//question10.answer = 1;
displayquiz(question10);
acceptAnswer(question10, 2);
showResult();

}
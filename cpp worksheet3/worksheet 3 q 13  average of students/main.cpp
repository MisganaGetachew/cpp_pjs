// writing a c++ program that accept and calcualte the average of five students
#include <iostream>

using namespace std;

int main()
{   // declaring variables for the sum, the average, and the mark of the student
    double sum = 0, average, mark;
    int i = 1;


    cout << "Calculating the average of 5 students" << endl; // for what the progrma is for
    cout << "-------------------------------------\n";

    // keep the loop running until some condition is met
    while(i <= 5)
    {
    cout << "Enter the mark of student " << i << ": ";
    cin >> mark;

    // take the number if it is between zero and hundered
    if(mark >= 0 && mark <= 100)
    {
    sum = sum + mark;
    i++;

    }
    else if(charact)
    {
    cout << "Please enter a number";
    }
    else // else if the number is not in the domain tell the user to correct it
    {
    cout << "Invalid! please enter a number between 0 and 100" << endl;
    }

    }
    average = sum / 5; // calculate the average by dividing the sum by 5
    cout << "\nThe average of the five students is " << average<< endl; // display the average of the students

    return 0;
}

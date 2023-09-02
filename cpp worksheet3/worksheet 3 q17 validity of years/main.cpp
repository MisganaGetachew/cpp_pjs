// writing a c++ program that check the validity of date
#include <iostream>

using namespace std;

int main()
{

   int day, month, year; // declaring varialbles for days months and year, i'm uisng int as it can't contain decimal.
    cout << "\nChecking the validity of a date" << endl; // letting the users know what the program is for
    cout << "-------------------------------" << endl;// separation line

    while(true)
    {
   cout << "Enter a date (dd mm yyyy): ";
   cin >> day >> month >> year; // taking day, month and year from the user

    if(year > 0)// since year can't be negative

    {
    // for months that have 31 days
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
    if(day > 0 && day <= 31) // if day is between 1 and 31 display that it is valid date
    {
    cout << day << "/" << month << "/" << year << " is a valid date" << endl;
    }
    else
    {
    cout << "Invalid day of month: " << day << endl; // display invalid day for months below 1 or above 31
    }

    } // for months that have 30
    else if(month == 4 || month == 6 || month == 9 || month == 11)
    {
    if( day > 0 && day <= 30) // if day is between 1 and 30 including 1 and 30 display its a valid date
    {
    cout << day << "/" << month << "/" << year << "is a valid date" <<endl;
    }
    else
    {
    cout << "Invalid day of month: " << day; // invalid if the day is below 1 or above 30
    }
    }
    if(month == 2)
    {
    // for leap year

    if(( year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
    {
    if(day > 0 && day <= 29)
    {
    cout << day << "/" << month << "/" << year << " is a valid date" << endl;
    }
    else
    {
    cout << "Invalid day of month "<< day << endl; // else display invalid day if the day is below 1 or above 29
    }
    }
    else if(day > 0 && day <= 28)
    {
    cout << day << "/" << month << "/" << year << " is a valid date" << endl;
    }
    else
    {
     cout << "Invalid day of month " << day << endl; // display invalid day if day is below zero or above 28 as it is not a leap year
    }
    }
    else if(month < 0 || month > 12)
    {
    cout << "Invalid month: "<< month << endl;// month can't be below 1 or above 12 display invalid if so
    }
    }
    else
    {
    cout << "Invalid year: " << year << endl;// invalid year if year is a negative
    }
    }
    return 0;
}

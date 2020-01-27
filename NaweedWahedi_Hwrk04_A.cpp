
//NaweedWahedi
//Homework04_B
//This program will display the number of days in each month.


#include<iostream>

using namespace std;

int main()
 {
     //declare the variables
     int month, year;

     //ask user to enter data
     cout << "Enter a month (1-12): ";
     cin >> month;
     cout << "Enter a year: ";
     cin >> year;
     cout <<endl;
     cout <<"Naweed Wahedi's Days of Month Calculator says:"<<endl;


     //used switch statement to show results on screen.
     switch (month){
        case 1:
             cout << "There are 31 days in January "<<year<<endl;
             break;

        //calculations of leap year
        case 2:
             if(year % 100 == 0)
                 if(year % 400 == 0)

                    cout << "There are 29 days in February "<<year<<endl;
                 else
                    cout << "There are 28 days in February "<<year<<endl;
             else if(year % 4 == 0)
                cout << "There are 29 days in February "<<year<<endl;
             else
                cout << "Ther are 28 days in February "<<year<<endl;
             break;
        case 3:
             cout << "There are 31 days in March "<<year<<endl;
             break;
        case 4:
             cout << "There are 30 days in April "<<year<<endl;
             break;
        case 5:
             cout << "There are 31 days in May "<<year<<endl;
             break;
        case 6:
             cout << "There are 30 days in June "<<year<<endl;
             break;
        case 7:
             cout << "There are 31 days in July "<<year<<endl;
             break;
        case 8:
             cout << "There are 31 days in August "<<year<<endl;
             break;
        case 9:
             cout << "There are 30 days in September "<<year<<endl;
             break;
        case 10:
             cout << "There are 31 days in October "<<year<<endl;
             break;
        case 11:
             cout << "There are 30 days in November "<<year<<endl;
             break;
        case 12:
             cout << "There are 31 days in December "<<year<<endl;
             break;
     }

     //return to zero for successful completion of program.
     cin.ignore();
     cin.get();
     return 0;
 }

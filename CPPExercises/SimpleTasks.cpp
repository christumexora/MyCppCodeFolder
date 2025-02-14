#include <iostream>
using namespace std;

int main(){

/*//          Variables and Data Types

//Use variables to store different data of a college student:
string name = "August";
float regNo = 686196;
string course = "Robotics";
bool ageConfirmation = 1;
int age = 29;
char studentGrade = 'B';
cout << "My details are: " << "\n"; 
cout << "Name: " << name << "\n"; 
cout << "Course: " << course << "\n"; 
cout << "Age: " << age << "\n"; 
cout << "Grade: " << studentGrade << "\n\n"; */


/*//Calculate the area of a rectangle (by multiplying the length and width):
float length;
float width; 
float area;
cout << "Choose a number: ";
cin >> length;
cout << "Choose another number: ";
cin >> width;
area = length * width;
cout << "The area of the rectangle is " << area << "\n\n";*/


/*//Use the weekday number to calculate and output the weekday name:
int weekdayNumber;
cout << "Choose a number between 0 and 6: ";
cin >> weekdayNumber;

switch (weekdayNumber) {
    case 0:
    cout << "Today is Sunday \n";
        break;
    case 1:
    cout << "Today is Monday \n";
        break;
    case 2:
    cout << "Today is Tuesday \n";
        break;
    case 3:
    cout << "Today is Wednesday \n";
        break;
    case 4:
    cout << "Today is Thursday \n";
        break;
    case 5:
    cout << "Today is Friday \n";
        break;
    case 6:
    cout << "Today is Saturday \n";
        break;
    default:
        cout << "Oops...Wrong Selection \n";
}*/


/*//Create a simple "countdown" program:
int countDown = 3;
while(countDown >= 0){
    countDown--;
    if(countDown == 0){
        cout << "Let the match begin\n";
    }
}*/


/*//Use a for loop to create a program that counts to 100 by tens:
int multiplesOfTen = 0;
for(multiplesOfTen = 0; multiplesOfTen <= 100; multiplesOfTen+=10){
    cout << multiplesOfTen << "\n";
}
*/


/*//Use a for loop to create a program that prints the multiplication table of a specified number (2 in this example):
int number, i;     //Declare variables
cout << "Choose a number: ";    //Choose random number
cin >> number;  //Store the input
//iterate between 0 and 20
for(i = 0; i <= 20; i++){
    //multiply values i and number
   int product = number * i;
   cout << number << " x " << i << " = " << product << "\n";
}*/


//Create a program that finds the lowest age among different ages:
 int age[] = [10, 17, 5, 2, 7, 25];
return 0;
}


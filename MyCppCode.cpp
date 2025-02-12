#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <set>
using namespace std;

/*
int main() {
  int x, y;
int sum;
cout << "Type a number: ";
cin >> x;
cout << "Type another number: ";
cin >> y;
sum = x + y;
cout << "Sum is: " << sum; 

int x;
cout << "Type a number";
cin >> x;
cout << "Input number is " << x;


int time = 20;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result;



int doorCode;
cout << "Please enter the lock code";
cin >> doorCode;
if (doorCode == 1759){
  cout << "Code accepted.\nThe door is now open.\n";
} else{
  cout << "Wrong code.\nAccess Denied.\n";
}


int countdown = 3;

while (countdown > 0) {
  cout << countdown << "\n";
  countdown--;
}
cout << "Happy New Year!!\n";


 // Outer loop
for (int i = 1; i <= 2; ++i) {
  cout << "Outer: " << i << "\n"; // Executes 2 times
  // Inner loop
  for (int j = 1; j <= 3; ++j) {
    cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
  }
}
*/

/*//In this example we print the powers of 2 up to 512:
for (int i = 2; i <=512; i*=2){
  cout << "Number:" << i << "\n";
}*/


/*// We print the multiplication table for any number till 10:
int num;
cout << "Please enter a random number";
cin >> num;
for (int i = 1; i <=10; i++){
  cout << num << "x" << i << "=" << i * num << "\n";
}*/

/*// Create an array of strings
string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

// Loop through strings
for (int i = 0; i < 5; i++) {
  cout << cars[i] << "\n";
} */


/* //This example outputs the index of each element together with its value:
string cars[] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    
    // Calculate the size of the array
    int size = sizeof(cars) / sizeof(cars[0]); //This is a standard formular for determining the size of an array in cpp
    
    // Loop through the array and print each index with its corresponding value
    for (int i = 0; i < size; i++) {
        cout << "Index " << i << ": " << cars[i] << endl;
    } */

   /*int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
   float avrg, sum = 0;
   int i;
   int size = sizeof(ages)/ sizeof(ages[0]);
   for (int age: ages){
    sum += age;
   }
   avrg = sum/size;
    cout << "The total average is " << avrg << "\n";
    */


/*
 // Code checks and Outputs the Lowest age in an Array
int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
int i;
int size = sizeof(ages) / sizeof(ages[0]);
int lowestAge = ages[0];
 for (int age : ages){
if(lowestAge > age){
  lowestAge = age;
  cout<< lowestAge << " is the lowest age"<<"\n";
 }
 }
 */


/*
// REAL-LIFE EXAMPLES  PROJECT 1

//ARRAYS: MultiDimensional Arrays
//Using a multi-dimensional array to represent a small game of Battleship:
// We put "1" to indicate there is a ship.
bool ships[4][4] = {
  { 0, 1, 1, 0 },
  { 0, 0, 0, 0 },
  { 0, 0, 1, 0 },
  { 0, 0, 1, 0 }
};
// Keep track of how many hits the player has and how many turns they have played in these variables
int hits = 0;
int numberOfTurns = 0;
// Allow the player to keep going until they have hit all four ships
while (hits < 4) {
  int row, column;
  cout << "Selecting coordinates\n";
  // Ask the player for a row
  cout << "Choose a row number between 0 and 3: ";
  cin >> row;
  // Ask the player for a column
  cout << "Choose a column number between 0 and 3: ";
  cin >> column;
  // Check if a ship exists in those coordinates
  if (ships[row][column]) {
    // If the player hit a ship, remove it by setting the value to zero.
    ships[row][column] = 0;
    // Increase the hit counter
    hits++;
    // Tell the player that they have hit a ship and how many ships are left
    cout << "Hit! " << (4 - hits) << " left.\n\n";
  } else {
    // Tell the player that they missed
    cout << "Miss\n\n";
  }

  // Count how many turns the player has taken
  numberOfTurns++;
}

cout << "Victory!\n";
if(numberOfTurns <= 6){
  cout << "You won in " << numberOfTurns << " turns🦾💪\n";
} else{
  cout << "You won in " << numberOfTurns << " turns\n";
}
*/

/*
//C++ Structures: Unlike an array, a structure can contain many different data types (int, string, bool, etc.).
// Declare a structure named "car"
struct car {
  string brand;
  string model;
  int year;
};

int main() {
  // Create a car structure and store it in myCar1;
  car myCar1;
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

  // Create another car structure and store it in myCar2;
  car myCar2;
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;
 
  // Print the structure members
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
 */


/*
  // C++ Enums:   Why And When To Use Enums?
//Enums are used to give names to constants, which makes the code easier to read and maintain.
//Use enums when you have values that you know aren't going to change, like month days, days, colors, deck of cards, etc.
  
  enum Level {
    LOW = 1,
    MEDIUM,
    HIGH
  };
  int main(){
    enum Level myVar = MEDIUM;
    switch (myVar) {
    case 1:
      cout << "Low Level";
      break;
    case 2:
      cout << "Medium level";
      break;
    case 3:
      cout << "High level";
      break;
    }
    


// REFERENCES AND POINTERS

//REFERENCES
//And why is it useful to know the memory address?
//References and Pointers (which you will learn about in the next chapter) are important in C++, because they give you the ability to manipulate the data in the computer's memory - which can reduce the code and improve the performance.
//These two features are one of the things that make C++ stand out from other programming languages, like Python and Java.

string food = "Pizza";
string &meal = food;

cout << "\n" << food << "\n";  // Outputs Pizza
cout << meal << "\n";  // Outputs Pizza
cout << &food <<"\n\n\n";


//POINTERS

string* ptr = &meal;    // Pointer declaration....A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
cout << meal << "\n";

// Output the memory address of food (0x6dfed4)
cout << &meal << "\n";

// Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n\n\n";


//DEREFERENCING

// Dereference: Output the value of food with the pointer (Pizza)
cout << *ptr << "\n\n";


//Modifying Pointer Value

// Change the value of the pointer
*ptr = "Hamburger";
// Output the new value of the pointer (Hamburger)
cout << *ptr << "\n";
// Output the new value of the food variable (Hamburger)
cout << food << "\n";

    return 0;
  
  }
*/



//FUNCTIONS

/*
// Void Functions
void myFunction(string fname = "August", int age = 5) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);


  return 0;
}



// Passing Values to Functions

  int myFunction(int x, int y) {
  return x + y;
}

int main() {
  int z = myFunction(5, 3);
  cout << z;
  return 0;
}



// Passing Reference By Integers

void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}



// Passing Reference By Strings

void modifyStr(string &str) {
  str += " World!";
}

int main() {
  string greeting = "Hello";
  modifyStr(greeting);
  cout << greeting;
  return 0;
}



// Passing Arrays as Function Parameters

void myFunction(int myNumbers[], int arrLen) {
  for (int i = 0; i < arrLen; i++) {
    cout << myNumbers[i] << "\n";
  }
}

int main() {
  int myNumbers[] = {10, 20, 30, 40, 50};
  int arrLen = sizeof(myNumbers) / sizeof(myNumbers[0]);
  myFunction(myNumbers, arrLen);
  return 0;
}
*/



/*
// REAL-LIFE EXAMPLES  PROJECT 2

//Program That Converts Fahrenheit to Centigrade

// Function Declaration
float toCelcius(float degF){
// Fuction Definition which performs the math operation
 return (degF-32) * 5/9;
}

int main(){
  float degF;
  // Request for data.
  cout << "Enter the value of the temperature in Fahrenheit: ";
  // Store the data.
  cin >> degF;
  //Call the function with the fahrenheit value
  float degC = toCelcius(degF);
  //Print the result
  cout << degF <<"F, when converted to celcius gives " << degC << " degrees celcius\n";
  return 0;
}
*/



// Function Overloading

/*
int plusFuncInt(int x, int y) {
  return x + y;
}

double plusFuncDouble(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFuncInt(8, 5);
  double myNum2 = plusFuncDouble(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2 << "\n\n\n";
  return 0;
}


// This code can be Refactored better below which is called FUNCTION OVERLOADING


int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2 << "\n";
  return 0;
}
*/


/*
// C++ OOP PROGRAMMING


// CLASSES AND OBJECTS

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Hello World \n";

  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  return 0;
}

// CREATING MULTIPLE OBJECTS FROM A CLASS

// Create a Car class with some attributes
class Car {
  public:
    string brand;   
    string model;
    int year;
};

int main() {
  // Create an object of Car
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  // Create another object of Car
  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  // Print attribute values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}
*/

/*
// CLASS METHODS

// Methods are functions that belongs to the class.
// There are two ways to define functions that belongs to a class:
// Inside class definition
// Outside class definition
// In the following example, we define a function inside the class, and we name it "myMethod".

// Note: You access methods just like you access attributes; by creating an object of the class and using the dot syntax (.):

// Inside Class Definition

class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}

// Outside Class Definition.

// To define a function outside the class definition, you have to declare it inside the class and then define it outside of the class. This is done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function:

class MyClass {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}


// Adding Parameters to Classes:

class Car {
  public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
  return maxSpeed;
}

int main() {
  Car myObj; // Create an object of Car
  cout << myObj.speed(200) << "\n"; // Call the method with an argument
  return 0;
}





// ENCAPSULATION - Setter and Getter Methods

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter    Assigns value to the private attribute
    void setSalary(int s) {
      salary = s;
    }
    // Getter    Returns the value of the private attribute
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary() << "\n";
  return 0;
}
*/



int main(){
// DATA_STRUCTURES

// VECTORS (RESIZABLE ARRAYS)......

//MANIPULATING VECTORS

// Create a vector called cars that will store strings
vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Get the second element
cout << cars[1] << "\n";  // Outputs Volvo

// Get the second element..........THIS IS PREFARABLE SO AS TO CHECK FOR ERRORS EASILY
cout << cars.at(1) << "\n";

// Get the first element
cout << cars.front() << "\n";

// Get the last element
cout << cars.back() << "\n\n\n";

// Add Vector Elements
cars.push_back("Tesla");
cars.push_back("VW");
cars.push_back("Mitsubishi");
cars.push_back("Mini");

// Remove Vector Elements
cars.pop_back();

// Loop Through a Vector
for (string car : cars){
  cout << car << "\n";
}

// Print The Size of The Vector
cout << cars.size() << "\n"; 

// Checks If A Vector Is Empty
cout << cars.empty() << "\n";   //OUTPUTS 1 IF EMPTY AND 0 IF NOT EMPTY




//  LIST
/* DIFFERENT BETWEEN LIST AND VECTOR..... VECTOR CAN'T ADD/DELETE AN ELEMENT 
  TO THE FRONT BUT LIST CAN ADD/DELETE USING push_front/pop_front......
  ALSO, LIST CANNOT ALTER OR CALL RANDOM ELEMENTS APART FROM THE FIRST AND LAST ELEMENTS

// Change the value of the first element
 cars.front() = "Opel";

// Change the value of the last element
 cars.back() = "Toyota";
*/




//  STACK

/* A stack stores multiple elements in a specific order, called LIFO.

LIFO stands for Last in, First Out. To vizualise LIFO, think of a pile of pancakes, 
where pancakes are both added and removed from the top. So when removing a pancake, 
it will always be the last one you added. This way of organizing elements is called 
LIFO in computer science and programming.

Unlike vectors, elements in the stack are not accessed by index numbers. Since 
elements are added and removed from the top, you can only access the element 
at the top of the stack.

Note: The type of the stack (string in our example) cannot be changed after its been declared.

Note: You cannot add elements to the stack at the time of declaration, like you can with vectors:
*/


// Create a stack of strings called cars
stack<int> nums;

// Add elements to the stack
nums.push(15);
nums.push(16);
nums.push(17);
nums.push(18);
nums.push(19);
nums.push(20);

// Print the First Element of The Stack
cout << nums.top() << "\n";





//   C++ SET
/*
A set stores unique elements where they:

Are sorted automatically in ascending order.
Are unique, meaning equal or duplicate values are ignored.
Can be added or removed, but the value of an existing element cannot be changed.
Cannot be accessed by index numbers, because the order is based on sorting and not indexing.
To use a set, you have to include the <set> header file:
*/

// Create a set called cars that will store strings
set<string> vehicles;

// Add Vector Elements
vehicles.insert("Tesla");
vehicles.insert("VW");
vehicles.insert("Mitsubishi");
vehicles.insert("Mini");
vehicles.insert("Tesla");
vehicles.insert("VW");
vehicles.insert("Toyota");
vehicles.insert("Audi");

// Remove Vector Elements
cars.erase("Audi");



// Print set elements
for (string vehicle : vehicles) {
  cout << vehicle << "\n";
}
}
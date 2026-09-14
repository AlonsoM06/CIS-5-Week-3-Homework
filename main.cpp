#include <iostream>
#include <string>
using std::cout;
using std::endl;
// Homework 3 — Alonso Martinez
// CIS 5 Week 03 · Types & variables

int main() {
  const int CURRENT_YEAR = 2026;


  std::cout << "=== About me ===\n";
  cout << "Name: Alonso" << endl ;
  const int AGE = 23;
  cout << "Age: " << AGE << endl;
  double big_number = 5.8;
  cout << "Height:" << big_number << endl;
  char letter = 'A';
  cout << "Initial: " << letter << endl;
  bool student = true;
  cout << "Student:" << student << endl;
  const int YEAR = 2026;
  cout <<"Year: " << YEAR << endl;
  const int CREDIT = 15;
  cout << "Credit: " << CREDIT << endl;
  double small_number = 3.1;
  cout << "GPA: " << small_number << endl;
  cout << "Alonso is 23, he is 5.8 ft, initial is A, He is a student, the current year is 2026, he is taking 15 credits and has a 3.1 gpa" << endl;
  letter = 'B';
  cout << "After A: " << letter << endl;
  big_number = 8.9;
  cout << "New Height: " << big_number << endl;
  
  //Old value for letter was A, New value is B, console followed because char can hold one letter at a time, so it looks for the current value that = to letter at the moment, same thing with big_number 
  //we use double because it can hold decimal numbers like height and gpa 
  // We use const int year because it can hold a large value and also cannot be changed once assigned for the rest of the code 


  //char letter ="BM"; // would not compile because char can only hold one letter
  //bool student = "correct" // would not compile because the computer expects a true or false response. 
  
  
  
 
  return 0;
}

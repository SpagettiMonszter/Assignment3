/*
Name: Tess, NSHE: 8000138541, CLASS-SECTION: CS202.1001, ASSIGNMENT: 3
Purpose: Multiple classes, Inheritance, Composition
Description: University Scorecard
Input: main.cpp is a Driver class in this assignment. Objects of different 
classes are declared in main.cpp using constructors, setters and 
other functions.
What to do?: You have to check studentID based on given conditions, 
calculate - GPA, credits fulfilled, credits to go, Fee, etc.
Output: You write the output on the terminal itself. You print all valid and 
        invalid entries; print error messages for invalid entries accordingly. 
        Check example output for more details.
*/
#ifndef STUDENTINFO_H
#define STUDENTINFO_H
#include<string>
using namespace std;

class studentInfo{
public:
    studentInfo(); //Default constructor
    
    studentInfo(string fName, string lName, int bMonth);
   // parameterized constructor
   //Sets firstName, lastName, and birthMonth according to the parameters.
   //The default values of the parameters are empty strings.

    void setStudentInfo(string fName, string lName, int bMonth);
    
    void setName(string fName, string lName);
   //Function to set firstName and lastName according 
   //to the parameters.

   string getFirstName() const;
   //Function to return the first name.
      
   string getLastName() const;
   //Function to return the last name.

   void print() const;
       

 private:
   string firstName; //variable to store the first name
   string lastName;  //variable to store the last name
   int birthMonth; //variable to store the birth month

};
#endif
/*
63
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
#include<iostream>
#include<iomanip>
#include "studentInfo.h"
#include "studentGradeDetails.h"
#include "studentType.h"
#include "calculateFee.h"


using namespace std;

int main()
{
    string poundSigns;
    poundSigns.append(70, '#');
    string spaceBars;
    spaceBars.append(10, ' ');
    cout << endl << poundSigns << endl;

    cout<< spaceBars;
    cout << "Welcome to University of Science and Technology";

    cout << endl << poundSigns << endl << endl;
    
    //parameterized constructors
    studentType Young("you11ug", "Mark", "Young", 11, 'A', 'B', 'C', 'A', 12, 120);
    Young.printStudentTypeData();

    studentType Miller("mil08gr", "David", "Miller", 8, 'B', 'B', 'B', 'B', 12, 26);
    Miller.printStudentTypeData();
    
    studentType White("whi04uu", "Lisa", "White", -04, 'C', 'A', 'B', 'C', 12, 124);
    White.printStudentTypeData(); //Invalid last 2 chars, studentID, birthMonth
    
    studentType James("JAM01ug", "Nicholas", "James", 01, 'A', 'A', 'A', 'A', 12, 120);
    James.printStudentTypeData();
    
    studentType John("Wil02gr", "John", "Williams", 02, 'B', 'C', 'C', 'C', 12, 30);
    John.printStudentTypeData();
    
    studentType Anthony("CLA04gr", "Anthony", "Clark", 04, 'A', 'A', 'C', 'B', 12, 32);
    Anthony.printStudentTypeData();
    
    studentType Garcia("Kar03gr", "Karen", "Garcia", 11, 'C', 'A', 'A', 'C', 12, 30);
    Garcia.printStudentTypeData();
    
    studentType Janet("Sha9gr", "Janet", "Shaw", 9, 'B', 'B', 'D', 'B', 12, 30);
    Janet.printStudentTypeData(); //Invalid ID - Less than 7 characters
    
    studentType Weaver("07WEAgr", "Noah", "Weaver", 07, 'A', 'K', 'B', 'B', 12, 120);
    Weaver.printStudentTypeData(); //Invalid ID - alphabets, digit; Invalid Grade Entry

    
    cout << endl << poundSigns << endl << endl;
    cout << "Using Setter Function to" 
    << "\nFix Previous Invalid Entries";
    cout << endl << poundSigns << endl << endl;

    White.setStudentDetails("whi04ug", "Lisa", "White", 4, 'C', 'A', 'B', 'C', 12, 124);
    White.printStudentTypeData(); //Valid

    Janet.setStudentDetails("Sha09gr", "Janet", "Shaw", 9, 'B', 'B', 'D', 'B', 12, 30);
    Janet.printStudentTypeData(); //Valid

    cout << endl << poundSigns << endl << endl;
    cout << "Default Constructor and Setter Function" << endl;
    cout << endl << poundSigns << endl << endl;
    

    studentType Gomez;//Valid
    Gomez.setStudentDetails("gom05ug", "Emily", "Gomez", 05, 'A', 'A', 'F', 'B', 12, 120);	
    Gomez.printStudentTypeData();
    
    studentType Ortiz; //Invalid grade, Invalid credits
    Ortiz.setStudentDetails("ort11gr", "Laura", "Ortiz", 11, 'B', 'F', 'G', 'B', -12, 34); 
    Ortiz.printStudentTypeData();
    
    studentType Webb; //Invalid birth month, Invalid credits taken
    Webb.setStudentDetails("jer04gr", "Jerry", "Webb", -4, 'F', 'F', 'Z', 'D', -12, 30);
    Webb.printStudentTypeData();

    
    cout << endl << poundSigns << endl << endl;
    cout << "Calculate Fee for Under Graduate and Graduate Students" << endl;
    cout << endl << poundSigns << endl << endl;
        
    calculateFee GarciaFee("Kar03gr", Garcia);
    GarciaFee.printAllStudentData();
    
    calculateFee GomezFee("gomo5ug", Gomez); // Invalid ID mismatch
    GomezFee.printAllStudentData();
    
    calculateFee AnthonyFee("CLA03gr", Anthony); // Invalid ID mismatch
    AnthonyFee.printAllStudentData();
    
    calculateFee OrtizFee("ort11gr", Ortiz);
    OrtizFee.printAllStudentData();
    
    calculateFee WebbFee("jer04gr", Webb);
    WebbFee.printAllStudentData();

    calculateFee YoungFee("you11ug", Young);
    YoungFee.printAllStudentData();
    
    calculateFee JamesFee("JAM01ug", James);
    JamesFee.printAllStudentData();
    
    

    cout << endl << poundSigns << endl;

    return 0;
}

/*
Name: KISHORE, NSHE: ABC123, CLASS-SECTION: CS202, ASSIGNMENT: 3
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
#ifndef CALCULATEFEE_H
#define CALCULATEFEE_H

#include "studentInfo.h"
#include "studentGradeDetails.h"
#include "studentType.h"
#include<iomanip>

class calculateFee{
public:
    calculateFee(); //Default constructor

    calculateFee (string id, studentType stdObj);

    void setFeeInfo(string id, studentType stdObj);
    void setID(string id);
    string getID() const;
    double getFeeAmount() const;

    void printAllStudentData() const;

private:
    string ID;
    double gradFee = 660.00;
    double underGradFee = 456.00;
    double feeAmount;
    studentType stdTypeObj;

};

#endif




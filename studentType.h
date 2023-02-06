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
#ifndef GRADUATESTUDENT_H
#define GRADUATESTUDENT_H
#include<string>
#include "studentInfo.h"
#include "studentGradeDetails.h"
using namespace std;

class studentType: public studentInfo
{
public:
    studentType();
    studentType(string ID, string fName, string lName,
                int bMonth, char c1g, char c2g, char c3g, char c4g,
                int credsTaken, int credsReqd);
    

    void setStudentDetails(string ID, string fName, string lName,
                int bMonth, char c1g, char c2g, char c3g, char c4g,
                int credsTaken, int credsReqd);
    void setStudentID(string ID);
    string getStudentID() const;
    int getCreditsRequired() const;
    void calculateCreditstoGo();
    int getCreditstoGo() const;

    bool checkStudentID(string idTemp) const;
    void printStudentTypeData() const;


private:
    string studentID;
    int creditsRequired;
    int creditstoGo;
    studentGradeDetails grDetails;

};

#endif

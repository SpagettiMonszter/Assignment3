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
#ifndef STUDENTGRADEDETAILS_H
#define STUDENTGRADEDETAILS_H
#include<string>
using namespace std;
class studentGradeDetails{
public:
    studentGradeDetails(); //Default constructor
    studentGradeDetails(char c1g, char c2g, char c3g, char c4g, 
                        int credsTaken);
    void setGradeDetails(char c1g, char c2g, char c3g, char c4g, 
                        int credsTaken);
    void calculateGPA(char c1g, char c2g, char c3g, char c4g);
    void calculateCreditsEarned(char c1g, char c2g, char c3g, char c4g);
    double getGPA() const;
    int getCreditsEarned() const;
    void printData() const;

private:
    double GPA;
    int creditsEnrolled;
    int creditsFulfilled;
    char c1Grade;
    char c2Grade;
    char c3Grade;
    char c4Grade;
};

#endif
//
// Created by steierjo on 3/15/2017.
//

#include <iostream>
#include "GradeBook.h"
using namespace std;
GradeBook:: GradeBook(string name) {
    setCourseName(name);
}
void GradeBook::setCourseName(string name) {
    if (name.length() <= 25)
        courseName = name;
    else {
        courseName = name.substr(0, 25);
        cout << "Name \ """ << name << "\" exceeds maximum length(25). \n"
             << "Limiting coursename to first 25 characters.\n" << endl;
    }
}
string GradeBook::getCourseName(){
    return courseName;
}
void GradeBook::displayMessage() {
    cout << "Welcome to the gradebook for \n" << getCourseName() << "!\n" << endl;
}
void GradeBook:: determineClassAverage() {
    int total;
    int gradeCounter;
    int grade;
    int average;
    //initialize
    total = 0;
    gradeCounter = 1;
    while (gradeCounter <= 10) {
        cout << "Enter grade: ";
        cin >> grade;
        total = total + grade;
        gradeCounter = gradeCounter + 1;
    }
    average = total / 10;
    cout << "\n Total of all 10 is :" << total << endl;
    cout << "Class average is: " << average << endl;
}


    }



}

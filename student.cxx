/*
* Name: Gerard Abuyuan
* Email: gabuyuan@scu.edu
* Assignment: Homework #5: Linked List
* 4 of 4
*/
#include "scuclass.h"

namespace coen79 {
    Student::Student() {}

    std::string Student::getStudentID() const
    {
        return studentID;
    }

    std::string Student::getFirstName() const
    {
        return firstName;
    }

    void Student::setStudentID(const std::string& id)
    {
        studentID = id;
    }

    void Student::setFirstName(const std::string& fName)
    {
        firstName = fName;
    }

    std::ostream& operator<<(std::ostream& os, const Student& student) {
        std::cout << "Student ID: " << student.getStudentID() << std::endl;
        std::cout << "First Name: " << student.getFirstName() << std::endl;
        
        return os;
    }
}

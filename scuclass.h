
#ifndef SCUCLASS_H
#define SCUCLASS_H

#include <iostream>
#include <string>
#include <vector>

namespace coen79 {
    class Student {
    private:
        std::string studentID;
        std::string firstName;
        std::string lastName;

    public:
        Student();

        std::string getStudentID() const;
        std::string getFirstName() const;
        std::string getLastName() const;
        void setStudentID(const std::string& id);
        void setFirstName(const std::string& firstName);
        void setLastName(const std::string& lastName);

        friend std::ostream& operator<<(std::ostream& os, const Student& student);
    };

    class SCUClass {
    private:
        std::vector<Student> students;

    public:
        SCUClass();

        void addStudent(const Student& student);
        void erase(const std::string& studentID);
        void list() const;

        friend std::ostream& operator<<(std::ostream& os, const SCUClass& scuClass);
    };
}

#endif


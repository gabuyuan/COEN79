/*
* Name: Gerard Abuyuan
* Email: gabuyuan@scu.edu
* Assignment: Homework #5: Linked List
* 1 of 4
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include "scuclass.h"

using namespace coen79;
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <input_file>" << endl;
        return 1;
    }

    SCUClass coen79;

    try {
        ifstream inputFile(argv[1]);
        if (!inputFile.is_open()) {
            cerr << "Error opening input file: " << argv[1] << endl;
            return 1;
        }

        string line;
        while (getline(inputFile, line)) {
            stringstream ss(line);
            string command, studentID, firstName;

            ss >> command;
            if (command == "A") {
                try {
                    ss >> studentID;
                    getline(ss, firstName);
                    firstName = firstName.substr(1); // Remove the leading space
                    Student student;
                    student.setStudentID(studentID);
                    student.setFirstName(firstName);
                    coen79.addStudent(student);
                } catch (const std::exception& e) {
                    cerr << "Error while adding a student: " << e.what() << endl;
                }
            } else if (command == "X") {
                try {
                    ss >> studentID;
                    coen79.erase(studentID);
                } catch (const std::exception& e) {
                    cerr << "Error while erasing a student: " << e.what() << endl;
                }
            } else if (command == "L") {
                coen79.list();
            } else {
                cerr << "Invalid command: " << line << endl;
            }
        }
        inputFile.close();
    } catch (const std::exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}
    

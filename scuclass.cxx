#include "scuclass.h"

using namespace std;

namespace coen79 {
    SCUClass::SCUClass() {}

    void SCUClass::addStudent(const Student& student) {
        students.push_back(student);
    }

    void SCUClass::erase(const std::string& studentID) {
        for (auto it = students.begin(); it != students.end(); ++it) {
            if (it->getStudentID() == studentID) {
                students.erase(it);
                cout << "Student with ID " << studentID << " has been removed" << endl;
                return;
            }
        }
        cerr << "Error: Student with ID " << studentID << " was not found" << endl;
    }

    void SCUClass::list() const {
        if (students.empty()) {
            cout << "No students in the list." << endl;
        } else {
            cout << "List of students: " << endl;
            for (const auto& student : students) {
                cout << student;
            }
        }
    }
}


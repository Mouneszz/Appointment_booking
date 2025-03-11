#ifndef PATIENT_H
#define PATIENT_H

#include <string>

class Patient {
public:
    std::string name;
    int age;
    std::string issue;

    Patient(std::string pName, int pAge, std::string pIssue);
    void display() const;
};

#endif

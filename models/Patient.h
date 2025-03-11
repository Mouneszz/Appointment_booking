#ifndef PATIENT_H
#define PATIENT_H

#include <string>

class Patient {
public:
    std::string name;
    int age;

    Patient(std::string patName, int patAge);
    void display() const;
};

#endif

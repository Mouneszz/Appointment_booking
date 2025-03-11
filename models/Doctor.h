#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>

class Doctor {
public:
    std::string name;
    std::string specialty;

    Doctor(std::string docName, std::string docSpecialty);
    void display() const;
};

#endif

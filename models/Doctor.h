#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>

class Doctor {
public:
    int id;
    std::string name;
    std::string specialization;

    Doctor(int docId, std::string docName, std::string spec);
    void display() const;
};

#endif

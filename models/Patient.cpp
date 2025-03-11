#include "Patient.h"
#include <iostream>

Patient::Patient(std::string pName, int pAge, std::string pIssue) 
    : name(pName), age(pAge), issue(pIssue) {}

void Patient::display() const{
    std::cout << "Patient: " << name << ", Age: " << age << ", Issue: " << issue << "\n";
}

#include "Patient.h"
#include <iostream>

Patient::Patient(std::string patName, int patAge) {
    name = patName;
    age = patAge;
}

void Patient::display() const {
    std::cout << "Patient: " << name << " | Age: " << age << std::endl;
}

#include "Doctor.h"
#include <iostream>

Doctor::Doctor(std::string docName, std::string docSpecialty) {
    name = docName;
    specialty = docSpecialty;
}

void Doctor::display() const {
    std::cout << "Doctor: " << name << " | Specialty: " << specialty << std::endl;
}

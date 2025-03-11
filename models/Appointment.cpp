#include "Appointment.h"
#include <iostream>

Appointment::Appointment(Doctor doc, Patient pat, std::string appDate)
    : doctor(doc), patient(pat), date(appDate) {}

void Appointment::display() const {
    std::cout << "Appointment Details:\n";
    doctor.display();
    patient.display();
    std::cout << "Date: " << date << "\n";
}

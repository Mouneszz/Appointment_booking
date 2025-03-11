#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include "Doctor.h"
#include "Patient.h"
#include <string>

class Appointment {
public:
    Doctor doctor;
    Patient patient;
    std::string date;

    Appointment(Doctor doc, Patient pat, std::string appDate);
    void display() const;
};

#endif

#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include "Doctor.h"
#include "Patient.h"

class Appointment {
public:
    Doctor doctor;
    Patient patient;

    Appointment(Doctor d, Patient p);
    void display() const;
};

#endif

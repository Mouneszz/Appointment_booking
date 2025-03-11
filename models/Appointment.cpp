#include "Appointment.h"
#include <iostream>
using namespace std;
Appointment::Appointment(Doctor d, Patient p) : doctor(d), patient(p) {}

void Appointment::display() const {
    cout << "Appointment Details...\n";
    doctor.display();
    patient.display();
}

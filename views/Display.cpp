#include "Display.h"
#include <iostream>

void View::showDoctors(const std::vector<Doctor> &doctors) {
    std::cout << "\nAvailable Doctors:\n";
    for (auto &doc : doctors) {
        doc.display();
    }
}
void View::showAppointment(const Appointment &appt) {
    appt.display();
}

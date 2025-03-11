#include "Display.h"
#include <iostream>

void Display::showAppointment(const Appointment& app) {
    std::cout << "\n=== Appointment Summary ===\n";
    app.display();
}

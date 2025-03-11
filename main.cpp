#include "models/Doctor.h"
#include "models/Appointment.h"
#include "views/Display.h"
#include "controllers/BookingController.h"

int main() {
    Doctor doc("Dr. Cooper", "Cardiology");
    Patient pat("Alice", 30);
    Appointment app = BookingController::bookAppointment(doc, pat, "2025-03-12");
    
    Display::showAppointment(app);

    return 0;
}

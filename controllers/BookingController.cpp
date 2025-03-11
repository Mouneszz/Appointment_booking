#include "BookingController.h"

Appointment BookingController::bookAppointment(Doctor doc, Patient pat, std::string date) {
    return Appointment(doc, pat, date);
}

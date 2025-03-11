#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "../models/Doctor.h"
#include "../models/Appointment.h"
#include "../views/Display.h"
#include "../controllers/BookingController.h"
#include <vector>

class Controller {
private:
    std::vector<Doctor> doctors;
    std::vector<Appointment> appointments;
    View view;

public:
    Controller();
    void bookAppointment();
};

#endif

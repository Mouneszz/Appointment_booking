#ifndef DISPLAY_H
#define DISPLAY_H
#include "../models/Appointment.h"
#include "../models/Doctor.h"
#include <vector>

class View {
public:
    void showDoctors(const std::vector<Doctor> &doctors);
    void showAppointment(const Appointment &appt);
};

#endif


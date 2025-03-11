#ifndef BOOKINGCONTROLLER_H
#define BOOKINGCONTROLLER_H

#include "../models/Appointment.h" 



class BookingController {
public:
    static Appointment bookAppointment(Doctor doc, Patient pat, std::string date);
};

#endif

#include "../controllers/BookingController.h"
#include <iostream>

Controller::Controller() {
    doctors.push_back(Doctor(1, "Dr. Smith", "Cardiologist"));
    doctors.push_back(Doctor(2, "Dr. Emily", "Neurologist"));
    doctors.push_back(Doctor(3, "Dr. David", "Orthopedic"));
}

void Controller::bookAppointment() {
    view.showDoctors(doctors);

    int docId;
    std::cout << "\nEnter Doctor ID to book an appointment: ";
    std::cin >> docId;

    if (docId < 1 || docId > doctors.size()) {
        std::cout << "Invalid doctor selection!\n";
        return;
    }

    std::string pName, pIssue;
    int pAge;

    std::cout << "Enter Patient Name: ";
    std::cin >> pName;
    std::cout << "Enter Age: ";
    std::cin >> pAge;
    std::cout << "Enter Health Issue: ";
    std::cin >> pIssue;

    Patient patient(pName, pAge, pIssue);
    Appointment newAppointment(doctors[docId - 1], patient);
    appointments.push_back(newAppointment);

    std::cout << "\n✅ Appointment Booked Successfully!\n";
    view.showAppointment(newAppointment);
}

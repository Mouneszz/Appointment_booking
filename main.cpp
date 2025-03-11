#include <iostream>
#include "controllers/BookingController.h"
int main() {
    Controller systemController;

    while (true) {
        std::cout << "\n==== Doctor-Patient Booking System ====\n";
        std::cout << "1. Book an Appointment\n";
        std::cout << "2. Exit\n";
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            systemController.bookAppointment();
        } else if (choice == 2) {
            std::cout << "Exiting system...\n";
            break;
        } else {
            std::cout << "Invalid choice! Try again.\n";
        }
    }
    return 0;
}


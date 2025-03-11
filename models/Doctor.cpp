#include "Doctor.h"
#include <iostream>
using namespace std;
Doctor::Doctor(int docId, std::string docName, std::string spec) 
    : id(docId), name(docName), specialization(spec) {}

    void Doctor::display() const {
        cout << "Doctor: " << name << " | Specialty: " << specialization<< endl;
    }

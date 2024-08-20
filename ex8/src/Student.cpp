#include "../header/Student.hpp"

void Student::display(){
    std::cout << "\nFull Name: " << this->full_name << " | " << "Age: " << this->age << " | " << "Class Name: " << this->className << std::endl;
}
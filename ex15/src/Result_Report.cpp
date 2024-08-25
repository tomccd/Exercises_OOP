#include "../header/Result_Report.hpp"

void Result_Report::display() const{
    std::cout<< "ID: " << this->id_student << " | " <<"Average Score: " << this->average_score <<  std::endl;
}
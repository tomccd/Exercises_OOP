#include "../header/Teacher.hpp"

/*Display information of this teacher*/
void Teacher::display(){
    std::cout << "ID: " << this->id << " | " << "Full Name: " << this->full_name << " | " << "Home Town: " << this->home_town << " | " << "Gross: " << this->gross_money << " | " << "Bonus: " << this->gross_money << " | " << "Penalty: " << this->penalty_money << "Total Revenue: " << this->calcMoney() << std::endl;
}

/*Calculate the Revenue*/
int Teacher::calcMoney(){
    return this->gross_money + this->bonus_money - this->penalty_money;
}
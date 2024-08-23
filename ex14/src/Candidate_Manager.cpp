#include "../header/Candidate_Manager.hpp"
/*Check if the Date is Valid*/
bool Candidate_Manager::isDateValid(int date, int month, int year) {
    if (year > 1900 && year <= 2024) {
        if (year % 4 != 0) {
            if (month >= 1 && month <= 12) {
                switch (month) {
                case 1:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 2:
                    if (date < 1 || date > 28) {
                        return false;
                    }
                    break;
                case 3:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 4:
                    if (date < 1 || date > 30) {
                        return false;
                    }
                    break;
                case 5:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 6:
                    if (date < 1 || date > 30) {
                        return false;
                    }
                    break;
                case 7:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 8:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 9:
                    if (date < 1 || date > 30) {
                        return false;
                    }
                    break;
                case 10:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 11:
                    if (date < 1 || date > 30) {
                        return false;
                    }
                    break;
                case 12:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                default:
                    return false;
                }
                return true;
            }
        }
        else {
            if (month >= 1 && month <= 12) {
                switch (month) {
                case 1:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 2:
                    if (date < 1 || date > 29) {
                        return false;
                    }
                    break;
                case 3:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 4:
                    if (date < 1 || date > 30) {
                        return false;
                    }
                    break;
                case 5:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 6:
                    if (date < 1 || date > 30) {
                        return false;
                    }
                    break;
                case 7:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 8:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 9:
                    if (date < 1 || date > 30) {
                        return false;
                    }
                    break;
                case 10:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 11:
                    if (date < 1 || date > 30) {
                        return false;
                    }
                    break;
                case 12:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                default:
                    return false;
                }
                return true;
            }
        }
    }
    return false;
}
/*Check if the Name is Valid*/
bool Candidate_Manager::isNameValid(std::string _name) {
    return (_name.length() < 10 || _name.length() > 50) ? false : true;
}
/*Check if the phone number is Valid*/
bool Candidate_Manager::isPhoneNumberValid(std::string _phone_number) {
    /*If Length of Phone Number smaller or larger than 10 character -> invalid*/
    if (_phone_number.length() == 10) {
        std::vector<std::string> valid_3_first_pnum = {
            "090",
            "098",
            "091",
            "031",
            "035",
            "038"
        };
        //std::string sub_str = phoneNumber.substr(0,2);
        //If first character is not 0 -> invalid
        if (_phone_number[0] != '0') {
            return false;
        }
        std::string sub_str = _phone_number.substr(0, 3);
        int counter_valid = 0;
        for (auto valid : valid_3_first_pnum) {
            if (sub_str == valid) {
                counter_valid += 1;
            }
        }
        if (counter_valid == 0) {
            return false;
        }
        for (auto myChar : _phone_number) {
            if (myChar < 48 || myChar >57) {
                return false;
            }
        }
        return true;
    }
    return false;
}

/*Insert new Candidate*/
void Candidate_Manager::insertCandidate(Student* candidate) {
    list_candidate.push_back(candidate);
}

/*Insert pass Candidate*/
void Candidate_Manager::insertPassCandidate() {
    /*If number of Good Student larger than number of expected people*/
    if (countTypeStudent("GoodStudent") > this->number_expected) {
        //List all good Student
        std::vector<Student*>vct_good_st;
        for (auto student : list_candidate) {
            if (student->getType() == "GoodStudent") {
                vct_good_st.push_back(student);
            }
        }

        std::sort(vct_good_st.begin(), vct_good_st.end(), [](Student* a, Student* b) {
           //Sort via Name (Ascending)
           if (a->getGpa() == b->getGpa()) {
                return a->full_name.compare(b->full_name) < 0;
           }
           else {
                //Sort via GPA (Descending)
                return a->getGpa() > b->getGpa();
           }
        });
        int index = 0;
        while (number_expected - number_passed > 0) {
            pass_candidate.push_back(vct_good_st[index]);
            number_passed++;
            index++;
        }
    }
    /*If number of Good Student equal to number expected -> collect all*/
    else if (countTypeStudent("GoodStudent") == this->number_expected) {
        for (auto student : list_candidate) {
            if (student->getType() == "GoodStudent") {
                pass_candidate.push_back(student);
            }
        }
    }
    /*If number of Good Student smaller than number expected -> collect all good student and filter normal Student*/
    else {
        for (auto student : list_candidate) {
            if (student->getType() == "GoodStudent") {
                pass_candidate.push_back(student);
                number_passed++;
            }
        }
        //List all normalStudent and collect them to sort via Toeic and Name
        std::vector<Student*>ls_normal;
        if (countTypeStudent("NormalStudent") >= 1) {
            for (auto student : list_candidate) {
                if (student->getType() == "NormalStudent") {
                    ls_normal.push_back(student);
                }
            }
            std::sort(ls_normal.begin(), ls_normal.end(), [](Student* a, Student* b) {
                //Sort via Toeic
                if (a->getEntryGrade() == b->getEntryGrade()) {
                    return a->getToeicGrade() > b->getToeicGrade();
                }
                else if (a->getToeicGrade() == b->getToeicGrade()) {
                    //Sort via full name
                    return a->full_name.compare(b->full_name) < 0;
                }
                else {
                    //Sort via Entry Test
                    return a->getEntryGrade() > b->getEntryGrade();
                }
                });
            //Collect passCandidate
            int index = 0;
            while (number_expected-number_passed > 0) {
                pass_candidate.push_back(ls_normal[index]);
                number_passed++;
                index++;
            }
        }
        else {
            if (countTypeStudent("NormalStudent") == 1) {
                for (auto candidate : list_candidate) {
                    if (candidate->getType() == "NormalStudent") {
                        pass_candidate.push_back(candidate);
                    }
                }
            }
        }
    }
    if (pass_candidate.size() > 1) {
        /*Sorting Phone Number and Full Name ascending*/
        std::sort(pass_candidate.begin(), pass_candidate.end(), [](Student* a, Student* b) {
            if (a->full_name.compare(b->full_name) == 0) {
                return a->phone_number.compare(b->phone_number) < 0;
            }
            else {
                return a->full_name.compare(b->full_name) > 0;
            }
            });
    }
    
}

void Candidate_Manager::displayAllPassedCandidate() {
    if (pass_candidate.size() != 0) {
        for (auto candidate : pass_candidate) {
            candidate->showMe();
        }
    }
    else {
        std::cout << "List is empty\n";
    }
}




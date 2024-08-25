#include "../header/University.hpp"

int main(){
    University my_university;
    std::string _id_student;
    std::string _full_name;
    int _birthday_date[3];
    int _year_onboard;
    double _passed_score;
    double _average_score;
    std::string _semester_name;
    std::string _name_department;
    std::string _training_link_addr;
    while(1){
        std::cout << "\n-------------------------------------\n";
        std::cout << "Application Student Manager\n";
        std::cout << "Select 1: To insert new Department\n";
        std::cout << "Select 2: To insert new Semester into Department\n";
        std::cout << "Select 3: To insert new Student into Department\n";
        std::cout << "Select 4: To insert result report of Student into Semester in Department\n";
        std::cout << "Select 5: To show total Student by type\n";
        std::cout << "Select 6: To show Student whose average score is highest \n";
        std::cout << "Select 7: To show Student whose score the Highest Passed Score in each department \n";
        std::cout << "Select 8: To show all Student\n";
        std::cout << "Select 9: To show all Semester in each Department\n";
        std::cout << "Select 10: To exit\n";
        int option;
        std::cout << "Your choice: ";
        std::cin >> option;
        switch (option)
        {
            case 1:
                std::cout << "\n-------------------------------------\n";
                std::cout << "Enter Name Department: ";
                std::cin.ignore();
                std::getline(std::cin,_name_department);
                my_university.addDeparment(new Department(_name_department));
                break;
            case 2:
                std::cout << "\n-------------------------------------\n";
                if(my_university.list_department.size()!=0){
                    std::cout << "Select Department to Add : \n";
                    my_university.displayDepartmentName();
                    std::cout << "Your choice: ";
                    int option_2;
                    std::cin >> option_2;
                    while(option_2 < 0 || option_2 >= my_university.list_department.size()){
                        std::cout << "Wrong Input. Please try again\n";
                        std::cout << "Select Department to Add Student: \n";
                        my_university.displayDepartmentName();
                        std::cout << "Your choice: ";
                        std::cin >> option_2;
                    }
                    std::cout << "Enter Semester to add into Department: ";
                    std::cin.ignore();
                    std::getline(std::cin,_semester_name);
                    my_university.addSemester(my_university.list_department[option_2]->name_department,new Semester(_semester_name));
                }
                else{
                    std::cout << "List of Department in University is empty\n";
                }
                break;
            case 3:
                std::cout << "\n-------------------------------------\n";
                if(my_university.list_department.size()!=0){
                    std::cout << "Select Department to Add Student: \n";
                    my_university.displayDepartmentName();
                    std::cout << "Your choice: ";
                    int option_3;
                    std::cin >> option_3;
                    while(option_3 < 0 || option_3 >= my_university.list_department.size()){
                        std::cout << "Wrong Input. Please try again\n";
                        std::cout << "Select Department to Add Student: \n";
                        my_university.displayDepartmentName();
                        std::cout << "Your choice: ";
                        std::cin >> option_3;
                    }
                    std::cout << "Select Type of Student: \n";
                    std::cout << "Select a: To choose In Service Student\n";
                    std::cout << "Select b: To choose Regular Student\n";
                    char option_4;
                    std::cout << "Your choice: ";
                    std::cin >> option_4;
                    switch(option_4){
                        case 'a':
                            std::cout << "Enter ID of Student: ";
                            std::cin.ignore();
                            std::getline(std::cin,_id_student);
                            while(my_university.isStuIdExisted(_id_student)){
                                std::cout << "This ID was existed. Please try again\n";
                                std::cout << "Enter ID of Student: ";
                                std::getline(std::cin,_id_student);
                            }
                            std::cout << "Enter Full Name: ";
                            std::getline(std::cin,_full_name);
                            std::cout << "Enter Date of Birth (DD/MM/YYYY): ";
                            std::cin >> _birthday_date[0] >> _birthday_date[1] >> _birthday_date[2];
                            while(!my_university.isDateValid(_birthday_date[0],_birthday_date[1],_birthday_date[2])){
                                std::cout << "Invalid Date Type. Please try again\n";
                                std::cout << "Enter Date of Birth (DD/MM/YYYY): ";
                                std::cin >> _birthday_date[0] >> _birthday_date[1] >> _birthday_date[2];
                            }
                            std::cout << "Enter year onboard: ";
                            std::cin >> _year_onboard;
                            while(_year_onboard < 1975 || _year_onboard >2024){
                                std::cout << "Invaid Year Onboard. Please try again\n";
                                std::cout << "Enter year onboard: ";
                                std::cin >> _year_onboard;
                            }
                            std::cout << "Enter Training Link Address: ";
                            std::cin.ignore();
                            std::getline(std::cin,_training_link_addr);
                            std::cout << "Enter Passed Score: ";
                            std::cin >> _passed_score;
                            while(_passed_score < 0 || _passed_score > 10){
                                std::cout << "Invalid Passed Score. Please try again\n";
                                std::cout << "Enter Passed Score: ";
                                std::cin >> _passed_score;
                            }
                            my_university.addStudentIntoDepartment(new In_service_Student(_id_student,_full_name,_birthday_date[0],_birthday_date[1],_birthday_date[2],_year_onboard,_passed_score,_training_link_addr),my_university.list_department[option_3]->name_department);
                            break;
                        case 'b':
                            std::cout << "Enter ID of Student: ";
                            std::cin.ignore();
                            std::getline(std::cin,_id_student);
                            while(my_university.isStuIdExisted(_id_student)){
                                std::cout << "This ID was existed. Please try again\n";
                                std::cout << "Enter ID of Student: ";
                                std::getline(std::cin,_id_student);
                            }
                            std::cout << "Enter Full Name: ";
                            std::getline(std::cin,_full_name);
                            std::cout << "Enter Date of Birth (DD/MM/YYYY): ";
                            std::cin >> _birthday_date[0] >> _birthday_date[1] >> _birthday_date[2];
                            while(!my_university.isDateValid(_birthday_date[0],_birthday_date[1],_birthday_date[2])){
                                std::cout << "Invalid Date Type. Please try again\n";
                                std::cout << "Enter Date of Birth (DD/MM/YYYY): ";
                                std::cin >> _birthday_date[0] >> _birthday_date[1] >> _birthday_date[2];
                            }
                            std::cout << "Enter year onboard: ";
                            std::cin >> _year_onboard;
                            while(_year_onboard < 1975 || _year_onboard >2024){
                                std::cout << "Invaid Year Onboard. Please try again\n";
                                std::cout << "Enter year onboard: ";
                                std::cin >> _year_onboard;
                            }
                            std::cout << "Enter Passed Score: ";
                            std::cin >> _passed_score;
                            while(_passed_score < 0 || _passed_score > 10){
                                std::cout << "Invalid Passed Score. Please try again\n";
                                std::cout << "Enter Passed Score: ";
                                std::cin >> _passed_score;
                            }
                            my_university.addStudentIntoDepartment(new Regular_Student(_id_student,_full_name,_birthday_date[0],_birthday_date[1],_birthday_date[2],_year_onboard,_passed_score),my_university.list_department[option_3]->name_department);
                        break;
                    }          
                }
                else{
                    std::cout << "List of Department in University is empty\n";
                }
                break;
            case 4:
                std::cout << "\n-------------------------------------\n";
                if(my_university.list_department.size()!=0){
                    std::cout << "Select Department to Add Result Report: \n";
                    my_university.displayDepartmentName();
                    std::cout << "Your choice: ";
                    int option_5;
                    std::cin >> option_5;
                    while(option_5 < 0 || option_5 >= my_university.list_department.size()){
                        std::cout << "Wrong Input. Please try again\n";
                        std::cout << "Select Department to Add Student: \n";
                        my_university.displayDepartmentName();
                        std::cout << "Your choice: ";
                        std::cin >> option_5;
                    }
                    if(my_university.list_department[option_5]->isListSemesterEmpty()){
                        std::cout << "This Department doesn't have any Semester\n";
                    }
                    else{
                        std::cout << "Select Semester to Add Result Report: \n";
                        my_university.list_department[option_5]->showNameSemester();
                        std::cout << "Your choice: ";
                        int option_6;
                        std::cin >> option_6;
                        std::cout << "\n-------------------------------------\n";
                        if(my_university.list_department[option_5]->isListStudentEmpty()){
                            std::cout << "List of Student in Department " << my_university.list_department[option_5]->name_department << " is empty\n";
                        }
                        else{
                            std::cout << "Enter Student's ID: ";
                            std::cin.ignore();
                            std::getline(std::cin,_id_student);
                            while(!my_university.list_department[option_5]->isStuIdExisted(_id_student)){
                                std::cout << "This ID was existed. Please try again\n";
                                std::cout << "Enter ID of Student: ";
                                std::getline(std::cin,_id_student);
                            }
                            std::cout << "Enter Average Score: ";
                            std::cin >> _average_score;
                            my_university.addResultReportIntoSemester(new Result_Report(_id_student,_average_score),my_university.list_department[option_5]->name_department,my_university.list_department[option_5]->list_semester[option_6]->showName());
                            }
                        } 
                    }
                else{
                    std::cout << "List of Department in University is empty\n";
                }
                break;
            case 5:
                std::cout << "\n-------------------------------------\n";
                std::cout << "Select Type Student: \n";
                std::cout << "Select a: To choose In Service Student\n";
                std::cout << "Select b: To choose Regular Student\n";
                std::cout << "Your choice: ";
                char option_7;
                std::cin >> option_7;
                switch (option_7){
                    case 'a':
                        std::cout << "Number of In Service Student: " << my_university.totalStudentByType("In_service_Student") << std::endl;
                        break;
                    
                    case 'b':
                        std::cout << "Number of Regular Student: " << my_university.totalStudentByType("Regular_Student") << std::endl;
                        break;
                }
                break;
            case 6:
                std::cout << "\n-------------------------------------\n";
                my_university.findStudent_Average_Score_Highest_In_Semester();
                break;
            case 7:
                std::cout << "\n-------------------------------------\n";
                my_university.findStudent_Passed_Score_Highest();
                break;
            case 8:
                std::cout << "\n-------------------------------------\n";
                my_university.displayAllStudent();
                break;
            case 9:
                std::cout << "\n-------------------------------------\n";
                my_university.displaySemester();
                break;
            case 10:
                std::cout << "\n-------------------------------------\n";
                std::cout << "Exit\n";
                return 0;
            }
    }
}
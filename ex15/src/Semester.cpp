#include "../header/Semester.hpp"

void Semester::display() const{
    if(list_result_report.size()!=0){
        std::cout << "\nSemester Name: " << this->semester_name << " show list of result: \n";
        for(auto rs_rp:list_result_report){
            rs_rp->display();
        }
        std::cout << "\n\n";
    }   
    else{
        std::cout << "List of result in Semester: " << this->semester_name << " empty\n";
    } 
}

std::string Semester::showName() const{
    return this->semester_name;
}

void Semester::add_Result_Report(Result_Report *report){
    if(!this->isIDExisted(report->id_student)){
        list_result_report.push_back(report);
        //Sorting via Average Score
        if(list_result_report.size() > 1){
            std::sort(list_result_report.begin(),list_result_report.end(),[](Result_Report *a, Result_Report *b){
                return a->average_score > b->average_score;
            });
        }
    }
    else{
        std::cout << "\nBla\n";
    }
}

bool Semester::isIDExisted(std::string _id_student){
    if(list_result_report.size() != 0){
        for(auto report:list_result_report){
            if(report->id_student == _id_student){
                return true;
            }
        }
    }
    return false;
}

std::string Semester::findIdHighestScore() const{
    if(list_result_report.size() != 0){
        double max = -1;
        for(auto report:list_result_report){
            if(report->average_score > max){
                max = report->average_score;
            }
        }
        //Find ID contain that average_score
        for(auto report:list_result_report){
            if(report->average_score == max){
                return report->id_student;
            }
        }
    }
    return "";
}
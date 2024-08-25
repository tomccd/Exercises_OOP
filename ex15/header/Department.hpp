#ifndef __DEPARTMENT__
#define __DEPARTMENT__

#include "./Student_Classify.hpp"
#include "./Semester.hpp"
class Department{
    private:
        std::vector<Student *> list_student;
    public:
        std::vector<Semester *>list_semester;
        std::string name_department;
        Department(std::string _name_department){
            this->name_department = _name_department;
        }
        /*Display all Student after Sorting via Type Student (Ascending) and Year Onboard (Descending)*/
        void displayStudent() const;
        
        /*Check if list Semester is empty*/
        bool isListSemesterEmpty() const;

        /*Check if list Student is empty*/
        bool isListStudentEmpty() const;
        /*Display Student by finding training_link address*/
        void displayStudent(std::string _training_link_addr) const;
        
        /*Display Student by finding passed score (required > 8.0)*/
        void displayStudent(double _passed_score) const;
        
        /*Display all Semester*/
        void displaySemester() const;

        /*Adding Student into Department*/
        void addStudentIntoDepartment(Student *student);
        
        /*Adding Student into Semester*/
        void addResultReportIntoSemester(Result_Report *result, std::string _semester_name);
        
        /*Show Name of Semester*/
        void showNameSemester() const;
        /*Adding Semester into Department*/
        void addSemester(Semester *_semester);

        /*Check if this Student was existed by id*/
        bool isStuIdExisted(std::string _id);
        
        /*Check if this Semester is existed*/
        bool isSemesterExisted(std::string _semester_name);

        /*Show Name of Department*/
        std::string showNameDepartment() const;
        
        /*Show Number of Student by Type Student*/
        int totalStudentByType(std::string _type) const;
        
        /*Find Student whose average score is highest in semester*/
        void findStudent_Average_Score_Highest_In_Semester(std::string _semester);
        
        /*Find Students whose average score is highest in each semester*/
        void findStudent_Average_Score_Highest_In_Semester();

        /*Find Student whose passed score is highest*/
        void findStudent_Passed_Score_Highest();
        ~Department(){
            for(auto student:list_student){
                delete(student);
            }
            for(auto semester:list_semester){
                delete(semester);
            }
        }
};

#endif
#ifndef __UNIVERSITY
#define __UNIVERSITY

#include "./Department.hpp"

class University{
    public:
        std::vector<Department *>list_department;
        /*Display All Student in each department*/
        void displayAllStudent() const;

        /*Display Student by finding training_link address in each Department*/
        void displayStudent(std::string _training_link_addr) const;

        /*Display Student by finding passed score (required > 8.0) in each Department*/
        void displayStudent(double _passed_score) const;

        /*Display all Semester in each Department*/
        void displaySemester() const;
        
        /*Display Semesters in Specific Department*/
        void displaySemester(Department *department) const;

        /*Display all Department name in this University*/
        void displayDepartmentName() const;

        /*Adding Department into University*/
        void addDeparment(Department *deparment);
        
        /*Adding Student into which Department*/
        void addStudentIntoDepartment(Student *student, std::string _name_deparment);

        /*Adding Student into Semester*/
        void addResultReportIntoSemester(Result_Report *result, std::string _name_department, std::string _semester_name);

        /*Adding Semester into which Department*/
        void addSemester(std::string _name_department,Semester *_semester);

        /*Check if this Student was existed by id in each Department*/
        bool isStuIdExisted(std::string _id);

        /*Check if this Department is Existed*/
        bool isDepartmentExisted(std::string _name_department);

        /*Show Number of Student by Type Student in each Department*/
        int totalStudentByType(std::string _type) const;

        /*Find Students whose average score is highest in each semester in each Department*/
        void findStudent_Average_Score_Highest_In_Semester();

        /*Find Students whoses passed score is highest in each department*/
        void findStudent_Passed_Score_Highest();

        /*Check the Date is Valid*/
        bool isDateValid(int date, int month, int year);
};

#endif
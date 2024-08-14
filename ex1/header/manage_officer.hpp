#include "classify.hpp"

class QLCB{
    private:
        //Vector of pointer to CanBo Class
        std::vector<CanBo *>officer_list;
    public:
        /*Add officer to officer_list*/
        void addOffice(CanBo *cb);
        /*Search officer in vector*/
        CanBo* searchOfficer(std::string name);
        /*Display all officer in list*/
        void displayOfficer();
        /*Display 1 officer in list*/
        void displayOfficer(CanBo *instance);
        ~QLCB() {
            for (int i = 0; i < officer_list.size(); i++) {
                delete(officer_list[i]);
            }
        }
};
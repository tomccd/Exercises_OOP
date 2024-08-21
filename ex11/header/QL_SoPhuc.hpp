#ifndef __QL_SoPhuc
#define __QL_SoPhuc
#include "./SoPhuc.hpp"

class QL_SoPhuc{
    public:
        QL_SoPhuc(){

        }
        std::vector<So_Phuc*>vct_sophuc;
        /*Hien thi so phuc*/
        void display();
        void display(So_Phuc* cplx);
        /*Them so phuc*/
        void insert_Complex_Num(So_Phuc* cplx);
        /*Cong 2 so phuc*/
        So_Phuc* add_2_Complex_Num(So_Phuc *cplx_1, So_Phuc *cplx_2);
        /*Nhan 2 so phuc*/
        So_Phuc* multi_2_Complex_Num(So_Phuc *cplx_1, So_Phuc *cplx_2);
        ~QL_SoPhuc(){
            for(auto x:vct_sophuc){
                delete(x);
            }
        }
};
#endif

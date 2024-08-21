#ifndef __SO_PHUC
#define __SO_PHUC

#include <vector>
#include <string>
#include <iostream>
class So_Phuc{
    public:
        double PhanThuc;
        double PhanAo;
        So_Phuc(double _PhanThuc, double _PhanAo){
            this->PhanThuc = _PhanThuc;
            this->PhanAo = _PhanAo;
        }
};

#endif
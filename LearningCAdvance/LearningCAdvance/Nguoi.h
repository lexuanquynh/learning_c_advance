#ifndef NGUOI_H
#define NGUOI_H
#include <iostream>
#include "Dongvat.h"

class Nguoi : public Dongvat
{
    public:
        Nguoi();
        ~Nguoi();
        Nguoi(bool bietnoi1 , int gioitinhmoi1);


    private:
        bool bietnoi;

        enum gioitinhmoi{
            NAM,
            NU
        };

        int gioitinhmoi;
};

#endif // NGUOI_H

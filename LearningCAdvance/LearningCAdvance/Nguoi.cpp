#include "Nguoi.h"

Nguoi::Nguoi()
{
    //ctor
    bietnoi = true;
    gioitinhmoi = NAM;


}

Nguoi::~Nguoi()
{
    //dtor
}
Nguoi :: Nguoi(bool bietnoi1 , int gioitinhmoi1)
{

    bietnoi = bietnoi1;
    gioitinhmoi = gioitinhmoi1;
}

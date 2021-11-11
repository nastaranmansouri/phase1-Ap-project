#include <iostream>
#include <string>

#include "Design.h"

using namespace std;

Design::Design(string des)
{
    set_design(des);
}

void Design::choose_design()
{
    cout<<"Choose the design you want:";
    cout<<"\t 1.Mantue\t2.Pans\t 3.scarf:\t";
    cout<<endl;
}

void Design::set_design(string des)
{
    type_des=des;
}

string Design::get_design()const
{
    return type_des;
}

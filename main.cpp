#include <iostream>
#include <string>
//*****************************//
#include "Tailor.h"
#include "Color.h"
#include "Design.h"

//*****************************//
using namespace std;
//*****************************//
int main()
{
    string st1,st2,st3;                 //st1=save tailor name  //st2=save fabric color   //st3=save type of design
   // cout << "Hello world!" << endl;
    Tailor t1;
    cout<<"Default tailor name:\t"<<t1.get_tailor_name()<<endl<<endl;     //check default name

    cout<<"Enter your tailor name:\t";
    getline(cin,st1);

    t1.set_tailor_name(st1);
    cout<<"Set your tailor name:\t"<<t1.get_tailor_name()<<endl<<endl;
//*****************************//
    Color cl;

    cout<<"Default color is\t"<<cl.get_color()<<endl<<endl;       //check default color

    cout<<"Choose your favorite color from the list below:"<<endl<<endl;
    cout<<"Blue,Yellow,Green,Black,Red"<<endl<<endl;


    cout<<"Enter your favorite color:\t";
    cin>>st2;

    cl.set_color(st2);
    cout<<"Set fabric color:\t"<<cl.get_color()<<endl<<endl;

//*****************************//
    Design d1;
    cout<<"default type of design:\t"<<d1.get_design()<<endl<<endl;        //check default design

    d1.choose_design();
    cin>>st3;

    d1.set_design(st3);

    cout<<"New design that you choose:\t"<<d1.get_design()<<endl<<endl;

    return 0;
}

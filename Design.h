#include <iostream>
#include <string>

#ifndef DESIGN_H
#define DESIGN_H


class Design
{
    public:
        Design(std::string = "empty");
        void choose_design();
        void set_design(std::string);
        std::string get_design()const;

    private:

    std::string type_des;
};

#endif // DESIGN_H

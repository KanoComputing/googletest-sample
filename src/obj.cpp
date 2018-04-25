#include <string>

#include "obj.hpp"


Obj::Obj()
{
}


bool Obj::is_valid(std::string str)
{
    return str.find("Kano") == 0;
}


int Obj::get_number()
{
    return 5;
}

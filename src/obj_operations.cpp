#include "obj.hpp"
#include "obj_operations.hpp"


bool check_obj(Obj &obj)
{
    if (!obj.is_valid("KanoTest"))
        return false;

    obj.get_number();
    obj.get_number();
    obj.get_number();

    return true;
}

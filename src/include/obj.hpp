#ifndef __OBJ__HPP__
#define __OBJ__HPP__


#include <string>


class Obj
{
    public:
        Obj();
        virtual bool is_valid(std::string str);
        virtual int get_number();
};


#endif  // __OBJ__HPP__

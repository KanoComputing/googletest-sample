#include <iostream>

#include "obj.hpp"


int main(int argc, char *argv[])
{
	Obj obj;
	std::cout << "Valid: " << obj.is_valid("Kano") << "\n";
	std::cout << "Number: " << obj.get_number() << "\n";

	return 0;
}

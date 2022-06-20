
#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <iostream>
#include <string>
#include <stdint.h>

typedef struct	s_Data
{
	std::string str;
}				Data;

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif


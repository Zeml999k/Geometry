#pragma once
#include "Drawobject.h"
#include <string>

class Figure : protected Drawobjects
{
public:
	Figure();
	Figure(std::string name, int SizeL, int SizeW, int SizeR);
};

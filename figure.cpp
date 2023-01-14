#include "figure.h"
#include <iostream>

Figure::Figure(){}

Figure::Figure(std::string name, int SizeL, int SizeW, int SizeR)
{
	Figure figure;		
	
	if(name == "круг" || name == "Круг") { figure.DrawСircle(SizeR); }
	if(name == "квадрат" || name == "Квадрат") { figure.DrawSquare(SizeL, SizeW); } 
	if(name == "треугольник" || name == "Треугольник") { figure.DrawTriangle(SizeL); }
	if(name == "ромб" || name == "Ромб") { figure.DrawRhombus(SizeL); }
}

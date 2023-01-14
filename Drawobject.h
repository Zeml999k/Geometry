#pragma once

class Drawobjects
{
protected:
	Drawobjects();
	
	int SQ(int x,int y);
	
	void DrawСircle(int Radius); //Круг
	void DrawSquare(int length, int width); //Квадрат 
	void DrawTriangle(int Size); //Треугольник 
	void DrawRhombus(int Size); //Ромб
};

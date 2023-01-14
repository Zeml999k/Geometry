#include <iostream>
#include <math.h>
#include "Drawobject.h"

Drawobjects::Drawobjects(){}

void Drawobjects::DrawСircle(int Radius)
{

    const int width = Radius;
    const int length = Radius*1.5;

    for (int y=width; y >= -width; y-=2)  {
        for (int x=-length; x <= length; x++)  {
            if ((int) SQ(x,y) == Radius) std::cout << "#";
            else std::cout << " ";

         }
         std::cout << "\n";
     }

}



void Drawobjects::DrawSquare(int length, int width)
{ 
   
   for(int i = 0 ; i < length; i++)
    {
        for(int j = 0; j < width; j++)
        {
            if((i >= 1 && i <= length - 2)&&(j >= 1 && j <= width - 2))
                std::cout<<" ";
            else
                std::cout<<"*";
        }
        std::cout<<"\n";
    }
}



void Drawobjects::DrawTriangle(int Size)
{

 for(int i = 1; i <= Size; ++i)
    {
	for(int j = Size; j > i; --j) { std::cout << " "; }
	    
	for(int j = 1; j < 2 * i; ++j) { std::cout << "*"; } 
	    
	std::cout << "\n";
    }

}



void Drawobjects::DrawRhombus(int Size)
{

int Cen = Size / 2;

for (int i = 0; i < Size; i++)
    {
        for (int j = 0; j < Size; j++)
        {
            if (i <= Cen)
            {
                if (j >= Cen - i && j <= Cen + i)
                    std::cout << "*";
                else
                    std::cout << " ";
            }
            else
            {
                if (j >= Cen + i - Size + 1 && j <= Cen - i + Size - 1)
                    std::cout << "*";
                else
                    std::cout << " ";
            }
        }
        std::cout << "\n";
    }

}


int Drawobjects::SQ(int x,int y){ return sqrt (pow(x,2)+pow(y,2)); }

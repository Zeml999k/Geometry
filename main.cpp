#include <iostream> 
#include "figure.h"




int main()
{
int width = 0, length = 0, radius = 0;
std::string objecT;


std::cout << "Круг\n" << "Квадрат\n" << "Треугольник\n"<< "Ромб\n" << std::endl;
std::cin >> objecT;

if(objecT == "Круг" || objecT == "круг")
{
std::cout << "введите радиус (пример: 10)" << std::endl; 
std::cin >> radius;
Figure F(objecT, 0, 0, radius);
}
if(objecT == "Квадрат" || objecT == "квадрат")
{
std::cout << "введите высоту (пример: 10)" << std::endl; 
std::cin >> length;
std::cout << "введите ширину (пример: 10)" << std::endl; 
std::cin >> width;
Figure F(objecT,length, width, 0);
}
if(objecT == "Треугольник" || objecT == "треугольник")
{
std::cout << "введите размер (пример: 10)" << std::endl; 
std::cin >> length;
Figure F(objecT, length, 0, 0);
}
if(objecT == "Ромб" || objecT == "ромб")
{
std::cout << "введите размер (пример: 10)" << std::endl; 
std::cin >> length;
Figure F(objecT, length, 0, 0);
}
else{std::cout << "ERROR: Имя фигуры введено неправильно или пока что нету возможности нарисовать вашу фигуру.\n";}



return 0;
}

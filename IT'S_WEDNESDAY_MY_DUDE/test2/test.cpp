#include <iostream>
 #define PI 3.14
 main()
 { float r, pl;
 std::cout<<"Ввести радиус"<<'\n';
 std::cin>>r;
 pl=r*r*PI; // вычисление площади по формуле
 std::cout<<"Площадь круга = " <<pl<<'\n';
 return 0;
 } 
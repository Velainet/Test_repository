#include <iostream>

using namespace std;
    
int main()
{
    int max_mass;
    cin >> max_mass;
    int mass[max_mass];
    
    int a_number;
    int b_number;
    
    cout << "Enter numbers", cin >> a_number;
    cout << "Enter little more number", cin >> b_number; 
   
    while (a_number-1 < b_number)
    {
        cout << ("numbers = ") << a_number << endl;
        ++a_number;
        max_mass = a_number;
    }

    for(int i=1 ; i < max_mass; i++)
    {
        mass[i] = rand() % 50;
    }

    for(int i=1 ; i < max_mass ; i++)
    {    
        cout << "mass[" << i << "]=" << mass[i] << endl;
    }

}

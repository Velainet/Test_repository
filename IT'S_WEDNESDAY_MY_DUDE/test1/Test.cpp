#include <iostream>
using namespace std; 
int main()
{
    int (max);
    cin >> (max);
    int numbers[max];      
  
    int i;       
    cout << "Enter numbers" << endl;
    while(i < max)
    {
        cin >> numbers[i];   
        i++;
    }
   
    for (i =0; i < max; ++i)
    {
        cout << numbers[i] << "\t";
    }
    cout << endl;
}
#include <iostream>

using namespace std;
    
int main()
{   
    for (int i ; i==0 ; ){
    int u, s;
    cout << ("write the number: "), cin >> (s);
    cout << ("write another number , but bigger: "), cin >> (u);
        if (s == u)
        {
            i = 1;
        }
        while ((s-1) < u){
            cout << ("numbers....cool = ") << s << endl;
            ++s;
            
           
        }
    }
}

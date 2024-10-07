#include <iostream>

using namespace std;
    
int main()
{   
    int u, s;
    cout << ("write the number: "), cin >> (s);
    cout << ("write another number , but bigger: "), cin >> (u);
    cout << ("numbers....cool = ") << s << endl;
        while (s < u){
            s = (s+1);
            cout << ("numbers....cool = ") << s<< "\n" ;
        }
}
#include <iostream>

using namespace std;
    
int main()
{   
    for (int i;i==0;){
    int u, s;
    cout << ("write the number: "), cin >> (s);
    cout << ("write another number , but bigger: "), cin >> (u);
        if (s == u)
        {
            i = 1;
        }
        while (s < u){
            cout << ("numbers....cool = ") << s<< "\n" ;
            s++;
            cout << ("numbers....cool = ") << s << endl;
           
        }
    }
}

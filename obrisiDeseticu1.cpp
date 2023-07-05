#include <iostream>
#include <string> 
using namespace std;

void obrisiDeseticu(string str)
{
    // obrisi drugi karakter
    str.erase(1, 1);
 
    cout << "Bez desetice: ";
    cout << str;
} 

int main() {
    // Write C++ code here
    int a = 0;
    cin>>a;
     
    if(a/100>=1) cout<<"Broj je trocifren.";
    else cout<<"Broj nije trocifren, pogreska.";
    
    obrisiDeseticu(to_string(a));  

    return 0;
}

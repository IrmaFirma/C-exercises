#include <iostream>
#include <string> 
using namespace std;


int main() {
    // Write C++ code here
    int a = 0;
    cin>>a;
     
    if(a/1000>=1) cout<<"Broj je cetverocifren."<<endl;
    else cout<<"Broj nije cetverocifren, pogreska."<<endl;
    
    int h, s, d, j;

    s = a%1000/100;
    d = a%100/10;
    cout<<s<<d;

    return 0;
}

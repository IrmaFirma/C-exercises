#include <iostream>
#include <string> 
using namespace std;


int main() {
    int n;
    cin>>n; //broj clanova niza
    
    int niz[n]; //definisan niz od n
    
    for(int i = 0; i<n; i++){ //unos clanova
        cout<<"Unesi clan: "<<i<<endl;
        cin>>niz[i];
    }
    
    for(int i = 0; i<n; i++){ //ispis clanova
        cout<<niz[i];
    }
    return 0;
}

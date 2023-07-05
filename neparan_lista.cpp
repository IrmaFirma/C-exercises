#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int a = 0, counter = 0;
    cin>>a;
    
    for(int i = 1; i<a; i++){
        if(i%2!=0){
            counter++;
            cout<<"Broj "<<i<<" je neparan"<<endl;
        }
    }
    cout<<"Ukupno: "<<counter;
    

    return 0;
}

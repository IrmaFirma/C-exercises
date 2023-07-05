#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int a = 0, sum = 0;
    cin>>a;
    
    for(int i = 1; i<a; i++){
        if(i%3==0){
            sum+=i;
        }
    }
    cout<<"Suma brojeva dijeljivih sa 3: "<<sum;
    

    return 0;
}

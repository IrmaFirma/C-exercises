using namespace std;

int main() {

    cout << "Please enter the value in km/h: " <<endl;
    double km_h = 0;
    cin >> km_h;
    double mi_h = km_h / 1.6093440006147;
    cout << km_h << " km/h is " << mi_h << " m/h." <<endl;

    return 0;
}

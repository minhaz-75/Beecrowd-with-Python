#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double R, A;
    cin>>R;
    const double pi = 3.14159;

    A = pi * R * R;

    cout<< fixed << setprecision(4) << "A=" << A << endl;

    return 0;


}


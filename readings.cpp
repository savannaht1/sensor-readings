// readings.cpp: average of three temperature readings
#include <iostream>
using namespace std;

int main()
{
    double t1 = 0, t2 = 0, t3= 0;     // start time zeros, never garbage
    cout << "Enter 3 temperatures in C separated by spaces:" << endl;
    cin >> t1 >> t2 >> t3;

    cout << "The average temperature is: " << (t1+t2+t3)/3 << endl;



        return 0;
}
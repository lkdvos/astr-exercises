#define _USE_MATH_DEFINES
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

// the function that will be tabulated
double f(double x)
{
    return sqrt(x)*(cos(x)-sin(x));
}

// the main function
int main()
{
    cout << "Writing to file 'tabulate.txt'..." << endl;

    ofstream outfile("tabulate.txt");
    outfile << setprecision(8);
    for (int i = 0; i <= 360; ++i)
    {
        double x = i * M_PI/180.;
        outfile << x << ' ' << f(x) << '\n';
    }
    outfile.close();

    cout << "Done writing." << endl;
}

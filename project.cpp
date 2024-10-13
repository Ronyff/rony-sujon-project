#include <iostream>
using namespace std;
double add(double x, double y)
{

    return x + y;
}

int main()
{
    double a, b;
    cin >> a >> b;
    double result = add(a, b);
    cout << result << endl;
}

#include <iostream>
using namespace std;
double add(double x, double y)
{

    return x + y;
}
double sub(double x, double y)
{

    return x - y;
}

int main()
{
    double a, b;
    cin >> a >> b;
    double addition = add(a, b);
    double subtranction = sub(a, b);
    cout << addition <<subtranction << endl;
}

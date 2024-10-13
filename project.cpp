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
double mul(double x, double y)
{

    return x * y;
}
int main()
{
    double a, b;
    cin >> a >> b;
    double addition = add(a, b);
    double subtranction = sub(a, b);
    double multiplication = mul(a, b);
    cout << addition <<subtranction << mul<< endl;
}

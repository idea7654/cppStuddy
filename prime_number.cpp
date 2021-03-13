#include <iostream>
#include "prime_number.h"
using namespace std;

//int plus_count(int a, int b);
//float plus_count(float a, float b);

int main()
{
    int a, b, c;
    cin >> a >> b;
    c = plus_count(a, b);
    cout << c << endl;
    return 0;
}

int plus_count(int a, int b)
{
    return a + b;
}

float plus_count(float a, float b)
{
    return a + b;
}
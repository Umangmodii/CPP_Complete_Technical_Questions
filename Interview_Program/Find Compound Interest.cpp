#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double Amount = 10000, Rate = 5, time = 2;

    double compound = Amount * ((pow(( 1 + Rate / 100), time)));
    double CI = compound - Amount;

    cout << "Compound Interest is : " << CI;

    return 0;
}
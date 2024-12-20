#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cin >> age;
    if (age < 18 && age >= 0)
    {
        cout << "You are not an adult";
    }
    else
    {
        cout << "You are an adult" << endl;
    }
    return 0;
}
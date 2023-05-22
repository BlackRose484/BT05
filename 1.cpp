#include <bits/stdc++.h>

using namespace std;

int *weird_sum(int a, int b)
{
    int c;
    c = a + b;
    return &c;
}

int main(int argc, char *argv[])
{

    int a = 20, b = 25, *pg;
    {
        int g;
        pg = &g;
        g = gcd(a, b);
    }

    {
        int temp = 100;
        cout << temp << endl;
    }

    cout << *pg;

    return 0;

    cout << weird_sum(a, b) << endl;

    int *ptr1 = new int;
    int *ptr2 = new int;
    ptr1 = ptr2;

    int *p = new int;
    int *p2 = p;
    *p = 10;
    delete p;
    cout << *p2;
}

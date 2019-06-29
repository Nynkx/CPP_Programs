#include <iostream>

using namespace std;

void nhapMang(int *&a, int &n)
{
    cin >> n;

    a = new int[n];

    for (int i = 0; i < n; ++i)
        cin >> a[i];
}

void xuatMang(int *a, int n)
{
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
    cout << endl;
}

void DayCon(int *a, int n)
{
    int counter = 1;
    int Max = 1;
    int End = 0;

    for (int i = 0; i < n-1; ++i)
    {
        if (a[i] <= a[i+1])
            counter++;
        else
        {
            if (counter > Max)
            {
                Max = counter;
                End = i+1;
            }
            counter = 1;
        }
    }

    if (counter > Max)
    {
        Max = counter;
        End = n;
    }

    for (int i = End-Max; i < End; ++i)
        cout << a[i] << " ";
    cout << endl;
}


int main()
{
    int *a;
    int n;

    nhapMang(a, n);

    xuatMang(a, n);

    DayCon(a, n);
    return 0;
}

#include <iostream>
#include <ctime>
using namespace std;
int f(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return i;
        }
    }
       return -1;
}

int main()
{
    int const n = 100;
    int a[n];
    int x;
    clock_t now = clock();
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 10;
        
    }
    cout << endl << "x=";
    x = 10;
    int result = f(a, n, x);
    if (result == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at index " << result << endl;
    }
    clock_t end = clock();
    double seconds = (double)(end - now) / CLOCKS_PER_SEC;
    cout << endl << seconds << endl;
    return 0;
}
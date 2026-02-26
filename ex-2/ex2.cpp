#include <iostream>
using namespace std;

int main()
{
    float number,
        sum,
        avg;
    int n,
        i;

    cout << "Compute the average" << endl;

    cout << "Insert the number of values: ";
    cin >> n;
    cout << endl;

    if (n == 0)
    {
        cout << "Average not defined" << endl;
    }
    else
    {
        sum = 0;
        for (i = 1; i <= n; i++)
        {
            cout << "Insert value number " << i << " : ";
            cin >> number;
            sum = sum + number; // or: sum += number
        }

        avg = sum / n;
        cout << endl
             << "Average: " << avg << endl;
    }
    return 0;
}
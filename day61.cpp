#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int time_control = a + b;

        if (0 <= time_control && time_control < 3)
        {
            cout << "1\n";
        }
        else if (3 <= time_control && time_control <= 10)
        {
            cout << "2\n";
        }
        else if (11 <= time_control && time_control <= 60)
        {
            cout << "3\n";
        }
        else if (61 <= time_control)
        {
            cout << "4\n";
        }
        else
        {
            cout << "Invalid\n";
        }
    }

    return 0;
}
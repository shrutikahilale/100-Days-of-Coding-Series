#include <iostream>
using namespace std;

class specification
{
public:
    int w, h, p;
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, b;
        cin >> n >> b;

        specification tablets[n];

        for (int i = 0; i < n; i++)
        {
            cin >> tablets[i].w >> tablets[i].h >> tablets[i].p;
        }

        int area = 0;

        for (int i = 0; i < n; i++)
        {
            if (tablets[i].p <= b)
            {
                area = max(area, tablets[i].w * tablets[i].h);
            }
        }

        if(area == 0) {
            cout<<"no tablet\n";
        }
        else{
            cout << area << "\n";
        }
    }

    return 0;
}
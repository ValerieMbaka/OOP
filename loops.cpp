#include <iostream>

using namespace std;

int main()
{
        int x,y;
        cout << "Enter the size of the pattern: \n";
        cin >> x;
        for (int k=x; k>=1; k--)
        {
                for(y=1; y<=x; y++)
                {
                        cout << y << " ";
                }
                cout << endl;
        }

        return 0;
}

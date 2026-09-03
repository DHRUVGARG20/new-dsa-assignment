//		Q.3 Design the logic of a program to rotate a 1-D array by K positions. 
//			e.g., for A = {1,2,3,4,5} and K = 2, the left rotation is {3,4,5,1,2} and the right rotation is {4,5,1,2,3}. 

#include <iostream>
using namespace std;

int main()
{
    int a[50], n, k, i, temp, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter K: ";
    cin >> k;

    cout << "1. Left Rotation\n";
    cout << "2. Right Rotation\n";
    cout << "Enter choice: ";
    cin >> choice;

    k = k % n;

    if(choice == 1)
    {
        // Left Rotation
        for(int r = 0; r < k; r++)
        {
            temp = a[0];

            for(i = 0; i < n - 1; i++)
                a[i] = a[i + 1];

            a[n - 1] = temp;
        }
    }
    else if(choice == 2)
    {
        // Right Rotation
        for(int r = 0; r < k; r++)
        {
            temp = a[n - 1];

            for(i = n - 1; i > 0; i--)
                a[i] = a[i - 1];

            a[0] = temp;
        }
    }
    else
    {
        cout << "Invalid choice";
        return 0;
    }

    cout << "Array after rotation: ";
    for(i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}


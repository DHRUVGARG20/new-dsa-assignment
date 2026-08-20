//		Q.2 Design the logic to remove the duplicate elements from an Array and after the deletion the array should contain the unique elements.

#include <iostream>
using namespace std;

int main()
{
    int a[50], n, i, j, k;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
        cin >> a[i];

    // Remove duplicate elements
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                // Shift elements to the left
                for(k = j; k < n - 1; k++)
                    a[k] = a[k + 1];

                n--;
                j--;
            }
        }
    }

    cout << "Array after removing duplicates: ";
    for(i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}


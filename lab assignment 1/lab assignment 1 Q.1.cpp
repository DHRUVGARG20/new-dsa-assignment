//		Q.1 Develop a Menu driven program to demonstrate the following operations of Arrays ——MENU——- 1. CREATE 2. DISPLAY 3. INSERT 4. DELETE 5. LINEAR SEARCH 6. EXIT 

#include <iostream>
using namespace std;

int main()
{
    int a[50], n = 0, choice, pos, value, i;

    do
    {
        cout << "\n--- MENU ---\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter number of elements: ";
                cin >> n;

                cout << "Enter elements: ";
                for(i = 0; i < n; i++)
                    cin >> a[i];
                break;

            case 2:
                cout << "Array: ";
                for(i = 0; i < n; i++)
                    cout << a[i] << " ";
                break;

            case 3:
                cout << "Enter position: ";
                cin >> pos;

                cout << "Enter value: ";
                cin >> value;

                for(i = n; i >= pos; i--)
                    a[i] = a[i - 1];

                a[pos - 1] = value;
                n++;
                break;

            case 4:
                cout << "Enter position: ";
                cin >> pos;

                for(i = pos - 1; i < n - 1; i++)
                    a[i] = a[i + 1];

                n--;
                break;

            case 5:
                cout << "Enter value to search: ";
                cin >> value;

                for(i = 0; i < n; i++)
                {
                    if(a[i] == value)
                    {
                        cout << "Element found at position "
                             << i + 1;
                        break;
                    }
                }

                if(i == n)
                    cout << "Element not found";
                break;

            case 6:
                cout << "Exit";
                break;

            default:
                cout << "Invalid choice";
        }

    } while(choice != 6);

    return 0;
}

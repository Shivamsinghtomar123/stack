#include <iostream>
using namespace std;
#define n 100
int main()
{
    int arr[100];
    int top = -1;
    int s;
    while (top <= n - 1)
    {
        cout << "Enter switch condition" << endl
             << "1 for insertion \t 2 for deletion \t 3 for display \t 4 for exit " << endl;
        cin >> s;
        switch (s)
        {
        case 1:
            if (top == n - 1)
            {
                cout << "stack overflow, cannot enter more elements " << endl;
                break;
            }
            else
            {
                cout << "Enter the element = ";
                top++;
                cin >> arr[top];
            }
            break;
        case 2:
            if (top == -1)
            {
                cout << "stack underflow ";
            }
            else
            {
                cout << "element deleted = ";
                int temp = arr[top];
                top--;
                cout << temp;
            }
            cout << endl;
            break;
        case 3:
            cout << "Element in stack = ";
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        
        case 4:
        int a;
        cout<<"If u want to exit from switch case then press 5";
        cin>>a;
        if(a == 5)
        {
            break;
        }
        }
    }
    return 0;
}
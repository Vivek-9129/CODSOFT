#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << endl
         << endl;
    cout << "                     Welcome to the Basic calculator !!" << endl
         << endl;
    cout << "Press 1: to continue and 0: to end " << endl;
    int userWish;
    cin >> userWish;
    if (userWish == 1)
    {
        while (true)
        {
            int operation;
            cout << "Press 1 for Addition" << endl;
            cout << "Press 2 for Subtraction" << endl;
            cout << "Press 3 for Multiplication" << endl;
            cout << "Press 4 for Division" << endl;
            cout << "Press 0 to stop the program" << endl;
            cout << "Enter Operations to be Perfromed" << endl;
            cin >> operation;
            if (operation == 0)
            {
                cout<<"Thank you for using our calculator"<<endl;
                cout<<"\n Program Terminated "<<endl;
                return 0;
            }
            int a, b;
            cout << "Enter the numbers for calculation : ";
            cin >> a >> b;
            switch (operation)
            {
            // case 0:
            //     cout<<"\n Program Terminated "<<endl;
            //     break;    
            case 1:
                cout << "The result is " << a + b << endl;
                cout<<"Thank you for Using our calculator"<<endl;
                break;
            case 2:
                cout << "The result is " << a - b << endl;
                break;
            case 3:
                cout << "The result is " << a * b << endl;
                break;
            case 4:
                if (b == 0)
                {
                    cout << "Sorry !! this operation can not be performed since b=0";
                    break;
                }
                else
                {
                    cout << "The result is " << a / b << endl;
                    break;
                }

            default:
                break;
            }
        }
    }
}
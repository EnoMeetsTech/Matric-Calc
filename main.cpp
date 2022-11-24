#include <iostream>

using namespace std;

int main()
{
    int matrix1 [3][2];
    int matrix2 [3][2];

    cout << "Welcome to ENOs Matrix Calculator" << endl <<endl;

    string name;
    cout << "Please input your name." << endl << endl;
    cin >> name;

    cout << "Hello, " << name << "." <<endl <<endl;


    for (int x = 0; x<3; x++){
         for (int y = 0; y<2; y++){
            cout << "Enter the value of A" << x << y << endl;
            cin >> matrix1 [x][y];

         }
    }
    cout << endl << "Now, you can enter the second matrix" <<endl;

     for (int x = 0; x<3; x++){
         for (int y = 0; y<2; y++){
            cout << "Enter the value of B" << x << y << endl;
            cin >> matrix2 [x][y];
         }
     }

        cout << "The summation is :" << endl;

         for (int x = 0; x<3; x++){
            for (int y = 0; y<2; y++){
                cout << "    " << matrix1[x][y] + matrix2 [x][y];
         }
         cout << endl;
     }


        cout << "Thank you " << name << " for using ENOs Matrix Calculator. See you next time." << endl;
}

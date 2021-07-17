#include <iostream>

using namespace std;

int main()
{
    int treesize = 0;
    cout << "Christmas tree size: ";
    cin >> treesize;
    for (int i = 0; i < treesize; i++)
    {
        for (int j = 1; j < treesize - i; j++){
            cout << " ";
        }
        for (int k = 0; k < i * 2 + 1; k++){
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i < treesize; i++){
        cout << " ";
    }
    cout << "*";
}

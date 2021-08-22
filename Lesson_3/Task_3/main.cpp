#include <iostream>

using namespace std;

int main()
{
    int column[5];
    for (int i = 0; i<5; i++){
        cout << "Enter number of stars in column #"<< i+1 <<":";
        cin >> column[i];
    }
    int maxc = column[0];
    for (int i = 0; i<5; i++){
        if(column[i] > maxc){
            maxc = column[i];
        }
    }
    for (int i = 0; i < maxc; i++){
        for (int k = 0; k < 5; k++)
        {
            if (i < column[k])
            {
                cout << "*";
            }else cout << " ";
        }
        cout << endl;
    }
}

#include <iostream>

using namespace std;

int main()
{
    int trykytnyksize=0;
    cout << "Enter size: ";
    cin >> trykytnyksize;

    for (int i=0; i < trykytnyksize; i++){
        cout << "*";
        for (int j=0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for(int i=0; i < trykytnyksize; i++){
        for(int j=trykytnyksize; j > i; j--){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for (int i=trykytnyksize; i >= 0; i--) {
        for(int j=0; j < trykytnyksize - i; j++ ) {
            cout << " ";
        }
        for(int j=0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 0; i < trykytnyksize; i++){
        for(int j=trykytnyksize; j>i+1; j--){
            cout << " ";
        }
        for(int j=0;j<= i; ++j){
            cout << "*";
        }
        cout << endl;
     }
     cout << endl;
}

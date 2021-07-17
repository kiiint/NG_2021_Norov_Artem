#include <iostream>

using namespace std;

int main()
{
    int sqsize = 0;
    cout << "Square size: ";
    cin >> sqsize;
    for(int i=0;i < sqsize; i++){
        for(int j=0;j < sqsize; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int myschool = 0;
    int schools[10];
    int rightschool = 0;
    for(int i=0; i<10; i++){
        cout << "Vvedi nomer shkoli#"<< i+1<< ":";
        cin >> schools[i];
    }
    cout << "Vvedi svoyu shkolu:";
    cin >> myschool;
    for (int i=0; i<10; i++){
        if(schools[i] == myschool){
            rightschool++;
        }
    }
    if (rightschool > 0){
        cout << "Ya znayu etu shkolu!";
    }else cout << "Ya ne znayu etu shkolu!";
    return 0;
}

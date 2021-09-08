#include <iostream>

using namespace std;

int main()
{
    int cards[10];
    int nomer = 0;
    int money = 0;
    int allmoney = 0;
    for (int i = 0; i<10; i++){
        cards[i]=0;
    }
    while(true){
        do{
            cout << "Enter number of your card:";
            cin >> nomer;
            if(nomer < 1 || nomer > 10){
                cout << "Could not find this card" << endl;
            }
        }while (nomer < 1 || nomer > 10);
        cout << "How much to put?";
        cin >> money;
        cards[nomer-1] = cards[nomer-1] + money;
        for (int i = 0; i<10; i++){
            cout << cards[i] << " ";
        }
        for (int i = 0; i<10; i++){
            allmoney += cards[i];
        }
        cout << "\nAll money on the cards " << allmoney << endl;
        allmoney = 0;
    }
    return 0;
}

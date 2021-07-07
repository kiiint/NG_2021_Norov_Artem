#include <iostream>

using namespace std;

int main()
{
    int money;
    cout << "Skolko ti zarabatuvaesh? ";
    cin >> money;
    if(money > 999) {
        if(money < 1000000)
            cout << "Kruto";
        if(money > 1000000)
            cout << "Da ti millioner";
    }
    if (money < 1000){
        cout << "Rabotai bolshe!, no ti molodec!";
    }
    return 0;
}

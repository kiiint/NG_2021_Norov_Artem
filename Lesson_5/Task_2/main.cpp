#include <iostream>

using namespace std;

void nullingcards(int cards[])
{
    for (int i = 0; i<10; i++){
        cards[i]=0;
    }
}

int inputCard(int nomer)
{
    do{
        cout << "Enter number of your card:";
        cin >> nomer;
        if(nomer < 1 || nomer > 10){
            cout << "Could not find this card" << endl;
        }
    }while (nomer < 1 || nomer > 10);

    return nomer;
}

int inputMoney(int money)
{
    cout << "How much to put?";
    cin >> money;

    return money;
}

int sumMoney(int cards[],int allmoney)
{
    for (int i = 0; i<10; i++){
        allmoney += cards[i];
    }
    return allmoney;
}
void showcards(int cards[])
{
    for (int i = 0; i<10; i++){
        cout << cards[i] << " ";
    }
}
void outputsum(int allmoney)
{
    cout << "\nAll money on the cards " << allmoney << endl;
}

int main()
{
    int cards[10];
    int nomer = 0;
    int money = 0;
    int allmoney = 0;
    nullingcards(cards);
    while (true)
    {
        nomer = inputCard(nomer);
        money = inputMoney(money);
        cards[nomer-1] = cards[nomer-1] + money;
        allmoney = sumMoney(cards,allmoney);
        showcards(cards);
        outputsum(allmoney);
        allmoney = 0;
    }
}

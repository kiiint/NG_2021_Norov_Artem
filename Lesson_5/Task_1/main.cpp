#include <iostream>

using namespace std;

int inputsize()
{
    int treesize = 0;
    cout << "Christmas tree size: ";
    cin >> treesize;
    return treesize;
}

void Drawspace(int treesize,int i)
{
    for (int j = 1; j < treesize - i; j++){
        cout << " ";
    }
}

void Drawstars(int treesize,int i)
{
    for (int k = 0; k < i * 2 + 1; k++){
        cout << "*";
    }
}

void Drawstump(int treesize)
{
    for (int i = 1; i < treesize; i++){
        cout << " ";
    }
    cout << "*";
}

void Drawtree(int treesize)
{
    for (int i = 0; i < treesize; i++)
    {
        Drawspace(treesize,i);
        Drawstars(treesize,i);
        cout << endl;
    }
    Drawstump(treesize);
}

int main()
{
    Drawtree(inputsize());
}

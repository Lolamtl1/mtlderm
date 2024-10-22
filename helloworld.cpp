#include <iostream>

using namespace std;

int main()
{
    int num;
    cout <<"Enter a number between 1 and 10:";
    cin >> num;

    for (int i = 0; i < num; i++){
        cout << "Hello RoboMaster!";
    }
    cout << endl;

    return 0;
}
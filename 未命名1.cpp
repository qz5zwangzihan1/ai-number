#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() { 
    // �������������
    srand(time(0));  
    int secret = rand() % 100 + 1;  // ����1-100�������
    int guess, attempts = 0;

    cout << "����AI�����Ѿ������1-100֮���һ�����֣�\n";

    do {
        cout << "��Ĳ²⣺";
        cin >> guess;
        attempts++;
        if (guess > secret) cout << "̫���ˣ�\n";
        else if (guess < secret) cout << "̫С�ˣ�\n";
        else cout << "��ϲ�������� " << attempts << " �β¶��ˣ�\n";
    } while (guess != secret);
    return 0;
}

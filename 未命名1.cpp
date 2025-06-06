#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() { 
    // 设置随机数种子
    srand(time(0));  
    int secret = rand() % 100 + 1;  // 生成1-100的随机数
    int guess, attempts = 0;

    cout << "我是AI，我已经想好了1-100之间的一个数字！\n";

    do {
        cout << "你的猜测：";
        cin >> guess;
        attempts++;
        if (guess > secret) cout << "太大了！\n";
        else if (guess < secret) cout << "太小了！\n";
        else cout << "恭喜！你用了 " << attempts << " 次猜对了！\n";
    } while (guess != secret);
    return 0;
}

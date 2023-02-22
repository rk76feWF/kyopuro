#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S = "AtCoder";

    cout << S.size() << endl;

    string T = "Contest";
    cout << S + T << endl;

    // Sの2文字目から長さ3だけの部分文字列 "Cod"
    cout << S.substr(2, 3) << endl;

    // Sの先頭の1文字を除く文字列 "tCoder"
    cout << S.substr(1) << endl;

    // Sの末尾の2文字を除く文字列 "AtCod"
    cout << S.substr(0, S.size() - 2) << endl;
}
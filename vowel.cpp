#include<iostream>
using namespace std;

int main(){
    string str = "Hello World!";
    string NewStr;
    int len = str.length();
    for (int i = 0; i < len; i++) {
        if (str[i] != 'A' && str[i] != 'a' && str[i] != 'E' && str[i] != 'e' && str[i] != 'I' && str[i] != 'i' && str[i] != 'O' && str[i] != 'o' && str[i] != 'U' && str[i] != 'u'){
            NewStr.push_back(str[i]);
        }
    }
    NewStr.push_back('\0');
    cout << NewStr << len;
    return 0;
}

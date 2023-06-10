#include <iostream>
#include <string>
using namespace std;

 string removeDuplicates( string str) {
  int len = str.length();
  int k = 0;
  for (int i = 0; i < len; ++i) {
    int j;
    for (j = 0; j < k; ++j) {
      if (str[i] == str[j]) {
        break;
      }
    }
    if (j == k) {
      str[k++] = str[i];
    }
  }
  str.erase(k, len - k);
  return str;
}

int main() {
   string str;
   cout << "Enter a string: ";
   getline( cin, str);
  str = removeDuplicates(str);
   cout << "The string with removed duplicates: " << str <<  endl;
  return 0;
}

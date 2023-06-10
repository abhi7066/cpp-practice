#include <iostream>
#include <string>
#include <bitset>
using namespace std;

bool isPangram( string str) {
   bitset<26> charCount;
  for (char c : str) {
    if (c >= 'A' && c <= 'Z') {
      charCount.set(c - 'A');
    } else if (c >= 'a' && c <= 'z') {
      charCount.set(c - 'a');
    }
  }
  return charCount.count() == 26;
}

int main() {
   string str;
   cout << "Enter a string: ";
   getline( cin, str);
  if (isPangram(str)) {
     cout << "The string is a pangram." <<  endl;
  } else {
     cout << "The string is not a pangram." <<  endl;
  }
  return 0;
}

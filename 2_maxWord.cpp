#include <iostream>
#include <string>
using namespace std;

int countWords(string sentence) {
  int wordCount = 0;
  bool inWord = false;
  for (int i = 0; i < sentence.length(); i++) {
    if (sentence[i] == ' ') {
      if (inWord) {
        wordCount++;
        inWord = false;
      }
    } else {
      inWord = true;
    }
  }
  if (inWord) {
    wordCount++;
  }
  return wordCount;
}

int main() {
  int numSentences;
  cout << "Enter the number of sentences: ";
  cin >> numSentences;
  cin.ignore(); // to clear the buffer after reading the number of sentences
  string *sentences = new string[numSentences];
  for (int i = 0; i < numSentences; i++) {
    cout << "Enter sentence " << i + 1 << ": ";
    getline(cin, sentences[i]);
  }
  int maxWords = 0;
  for (int i = 0; i < numSentences; i++) {
    int words = countWords(sentences[i]);
    if (words > maxWords) {
      maxWords = words;
    }
  }
  cout << "The string with the maximum number of words is: " << maxWords << endl;
  delete[] sentences;
  return 0;
}

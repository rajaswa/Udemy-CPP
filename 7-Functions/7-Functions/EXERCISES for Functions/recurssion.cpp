//
// Created by Rajaswa on 26-12-2017.
//
#include <iostream>

using namespace std;

bool check(string);


int main() {

    string word;
    cout << "enter the word: " << endl;
    cin >> word;
   if( check(word)){
       cout<<"palindrome";
   }else{
       cout<<"not a palindrome";
   }


    return 0;
}

bool check(string word) {
    int size;
    size = word.length();
    bool flag = 1;
    for (int i = 0; i < size; i++) {

        if (word[i] != word[size - 1 - i]) {
            return 0;
        }
    }
    return 1;
}
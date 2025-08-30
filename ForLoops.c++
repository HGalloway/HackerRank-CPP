#include <iostream>
#include <cstdio>
using namespace std;

const string numberEnglishRep[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void getInput(int *numArray) {
    for (int i = 0; i < 2; i++) {
        cin >> numArray[i];
    }
}

void printArray(int numArray[], int size) {
    cout << "------Array------" << endl;
    for (int i = 0; i <= size; i++) {
        cout << i << ": " << numArray[i] << endl;
    }
    cout << "----------------" << endl;
}

void sort(int numArray[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (numArray[j] > numArray[j + 1]) {
                swap(numArray[j], numArray[j + 1]);
            }
        }
    }
}

void printNumberName(int numArray[]) {
    for (int i = numArray[0]; i <= numArray[1]; i++) {
        if (i < 9) {
            cout << numberEnglishRep[i-1] << endl;
            
        }
        else {
            cout << numberEnglishRep[8] << endl;
            break;
        }
    }
}

void printEvenOrOdd(int greatestInt) {
    for (int i = 10; i <= greatestInt; i++) {
        if (i % 2 == 0) {
            cout << "even" << endl;
        }
        else {
            cout << "odd" << endl;
        }
    }
}

void printOutput(int numArray[]) {
    printNumberName(numArray);
    printEvenOrOdd(numArray[1]);
}

int main() {
    int numArray[1];

    getInput(numArray);
    
    int size = sizeof(numArray) / sizeof(numArray[0]);
    sort(numArray, size);

    printOutput(numArray);

    return 0;
} 


#include "scoreboard.hpp"
#include <iostream>
using namespace std;

bool isValidSize(int size) {
    return size > 0;
}

// Returns 0 if array is null or size is invalid, otherwise adds all scores
int calculateTotal(const int scores[], int size) {
    if (scores == nullptr || size <= 0) return 0;
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += scores[i];
    }
    return total;
}

double calculateAverage(const int scores[], int size) {
    if (scores == nullptr || size <= 0) return 0.0;
    return (double)calculateTotal(scores, size) / size;
}

// Starts at index 1 since lowest is already set to scores[0]
int findLowest(const int scores[], int size) {
    if (scores == nullptr || size <= 0) return 0;
    int lowest = scores[0];
    for (int i = 1; i < size; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    return lowest;
}

int findHighest(const int scores[], int size) {
    if (scores == nullptr || size <= 0) return 0;
    int highest = scores[0];
    for (int i = 1; i < size; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
        }
    }
    return highest;
}

int findScore(const int scores[], int size, int target) {
    if (scores == nullptr || size <= 0) return -1;
    for (int i = 0; i < size; i++) {
        if (scores[i] == target) {
            return i;
        }
    }
    return -1;
}

// Uses temp variable to avoid losing data during swap
void sortScores(int scores[], int size) {
    for (int start = 0; start < size - 1; start++) {
        int minIndex = start;
        for (int i = start + 1; i < size; i++) {
            if (scores[i] < scores[minIndex]) {
                minIndex = i;
            }
        }
        int temp = scores[start];
        scores[start] = scores[minIndex];
        scores[minIndex] = temp;
    }
}

void printScores(const int scores[], int size) {
    if (scores == nullptr || !isValidSize(size)) {
        cout << "No scores to print." << endl;
        return;
    }
    for (int i = 0; i < size; i++) {
        cout << scores[i];
        if (i < size - 1) {
            cout << " ";
        }
    }
    cout << endl;
}
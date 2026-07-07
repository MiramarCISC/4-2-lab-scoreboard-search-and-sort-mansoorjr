[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=24214425)
# CISC 192 Lab 4.2: Scoreboard Arrays

## Overview

In this lab, you will build a scoreboard analyzer using arrays, loops, searching, and sorting.

The program should store a fixed list of scores, calculate useful summary information, search for a score, and sort the scores. This lab builds on the previous labs by using functions to process arrays.

## Learning Goals

By completing this lab, you will practice:

- Declaring and using arrays
- Accessing array elements by index
- Traversing arrays with loops
- Passing arrays to functions
- Calculating totals, averages, minimums, and maximums
- Searching an array
- Sorting an array
- Compiling with `make`
- Running automated tests with `make test`

## Required Features

Your program must:

- Store scoreboard values in an array
- Calculate the total score
- Calculate the average score
- Find the lowest score
- Find the highest score
- Search for a target score
- Sort scores from lowest to highest
- Print scores before and after sorting
- Use the required functions declared in `include/scoreboard.hpp`
- Pass the automated tests

## Files You Will Edit

You should primarily edit:

- `src/scoreboard.cpp`
- `src/main.cpp`

Do not edit the files in `tests/` unless your instructor tells you to.

## Build and Run

```bash
make
./main
```

## Run Tests

```bash
make test
```

## Clean Build Files

```bash
make clean
```

## Required Functions

```cpp
int calculateTotal(const int scores[], int size);
double calculateAverage(const int scores[], int size);
int findLowest(const int scores[], int size);
int findHighest(const int scores[], int size);
int findScore(const int scores[], int size, int target);
void sortScores(int scores[], int size);
void printScores(const int scores[], int size);
bool isValidSize(int size);
```

## Expected Behavior

Your program should display the original scores, summary information, search result, and sorted scores.

Example:

```text
Scoreboard Analyzer

Original scores:
25 10 30 15 40

Total: 120
Average: 24
Lowest: 10
Highest: 40

Enter score to search for: 30
Score found at index 2

Sorted scores:
10 15 25 30 40
```

## Grading Notes

The tests call your functions directly. Your program may appear to run, but you will not receive full credit unless the required functions return correct values.

Pay close attention to array indexes. For an array with `size` elements, the valid indexes are `0` through `size - 1`.

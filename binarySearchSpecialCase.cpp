#include <iostream>
#include <vector>

using namespace std;

/*Special case of Binary Search algorithm when you don't 
actually have a target value you are searching for
Usually this is called a "Guessing Game"*/

int isCorrect(int n) {
    if (n > 10) {
        return 1;
    } else if (n < 10) {
        return -1;
    } else {
        return 0;
    }
}

int binarySearch(int low, int high) {
    while (low <= high) {
        int mid = (low + high) / 2;

        if (isCorrect(mid) > 0) {
            high = mid - 1;
        } else if (isCorrect(mid) < 0) {
            low = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}
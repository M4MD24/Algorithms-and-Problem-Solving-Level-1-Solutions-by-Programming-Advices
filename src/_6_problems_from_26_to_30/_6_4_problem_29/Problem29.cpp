#include <iostream>
using namespace std;

int readTargetNumber() {
    cout << "Enter Target Number:" << endl;
    int targetNumber;
    cin >> targetNumber;
    return targetNumber;
}

enum NumberType {
    Odd = 1,
    Even = 2
};

NumberType checkNumberType(const int NUMBER) {
    const bool IS_EVEN_NUMBER = NUMBER % 2 == 0;
    if (IS_EVEN_NUMBER)
        return Even;
    return Odd;
}

long calculateSumEvenNumbersFrom1toTargetNumberWithFor(const int TARGET_NUMBER) {
    long sumEvenNumbers = 0;
    for (int number = 1; number <= TARGET_NUMBER; ++number)
        if (checkNumberType(number) == Even)
            sumEvenNumbers += number;
    return sumEvenNumbers;
}

long calculateSumEvenNumbersFrom1toTargetNumberWithWhile(const int TARGET_NUMBER) {
    long sumEvenNumbers = 0;
    int number = 1;
    while (number <= TARGET_NUMBER) {
        if (checkNumberType(number) == Even)
            sumEvenNumbers += number;
        number++;
    }
    return sumEvenNumbers;
}

long calculateSumEvenNumbersFrom1toTargetNumberWithDoWhile(const int TARGET_NUMBER) {
    long sumEvenNumbers = 0;
    int number = 1;
    do
        if (checkNumberType(number) == Even)
            sumEvenNumbers += number;
    while (number++ < TARGET_NUMBER);
    return sumEvenNumbers;
}

void printSumEvenNumbers(const int SUM_EVEN_NUMBERS) { cout << "Sum Even Numbers = " << SUM_EVEN_NUMBERS << endl; }

int main() {
    const int TARGET_NUMBER = readTargetNumber();
    const string LINE = "******************************";
    cout << "(For)" << endl;
    printSumEvenNumbers(calculateSumEvenNumbersFrom1toTargetNumberWithFor(TARGET_NUMBER));
    cout << LINE << endl;
    cout << "(While)" << endl;
    printSumEvenNumbers(calculateSumEvenNumbersFrom1toTargetNumberWithWhile(TARGET_NUMBER));
    cout << LINE << endl;
    cout << "(Do-While)" << endl;
    printSumEvenNumbers(calculateSumEvenNumbersFrom1toTargetNumberWithDoWhile(TARGET_NUMBER));
}
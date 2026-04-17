#include <iostream>
#include <cmath>
using namespace std;

// 1. Right-angled triangle of stars5

void pattern1(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// 2. Inverted right-angled triangle
void pattern2(int n) {
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// 3. Floyd’s Triangle
void floydTriangle(int n) {
    int num = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }
}

// 4. Number pyramid (simple version)
void numberPyramid(int n) {
    for(int i = 1; i <= n; i++) {
        // spaces
        for(int s = 1; s <= n-i; s++) cout << "  ";
        // numbers
        for(int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// 7. Even or Odd
void evenOdd(int n) {
    if(n % 2 == 0) cout << n << " is Even\n";
    else cout << n << " is Odd\n";
}

// 8. Largest of 3 numbers
int largestOfThree(int a, int b, int c) {
    if(a >= b && a >= c) return a;
    else if(b >= a && b >= c) return b;
    else return c;
}

// 9. Leap Year
bool isLeapYear(int year) {
    if(year % 400 == 0) return true;
    if(year % 100 == 0) return false;
    if(year % 4 == 0) return true;
    return false;
}

// 12. First N natural numbers
void naturalNumbers(int n) {
    for(int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
}

// 13. Sum of first N natural numbers
int sumNatural(int n) {
    return n * (n + 1) / 2;
}

// 14. Prime Check
bool isPrime(int n) {
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    
    for(int i = 5; i*i <= n; i += 6) {
        if(n % i == 0 || n % (i+2) == 0) return false;
    }
    return true;
}

// 15. Factorial
long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// 16. Armstrong Number
bool isArmstrong(int n) {
    int original = n, sum = 0, digits = 0, temp = n;
    
    while(temp) { digits++; temp /= 10; }
    
    temp = n;
    while(temp) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    return sum == original;
}

// 17. Fibonacci Series
void fibonacci(int n) {
    int a = 0, b = 1, c;
    cout << a << " " << b << " ";
    for(int i = 3; i <= n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}

// 18. Count digits
int countDigits(int n) {
    if(n == 0) return 1;
    int count = 0;
    while(n) {
        count++;
        n /= 10;
    }
    return count;
}

// 19. Reverse Number + Palindrome Check
bool isPalindrome(int n) {
    int original = n, reversed = 0;
    while(n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

// 20. Sum of digits
int sumOfDigits(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// 21. Sum, Average, Max, Min in array
void arrayStats(int arr[], int n) {
    int sum = 0, max = arr[0], min = arr[0];
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    cout << "Sum = " << sum << endl;
    cout << "Average = " << (float)sum/n << endl;
    cout << "Max = " << max << "  Min = " << min << endl;
}

// 25. Reverse array in-place
void reverseArray(int arr[], int n) {
    for(int i = 0, j = n-1; i < j; i++, j--) {
        swap(arr[i], arr[j]);
    }
}

// 28. Input & Print 2D Matrix
void printMatrix(int mat[][100], int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

// 29. Sum of each row & column
void rowColSum(int mat[][100], int r, int c) {
    cout << "Row sums:\n";
    for(int i = 0; i < r; i++) {
        int sum = 0;
        for(int j = 0; j < c; j++) sum += mat[i][j];
        cout << "Row " << i+1 << ": " << sum << endl;
    }
    
    cout << "\nColumn sums:\n";
    for(int j = 0; j < c; j++) {
        int sum = 0;
        for(int i = 0; i < r; i++) sum += mat[i][j];
        cout << "Col " << j+1 << ": " << sum << endl;
    }
}

// 31. Transpose of matrix
void transpose(int mat[][100], int trans[][100], int r, int c) {
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            trans[j][i] = mat[i][j];
}

// 34. Matrix Multiplication
void matrixMultiply(int a[][100], int b[][100], int res[][100], int r1, int c1, int c2) {
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for(int k = 0; k < c1; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

// 39. GCD using Euclidean algorithm
int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    // You can call any function here for testing
    // Example:
    // pattern1(5);
    // cout << isPrime(17) << endl;
    // fibonacci(10);
    
    cout << "Select any function number to test (1-40) or modify main as needed.\n";
    return 0;
}
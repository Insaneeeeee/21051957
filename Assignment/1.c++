#include<iostream>
using namespace std;
void A01() {
    // 1 WAP to create an array that can store max. 50 integers and display the contents of the array
    int main_1() {
        int arr[100], n;
        cout << "Enter the size of the array" << endl;
        cin >> n;
        cout << "Enter the integers\n";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << "The integers are" << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << endl;
        }
        return 0;
    }
    main_1();
}

void A010() {
    // 10. WAP to find the factorial of a number n by using a suitable user defined function (say fact) for
    // // it.
    



    int main_1() {
        int n;
        long factorial = 1.0;

        cout << "Enter a positive integer: ";
        cin >> n;

        if (n < 0)
            cout << "Error! Factorial of a negative number doesn't exist.";
        else {
            for (int i = 1; i <= n; ++i) {
                factorial *= i;
            }
            cout << "Factorial of " << n << " = " << factorial;
        }

        return 0;
    }
    main_1();
}

void A011() {
    // WAP to swap two numbers using call by reference.
    


    void swap(int * , int * );

    int main_1() {
        int x, y;

        cout << "Enter the value of x and y" << endl;
        cin >> x >> y;
        cout << "Before Swapping" << "\n" << "x =" << x << "\ny =" << y << endl;

        swap( & x, & y);

        cout << "After Swapping" << "\nx =" << x << "\ny =" << y << endl;

        return 0;
    }

    void swap(int * a, int * b) {
        int temp;

        temp = * b;
        * b = * a;
        * a = temp;
    }
    main_1();
}

void A012() {
    // WAP to print the numbers which are divisible by 7 and 13 within a range
    


    int main_1() {
        int i, f, l;
        cout << "Enter the range within which u want to print the no's :" << endl;
        cout << "\nEnter the start point :" << endl;
        cin >> f;
        cout << "Enter the last point :" << endl;
        cin >> l;
        cout << "\n The no's which are divisible by 7 and 13 are :\n" << endl;
        for (i = f; i <= l; i++) {
            if (i % 7 == 0 && i % 13 == 0)
                cout << i << endl;
        }
        return 0;
    }
    main_1();
}

void A013() {
    // WAP to replace all vowels from a string with its immediate consonant.
    

    #include <conio.h>


    int main_1() {
        char str[50], s[50];
        int i;
        cout << "Enter any string: " << endl;
        gets(str);
        for (i = 0; str[i] != '\0'; i++) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                s[i] = str[i + 1];
            } else
                s[i] = str[i];
        }
        cout << "\nNew String (after replacing vowel )= s" << s << endl;
        getch();
        return 0;
    }
    main_1();
}

void A014() {
    // 14 WAP to find the position of substring in a given string.
    

    #include <string.h>



    int main_1() {
        char s[30], t[20];
        char * found;

        /* Entering the main string */
        puts("Enter the first string: ");
        gets(s);

        /* Entering the string whose position or index to be displayed */
        puts("Enter the string to be searched: ");
        gets(t);

        /*Searching string t in string s */
        found = strstr(s, t);
        if (found)
            cout << "Second String is found in the First String at position.\n" << found - s + 1;
        else
            cout << "String not found";
        return 0;
    }
    main_1();
}

void A015() {
    // Count frequency of each character in a string.
    


    int main_1() {
        char str[100] = "this string contains many alphabets";
        int i = 0, alphabet[26] = {
            0
        }, j;
        while (str[i] != '\0') {
            if (str[i] >= 'a' && str[i] <= 'z') {
                j = str[i] - 'a';
                ++alphabet[j];
            }
            ++i;
        }
        cout << "Frequency of all alphabets in the string is:" << endl;
        for (i = 0; i < 26; i++)
            cout << char(i + 'a') << " : " << alphabet[i] << endl;
        return 0;
    }

    main_1();
}

void A02() {
    // 2 WAP to find out the sum of the numbers stored in an array of integers.
    


    int main_1() {

        int arr[50], n, sum;
        cout << "Enter the size of an array" << endl;
        cin >> n;
        cout << "Enter number" << endl;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            sum = sum + arr[i];
        }
        cout << "the sum of array is :" << sum << endl;
        return 0;
    }
    main_1();
}

void A03() {
    // 3 WAP to find largest element stored in an array.
    


    int main_1() {
        int arr[50], n;
        cout << "Enter the size of array" << endl;
        cin >> n;
        cout << "Enter integers\n";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int max = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        cout << "The largest Element is : " << max << endl;
        return 0;
    }
    main_1();
}

void A04() {
    // 4 WAP to display the array elements in ascending order.
    


    int main_1() {
        int arr[100], n, i, j, temp;
        cout << "Enter the size of the array";
        cin >> n;
        cout << "Enter the elements";
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (arr[i] > arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        cout << "The elements are in ascending order \n";
        for (i = 0; i < n; i++) {
            cout << arr[i];
            cout << "\n";
        }
        return 0;
    }
    main_1();
}

void A05() {
    // 5 WAP to add two matrices and display it.
    


    int main_1() {
        int m, n, c, d, a[10][10], b[10][10], sum[10][10];
        cout << "Enter the number of rows and columns of matrix" << endl;
        cin >> m >> n;
        cout << "Enter the elements of a matrix" << endl;
        for (c = 0; c < m; c++)
            for (d = 0; d < n; d++)
                cin << a[c][d];
        cout << "Enter the elements of b matrix" << endl;
        for (c = 0; c < m; c++)
            for (d = 0; d < n; d++)
                scanf("%d", & b[c][d]);
        cout << "Sum of entered matrices:-" << endl;
        for (c = 0; c < m; c++) {
            for (d = 0; d < n; d++) {
                sum[c][d] = a[c][d] + b[c][d];
                cout << sum[c][d];
            }
            cout << endl;
        }
        return 0;
    }
    main_1();
}

void A06() {
    // 6 WAP to multiply two matrices and display it.
    #include<iostream>


    int main_1() {
        int matOne[3][3], matTwo[3][3], matThree[3][3];
        int i, j, k, sum = 0;
        cout << "Enter 9 Elements for First Matrix: ";
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++)
                cin >> matOne[i][j];
        }
        cout << "\nEnter 9 Elements for Second Matrix: ";
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++)
                cin >> matTwo[i][j];
        }
        // Multiplying two matrices...
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                sum = 0;
                for (k = 0; k < 3; k++)
                    sum = sum + (matOne[i][k] * matTwo[k][j]);
                matThree[i][j] = sum;
            }
        }
        cout << "\nMultiplication Result:\n";
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++)
                cout << matThree[i][j] << "\t";
            cout << endl;
        }
        cout << endl;
        return 0;
    }
    main_1();
}

void A07() {
    // 7 WAP to find the Trace(sum of the diagonal element) of a given mxn matrix .
    

    #define SIZE 5


    int main_1() {
        int matrix[SIZE][SIZE];
        int sum_left = 0, sum_right = 0;
        cout << "Enter elements into the matrix \n";

        //Taking input into the Matrix and 
        //Adding if they are diagonal elements
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                cin >> matrix[i][j];
                if (i == j)
                    sum_left += matrix[i][j];
                if ((i + j) == SIZE - 1)
                    sum_right += matrix[i][j];
            }
        }

        cout << "Sum of Left Diagonal: " << sum_left << endl;
        cout << "Sum of Right Diagonal: " << sum_right << endl;

        return 0;
    }
    main_1();
}

void A08() {
    // 8. WAP to find out the sum of the elements stored in a matrix.
    #include<iostream>

    #include<conio.h>


    int main_1() {
        int mat[3][3], i, j, sum;
        sum = 0;
        cout << "Enter all 9 elements of 3*3 Matrix:-\n" << endl;
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                cin >> mat[i][j];
                sum = sum + mat[i][j];
            }
        }
        cout << "\nSum of all elements = " << sum;
        getch();
        return 0;
    }
    main_1();
}

void A09() {
    // 9. WAP to find out the transpose of a given matrix.
    


    int main_1() {
        int i = 0, j = 0, r = 0, c = 0;

        cout << "Input number of row: " << endl;
        cin >> r;
        cout << "Input number of column: " << endl;
        cin >> c;
        cout << "Enter array: " << endl;
        int a[r][c];
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                cout << "\n" <<
                    "element:" << i << "," << j << endl;
                cin >> a[i][j];
            }
        }
        cout << "\n" <<
            "The array is:" << endl;
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                cout << "\t" << a[i][j];
            }
            printf("\n\n");
        }
        int t[c][r];
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                t[j][i] = a[i][j];
            }
        }
        cout << "Transpose is:" <<
            "\n";
        for (i = 0; i < c; i++) {
            for (j = 0; j < r; j++) {
                cout << "\t" << t[i][j];
            }
            cout << "\n\n";
        }

        return 0;
    }
    main_1();
}

void A001() {
    //input two arrays and find their union
    #include<iostream>



    int main_1() {
        int n1, n2, i, j, flag;
        cout << "Enter the no. of elements of the 1st array: ";
        cin >> n1;

        int arr1[n1];
        cout << "\nEnter the elements of the 1st array: ";
        for (i = 0; i < n1; i++) {
            cin >> arr1[i];
        }

        cout << "\nEnter the no. of elements of the 2nd array: ";
        cin >> n2;

        int arr2[n2];
        cout << "\nEnter the elements of the 2nd array: ";
        for (i = 0; i < n2; i++) {
            cin >> arr2[i];
        }

        cout << "\nUnion of the two arrays: ";

        for (i = 0; i < n1; i++) {
            cout << arr1[i] << " ";
        }

        for (j = 0; j < n2; j++) {
            flag = 0;
            for (i = 0; i < n1; i++) {
                if (arr1[i] == arr2[j]) {
                    flag = 1;
                    break;
                }
            }

            if (flag != 1) {
                cout << arr2[j] << " ";
            }

        }

        return 0;
    }
    main_1();
}

void A002() {
    // Enter any array , reverse it and display result
    


    int main_1() {
        int a[50], size;
        int temp;
        int j, i;
        cout << "Enter the size of the array" << endl;
        cin >> size;
        cout << "Enter the Elements : " << endl;
        for (int i = 0; i < size; i++) {

            cin >> a[i];
        }
        //cout << "Reverse array Elements :" << endl;
        for (i = 0, j = size - 1; i < size / 2; i++, j--) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        cout << "Reverse array Elements :" << endl;
        for (int i = 0; i < size; i++) {
            cout << a[i] << endl;
        }
        return 0;
    }

    main_1();
}

void A003() {
    // write a program in C++ to get the reverse of a particular number using functions concept
    


    int reverse(int n) {
        int rem, reverse = 0;
        while (n != 0) {
            rem = n % 10;
            reverse = reverse * 10 + rem;
            n /= 10;
        }
        return reverse;
    }
    int main_1() {
        int n;
        cout << "Enter a number: ";
        cin >> n;
        cout << "Reversed Number: " << reverse(n) << endl;
        return 0;
    }
    main_1();
}

void A004() {
    // input two array and merge two  arrays and merge two arrays
    


    int main_1() {
        int a1[50], a2[50], a3[100];
        int m, n, i, k;
        cout << "Enter the Size for First Array: ";
        cin >> m;
        cout << "Enter " << m << " Elements for First Array: ";
        for (i = 0; i < m; i++) {
            cin >> a1[i];
            a3[i] = a1[i];
        }
        k = i;
        cout << "\nEnter the Size for Second Array: ";
        cin >> n;
        cout << "Enter " << n << " Elements for Second Array: ";
        for (i = 0; i < n; i++) {
            cin >> a2[i];
            a3[k] = a2[i];
            k++;
        }
        cout << "\nThe New Array (Merged Array):\n";
        for (i = 0; i < k; i++)
            cout << a3[i] << " ";
        cout << endl;
        return 0;
    }
    main_1();
}

void A005() {
    // input any arrays , extract the even numbers and odd number | menu driven
    


    int main_1() {
        int n, i;
        cout << "Enter the no of elements of array :";
        cin >> n;
        int a[n];
        cout << "\nEnter the elements of array:";
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << "\nDISPALYING THE OPTIONS ";
        cout << "\n1.FOR EVEN NO'S";
        cout << "\n2.FOR ODD NO'S";
        int choice;
        cout << "\nEnter your choice :";
        cin >> choice;
        switch (choice) {
        case 1: {
            cout << "\nThe even no's present are :";
            for (i = 0; i < n; i++) {
                if (a[i] % 2 == 0)
                    cout << a[i] << " ";
            }
            break;
        }
        case 2: {
            cout << "\nThe odd no's present are :";
            for (i = 0; i < n; i++) {
                if (a[i] % 2 != 0)
                    cout << a[i] << " ";
            }
            break;
        }
        default:
            cout << "\nWrong choice entered";
            break;
        }
        return 0;
    }
    main_1();
}

void A006() {
    // input an string and reverse the string with special characters 
    #include<iostream>

    #include<string.h>


    int main() {
        char str[50], temp;
        int i, j;
        cout << "Enter a string : ";
        gets(str);
        j = strlen(str) - 1;
        for (i = 0; i < j; i++, j--) {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }
        cout << "\nReverse string : " << str;
        return 0;
    }
    main_1();
}

void A007() {
    // sum of n elements using functions concept
    


    int sum(int arr[], int n) {
        if (n <= 0) {
            return 0;
        }
        return (sum(arr, n - 1) + arr[n - 1]);
    }
    int main_1() {
        int n;
        cout << "Enter no of array elements :";
        cin >> n;
        int arr[n];
        cout << "\nEnter the elements of array :";
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << "SUM= " << sum(arr, n);
        return 0;
    }

    main_1();
}

void A21() {
    // Q.1. Write a program in C++ to print hello on the screen.
    

    int main_1() {
        std::cout << "Hello World!";
        return 0;
    }

    main_1();
}

void A22() {
    // Q.2. Write a C++ program to find prime numbers between 1-1000. [Create a prime() function]
    



    int prime(int);

    int main_1() {
        int flag;
        cout << "PRIME NUMBERS BETWEEN 1 TO 1000 ARE : ";
        for (int i = 1; i <= 1000; ++i) {

            flag = prime(i);

            if (flag == 0)
                cout << i << ", ";
        }

        return 0;
    }

    int prime(int n) {
        int m, flag = 0, j;
        m = n;
        for (j = 2; j < m; j++) {
            flag = 0;
            if (n % j == 0) {

                flag = 1;
                break;
            }
        }

        return flag;
    }
    main_1();
}

void A23() {
    #include<iostream>

    #include<cmath>

    #include<cstdlib>



    int main_1() {
        char a[100];
        cout << "Enter 1st no :";
        cin >> a;
        char a1[100];
        cout << "Enter 2nd no :";
        cin >> a1;
        int ans = atoi(a) + atoi(a1);
        cout << "Sum :" << ans;

        return 0;
    }

    main_1();
}

void A24() {
    // Create a class which stores name, roll number and total marks for a student. Input the data for a student and display it.
    



    class student {
        char name[30];
        int rollNo;
        int total;

        public:

            void input(void);
        void output(void);
    };

    void student::input(void) {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter total marks outof 500: ";
        cin >> total;
    }

    void student::output(void) {
        cout << "Student details:\n";
        cout << "Name:" << name << endl << "Roll Number:" << rollNo << endl << "Total:" << total;
    }

    int main_1() {
        student std;

        std.input();
        std.output();

        return 0;
    }
    main_1();
}

void A25() {
    // *Q.5. Modify the program 4) to store marks in 10 subjects. Calculate the total marks and
    // percentage of a student and display it.*/
    



    class student {
        char name[30];
        int rollNo;
        int marks[10];
        int total;
        float percentage;

        public:
            void input(void);
        void output(void);
    };

    void student::input(void) {
        int i;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks in 10 subjects ";
        for (i = 0; i < 10; i++) {
            cin >> marks[i];
            total = total + marks[i];
        }
    }

    void student::output(void) {
        percentage = total / 10.0;
        cout << "Student details:\n";
        cout << "Name:" << name << endl <<
            "Roll Number:" << rollNo << endl <<
            "Total:" << total << endl << "Percentage :" << percentage;
    }

    int main_1() {
        student std;

        std.input();
        std.output();

        return 0;
    }
    main_1();
}

void A26() {
    #include<iostream>


    class Complex {
        public:
            int real;
        int imag;

        void setvalue() {
            cin >> real;
            cin >> imag;
        }

        void display() {
            cout << real << "+" << imag << "i" << endl;
        }

        void sum(Complex c1, Complex c2) {
            real = c1.real + c2.real;
            imag = c1.imag + c2.imag;
        }
    };
    int main_1() {
        Complex c1, c2, c3;
        cout << "Enter real and imaginary part of first complex number" << endl;
        c1.setvalue();
        cout << "Enter real and imaginary part of second complex number" << endl;
        c2.setvalue();
        cout << "Sum of two complex numbers is" << endl;
        c3.sum(c1, c2);
        c3.display();
        return 0;
    }
    main_1();
}

void A27() {
    

    #include <math.h>


    int main_1() {
        int a, b;
        cin >> a >> b;
        double distance;
        distance = sqrt(pow(a, 2) + pow(b, 2));
        cout << distance << endl;
        return 0;
    }

    main_1();
}

void A311() {
    /*Q.1. Create a class Distance that stores a Distance in feet and inch. Input 2 Distance values in
    objects, add them, store the resultant Distance in an object and display it.
    [Write the above program in two ways.
    a) store the resultant Distance in the calling object:C3.add(C1,C2)
    b) return the resultant object C3=C1.add(C2)*/
    


    class Distance {
        private:
            int feet;
        int inches;
        public:
            void input() {
                cout << "Enter feet: ";
                cin >> feet;
                cout << "Enter inches: ";
                cin >> inches;
            }
        void output() {
            cout << "Distance is feet= " << feet << ", inches= " << inches << endl;
        }
        void add(Distance d1, Distance d2) {
            feet = d1.feet + d2.feet;
            inches = d1.inches + d2.inches;
            feet = feet + (inches / 12);
            inches = inches % 12;
        }
    };
    int main_1() {
        Distance d1, d2, d3;
        d1.input();
        d2.input();
        d1.output();
        d2.output();
        d3.add(d1, d2);
        d3.output();
        return 0;
    }
    main_1();
}

void A312() {
    /*Q.1. Create a class Distance that stores a Distance in feet and inch. Input 2 Distance values in
    objects, add them, store the resultant Distance in an object and display it.
    [Write the above program in two ways.
    a) store the resultant Distance in the calling object:C3.add(C1,C2)
    b) return the resultant object C3=C1.add(C2)*/
    


    class Distance {
        private:
            int feet;
        int inches;

        public:
            void input() {
                cout << "Enter feet: ";
                cin >> feet;
                cout << "Enter inches: ";
                cin >> inches;
            }
        void output() {
            cout << "Distance is feet= " << feet << ", inches= " << inches << endl;
        }
        Distance add(Distance d2) {
            Distance d4;
            feet = feet + d2.feet;
            inches = inches + d2.inches;
            d4.feet = feet + (inches / 12);
            d4.inches = inches % 12;
            return d4;
        }
    };
    int main_1() {
        Distance d1, d2, d3;
        d1.input();
        d2.input();
        d1.output();
        d2.output();
        d3 = d1.add(d2);
        d3.output();
        return 0;
    }
    main_1();
}

void A321() {
    /*Q.2. Write a C++ program to swap two numbers using the following:
    a. Call by value */
    


    void swap(int, int);
    int main_1() {
        int num1, num2;
        cout << "\n Enter First Number : ";
        cin >> num1;
        cout << "\n Enter Second Number : ";
        cin >> num2;
        cout << "\n Before Swapping the Value : \n" <<
            " " << num1 << "\t" << num2 << "\n";
        swap(num1, num2);
        // cout<<"\n Outside Function After Swapping the Value : \n"<<" "<<num1<<"\t"<<num2<<"\n";
    }
    void swap(int num1, int num2) {
        int num3;
        num3 = num1;
        num1 = num2;
        num2 = num3;
        cout << "\n Inside Function After Swapping the Value : \n" <<
            " " << num1 << "\t" << num2;
    }
    main_1();
}

void A322() {
    // b. Call by address (using pointer)
    



    void swap(int * , int * );

    int main_1() {
        int a, b;
        cout << "Enter Value Of A :: ";
        cin >> a;
        cout << "\nEnter Value of B :: ";
        cin >> b;

        cout << "\nBefore Swapping, Value of :: \n\tA = " << a << "\tB = " << b << "\n";

        swap( & a, & b);

        cout << "\nOutside Function After Swapping, Value of :: \n\tA = " << a << "\tB = " << b << "\n";
    }
    void swap(int * a, int * b) {
        int c;
        c = * a;
        * a = * b;
        * b = c;
        cout << "\nInside Function After Swapping, Value of :: \n\tA = " << * a << "\tB = " << * b << "\n";
    }

    main_1();
}

void A323() {

    // c.call by reference
    


    void swap(int & num1, int & num2) //&num1 and &bnum2 are Reference variables
    {
        int temp;
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    int main_1() {
        int a, b;
        cout << "Enter Value Of A :: ";
        cin >> a;
        cout << "\nEnter Value of B :: ";
        cin >> b;
        cout << "\n Before swapping" <<
            "\n A = " << a << "\n B = " << b << endl;
        swap(a, b);
        cout << "\n After swapping" <<
            "\n A = " << a << "\n B = " << b << endl;
        return 0;
    }
    main_1();
}

void A33() {
    // Q.3. Write a C++ program to capitalize the first letter of each word of a given string. Words must be separated by only one space.
    
 //#include <stdio.h>
    #include <string.h>



    int main_1() {
        int i;
        char s[30];
        cout << "\nEnter any string :: ";
        gets(s);

        int len = strlen(s);

        for (i = 0; i < len; i++) {
            if (i == 0)

                s[i] = toupper(s[i]);

            else

            if (s[i] == ' ') {
                s[i + 1] = toupper(s[i + 1]);
            }
        }
        cout << "\nUpdated New String is :: " << s << "\n";

        return 0;
    }
    main_1();
}

void A34() {
    // Q.4. Write a C++ program to find the largest word in a given string.
    

    #include <string.h>



    string Longest(string s) {

        string r, temp;
        int n;

        for (int i = 0; i < s.length(); i++) {
            n = s[i];
            if (s[i] != ' ' && (n >= 65 && n <= 90) || (n >= 97 && n <= 122) || (n >= 48 && n <= 57))

                r.push_back(s[i]);

            else

                break;
        }

        for (int i = 0; i < s.length(); i++) {
            n = s[i];

            if (s[i] != ' ' && (n >= 65 && n <= 90) || (n >= 97 && n <= 122) || (n >= 48 && n <= 57)) {
                temp.push_back(s[i]);

                if (i + 1 == s.length() && temp.length() > r.length())

                    r = temp;
            } else {
                if (temp.length() > r.length())

                    r = temp;

                temp.clear();
            }
        }

        return r;
    }

    int main_1() {
        string s1;
        cout << "Enter a string : ";
        getline(cin, s1);
        cout << "Longest word in string is:" << Longest(s1);
        return 0;
    }

    main_1();
}

void A35() {
    // Q.5. Write a C++ program to sort characters (numbers and punctuation symbols are not included) in a string.
    

    #include <string.h>



    string sort(string s1) {

        bool flag;
        char ch;

        do {
            flag = false;

            for (int i = 0; i < s1.length() - 1; i++) {
                s1[i] = tolower(s1[i]);
                if (s1[i] > s1[i + 1]) {
                    ch = s1[i];
                    s1[i] = s1[i + 1];
                    s1[i + 1] = ch;
                    flag = true;
                }
            }
        } while (flag);

        // Remove spaces
        string str;
        for (int y = 0; y < s1.length(); y++) {
            if (s1[y] != ' ') {
                str.push_back(s1[y]);
            }
        }

        return str;
    }

    int main_1() {

        string s;
        cout << "Enter a string value :" << endl;
        getline(cin, s);
        cout << "Sorted String is " << sort(s);

        return 0;
    }

    main_1();
}

void A36() {
    // Q.6. Write a C++ program to count all the words in a given string.
    

    #include <string.h>


    int main_1() {
        char str[50];
        int count = 0, i;
        cout << "Enter a string : ";
        gets(str);
        for (i = 0; str[i] != '\0'; i++) {
            if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
                count++;
        }
        cout << "Number of words in the string are: " << count + 1;
        return 0;
    }
    main_1();
}

void A37() {
    // Q.7. Write a C++ program to dynamically allocate an array of 10 elements and print the sum.
    



    int main_1() {
        int * ptr, limit, i, sum = 0;

        cout << "Enter limit of the array: ";
        cin >> limit;

        ptr = (int * ) malloc(limit * sizeof(int));

        // read array elements
        for (i = 0; i < limit; i++) {
            cout << "Enter element " << i + 1 << ":";
            cin >> * (ptr + i);
        }

        // print array elements
        cout << "Entered array elements are:" << endl;
        for (i = 0; i < limit; i++) {
            cout << * (ptr + i) << "\t";
            sum += * (ptr + i);
        }
        cout << endl <<
            "Sum of array elements is: " << sum;

        free(ptr);

        return 0;
    }

    main_1();
}

void A41() {
    // 1. WAP to find the area of a circle, a rectangle, and a triangle, using the concept of function overloading
    


    float area(float bs, float ht)

    {

        return ((bs * ht) / 2);
    }
    int area(int l, int b) {
        return l * b;
    }
    double area(double r) {
        return 3.142 * r * r;
    }

    int main_1() {
        int l, b;
        float bs, ht;
        double r;
        cout << "Enter the base of triangle \n";
        cin >> bs;
        cout << "Enter the height of triangle\n";
        cin >> ht;
        cout << "Enter the length of rectangle\n";
        cin >> l;
        cout << "Enter the width of rectangle \n";
        cin >> b;
        cout << "Enter the radius of circle\n";
        cin >> r;
        cout << endl << "The area of triangle is " << area(bs, ht) << endl;
        cout << endl << "The area of rectangle is" << area(l, b) << endl;
        cout << endl << "The area of circle is " << area(r) << endl;
    }

    main_1();
}

void A42() {
    //  WAP to find the volume of a sphere, a cylinder, and a cuboid, using function overloading.
    


    float vol(int, int);
    float vol(int, int, int);
    float vol(int);

    int main_1() {
        int r, h, l1, b1, h1, r2;
        cout << "Enter radius and height of a cylinder:";
        cin >> r >> h;
        cout << "Enter length ,breadth and height of cuboid:";
        cin >> l1 >> b1 >> h1;
        cout << "Enter radius of sphere: ";
        cin >> r2;
        cout << "Volume of cylinder is " << vol(r, h);
        cout << "\nVolume of cuboid is " << vol(l1, b1, h1);
        cout << "\nVolume of sphere is " << vol(r2);
        return 0;
    }
    float vol(int r, int h) {
        return (3.14 * r * r * h);
    }
    float vol(int l, int b, int h) {
        return (l * b * h);
    }
    float vol(int a) {
        return ((4.0 / 3.0) * 3.14 * a * a * a);
    }

    main_1();
}

void A43() {
    // 3. WAP, which displays a given character, n number of times, using a function. When the n value is not provided, it should print the given character 80 times. When both the character and n value are not provided, it should print ‘*’ character 80 times.
    // [Write the above program in two ways:-
    // -using function overloading.
    // -using default arguments.]
    



    void def(int n = 80, char c = '*') {
        for (int i = 1; i <= n; i++)
            cout << c << " ";
    }
    void def(char c) {
        for (int i = 1; i <= 80; i++)
            cout << c << " ";
    }
    int main_1() {
        int n;
        char c;
        cout << "Enter n: ";
        cin >> n;
        cout << "Enter character: ";
        cin >> c;
        def(n, c); //normal call
        cout << '\n';
        def(); //default argument
        cout << '\n';
        def(c); //function overloading

        return 0;
    }
    main_1();
}

void A44() {
    // 4. WAP to find the square and cube of a number using an inline function
    


    class power {
        public:
            inline int square(int n) {
                return n * n;
            }
        inline int cube(int n) {
            return n * n * n;
        }
    };
    int main_1() {
        int n, r;
        power p;
        cout << "\nEnter a no: \n";
        cin >> n;
        r = p.square(n);
        cout << "\nSquare of " << n << " = " << r << endl;
        r = p.cube(n);
        cout << "\nCube of " << n << " = " << r << endl;
        return 0;
    }

    main_1();
}

void A45() {
    // 5. Write a C++ program to calculate the power of any number using recursion.
    



    int Power(int, int);

    int main_1() {
        int x, y, result;

        cout << "Enter value of x: ";
        cin >> x;

        cout << "Enter value of y: ";
        cin >> y;

        result = Power(x, y);
        cout << x << "^" << y << " = " << result;

        return 0;
    }

    int Power(int x, int y) {
        if (y != 0)
            return (x * Power(x, y - 1));
        else
            return 1;
    }
    main_1();
}

void A46() {
    // 6.  Write a C++  program for binary search using recursion.
    



    // A recursive binary search function. It returns
    // location of x in given array arr[l..r] is present,
    // otherwise -1
    int binarySearch(int arr[], int l, int r, int x) {
        if (r >= l) {
            int mid = l + (r - l) / 2;

            // If the element is present at the middle itself
            if (arr[mid] == x)
                return mid;

            // If element is smaller than mid, then it can only be present in left subarray
            if (arr[mid] > x)
                return binarySearch(arr, l, mid - 1, x);

            // Else the element can only be present  in right subarray
            return binarySearch(arr, mid + 1, r, x);
        }

        // We reach here when element is not present in array
        return -1;
    }

    int main(void) {
        int s;
        cout << "Enter the size of array :";
        cin >> s;
        int arr[s];
        cout << "Enter the elements of array :";
        for (int i = 0; i < s; i++)
            cin >> arr[i];
        int x;
        cout << "Enter a value to be searced :";
        cin >> x;
        int n = sizeof(arr) / sizeof(arr[0]);
        int result = binarySearch(arr, 0, n - 1, x);
        (result == -1) ?
        cout << "Element is not present in array": cout << "Element is present at index " << result;
        return 0;
    }

    main_1();
}

void A47() {
    // 7. WAP to increment the value of an argument given to the function.
    


    int increament(int n) {
        return ++n;

    }
    int main_1() {
        int n;
        cout << "Enter a no :";
        cin >> n;
        cout << "Value after increament :" << increament(n);
        return 0;
    }
    main_1();
}

void A51() {
    // 1. WAP to print the largest private data member of three classes.
    


    class X;
    class Y;
    class Z {
        int a;

        public:
            void input(int n) {
                a = n;
            }
        friend void largest(Z & , Y & , X & );
    };
    class Y {
        int b;

        public:
            void input(int n) {
                b = n;
            }
        friend void largest(Z & , Y & , X & );
    };
    class X {
        int c;

        public:
            void input(int n) {
                c = n;
            }
        friend void largest(Z & , Y & , X & );
    };
    void largest(Z & o1, Y & o2, X & o3) {
        int large;
        if (o2.b < o1.a && o3.c < o1.a)
            large = o1.a;
        else if (o1.a < o2.b && o3.c < o2.b)
            large = o2.b;
        else
            large = o3.c;
        cout << "Largest No :" << large;
    }
    int main_1() {
        Z s1;
        Y s2;
        X s3;
        int a, b, c;
        cout << "Enter the value of a :";
        cin >> a;
        cout << "Enter the value of b :";
        cin >> b;
        cout << "Enter the valur of c :";
        cin >> c;
        s1.input(a);
        s2.input(b);
        s3.input(c);
        largest(s1, s2, s3);

        return 0;
    }
    main_1();
}

void A52() {
    /*2. Create two classes which stores distance in feet, inches and meter, centimeter format
    respectively. Write a function which compare  distance in object of these classes and displays
    the larger one.*/
    


    class DB;
    class DM {
        float metre, centimetre;

        public:
            DM(float m, float c) {
                metre = m;
                centimetre = c;
            }
        friend void compare(DM & x, DB & y);
    };
    class DB {
        float feet, inches;

        public:
            DB(float f, float i) {
                feet = f;
                inches = i;
            }
        friend void compare(DM & x, DB & y);
    };
    void compare(DM & a, DB & b) {
        int ftm;
        ftm = (b.feet * 30.48) + (b.inches * 2.54);
        int mtm;
        mtm = (a.metre * 100) + a.centimetre;
        if (ftm > mtm) {
            cout << "Distance in feet and inches is greater.";
        } else if (ftm < mtm) {
            cout << "Distance in metre and centimetre is greater.";
        } else {
            cout << "Both are equal";
        }
    }
    int main_1() {
        int m, cm, ft, in ;
        cout << "Enter distance in metre and centimetre: ";
        cin >> m >> cm;
        cout << "Enter distance in feet and inches: ";
        cin >> ft >> in ;
        DM a(m, cm);
        DB b(ft, in );
        compare(a, b);
        return 0;
    }
    main_1();
}

void A53() {
    
    


    class Data {
        int x;
        int funInput = 0;
        int funOutput = 0;

        public:
            void input() {
                cout << "\nEnter value of x: ";
                cin >> x;
                funInput++;
            }
        void output() {
            cout << "\nValue of x inputted: " << x;
            funOutput++;
        }
        void display() {
            cout << "\nThe input function has been used " << funInput << " times." << endl;
            cout << "The output function has been used " << funOutput << " times" << endl;
        }
    };
    int main_1() {
        Data d;
        d.input();
        d.output();
        d.input();
        d.output();
        d.display();
    }
    main_1();
}

void A54() {
   
    


    class Student {
        private:
            string name;
        int rollno;

        public:
            int total[11];
        void getDetails() {
            for (int i = 0; i < 4; i++) {
                cout << "\nEnter details for student " << i + 1 << ": ";
                cout << "\nName: ";
                cin >> name;
                cout << "\nRoll no: ";
                cin >> rollno;
                cout << "\nTotal: ";
                cin >> total[i];
            }
        }
    };
    void getAverage(Student s, int n) {
        s.getDetails();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + s.total[i];
        }
        double average = double(sum) / (double) n;
        cout << "\nAverage is " << average;
    }
    int main_1() {
        Student s1;
        getAverage(s1, 4);
        return 0;
    }
    main_1();
}

void A55() {
    /*5. Create a class which stores name, author and price of a book. Store information for n number
    of books. Display information of all the books in a given price range using friend function.*/
    


    class Book {
        private:
            string name, Author;
        double price;

        public:
            Book() {}
        Book(string n, string a, double p) {
            name = n;
            Author = a;
            price = p;
        }
        void setDetails(string n, string a, double p) {
            name = n;
            Author = a;
            price = p;
        }
        string getName() {
            return name;
        }
        string getAuthor() {
            return Author;
        }
        double getPrice() {
            return price;
        }
        void printBook() {
            cout << "The book name is:" << name << endl;
            cout << "The book author is:" << Author << endl;
            cout << "The book price is:" << price << endl;
        }
        friend void display(int x);
    };
    void display(int x) {
        string name, Author;
        double price;

        Book arr[x];

        for (int i = 0; i < x; i++) {
            cout << "Enter the book name " << i + 1 << endl;
            cin >> name;
            cout << "Enter the author \n";
            cin >> Author;
            cout << "Enter the book price\n";
            cin >> price;
            arr[i].setDetails(name, Author, price);
        }
        for (int i = 0; i < x; i++) {
            cout << endl;
            cout << "Details of book " << (i + 1) << "are:\n";

            arr[i].printBook();
        }
    }
    int main_1() {
        int x;
        cout << "Enter the number of books\n";
        cin >> x;
        display(x);
    }
    main_1();
}

void A56_a() {
    // a. Class type pointer
    



    class Box {
        public:
            // Constructor definition
            Box(double l = 2.0, double b = 2.0, double h = 2.0) {
                cout << "Constructor called." << endl;
                length = l;
                breadth = b;
                height = h;
            }
        double Volume() {
            return length * breadth * height;
        }

        private:
            double length; // Length of a box
        double breadth; // Breadth of a box
        double height; // Height of a box
    };

    int main(void) {
        Box Box1(3.3, 1.2, 1.5); // Declare box1
        Box Box2(8.5, 6.0, 2.0); // Declare box2
        Box * ptrBox; // Declare pointer to a class.

        // Save the address of first object
        ptrBox = & Box1;

        // Now try to access a member using member access operator
        cout << "Volume of Box1: " << ptrBox -> Volume() << endl;

        // Save the address of second object
        ptrBox = & Box2;

        // Now try to access a member using member access operator
        cout << "Volume of Box2: " << ptrBox -> Volume() << endl;

        return 0;
    }
    main_1();
}

void A56_b() {
    // b. Pointer to data member
    


    class Data {
        public:
            int a;
        void print() {
            cout << "a is " << a << endl;
        }
    };
    int main_1() {
        Data d, * dp;
        dp = & d;
        int Data:: * ptr = & Data::a;
        d.*ptr = 10;
        d.print();
        dp -> * ptr = 20;
        dp -> print();
    }
    main_1();
}

void A56_c() {
    


    class AB {
        public:
            int sub(int a, int b) {
                return a - b;
            }
        int div(int a, int b) {
            return a / b;
        }
    };
    int res1(int m, int n, AB * obj, int(AB:: * fp)(int, int)) {
        return (obj -> * fp)(m, n);
    }
    int res2(int m, int n, AB * obj, int(AB:: * fp2)(int, int)) {
        return (obj -> * fp2)(m, n);
    }
    int main_1() {
        AB ob;
        cout << "Subtraction is = " << res1(8, 5, & ob, & AB::sub) << endl;
        cout << "Division is = " << res2(4, 2, & ob, & AB::div) << endl;
        return 0;
    }
    main_1();
}

void A61() {

    main_1();
}

void A62() {

    main_1();
}

void A63() {

    main_1();
}

void A64() {

    main_1();
}

void A81() {

    



    class Array {
        private:
            int arr[10];
        public:
            friend ostream & operator << (ostream & out,
                const Array & c);
        friend istream & operator >> (istream & in , Array & c);
    };

    ostream & operator << (ostream & out,
        const Array & c) {
        for (int i = 0; i < 10; i++)
            out << c.arr[i] << "\n";

        return out;
    }

    istream & operator >> (istream & in , Array & c) {

        cout << "Enter 10 Elements in this array ";
        for (int i = 0; i < 10; i++)
            in >> c.arr[i];
        return in;
        return out;
    }

    istream & operator >> (istream & in , Array & c) {

        cout << "Enter 10 Elements in this array ";
        for (int i = 0; i < 10; i++)
            in >> c.arr[i];
        return in;
    }

    int main_1() {
        Array c1;
        cin >> c1;
        cout << "The Elements are: \n ";
        cout << c1;
        return 0;
    }
    main_1();
}

void A82() {
    // create a class which is a complex number add two object and display the resultant object overloading ++ push & pre increment operator for the class 

    main_1();
}

void A83() {
    // create a class which allocates to a memory
    #include <string>



    class String {
        public:
            String(string str) {
                len = str.length();
                chstr = new char[len];
                for (int i = 0; i < str.length(); i++) {
                    chstr[i] = str[i];
                    cout << chstr[i];
                }
            }

        bool operator < (const String & S) {
            return this -> len < S.len;
        }
        String & operator + (const String & S) {}
    }
    main_1();
}

void A8text() {
    


    class Arr {
        int index;
        int maxsize;
        int * arr;
        static int _i;
        public:
            Arr(int s = 100) {
                arr = new int[s] {
                    0
                };
                maxsize = s;
                index = 0;

            }
        Arr & operator = (const Arr & obj) {
            this -> arr = obj.arr;
            this -> index = obj.index;
            this -> maxsize = obj.maxsize;
            return *this;
        }
        void add(int value) {
            arr[index] = value;
            index++;
        }
        int getNumber(int index) {
            return arr[index];
        }
        int & operator[](int i) {
            return arr[i];
        }
        friend istream & operator >> (istream & input, Arr & a);
        friend ostream & operator << (ostream & output, Arr & a);
    };
    int Arr::_i;
    ostream & operator << (ostream & output, Arr & a) {
        for (int i = 0; i < a.maxsize; i++) {
            cout << a[i] << ' ';
        }
        return output;
    }

    istream & operator >> (istream & input, Arr & a) {
        int value = 0;
        cout << "Enter value: ";
        cin >> a[Arr::_i];
        cout << a[Arr::_i] << endl;
        return input;
    }
    int main_1() {
        Arr a(5);
        cin >> a[5]; // How do I make this happen
        cout << a[5]; // How to do this too
        return 0;
    }
    main_1();
}
int main() {
    int z;
    while (1) {
        cin >> z;
        if (z == 1)
            A01();
        if (z == 2)
            A010();
        if (z == 3)
            A011();
        if (z == 4)
            A012();
        if (z == 5)
            A013();
        if (z == 6)
            A014();
        if (z == 7)
            A015();
        if (z == 8)
            A02();
        if (z == 9)
            A03();
        if (z == 10)
            A04();
        if (z == 11)
            A05();
        if (z == 12)
            A06();
        if (z == 13)
            A07();
        if (z == 14)
            A08();
        if (z == 15)
            A09();
        if (z == 16)
            A001();
        if (z == 17)
            A002();
        if (z == 18)
            A003();
        if (z == 19)
            A004();
        if (z == 20)
            A005();
        if (z == 21)
            A006();
        if (z == 22)
            A007();
        if (z == 23)
            A21();
        if (z == 24)
            A22();
        if (z == 25)
            A23();
        if (z == 26)
            A24();
        if (z == 27)
            A25();
        if (z == 28)
            A26();
        if (z == 29)
            A27();
        if (z == 30)
            A311();
        if (z == 31)
            A312();
        if (z == 32)
            A321();
        if (z == 33)
            A322();
        if (z == 34)
            A323();
        if (z == 35)
            A33();
        if (z == 36)
            A34();
        if (z == 37)
            A35();
        if (z == 38)
            A36();
        if (z == 39)
            A37();
        if (z == 40)
            A41();
        if (z == 41)
            A42();
        if (z == 42)
            A43();
        if (z == 43)
            A44();
        if (z == 44)
            A45();
        if (z == 45)
            A46();
        if (z == 46)
            A47();
        if (z == 47)
            A51();
        if (z == 48)
            A52();
        if (z == 49)
            A53();
        if (z == 50)
            A54();
        if (z == 51)
            A55();
        if (z == 52)
            A56_a();
        if (z == 53)
            A56_b();
        if (z == 54)
            A56_c();
        if (z == 55)
            A61();
        if (z == 56)
            A62();
        if (z == 57)
            A63();
        if (z == 58)
            A64();
        if (z == 59)
            A81();
        if (z == 60)
            A82();
        if (z == 61)
            A83();
        if (z == 62)
            A8text();
    }
}
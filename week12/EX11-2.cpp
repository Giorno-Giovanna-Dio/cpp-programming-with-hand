
#include <iomanip>
#include <iostream>
using namespace std;
int main (){

    int a[9] = {};
    int sum = 0;
    int median = 0;
    //int min = 0;
    //int max = 0;
    int range = 0;


    //get nine numbers into array a and calculate sum here also!
    for (int i = 0; i < 9; i++){
        int k = 0;
        cin >> k;
        a[i] = k;
        sum += k;
    }

    //array a sorting: using bubble sort here ~
    // you can also use sort() and swap () by including #include <algorithm>
    for (int i = 0; i<9; i++){
        for (int j = i+1; j < 9; j++){
            if (a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    median = a[4];
    range = a[8] - a[0];

    //print out the array without knowing the exact size!
    /*
    for (int x : a){
        cout << x <<endl;
    }
    */

    /* normal array output
    for (int i = 0; i < 9; i++){
        cout << a[i] << endl;
    }
    */
 
    //output section:
    cout << "Sum = " << sum << endl;
    cout << "Median = 0x" << hex << median << dec << endl;
    cout << "Range = 0" << oct << range << dec << endl;

}
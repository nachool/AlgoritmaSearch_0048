#include <iostream>
using namespace std;

int arr[20]; //array to be searched
int n; //number of element in array
int i; //index of array element

void input() {
    while (true) {
        cout << "Enter the number of elements in the array: ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
    }

    //Accept array elements
    cout << "\n-------------------\n";
    cout << " Enter array elements \n";
    cout << "---------------------";
    for (i = 0; i < n; i++) {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

void LinearSearch() {
    char ch;
    int ctr; //Number of comparisons
    int item;

    do {
        //accept thhe number to be searched
        cout << "\nEnter the element you want to search: "; //step 1
        cin >> item;

        ctr = 0;
        i = 0; //step 2 
        while (i < n) //step 3
        {
            ctr++;
            if (arr[i] == item) {
                cout << "\n" << item << " found at position " << (i + 1) << endl; //step 6
                break;
            }
            i++ //step 4
        }


    } while ()
}


int main()
{
    
}


// // Given two sorted arrays a[] and b[] of size n and m respectively, the task is to merge them in sorted order without using any extra space. Modify a[] so that it contains the first n elements and modify b[] so that it contains the last m elements.

// class Solution {
// public:
//     void mergeArrays(vector<int>& a, vector<int>& b) {

//         vector<int> temp;

//         int i = 0;
//         int j = 0;

//         while(i < a.size() && j < b.size()) {

//             if(a[i] <= b[j])
//                 temp.push_back(a[i++]);
//             else
//                 temp.push_back(b[j++]);
//         }

//         while(i < a.size())
//             temp.push_back(a[i++]);

//         while(j < b.size())
//             temp.push_back(b[j++]);

//         int n = a.size();

//         for(int k = 0; k < n; k++)
//             a[k] = temp[k];

//         for(int k = n; k < temp.size(); k++)
//             b[k - n] = temp[k];
//     }
// };


# include <iostream>
# include <vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            i++;
        }
        else{
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    while(i<n){
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while(j<m){
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    for(int i=0;i<k;i++)
        cout << arr3[i] << " ";
}


int main (){
    int arr1[3] = {1,2,3};
    int arr2[5] = {1,2,3,4,5};

    int arr3[8] = {0};
    merge(arr1,3,arr2,5,arr3);
}
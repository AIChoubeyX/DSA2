// Given two sorted arrays a[] and b[] of size n and m respectively, the task is to merge them in sorted order without using any extra space. Modify a[] so that it contains the first n elements and modify b[] so that it contains the last m elements.

class Solution {
public:
    void mergeArrays(vector<int>& a, vector<int>& b) {

        vector<int> temp;

        int i = 0;
        int j = 0;

        while(i < a.size() && j < b.size()) {

            if(a[i] <= b[j])
                temp.push_back(a[i++]);
            else
                temp.push_back(b[j++]);
        }

        while(i < a.size())
            temp.push_back(a[i++]);

        while(j < b.size())
            temp.push_back(b[j++]);

        int n = a.size();

        for(int k = 0; k < n; k++)
            a[k] = temp[k];

        for(int k = n; k < temp.size(); k++)
            b[k - n] = temp[k];
    }
};
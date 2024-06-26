//User function template for C++
//https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1 
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int> q;
        for(int i=0; i<=r; i++){
            q.push(arr[i]);
            if(q.size()>k){
                q.pop();
            }
        }
        return q.top();
    }
};
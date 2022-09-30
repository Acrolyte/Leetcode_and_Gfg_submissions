class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        // int n = arr.size();
        // int ans = 0;
        // for(int i=1;i<=n;i += 2){
        //     int s = 0;
        //     for(int j=0;j<i;j++) s+=arr[j];
        //     ans += s;
        //     int k = 0;
        //     for(int j=i;j<n;j++){
        //         s -= arr[k];
        //         s += arr[j];
        //         k++;
        //         ans += s;
        //     }        
        // }
        // return ans;
        
        int ans = 0, n = arr.size();
        
        for(int i=0;i<n;i++){
            ans += ((i+1)*(n-i)+1)/2 * arr[i];
        }
        
        return ans;
    }
};
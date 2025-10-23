class Solution {
public:
    long long subArrayRanges(vector<int>& a) {
        int n = a.size();
        long long ans=0;
        for(int i=0; i<n; i++) {
            long long mini=a[i], maxi=a[i];
            for(int j=i+1; j<n; j++) {
                mini = min(a[j]*1LL, mini);
                maxi = max(a[j]*1LL, maxi);
                ans += (maxi-mini);
            } 
        }
        return ans;
    }
};

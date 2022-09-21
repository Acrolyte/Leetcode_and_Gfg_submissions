class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> mpa,mpb;
        int k = 1;
        for(auto i: list1){ mpa[i] = k++; }
        k = 1;
        for(auto i: list2){ mpb[i] = k++;}
        
        priority_queue<pair<int,string>,vector<pair<int,string>>,greater<pair<int,string>>> mpc;
        
        for(auto i: mpa) if(mpb[i.first]) mpc.push({i.second + mpb[i.first]-2,i.first});
        
        k = mpc.top().first;
        
        vector<string> ans;
        while(!mpc.empty() && mpc.top().first==k){
            ans.push_back(mpc.top().second);
            mpc.pop();
        }
            
        return ans;
    }
};
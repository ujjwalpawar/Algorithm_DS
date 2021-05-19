class Solution {
public:
    vector<int> sol;
    int res(vector<pair<int,int>>& data,int i1, int i2){
        if(i2==data.size())
            return 0;
        else{
            if(sol[i1+1]!=-1)
                return sol[i1+1];
            int s1=0;
            if(i1==-1 or (data[i2].first>=data[i1].first and data[i2].second>=data[i1].second)){
                s1=res(data, i2, i2+1)+data[i2].second;
            }
            auto s2=res(data, i1, i2+1);
            return sol[i1+1]=max(s1, s2);
        }   
    }
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
     sol.resize(scores.size()+1, -1);
     
     vector<pair<int, int>> data;
     for(int i=0; i<scores.size(); i++)
         data.push_back(make_pair(ages[i], scores[i]));
     sort(data.begin(), data.end());
     return res(data,-1,0);   
    }
};
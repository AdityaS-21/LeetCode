class Solution {
private:
    void dfs(vector<vector<int>>& graph, int node,vector<int>&temp,vector<vector<int>> &ans,int target){
        temp.push_back(node);
        if(node==target)ans.push_back(temp);
        else{
            for(auto i:graph[node]){
                dfs(graph,i,temp,ans,target);
            }
        }
        temp.pop_back();
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int target=graph.size()-1;
        vector<vector<int>> ans;
        vector<int>temp;
        dfs(graph,0,temp,ans,target);
        return ans;

    }
};
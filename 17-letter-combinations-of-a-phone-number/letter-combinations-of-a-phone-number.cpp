class Solution {
private:
    void solve(string digits,string output,int i,vector<string> &ans,string mapping[]){
        if(i>=digits.length()){
            ans.push_back(output);
            return;
        }
        int number=digits[i]-'0';
        string value=mapping[number];
        for(int j=0;j<value.size();j++){
            output.push_back(value[j]);
            solve(digits,output,i+1,ans,mapping);
            output.pop_back();

        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0)
            return ans;
        string output="";
        int i=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,i,ans,mapping);
        return ans;

        
        
    }
};
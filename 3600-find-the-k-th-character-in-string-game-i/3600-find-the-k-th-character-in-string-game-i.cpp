class Solution {
public:
    char kthCharacter(int k) {
        string ans = "";
        ans.push_back('a');
        while (ans.size() <= k) {
            string temp = "";
            for (int i = 0; i < ans.size(); i++) {
                
                char tem;

                if (ans[i] == 'z') {
                    tem = 'a';

                } else {
                    tem = ans[i] + 1;
                }
                temp.push_back(tem);
                
            }
            for(auto it: temp){
                ans.push_back(it);
            }
        }
        return ans[k-1];
    }
};
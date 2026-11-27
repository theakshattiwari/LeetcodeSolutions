class Solution {
public:
    int maxVowels(string s, int k) {
        int left = 0;
        int maxV = 0;
        int count = 0;

        for(int i = 0; i<s.size(); i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count++;
            }
            
            
            while((i-left+1) > k){
                if(s[left]=='a' || s[left]=='e' || s[left]=='i' || s[left]=='o' || s[left]=='u'){
                    count--;
                    
                }
                left++;
            }

            if((i-left+1)==k){
                maxV = max(maxV, count);
            }
            
        }

        return maxV;
    }
};
class Solution {
private:    
    bool valid (char ch){
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')){
            return 1;
        }
        return 0;

    }
    char toLowerCase(char ch){
        if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')){
            return ch;
        }
        else{
            char temp= ch-'A'+'a';
            return temp;
        }
    }
    bool CheckPalindrome(string s){
        int start=0;
        int end=s.length()-1;
        while(start<=end){
            if(s[start]==s[end]){
                start++;
                end--;
                
            }
            else{
                return 0;
                
            }
        }
        return 1;
    }
public:
    bool isPalindrome(string s) {
        
        int start=0;
        int end=s.length()-1;
        while(start<=end){
        
        
        if (!valid(s[start])) {
            start++;
        }
        
        else if(!valid(s[end])) {
            end--;
        }
        else if(toLowerCase(s[start]) != toLowerCase(s[end])){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
        
    }
};
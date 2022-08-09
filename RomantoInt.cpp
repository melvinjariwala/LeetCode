class Solution {
public:
    int romanToInt(string s) {
        int num=0;
        map<char,int> values = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        for(int i=0;i<s.length();i++){
            int current = values[s[i]];
            int next = values[s[i+1]];
            if(current >= next){
                num+=current;
            }
            else{
                num-=current;
            }
        }
        return num;
    }
    
};
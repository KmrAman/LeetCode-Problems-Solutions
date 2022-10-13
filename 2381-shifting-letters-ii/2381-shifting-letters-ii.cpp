class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
//       https://www.youtube.com/watch?v=lFBpH_Mt_LI&ab_channel=Anurag
        //Scanline Algorithm
    int n=s.length();
    vector<int> dir(n+1,0);
    for(int k=0;k<shifts.size();k++){
        int i = shifts[k][0];
        int j=shifts[k][1];
        int move = (shifts[k][2] == 0 ? -1:1);
        dir[i] += move;
        dir[j+1] -= move;
    }
    
    for(int i=1;i<n+1;i++){
        dir[i] += dir[i-1]; 
    }
    
    for(int i=0;i<n;i++){
        int idx = (s[i]-'a' + dir[i])%26;
        if(idx<0) idx += 26;
        char new_ch = (char)(idx + 'a');
        s[i] = new_ch;
    }
    return s;
    }
};
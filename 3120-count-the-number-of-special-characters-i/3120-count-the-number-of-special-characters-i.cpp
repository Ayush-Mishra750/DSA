class Solution {
public:

    int numberOfSpecialChars(string word) {

        set<char> lower;
        set<char> upper;

        for(char ch : word){

            if(ch >= 'a' && ch <= 'z'){
                lower.insert(ch);
            }

            else if(ch >= 'A' && ch <= 'Z'){
                upper.insert(ch);
            }
        }

        int cnt = 0;

        for(char ch = 'a'; ch <= 'z'; ch++){

            if(lower.count(ch) &&
               upper.count(ch - 32)){

                cnt++;
            }
        }

        return cnt;
    }
};
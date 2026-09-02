class Solution {
public:
    bool rotateString(string s, string goal) {
        if( s.length()!= goal.length())
            return false ;

        int n = s.length();
        for(int i = 0 ; i < n ; i++){
            if( s == goal)
                return true;

            char temp = s[0];
            for ( int j = 1 ; j < n ; j++){
                s[j-1] = s[j] ;       
                }
                s[n-1]= temp ;
        }
        return false ; 
    }
};
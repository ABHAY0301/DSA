// long is used for the range error
bool isPalindrome(int x) {
        long ans=0;
        int dumy = x;
        int digit = 0;

        while (x > 0)
        {
           digit = x%10;
           ans = (ans*10) + digit;
           x = x/10;

        }
        
        if(ans > INT_MAX || ans < INT_MIN){
            return false;
        }

        if( dumy == ans) return true;
        else return false;
    }

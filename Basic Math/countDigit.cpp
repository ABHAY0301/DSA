 int evenlyDivides(int N){
        int countDigit = 0;
        int rem,temp=N;
        while(N>0){
            rem = N%10;
            
            if(rem!=0 &&  temp%rem==0){
                countDigit++;
            }
            N /=10;
        }
        return countDigit;
        
    }

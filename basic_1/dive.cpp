     #include <iostream>
 using namespace std;  
     
     int modd(int a)
 {
    int i=0;
while(a!=0){
    a++;
    i++;
}
    return a+i;
 }
    int divide(int dividend, int divisor) {
        int i=0;
        int d=divisor;
        
        for(int a=1;a<dividend;divisor=divisor+d)
        {i++;
        a++;
                if(divisor>=dividend)
                {
                  

                    if(divisor=dividend)
                {
                    return a-1;
                }
                  return a-2;
                }
            
        
    }
    
        
        
        return 0;
    }
    int main()
    {
        cout<<divide(19,10);
    }
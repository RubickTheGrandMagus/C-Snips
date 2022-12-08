// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    // Write C++ code here
        int cnt = 10; //counter
    int dv = 2; //divisor
    int rn = cnt/dv; //initial remainder
    int mn = cnt-rn; //difference bet. intial remainder and counter
    for(int i=0; i<cnt; i++){
        //does something for the first half of divisor
        if(i<rn || (mn<=dv && i<cnt)){ 
            std::cout << i;
            std::cout << "\n";
        }
        //recalculate the new remainder
        else if(mn>dv){
            i--; //backset loop counter 
            rn = rn + (mn/dv); 
            mn = mn-(mn/dv);
            
            //std::cout << mn;
            std::cout << "--\n";
        }
    }
    return 0;
}

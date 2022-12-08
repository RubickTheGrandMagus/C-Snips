// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    // Write C++ code here
    int cnt = 10;
    int dv = 2;
    int rn = cnt/dv;
    int mn = cnt-rn;
    for(int i=0; i<cnt; i++){
        if(i<rn){
            std::cout << i;
            std::cout << "\n";
        }
        else{
            i--;
            rn = rn + (mn/dv);
            mn = mn-(mn/dv);
            
            //std::cout << mn;
            std::cout << "--\n";
        }
        if(mn<dv)
            break;
    }

    return 0;
}

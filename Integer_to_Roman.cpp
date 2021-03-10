#include <iostream>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        int one=num%10;
        int ten=(num/10)%10;
        int hundred=(num/100)%10;
        int thousand=(num/1000);

        string ans="";
        for(int i=0;i<thousand;i++){
            ans+="M";
        }

        if(hundred==9){
            ans+="CM"
        }else if(hundred==4){
            ans+="CD"
        }else if(hundred>0&&hundred<4){
            for(int i=0;i<hundred;i++){
                ans+="C"
            }
        }else if(hundred>4){
            ans+="D";
            for(int i=5;i<hundred;i++){
                ans+="C";
            }
        }

        if(ten==9){
            ans+="XC"
        }else if(ten==4){
            ans+="XL"
        }else if(ten>0&&ten<4){
            for(int i=0;i<ten;i++){
                ans+="X"
            }
        }else if(ten>4){
            ans+="L";
            for(int i=5;i<ten;i++){
                ans+="X";
            }
        }

        if(one==9){
            ans+="IX"
        }else if(one==4){
            ans+="IV"
        }else if(one>0&&one<4){
            for(int i=0;i<one;i++){
                ans+="I"
            }
        }else if(one>4){
            ans+="V";
            for(int i=5;i<one;i++){
                ans+="I";
            }
        }

        return ans;
    }
};

int main(){


    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int x,y,z;

    cout<<"Enter thre integers ";
    cin>>x>>y>>z;

    int x_dist = abs(z -x);
        int y_dist = abs(z -y);
        
        if(x_dist > y_dist){
            cout<<"y will arrive faster";
            return 2;
        }

        else if(y_dist > x_dist){
            cout<<"x will arrive faster";
            return 1;
        }

        else{
            cout<<"Both will arrive faster";
            return 0;
        }


}
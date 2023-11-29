#include<iostream>
using namespace std;
int main(){
    int s = 0  , m = 0 , h = 0 , a = 0;
    while(a==0){
        s++;
        for(double i=0; i<99999999; i++){
            i++;
            i--;
        }
        if(s == 59){
            
            s=0; 
            m++;
        } 
        
        else if(m == 59){
           
             m = 0;
              h++;
        }

        else if(h == 23){
            h=0;

        }                 
        
        system("cls");
        cout<<"                         it is a digital watch"<<endl;
        cout<<"                                 hh:mm:ss"<<endl;
        cout<<"                                  "<<h<<":"<<m<<":"<<s;
    }

    return 0;
}
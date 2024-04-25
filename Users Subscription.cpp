#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int daysTillExipiration = rand() % 12;
    if (daysTillExipiration <= 0){
        cout << "Your subscription has exipired"<< endl;
    }
    else if (daysTillExipiration <=1){
        cout << "Your subscription exipres within a day"<<endl;
        cout <<"Renew now and save 20%!"<<endl;
    }
    else if(daysTillExipiration <=5){
        cout<<"Your subscription in "<<daysTillExipiration<<"days"<<endl;
        cout<<"Renew now and save 10%! "<<endl;
    }
    else if (daysTillExipiration <=10){
        cout<<"Your subscription will exipire soon.Renew now !"<<endl;
    }
    else{
        cout<<"you have a n active subscription."<<endl;
    }
    return 0;

}
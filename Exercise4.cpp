#include <iostream>>
using namespace std;
int main(){
    int userinput;
    cout<< "Please enter an integer value between 5 and 10: ";
    cin>> userinput;
    while(userinput <5 || userinput >10){
        cout<<"invalid input. Please enter aan integer value between 5 and 10: ";
        cin>>userinput;
    }
     cout <<"Your input value ";
     cout<<userinput;
     cout <<"has been accepted"<<endl;
     return 0;

}
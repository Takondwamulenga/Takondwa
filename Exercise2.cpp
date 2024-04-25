#include <iostream>
#include <cstdlib>
#include <ctime>
int main(){
    srand (time(0));
    int daysTillExipiration = rand() %12;
    switch (daysTillExipiration){
      case 0: 
      std::cout<<"Your subscription has expired." <<std :: endl;
              break;
    case 1:
    std::cout<<"Your subscription exipires within aday! \nRenew now and save 20%!"<<std::endl;
    break;
    case 2:
    case 3:
    case 4:
    case 5:
    std::cout<<"Your subscription exipres soon"<<daysTillExipiration<<"days\nRenew now and save 10%!"<<std::endl;
    break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    std::cout<<"You have an active subscription"<<std::endl;
    break;
    }
    return 0;
    }




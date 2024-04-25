#include <iostream>
using namespace std;

double CalculateRectangleArea(double length,double width);
double CalculateSqure(double side);
double CalculateTriangleArea(double base, double height);

int main(){
    int choice;
    double area = 0.0;
    cout<<"please select the shape to calculate area: "<<endl;
    cout<<"1.rectangle"<<endl;
    cout<<"2.Squre"<<endl;
    cout<<"3.Triangle"<<endl;
    cout<<"4.quit program<<endl";
    cin>>choice;
    if (choice ==1){
        double length, width;
        cout<<"Enter length and width of the rectangle";
        cin>>length>>width;
        area = length * width;
    }
        else if( choice == 2) {
          double side;
          cout<<"Enter side of the square: ";
          cin>>side;
          area = side * side;
    }
    else if(choice ==3){
        double base, height;
        cout<<"enter a base and height of the triangle ";
        cin>> base>> height;
        area = 0.5 * base *height;
    }
    else if(choice ==4){
        cout<<"Program terminated."<<endl;
    }
    else{
        cout<<"invalid input please enter a valid selection"<<endl;
    }
    cout<<"Area: ";
    cout<< area<<endl;
    return 0;
    
}





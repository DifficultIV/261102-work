#include <iostream>
#include <cmath>
using namespace std;
double deg2rad(double deg){
double rad;
rad = (deg*M_PI)/180;
return rad;
}
double rad2deg(double rad){
double deg;
deg = (rad*180)/M_PI;
return deg;
}
double findXComponent(double L1,double L2,double Rad1,double Rad2){
double Lx;
Lx = (L1*cos(Rad1))+(L2*cos(Rad2));
return Lx;
}
double findYComponent(double L1,double L2,double Rad1,double Rad2){
double Ly;
Ly = (L1*sin(Rad1))+(L2*sin(Rad2));
return Ly;
}
double pythagoras(double Lx,double Ly){
double L;
L = sqrt((pow(Lx,2))+(pow(Ly,2)));
return L;
}
void showResult(double L,double deg){
 cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
 cout << "Length of the resultant vector = " << L << endl;
cout << "Direction of the resultant vector (deg) = " << deg << endl;
cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}

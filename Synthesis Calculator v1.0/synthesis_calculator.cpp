#include <iostream>
#include<cmath>
using namespace std;

int main(){

    int A;
    int T;
    int t;
    float X;
    float Y;
    float e=2.718;
    float totalE;
    float powerOfe;
   float totaltime;
    cout<<"Enter initial total activity\n";
    cin>>A;
    cout<<"Enter the time at which you want to measure the radioactive isotope \n";
    cin>>T;
    cout<<"Enter the half life of radioactive isotope\n";
    cin>>t;
    totaltime=T/t;
    powerOfe= -0.693 * totaltime;
    totalE= pow(e,powerOfe);
    
    X=A * totalE;
    Y=0.6*X;
    
    cout<<"Y=\t"<<Y<<endl;;
    
    return 0;
}

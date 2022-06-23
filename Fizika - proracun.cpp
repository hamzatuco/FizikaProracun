#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main ()
{
    double A, B, omega, t, x, y, z, v;
    /*
    FORMULE:
    x (t) = A cos (omega t)
    y (t) = A sin (omega t)
    z (t) = Bt
    v (t) = sqrt (pow ((vx), 2) + pow ((vy), 2) + pow ((v*z), 2))
    */
    cout << "Unesi A [m]: ";
    cin >> A;
    cout << "Unesi B [m/s]: ";
    cin >> B;
    cout << "Unesi omegu [rad/s]: ";
    cin >> omega;
    cout << "Unesi v [m/s]: ";
    cin >> v;
    
    
    
    ofstream myfile1;
    myfile1.open("koordinate-x.txt"); 
    myfile1<<"Vrijeme"<<'\t'<<"	"<<"x(t)"<<endl;
    myfile1<<endl;
    for (t=0; t <= 10; t += 0.15)
    {
        x = A * cos (omega * t);
        myfile1 << t <<'\t'<<"	"<< x << endl;
    }
    myfile1.close();
    
    
    ofstream myfile2;
    myfile2.open("koordinate-y.txt"); 
    myfile2<<"Vrijeme"<<'\t'<<"	"<<"y(t)"<<endl;
	myfile2<<endl;
	for (t=0; t <= 10; t += 0.15)
    {
        y = A * sin (omega * t);
        myfile2 << t <<'\t'<<"	"<< y << endl;
    }
    myfile2.close();
    
    
    ofstream myfile3;
    myfile3.open("koordinate-z.txt"); 
    myfile3<<"Vrijeme"<<'\t'<<"	"<<"z(t)"<<endl;
    myfile3<<endl;
    for (t=0; t <= 10; t += 0.15)
    {
        z = B*t;
        myfile3 << t <<'\t'<<"	"<< z << endl;
    }
    myfile3.close();
    
    
    
    ofstream myfile4;
    myfile4.open("brzina-v.txt"); 
    myfile4<<"Vrijeme"<<'\t'<<"	"<<"Brzina[m/s]"<<endl;
    myfile4<<endl;
	for (t=0; t <= 10; t += 0.15)
    {
        v = sqrt (pow ((v*x), 2) + pow ((v*y), 2) + pow ((v*z), 2));
        myfile4 << t <<'\t'<<"	"<< v << endl;
    }
    myfile4.close();

    cout<<"Rezultate proracuna nadjite u fajlovima!"<<endl;
    return 0;
}

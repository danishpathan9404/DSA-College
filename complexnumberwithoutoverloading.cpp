#include<iostream>
using namespace std;
class complex
{
    private:
    float real;
    float imag;
    public:
        complex()
        {
            real=0;
            imag=0;
        }
        complex(float r,float i)
        {
            real=r;
            imag=i;
    
        }
        void display()
        {
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
    };
    int main()  
    {
        complex c1(20,30);
        cout<<"Complex No is:";
        c1.display();
        complex c2(5.0,7.0);
        cout<<"Complex No is:";
        c2.display(); 

        return 0;

    }
   
 

//Q_19:


#include <iostream>
using namespace std;


int main() {
     int b = 5;
     cout<<"     *"<<endl;
     for (int i = 2; i <= b; i++) {

           for(int j = b ; j >= i; j--) {
                cout<<" ";
           }

           for (int k = 1; k <= i; k++)  {
                cout <<" *";
           }
  
           cout<<endl;
     }
     
     int a = 4;

     for (int i = 1; i <= a; i++) {
           cout<<"  ";

           for(int j = a ; j >= i; j--) {
                cout<< " *";
           }
           cout<<endl;
           for (int k = 1; k <= i; k++)  {
                cout <<" ";
           }
  
     }
  
     cout<<endl;
     return 0;

}

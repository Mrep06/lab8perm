#include <iostream>
#include <cmath>
using namespace std;

int age;
int H;
int bounty;
int main(){
  cout << "Enter your age: ";
  cin >> age;
  if(age <= 25){
    cout << "Enter your height: ";
    cin >> H;
      if(H < 100) cout << "Your character = " << "Chopper";
       else if(H < 180) cout << "Your character = " << "Usopp";
            else {
             cout << "Enter your bounty: ";
             cin >> bounty;
              if(bounty <= 1.1*pow(10,9)) cout << "Your character = " << "Sanji";
              else cout << "Your character = " << "Zoro";
       }
  }   
  else {
    if(age <= 60){
      cout << "Enter your bounty: ";
      cin >> bounty;
        if(bounty <= 500*pow(10,6)) cout << "Your character = " << "Franky";
        else cout << "Your character = " << "Jinbe";
  }
    else cout << "Your character = " << "Brook";
  }
  
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string champion;
    
    cout << "Enter your champion:";
    cin >> champion;
    
    if (champion == "Ahri")
        cout << "Ahri: The Nine-Tailed Fox";
   else if (champion == "Yasuo")
        cout << "Yasuo: The Unforgiven";
    else if (champion == "Teemo")
         cout << "Teemo: The swift scout";
    else if (champion == "Jinx")
          cout << "Jinx: The Loose Cannon";
    else if (champion == "Lux")
           cout << "Lux: The Lady of Luminosity";
     else 
         cout << "That is not a League of Legends champion";
         
         return 0;
}

#include <iostream>

using namespace std;

struct Keyboard
{
    string brand = "";
    string model = "";
    float price = 0.0;
    int numberOfKeys = 0;
};

struct Pc
{
	Keyboard keyboard1;
	string owner = "John Doe";
};

void display(Keyboard k){
    cout << "Brand:" <<k.brand << " Model:" <<k.model << " Price:" <<k.price << " zl" << " NumberOfKeys:" <<k.numberOfKeys << endl;
}

int main()
{
  Keyboard keyboard1;
  keyboard1.brand = "Razor";
  keyboard1.model = "V3 RGB Lighting";
  keyboard1.price = 100.0;
  keyboard1.numberOfKeys = 88;
  display(keyboard1); 
  return 0;
}

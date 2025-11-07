#include<iostream>
using namespace std;
class book
{
public:
string title;
string author;
float price;
void display()
{
cout<<"title:"<<title<<"author:"<<author<<"price:rs"<<price<<endl;
}
};
int main()
{
book b1,b2;
b1.title="c";
b1.price=750.50;
b2.title="data";
b2.price=859.98;
b1.display();
b2.display();
return 0;
}

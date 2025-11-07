#include <iostream>
using namespace std;
class account
{
public:
int accountnumber;
string name;
float balance;
void display()
{

cout<< "accountnumber: "<<accountnumber<<"name: "<<name<<"balance: "<<balance <<endl;

 }
};
int main()
{
account a1,a2;
a1.accountnumber=1001;
a1.name="lahari";
a1.balance=200000;
a2.accountnumber=1002;
a2.name="kunnu";
a2.balance=4000000;
a1.display();
a2.display();
return 0;
}

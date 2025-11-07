#include<iostream>
using namespace std;
class car
{
	public:
	 string model;
	 string company;
	 float price;
	 void display()
	 {
	 	cout<<"company"<<company<<"model"<<model<<"price"<<price<<endl;
	 	}
};
int main()
{
	car c1,c2,c3;
	c1.company="toyoto";
	c1.price=290,000;
	c2.company="honda";
	c2.model="shine";
	c2.price=100000;
	c3.company="hyunda";
	c3.model="i20";
	c3.price=8,00,000;
	c1.display();
	c2.display();
	c3.display();
	return 0;
}
	

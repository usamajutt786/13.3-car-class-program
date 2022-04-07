#include<iostream>
#include<string>
using namespace std;
class car
{
private:
	int yearModel;
	int speed;
	string make;
public:
	car(int model,string mak)
	{
		model = yearModel;
		speed = 0;
		mak = make;
	}
	int getYearModel() const
	{
		return yearModel;
	}
	string getMake() const
	{
		return make;
	}
	int getSpeed() const
	{
		return speed;
	}
	void accelerate()
	{
		speed = speed + 5;
	 }
	void brake()
	{
		speed = speed - 5;
	}

 };
int main()
{
	car car1(2022, "Toyota");
	cout << "the speed of car is :" << car1.getSpeed() << endl;
	cout << endl << "Accelerating of car is  " << endl;
	for (int i = 1;i <= 5;i++)
	{
		car1.accelerate();
		cout << "the soeed of car is " << car1.getSpeed() << endl;

	}
	cout << "the acceleration of car when brake applied is :" << endl;
	for (int i = 1;i <= 5;i++)
	{
		car1.brake();
		cout << "the speed of car now is " << car1.getSpeed() << endl;
	}
	return 0;
}
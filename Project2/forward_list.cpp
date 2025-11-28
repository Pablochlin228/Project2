#include <iostream>
#include <list>
using namespace std;

class Student
{
	string name;
	int age;
public:
	Student() {}
	Student(string n,int a)
	{
		name = n;
		age = a;
	}
	void Init()
	{
		cout << "Enter your name: ";
		cin >> name;
		cout << "Enter your age: ";
		cin >> age;
	}
	void Print()
	{
		cout << "--------------" << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "--------------" << endl;
	}
	string GetName()
	{
		return name;
	}
	int GetAge()
	{
		return age;
	}
};

ostream& operator << (ostream& os,Student obj)
{
	os << "Name: " << obj.GetName() << "\tAge: " << obj.GetAge() << endl;
	return os;
}

int main()
{
	list<Student> group;
	
	for (int i = 0; i < 5; i++)
	{
		Student a;
		a.Init();
		group.push_back(a);
	}

	for (auto ptr = group.begin();ptr != group.end();ptr++)
	{
		cout << *ptr << endl;
	}

	for (auto ptr = group.begin(); ptr != group.end(); ptr++)
	{
		(*ptr)->Print();
	}

	group.push_back(Student("Pavel", 17));
	group.pop_front();
}

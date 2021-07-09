#include<iostream>
#include<math.h>
#include<ctime>
#include"person.h"

using namespace std;

enum Month {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
enum Gender {Male, Female};
struct bio{
	        Gender g1;
		string dob;
		string birthplace;
		int age;
		float height, weight, bmi;
};


int main(int argc, char** argv ){

	Person p1("Sagar", Male);
	bio b1;
	//p1 = new Person("Sagar");	
	int day = 12;

	p1.set_dob(5, Apr, 1997);
	p1.set_birthplace("Anand");

	p1.set_physique(57,1.7018);

	b1 = p1.get_bio_data();

	p1.display();

	return 0;
}


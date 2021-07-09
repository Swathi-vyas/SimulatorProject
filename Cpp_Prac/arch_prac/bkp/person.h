#ifndef PERSON_H
#define PERSON_H

namespace std{

enum Month {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
enum Gender {Male, Female};
struct bio{
	        Gender g1;
	        string dob;
	        string birthplace;
	        int age;
	        float height, weight, bmi;
};

class Person{

	Person(string Name, Gender gen);
	
	string get_name();
	bio get_bio_data();
	void set_dob(int day, Month mon, int year);
	void set_birthplace(string birthplace);	
	void display();
	
	virtual ~Person();
	};
};

#endif

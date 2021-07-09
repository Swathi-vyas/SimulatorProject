#include<iostream>
#include<math.h>
#include<ctime>

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
	private:
		time_t now = time(0);
		tm *ltm = localtime(&now);

		string name;
		bio    Bio;

	public:

	Person(string Name, Gender gen){
		name=Name;
		Bio.g1 = gen;
	}

	void set_physique(float weight, float height){
		Bio.bmi = weight/(pow(height,2));
		Bio.height = height;
		Bio.weight = weight;
	}

	void set_dob(int day, Month mon, int year){
		
		Bio.age = 1900+ltm->tm_year-year;
		Bio.dob = to_string(day)+'-'+to_string(mon)+'-'+to_string(year);

	}

	void set_birthplace(string birthplace){
		Bio.birthplace = birthplace;
	}

	string get_name(){
		return name;
	}
	bio get_bio_data(){
		return Bio;
	}
	void display(){
		cout << get_name() << endl;
		cout << "-------Bio Data-------" << endl;
	       	cout << "Age: " << Bio.age << endl;
		cout << "BMI: " << Bio.bmi << endl;
		cout << "Sex: " << Bio.g1 << endl;
		cout << "DOB: " << Bio.dob << endl;
		cout << "Place of Birth: " << Bio.birthplace << endl;
	}

	virtual ~Person(){
	}
};
};

using namespace std;

int main(int argc, char** argv ){

	cout << argv[0] << argv[1] << argv[2] << endl;
	Person p1("Sagar",Male);
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


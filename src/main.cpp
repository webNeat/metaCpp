#include <class.hpp>
#include <iostream>
using namespace std;

int main(int argc, char **argv){
	Class person("Person");
	person.addAttribut(Attribut("string", "name"));
	person.addAttribut(Attribut("int", "age"));
	person.addAttribut(Attribut("Person*", "father"));
	person.addAttribut(Attribut("Person*", "mother"));
	person.addAttribut(Attribut("vector<Person>", "friends"));
	
	return 0;
}
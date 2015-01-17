#ifndef ATTRIBUT_H
#define ATTRIBUT_H 1

#include <string>
using namespace std;

class Attribut {
private:
	string name_;
	string type_;
public:
	Attribut(const string&, const string&);
	Attribut(Attribut&);
	Attribut& operator=(const Attribut&);
	~Attribut();
	const string& getName() const;
	void setName(const string& name );
	const string& getType() const;
	void setType(const string& type );
};

#endif

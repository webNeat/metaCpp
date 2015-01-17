#ifndef METHOD_H
#define METHOD_H 1

#include <string>
#include <vector>
using namespace std;

class Method {
private:
	string name_;
	string type_;
	vector<string> args_;
public:
	Method(Method&);
	Method& operator=(const Method&);
	~Method();
	Method(const string& name , const string& type );
	void addArg(const string& arg );
	const string& getName() const;
	void setName(const string& name );
	const string& getType() const;
	void setType(const string& type );
	const vector<string>& getArgs() const;
};

#endif

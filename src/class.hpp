#ifndef CLASS_H
#define CLASS_H 1

#include <attribut.hpp>
#include <method.hpp>
#include <vector>
using namespace std;

class Class {
private:
	string name_;
	MetaClass meta_;
	vector<Attribut> attributs_;
	vector<Method> methods_;
public:
	Class(const string& name);
	Class(Class&);
	Class& operator=(const Class&);
	~Class();
	void addAttribut(Attribut& attr, bool isStatic = false );
	void addMethod(Method& m , bool isStatic = false );
	bool hasAttribute(const string& name );
	bool getAttribute(const string& name );
	bool hasMethodWithName(const string& name );
	const Method& getMethodByName(const string& name );
	vector<Attribut> getAttributesByType(const string& type );
	vector<Method> getMethodsByType(const string& type );
	vector<Method> getMethodsByArgs(vector<string>& args );
	vector<Method> getConstructors();
	const string& getName() const;
	void setName(const string& name );
	const MetaClass& getMeta() const;
	const vector<Attribut>& getAttributs() const;
	void setAttributs(const vector<Attribut>& attributs );
	const vector<Method>& getMethods() const;
	void setMethods(const vector<Method>& methods );
};

#endif

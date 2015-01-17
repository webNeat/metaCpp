#ifndef CLASS_H
#define CLASS_H 1

#include <attribut.hpp>
#include <method.hpp>
#include <meta_class.hpp>
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
	Class(const Class&);
	Class& operator=(const Class&);
	~Class();
	const string& getName() const;
	void addAttribut(const Attribut& attr);
	void addStaticAttribut(const Attribut& attr);
	void addMethod(const Method& m);
	void addStaticMethod(const Method& m);
	const vector<Attribut>& getAttributs() const;
	const vector<Attribut>& getStaticAttributs() const;
	const vector<Method>& getMethods() const;
	const vector<Method>& getStaticMethods() const;
};

#endif

#ifndef META_CLASS_H
#define META_CLASS_H 1

#include <attribut.hpp>
#include <method.hpp>
#include <vector>
using namespace std;

class MetaClass {
private:
	vector<Attribut> attributs_;
	vector<Method> methods_;
public:
	MetaClass();
	MetaClass(const vector<Attribut>& attributs, const vector<Method>& methods);
	MetaClass(MetaClass&);
	MetaClass& operator=(const MetaClass&);
	~MetaClass();
	void addAttribut(const Attribut& attr );
	void addMethod(const Method& m );
	const vector<Attribut>& getAttributs() const;
	const vector<Method>& getMethods() const;
};

#endif

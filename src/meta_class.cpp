#include "meta_class.hpp"

MetaClass::MetaClass(){}
MetaClass::MetaClass(const vector<Attribut>& attributs, const vector<Method>& methods) : attributs_(attributs), methods_(methods){}
MetaClass::MetaClass(MetaClass& i) : attributs_(i.attributs_), methods_(i.methods_){}
MetaClass& MetaClass::operator=(const MetaClass& i){ 
	attributs_ = i.attributs_;
	methods_ = i.methods_;
	return *this;
}
MetaClass::~MetaClass(){}
void MetaClass::addAttribut(const Attribut& attr){
	
}
void MetaClass::addMethod(const Method& m){
	
}
const vector<Attribut>& MetaClass::getAttributs() const {
	return attributs_;
}
const vector<Method>& MetaClass::getMethods() const {
	return methods_;
}
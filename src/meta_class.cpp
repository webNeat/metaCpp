#include "meta_class.hpp"

MetaClass::MetaClass(){}
MetaClass::MetaClass(const vector<Attribut>& attributs, const vector<Method>& methods) : attributs_(attributs), methods_(methods){}
MetaClass::MetaClass(const MetaClass& i) : attributs_(i.attributs_), methods_(i.methods_){}
MetaClass& MetaClass::operator=(const MetaClass& i){ 
	attributs_ = i.attributs_;
	methods_ = i.methods_;
	return *this;
}
MetaClass::~MetaClass(){}
void MetaClass::addAttribut(const Attribut& attr){
	attributs_.push_back(attr);	
}
void MetaClass::addMethod(const Method& m){
	methods_.push_back(m);
}
const vector<Attribut>& MetaClass::getAttributs() const {
	return attributs_;
}
const vector<Method>& MetaClass::getMethods() const {
	return methods_;
}
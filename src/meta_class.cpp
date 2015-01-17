#include "meta_class.hpp"

MetaClass::MetaClass(){

}
MetaClass::MetaClass(const vector<Attribut>& attributs, const vector<Method>& methods) : attributs_(attributs), methods_(methods){}
MetaClass::MetaClass(MetaClass& i) : attributs_(i.attributs_), methods_(i.methods_){}
MetaClass& MetaClass::operator=(const MetaClass& i){ 
	attributs_ = i.attributs_;
	methods_ = i.methods_;
	return *this;
}
MetaClass::~MetaClass(){

}
void MetaClass::addAttribut(Attribut& attr){
	
}
void MetaClass::addMethod(Method& m){
	
}
const vector<Attribut>& MetaClass::getAttributs() const {
	return attributs_;
}
void MetaClass::setAttributs(const vector<Attribut>& attributs){
	attributs_ = attributs;
}
const vector<Method>& MetaClass::getMethods() const {
	return methods_;
}
void MetaClass::setMethods(const vector<Method>& methods){
	methods_ = methods;
}

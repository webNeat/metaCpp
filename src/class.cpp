#include "class.hpp"

Class::Class(const string& name) : name_(name) {}
Class::Class(Class& i) : name_(i.name_), meta_(i.meta_), attributs_(i.attributs_), methods_(i.methods_){}
Class& Class::operator=(const Class& i){ 
	name_ = i.name_;
	meta_ = i.meta_;
	attributs_ = i.attributs_;
	methods_ = i.methods_;
	return *this;
}
Class::~Class(){}
const string& Class::getName() const {
	return name_;
}
void Class::addAttribut(Attribut& attr){}
void Class::addStaticAttribut(Attribut& attr){}
void Class::addMethod(Method& m){}
void Class::addStaticMethod(Method& m){}

const vector<Attribut>& Class::getAttributs() const {
	return attributs_;
}
const vector<Attribut>& Class::getStaticAttributs() const {
	return attributs_;
}
const vector<Method>& Class::getMethods() const {
	return methods_;
}
const vector<Method>& Class::getStaticMethods() const {
	return methods_;
}
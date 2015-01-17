#include "class.hpp"

Class::Class(const string& name) : name_(name) {}
Class::Class(const Class& i) : name_(i.name_), meta_(i.meta_), attributs_(i.attributs_), methods_(i.methods_){}
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
void Class::addAttribut(const Attribut& attr){
	attributs_.push_back(attr);
}
void Class::addStaticAttribut(const Attribut& attr){
	meta_.addAttribut(attr);
}
void Class::addMethod(const Method& m){
	methods_.push_back(m);
}
void Class::addStaticMethod(const Method& m){
	meta_.addMethod(m);
}

const vector<Attribut>& Class::getAttributs() const {
	return attributs_;
}
const vector<Attribut>& Class::getStaticAttributs() const {
	return meta_.getAttributs();
}
const vector<Method>& Class::getMethods() const {
	return methods_;
}
const vector<Method>& Class::getStaticMethods() const {
	return meta_.getMethods();
}
#include "class.hpp"

Class::Class(){

}
Class::Class(const string& name) : name_(name) {}
Class::Class(Class& i) : name_(i.name_), meta_(i.meta_), attributs_(i.attributs_), methods_(i.methods_){}
Class& Class::operator=(const Class& i){ 
	name_ = i.name_;
	meta_ = i.meta_;
	attributs_ = i.attributs_;
	methods_ = i.methods_;
	return *this;
}
Class::~Class(){

}
void Class::addAttribut(Attribut& attr){
	
}
void Class::addMethod(Method& m){
	
}
bool Class::hasAttribute(const string& name){
	
}
bool Class::getAttribute(const string& name){
	
}
bool Class::hasMethodWithName(const string& name){
	
}
const Method& Class::getMethodByName(const string& name){
	
}
vector<Attribut> Class::getAttributesByType(const string& type){
	
}
vector<Method> Class::getMethodsByType(const string& type){
	
}
vector<Method> Class::getMethodsByArgs(vector<string>& args){
	
}
vector<Method> Class::getConstructors(){
	
}
const string& Class::getName() const {
	return name_;
}
void Class::setName(const string& name){
	name_ = name;
}
const MetaClass& Class::getMeta() const {
	return meta_;
}
const vector<Attribut>& Class::getAttributs() const {
	return attributs_;
}
void Class::setAttributs(const vector<Attribut>& attributs){
	attributs_ = attributs;
}
const vector<Method>& Class::getMethods() const {
	return methods_;
}
void Class::setMethods(const vector<Method>& methods){
	methods_ = methods;
}

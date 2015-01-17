#include "attribut.hpp"

Attribut::Attribut() {}
Attribut::Attribut(const string& type, const string& name) : type_(type), name_(name) {}
Attribut::Attribut(Attribut& i) : type_(i.getType()), name_(i.getName()) {}
Attribut& Attribut::operator=(const Attribut& i){
	type_ = i.getType();
	name_ = i.getName();
	return *this;
}
Attribut::~Attribut(){}
const string& Attribut::getName() const{
	return name_;
}
void Attribut::setName(const string& name){
	name_ = name;
}
const string& Attribut::getType() const {
	return type_;
}
void Attribut::setType(const string& type){
	type_ = type;
}

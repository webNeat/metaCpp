#include "method.hpp"

Method::Method(const Method& i){
	name_ = i.getName();
	type_ = i.getType();
	args_ = i.getArgs();
}
Method& Method::operator=(const Method& i){
	name_ = i.getName();
	type_ = i.getType();
	args_ = i.getArgs();
	return *this;
}
Method::~Method(){}
Method::Method(const string& name, const string& type){
	name_ = name;
	type_ = type;
}
void Method::addArg(const string& arg) {
	args_.push_back(arg);
}
const string& Method::getName() const {
	return name_;
}
void Method::setName(const string& name){
	name_ = name;
}
const string& Method::getType() const {
	return type_;
}
void Method::setType(const string& type){
	type_ = type;
}
const vector<string>& Method::getArgs() const {
	return args_;
}

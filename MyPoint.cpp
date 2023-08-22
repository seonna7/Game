#include <stdio.h>
#include "MyPoint.h"

MyPoint&MyPoint:: operator+= (const MyPoint& s){
	x = x + s.x;
	y = y + s.y;
	return *this;
}
MyPoint&MyPoint:: operator-= (const MyPoint& s){
	x = x - s.x;
	y = y - s.y;
	return *this;
}
MyPoint&MyPoint:: operator*= (const MyPoint& s){
	x = x * s.x;
	y = y * s.y;
	return *this;
}
MyPoint& MyPoint:: operator/= (const MyPoint& s) {
	x = x / s.x;
	y = y / s.y;
	return *this;
}



MyPoint MyPoint::operator+ (const MyPoint& s) {
	MyPoint k;
	k.x = x + s.x;
	k.y = y + s.y;
	return k;
}


MyPoint MyPoint::operator- (const MyPoint& s) {
	MyPoint k;
	k.y = y - s.y;
	k.x = x - s.x;
	return k;
}
MyPoint MyPoint::operator* (const float s) {
	MyPoint k;
	k.x = x * s;
	k.y = y * s;
	return k;
}
MyPoint MyPoint::operator/ (const float s) {
	MyPoint k;
	k.y = y + s;
	k.x = x + s;
	return k;
}
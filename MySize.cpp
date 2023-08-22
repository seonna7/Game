#include <stdio.h>
#include "MySize.h"


MySize& MySize::operator+= (const MySize& s){
	width = width + s.width;
	height = height + s.height;
	return *this;
}
MySize& MySize:: operator-= (const MySize& s){
	return *this;
}
MySize& MySize:: operator*= (const MySize& s){
	return *this;
}
MySize& MySize:: operator/= (const MySize& s){
	return *this;
}

MySize MySize:: operator+ (const MySize& s) {
	MySize r;
	r.width = width + s.width;
	r.height= height+ s.height;
	return r;
}
MySize MySize:: operator- (const MySize& s){
	MySize r;
	r.width = width + s.width;
	r.height= height+ s.height;
	return r;
}
MySize MySize:: operator* (const float s){
	MySize r;
	r.width = width * s;
	r.height = height * s;
	return r;
}
MySize MySize:: operator/ (const float s) {
	MySize r;
	r.width = width / s;
	r.height = height/ s;
	return r;
}
#if 0
MySize MySize::qwer(float x, float y) {
	width = x;
	height = y;
	return *this;
}
#endif

int main() {
#if 0
	MySize s(30, 10);
	MySize k = s + l;

	k.width = 20;
	MySize l;
	l.width = 30;
	MySize g = k + l;
	MySize k;
	k.qwer(20, 10);
#endif
	printf("k¿« width : %f height : %f ", k.width, k.height);

}
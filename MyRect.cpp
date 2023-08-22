#include <stdio.h>
#include "MyRect.h"

MyRect& MyRect::operator+= (const MyPoint& k){
	origin.x += k.x;
	origin.y += k.y;
	return *this;
}
MyRect& MyRect::operator-=(const MyPoint& k){
	origin.x -= k.x;
	origin.y -= k.y;
	return *this;
}
MyRect MyRect::operator+(const MyPoint& k){
	MyRect r;
	r.origin.x = origin.x + k.x;
	r.origin.y = origin.y + k.y;
	r.size = size;
	return r;
}
MyRect MyRect::operator- (const MyPoint& k){
	MyRect r;
	r.origin.x = origin.x + k.x;
	r.origin.y = origin.y + k.y;
	r.size = size;
	return r;
}
MyRect RectMake(float x, float y, float width, float height) {
	MyRect r;
	r.origin.x = x;
	r.origin.y = y;
	r.size.width = width;
	r.size.height= height;
	return r;
}
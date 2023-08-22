#pragma once
#include "MyPoint.h"
#include "MySize.h"

struct MyRect {
	MyPoint origin;
	MySize size;

	MyRect &operator+= (const MyPoint &k);
	MyRect& operator-=(const MyPoint& k);
	MyRect operator+(const MyPoint& k);
	MyRect operator- (const MyPoint& k);

	MyRect RectMake(float x, float y, float width, float height);

};
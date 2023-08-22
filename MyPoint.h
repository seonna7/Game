#pragma once

struct MyPoint {
	float x, y;

	// 대입 변동 
	MyPoint& operator+= (const MyPoint &s);
	MyPoint& operator-= (const MyPoint& s);
	MyPoint& operator*= (const MyPoint& s);
	MyPoint& operator/= (const MyPoint& s);

	// 변동 

	MyPoint operator+ (const MyPoint& s);
	MyPoint operator- (const MyPoint& s);
	MyPoint operator* (const float s);
	MyPoint operator/ (const float s);
};
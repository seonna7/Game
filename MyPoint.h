#pragma once

struct MyPoint {
	float x, y;

	// ���� ���� 
	MyPoint& operator+= (const MyPoint &s);
	MyPoint& operator-= (const MyPoint& s);
	MyPoint& operator*= (const MyPoint& s);
	MyPoint& operator/= (const MyPoint& s);

	// ���� 

	MyPoint operator+ (const MyPoint& s);
	MyPoint operator- (const MyPoint& s);
	MyPoint operator* (const float s);
	MyPoint operator/ (const float s);
};
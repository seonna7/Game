#pragma once

struct MySize {
	float width = 0; float height = 0;
#if 0
	MySize(int k, int l) {
		width = k;
		height = l;
	}
#endif
	
	// 변수가 자신 하나만 필요할 때 
	MySize& operator-= (const MySize& s);
	MySize& operator+= (const MySize& s);
	MySize& operator*= (const MySize& s);
	MySize& operator/= (const MySize& s);
	
	// 구조체 변수 하나를 추가 할당해서 계산할 때
	MySize operator+ (const MySize& s);
	MySize operator- (const MySize& s);
	MySize operator* (const float s);
	MySize operator/ (const float s);

	MySize qwer(float x, float y);

};

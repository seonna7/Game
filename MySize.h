#pragma once

struct MySize {
	float width = 0; float height = 0;
#if 0
	MySize(int k, int l) {
		width = k;
		height = l;
	}
#endif
	
	// ������ �ڽ� �ϳ��� �ʿ��� �� 
	MySize& operator-= (const MySize& s);
	MySize& operator+= (const MySize& s);
	MySize& operator*= (const MySize& s);
	MySize& operator/= (const MySize& s);
	
	// ����ü ���� �ϳ��� �߰� �Ҵ��ؼ� ����� ��
	MySize operator+ (const MySize& s);
	MySize operator- (const MySize& s);
	MySize operator* (const float s);
	MySize operator/ (const float s);

	MySize qwer(float x, float y);

};

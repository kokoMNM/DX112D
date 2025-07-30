#pragma once
#include <math.h>

//벡터
//크기와 방향을 물리량
//게임에서는 주로 이걸로 객체의 크기나 위치를 표현
struct FVector2D
{
	float x;
	float y;

	FVector2D();
	FVector2D(float _x, float _y);
	FVector2D(const FVector2D& _other);
	FVector2D(FVector2D&& _other);

	//operator =
	const FVector2D& operator = (const FVector2D& _other);
	const FVector2D& operator = (float _value);
	const FVector2D& operator = (double _value);
	const FVector2D& operator = (int _value);

	//operator + 
	FVector2D operator + (const FVector2D& _other) const;
	FVector2D operator + (const float _value) const;
	FVector2D operator + (const double _value) const;
	FVector2D operator + (const int _value) const;

	//operator += 
	const FVector2D& operator += (const FVector2D& _other);
	const FVector2D& operator += (float _value);
	const FVector2D& operator += (double _value);
	const FVector2D& operator += (int _value);

	//operator ++
	const FVector2D& operator ++();		//전치
	const FVector2D& operator ++(int);	//후치

	//operator -
	FVector2D operator - (const FVector2D& _other) const;
	FVector2D operator - (float _value) const;
	FVector2D operator - (double _value) const;
	FVector2D operator - (int _value) const;

	//operator -=
	const FVector2D& operator -= (const FVector2D& _other);
	const FVector2D& operator -= (float _value);
	const FVector2D& operator-= (double _value);
	const FVector2D& operator -= (int _value);

	//operator --
	const FVector2D& operator --();
	const FVector2D& operator --(int);

	//operator *
	FVector2D operator * (const FVector2D& _other) const;
	FVector2D operator * (float _value) const;
	FVector2D operator * (double _value) const;
	FVector2D operator * (int _value) const;

	//operator *=
	const FVector2D& operator *=(const FVector2D& _other);
	const FVector2D& operator *=(float _value);
	const FVector2D& operator *=(double _value);
	const FVector2D& operator *=(int _value);

	//operator /
	FVector2D operator / (const FVector2D& _other) const;
	FVector2D operator / (float _value) const;
	FVector2D operator / (double _value) const;
	FVector2D operator / (int _value) const;

	const FVector2D& operator /=(const FVector2D& _other);
	const FVector2D& operator /=(float _value);
	const FVector2D& operator /=(double _value);
	const FVector2D& operator /=(int _value);

	float Length() const;
	void Normalize(); //벡터 정규화
	float Dot(const FVector2D& _other) const;
	float Distance(const FVector2D& _other) const;

	static FVector2D Normalize(const FVector2D& _other);
};


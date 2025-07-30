#pragma once
#include "EngineMath.h"

struct FVector4D
{
	float x;
	float y;
	float z;
	float w;

	FVector4D();
	FVector4D(float _x, float _y, float _z, float _w);
	FVector4D(const FVector4D& _other);
	FVector4D(FVector4D&& _other);

	//operator =
	const FVector4D& operator = (const FVector4D& _other);
	const FVector4D& operator = (float _value);
	const FVector4D& operator = (double _value);
	const FVector4D& operator = (int _value);

	//operator + 
	FVector4D operator + (const FVector4D& _other) const;
	FVector4D operator + (const float _value) const;
	FVector4D operator + (const double _value) const;
	FVector4D operator + (const int _value) const;

	//operator += 
	const FVector4D& operator += (const FVector4D& _other);
	const FVector4D& operator += (float _value);
	const FVector4D& operator += (double _value);
	const FVector4D& operator += (int _value);

	//operator ++
	const FVector4D& operator ++();		//전치
	const FVector4D& operator ++(int);	//후치

	//operator -
	FVector4D operator - (const FVector4D& _other) const;
	FVector4D operator - (float _value) const;
	FVector4D operator - (double _value) const;
	FVector4D operator - (int _value) const;

	//operator -=
	const FVector4D& operator -= (const FVector4D& _other);
	const FVector4D& operator -= (float _value);
	const FVector4D& operator-= (double _value);
	const FVector4D& operator -= (int _value);

	//operator --
	const FVector4D& operator --();
	const FVector4D& operator --(int);

	//operator *
	FVector4D operator * (const FVector4D& _other) const;
	FVector4D operator * (float _value) const;
	FVector4D operator * (double _value) const;
	FVector4D operator * (int _value) const;

	//operator *=
	const FVector4D& operator *=(const FVector4D& _other);
	const FVector4D& operator *=(float _value);
	const FVector4D& operator *=(double _value);
	const FVector4D& operator *=(int _value);

	//operator /
	FVector4D operator / (const FVector4D& _other) const;
	FVector4D operator / (float _value) const;
	FVector4D operator / (double _value) const;
	FVector4D operator / (int _value) const;

	const FVector4D& operator /=(const FVector4D& _other);
	const FVector4D& operator /=(float _value);
	const FVector4D& operator /=(double _value);
	const FVector4D& operator /=(int _value);

	float& operator [] (int _index);

	static FVector4D White;
	static FVector4D Black;
	static FVector4D Red;
	static FVector4D Green;
	static FVector4D Blue;
};

#pragma once
#include <math.h>
#include "Matrix.h"
#include "EngineMath.h"

struct FVector3D
{
	float x;
	float y;
	float z;

	FVector3D();
	FVector3D(float _x, float _y, float _z);
	FVector3D(const FVector3D& _other);
	FVector3D(FVector3D&& _other);
	FVector3D(const DirectX::XMVECTOR v);

	//operator =
	const FVector3D& operator = (const FVector3D& _other);
	const FVector3D& operator = (float _value);
	const FVector3D& operator = (double _value);
	const FVector3D& operator = (int _value);
	const FVector3D& operator = (DirectX::XMVECTOR _value);

	//operator + 
	FVector3D operator + (const FVector3D& _other) const;
	FVector3D operator + (const float _value) const;
	FVector3D operator + (const double _value) const;
	FVector3D operator + (const int _value) const;

	//operator += 
	const FVector3D& operator += (const FVector3D& _other);
	const FVector3D& operator += (float _value);
	const FVector3D& operator += (double _value);
	const FVector3D& operator += (int _value);

	//operator ++
	const FVector3D& operator ++();		//전치
	const FVector3D& operator ++(int);	//후치

	//operator -
	FVector3D operator - (const FVector3D& _other) const;
	FVector3D operator - (float _value) const;
	FVector3D operator - (double _value) const;
	FVector3D operator - (int _value) const;

	//operator -=
	const FVector3D& operator -= (const FVector3D& _other);
	const FVector3D& operator -= (float _value);
	const FVector3D& operator-= (double _value);
	const FVector3D& operator -= (int _value);

	//operator --
	const FVector3D& operator --();
	const FVector3D& operator --(int);

	//operator *
	FVector3D operator * (const FVector3D& _other) const;
	FVector3D operator * (float _value) const;
	FVector3D operator * (double _value) const;
	FVector3D operator * (int _value) const;

	//operator *=
	const FVector3D& operator *=(const FVector3D& _other);
	const FVector3D& operator *=(float _value);
	const FVector3D& operator *=(double _value);
	const FVector3D& operator *=(int _value);

	//operator /
	FVector3D operator / (const FVector3D& _other) const;
	FVector3D operator / (float _value) const;
	FVector3D operator / (double _value) const;
	FVector3D operator / (int _value) const;

	const FVector3D& operator /=(const FVector3D& _other);
	const FVector3D& operator /=(float _value);
	const FVector3D& operator /=(double _value);
	const FVector3D& operator /=(int _value);

	bool operator ==(const FVector3D& other);
	bool operator !=(const FVector3D& other);

	FVector3D operator-() const;


	float Length() const;
	void Normalize(); //벡터 정규화
	float Dot(const FVector3D& _other) const;
	FVector3D Cross(const FVector3D& _other) const;
	float Distance(const FVector3D& _other) const;

	static FVector3D Normalize(const FVector3D& _other);

	DirectX::XMVECTOR Convert() const
	{
		return DirectX::XMLoadFloat3((DirectX::XMFLOAT3*)this);
	}

	FVector3D TransformNormal(const FMatrix& mat) const;
	FVector3D TransformCoord(const FMatrix& mat) const;
	FVector3D GetRotation(const FVector3D& rot) const;

	static FVector3D AxisX;
	static FVector3D AxisY;
	static FVector3D AxisZ;
	static FVector3D Zero;
};


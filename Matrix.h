#pragma once
#include "FVector4D.h"

//여기서
//크기행렬, 회전행렬, 이동행렬
//크기 * 회전 * 이동 --> 월드행렬

//union 메모리를 공유
struct FVector2D;
struct FVector3D;
_declspec(align(16)) union FMatrix
{
	DirectX::XMMATRIX m;

	struct
	{
		float _11, _12, _13, _14;
		float _21, _22, _23, _24;
		float _31, _32, _33, _34;
		float _41, _42, _43, _44;
	};

	FVector4D v[4];

	FMatrix();
	FMatrix(const FMatrix& _m);
	FMatrix(FMatrix&& _m);
	FMatrix(const DirectX::XMMATRIX& _m);
	FMatrix(const FVector4D _v[4]);

	FVector4D& operator [] (int index);

	const FMatrix& operator = (const FMatrix& _m);
	const FMatrix& operator = (const DirectX::XMMATRIX& _m);
	const FMatrix& operator = (const FVector4D _v[4]);

	FMatrix operator * (const FMatrix& _m) const;
	FMatrix operator * (const DirectX::XMMATRIX& _m) const;

	//단위행렬을 만들어 주는 함수
	void Identity();
	
	//전치행렬
	void Transpose();
	
	//역행렬
	void Inverse();

	//크기
	void Scaling(const FVector3D& _v);
	void Scaling(float x, float y, float z);
	void Scaling(const FVector2D& _v);
	void Scaling(float x, float y);

	//회전
	void Rotation(const FVector3D& _v);
	void Rotation(float _x, float _y, float _z);
	void RotationX(float _x);
	void RotationY(float _y);
	void RotationZ(float _z);
	void RotationAxis(const FVector3D& axis, float _angle);

	void Translation(const FVector3D& _v);
	void Translation(float x, float y, float z);
	void Translation(const FVector2D& _v);
	void Translation(float x, float y);


};





//행렬

/*
4 * 4
0 0 0 0
0 0 0 0
0 0 0 0

1 0 0 0
0 1 0 0
0 0 1 0
0 0 0 1
-->단위행렬(항등행렬)

행렬의곱
 4 * 4		 4 * 4
1 2 3 4		1 2 3 4			50	30 40 50
5 6 7 8		5 6 7 8
9 0 1 2		9 0 1 2
3 4 5 6		3 4 5 6
교환법칙 성립X

전치행렬
행 열 을 뒤집는걸 전치행렬


x 0 0 0
0 y 0 0
0 0 z 0
0 0 0 1
크기행렬

X축회전
1	0	0	0
0 cos -sin	0
0 sin cos	0
0 0	  0		1

Y축회전
cos  0  sin	 0
0	 1   0	 0
-sin 0  cos	 0
0	 0	 0   1

Z축회전
cos -sin 0	0
sin cos  0	0
0    0   1  0
0    0   0  1

최종 회전행렬= x축회전 * y축회전 * z축회전

//이동 행렬
1 0 0 0
0 1 0 0
0 0 1 0
x y z 1

월드행렬
=>크기 * 자전 * 이동 * 부모
-->상속받은 클래스(베이스클래스)가 아닌
나에게 영향을 줄 수 있는 다른 객체

*/







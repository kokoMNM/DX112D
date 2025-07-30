#include "Matrix.h"
#include "FVector2D.h"
#include "FVector3D.h"
#include <memory>

FMatrix::FMatrix()
{
	//XMMatrixIdentity() 단위행렬을 만들어주는 함수
	m = DirectX::XMMatrixIdentity();
}

FMatrix::FMatrix(const FMatrix& _m)
{
	m = _m.m;
}

FMatrix::FMatrix(FMatrix&& _m)
{
	m = _m.m;
}

FMatrix::FMatrix(const DirectX::XMMATRIX& _m)
{
	m = _m;
}

FMatrix::FMatrix(const FVector4D _v[4])
{
	memcpy(v, _v, sizeof(FVector4D) * 4);
}

FVector4D& FMatrix::operator[](int index)
{
	assert(0 <= index && index <= 3);

	return v[index];
}

const FMatrix& FMatrix::operator=(const FMatrix& _m)
{
	m = _m.m;
	return *this;
}

const FMatrix& FMatrix::operator=(const DirectX::XMMATRIX& _m)
{
	m = _m;
	return *this;
}

const FMatrix& FMatrix::operator=(const FVector4D _v[4])
{
	memcpy(v, _v, sizeof(FVector4D) * 4);

	return *this;
}

FMatrix FMatrix::operator*(const FMatrix& _m) const
{
	return FMatrix(m * _m.m);
}

FMatrix FMatrix::operator*(const DirectX::XMMATRIX& _m) const
{
	return FMatrix(m * _m);
}

void FMatrix::Identity()
{
	//XMMatrixIdentity 단위행렬을 만들어주는 함수
	m = DirectX::XMMatrixIdentity();
}

void FMatrix::Transpose()
{
	//XMMatrixTranspose 전치행렬을 만들어주는 함수
	//전치 : 기존의 행과 열을 뒤집는거
	m = DirectX::XMMatrixTranspose(m);
}

void FMatrix::Inverse()
{
	//XMMatrixDeterminant 행렬식을 계산해주는 함수
	DirectX::XMVECTOR det = DirectX::XMMatrixDeterminant(m);

	//역행렬을 구해주는 함수
	m = DirectX::XMMatrixInverse(&det, m);
}

void FMatrix::Scaling(const FVector3D& _v)
{
	m = DirectX::XMMatrixScaling(_v.x, _v.y, _v.z);
}

void FMatrix::Scaling(float x, float y, float z)
{
	m = DirectX::XMMatrixScaling(x, y, z);
}

void FMatrix::Scaling(const FVector2D& _v)
{
	m = DirectX::XMMatrixScaling(_v.x, _v.y, 1);
}

void FMatrix::Scaling(float x, float y)
{
	m = DirectX::XMMatrixScaling(x, y, 1);
}

void FMatrix::Rotation(const FVector3D& _v)
{
	float x = DirectX::XMConvertToRadians(_v.x);
	float y = DirectX::XMConvertToRadians(_v.y);
	float z = DirectX::XMConvertToRadians(_v.z);

	//x, y, z 회전값을 이용하여 사원수를 구한다.
	// 
	//pitch -- X
	//yaw -- Y
	//roll -- z
	DirectX::XMVECTOR quat = DirectX::XMQuaternionRotationRollPitchYaw(x, y, z);

	//위에서 구해준 사원수를 이용하여 회전행렬을 만든다.
	m = DirectX::XMMatrixRotationQuaternion(quat);
}

void FMatrix::Rotation(float _x, float _y, float _z)
{
	float x = DirectX::XMConvertToRadians(_x);
	float y = DirectX::XMConvertToRadians(_y);
	float z = DirectX::XMConvertToRadians(_z);

	//x, y, z 회전값을 이용하여 사원수를 구한다.
	// 
	//pitch -- X
	//yaw -- Y
	//roll -- z
	DirectX::XMVECTOR quat = DirectX::XMQuaternionRotationRollPitchYaw(x, y, z);

	//위에서 구해준 사원수를 이용하여 회전행렬을 만든다.
	m = DirectX::XMMatrixRotationQuaternion(quat);
}

void FMatrix::RotationX(float _x)
{
	float x = DirectX::XMConvertToRadians(_x);

	m = DirectX::XMMatrixRotationX(x);
}

void FMatrix::RotationY(float _y)
{
	float y = DirectX::XMConvertToRadians(_y);

	m = DirectX::XMMatrixRotationY(y);
}

void FMatrix::RotationZ(float _z)
{
	float z = DirectX::XMConvertToRadians(_z);

	m = DirectX::XMMatrixRotationZ(z);
}

void FMatrix::RotationAxis(const FVector3D& _axis, float _angle)
{
	float angle = DirectX::XMConvertToRadians(_angle);

	DirectX::XMVECTOR axis = DirectX::XMLoadFloat3((DirectX::XMFLOAT3*)&_axis);

	m = DirectX::XMMatrixRotationAxis(axis, angle);
}

void FMatrix::Translation(const FVector3D& _v)
{
	//XMMatrixTranslation 이동행렬 만들어주는거
	m = DirectX::XMMatrixTranslation(_v.x, _v.y, _v.z);
}

void FMatrix::Translation(float x, float y, float z)
{
	//XMMatrixTranslation 이동행렬 만들어주는거
	m = DirectX::XMMatrixTranslation(x, y, z);
}

void FMatrix::Translation(const FVector2D& _v)
{
	//XMMatrixTranslation 이동행렬 만들어주는거
	m = DirectX::XMMatrixTranslation(_v.x, _v.y, 0.f);
}

void FMatrix::Translation(float x, float y)
{
	//XMMatrixTranslation 이동행렬 만들어주는거
	m = DirectX::XMMatrixTranslation(x, y, 0.f);
}

#include "FVector3D.h"
//#include "Matrix.h"
//#include "EngineMath.h"

FVector3D FVector3D::AxisX = { 1.f ,0.f, 0.f };
FVector3D FVector3D::AxisY = { 0.f, 1.f, 0.f };
FVector3D FVector3D::AxisZ = { 0.f, 0.f, 1.f };
FVector3D FVector3D::Zero = { 0.f, 0.f, 0.f };

FVector3D::FVector3D() : x(0), y(0), z(0)
{
}

FVector3D::FVector3D(float _x, float _y, float _z) : x(_x), y(_y), z(_z)
{
}

FVector3D::FVector3D(const FVector3D& _other) : x(_other.x), y(_other.y), z(_other.z)
{
}

FVector3D::FVector3D(FVector3D&& _other) : x(_other.x), y(_other.y), z(_other.z)
{
}

FVector3D::FVector3D(const DirectX::XMVECTOR v)
{
	//XMVECTOR3를 XMFLOAT3로 바꿔준다.
	DirectX::XMStoreFloat3((DirectX::XMFLOAT3*)this, v);
}

const FVector3D& FVector3D::operator=(const FVector3D& _other)
{
	x = _other.x;
	y = _other.y;
	z = _other.z;

	return *this;
}

const FVector3D& FVector3D::operator=(float _value)
{
	x = _value;
	y = _value;
	z = _value;

	return *this;
}

const FVector3D& FVector3D::operator=(double _value)
{
	x = static_cast<float>(_value);
	y = static_cast<float>(_value);
	z = static_cast<float>(_value);

	return *this;
}

const FVector3D& FVector3D::operator=(int _value)
{
	x = static_cast<float>(_value);
	y = static_cast<float>(_value);
	z = static_cast<float>(_value);

	return *this;
}

const FVector3D& FVector3D::operator=(DirectX::XMVECTOR _value)
{
	DirectX::XMStoreFloat3((DirectX::XMFLOAT3*)this, _value);

	return *this;
}

FVector3D FVector3D::operator+(const FVector3D& _other) const
{
	FVector3D retVal;
	retVal.x = x + _other.x;
	retVal.y = y + _other.y;
	retVal.z = z + _other.z;

	return retVal;
}

FVector3D FVector3D::operator+(const float _value) const
{
	FVector3D retVal;
	retVal.x = x + _value;
	retVal.y = y + _value;
	retVal.z = z + _value;

	return retVal;
}

FVector3D FVector3D::operator+(const double _value) const
{
	FVector3D retVal;
	retVal.x = x + static_cast<float>(_value);
	retVal.y = y + static_cast<float>(_value);
	retVal.z = z + static_cast<float>(_value);

	return retVal;
}

FVector3D FVector3D::operator+(const int _value) const
{
	FVector3D retVal;
	retVal.x = x + static_cast<float>(_value);
	retVal.y = y + static_cast<float>(_value);
	retVal.z = z + static_cast<float>(_value);

	return retVal;
}

const FVector3D& FVector3D::operator+=(const FVector3D& _other)
{
	x += _other.x;
	y += _other.y;
	z += _other.z;

	return *this;
}

const FVector3D& FVector3D::operator+=(float _value)
{
	x += _value;
	y += _value;
	z += _value;

	return *this;
}

const FVector3D& FVector3D::operator+=(double _value)
{
	x += static_cast<float>(_value);
	y += static_cast<float>(_value);
	z += static_cast<float>(_value);

	return *this;
}

const FVector3D& FVector3D::operator+=(int _value)
{
	x += static_cast<float>(_value);
	y += static_cast<float>(_value);
	z += static_cast<float>(_value);

	return *this;
}

FVector3D FVector3D::operator-(const FVector3D& _other) const
{
	FVector3D retVal;
	retVal.x = x - _other.x;
	retVal.y = y - _other.y;
	retVal.z = z - _other.z;

	return retVal;
}

FVector3D FVector3D::operator-(float _value) const
{
	FVector3D retVal;
	retVal.x = x - static_cast<float>(_value);
	retVal.y = y - static_cast<float>(_value);
	retVal.z = z - static_cast<float>(_value);

	return retVal;
}

FVector3D FVector3D::operator-(double _value) const
{
	FVector3D retVal;
	retVal.x = x - static_cast<float>(_value);
	retVal.y = y - static_cast<float>(_value);
	retVal.z = z - static_cast<float>(_value);

	return retVal;
}

FVector3D FVector3D::operator-(int _value) const
{
	FVector3D retVal;
	retVal.x = x - static_cast<float>(_value);
	retVal.y = y - static_cast<float>(_value);
	retVal.z = z - static_cast<float>(_value);

	return retVal;
}

const FVector3D& FVector3D::operator-=(const FVector3D& _other)
{
	x -= _other.x;
	y -= _other.y;
	z -= _other.z;

	return *this;
}

const FVector3D& FVector3D::operator-=(float _value)
{
	x -= _value;
	y -= _value;
	z -= _value;

	return *this;
}

const FVector3D& FVector3D::operator-=(double _value)
{
	x -= static_cast<float>(_value);
	y -= static_cast<float>(_value);
	z -= static_cast<float>(_value);

	return *this;
}

const FVector3D& FVector3D::operator-=(int _value)
{
	x -= static_cast<float>(_value);
	y -= static_cast<float>(_value);
	z -= static_cast<float>(_value);

	return *this;
}

FVector3D FVector3D::operator*(const FVector3D& _other) const
{
	FVector3D retVal;
	retVal.x = x * _other.x;
	retVal.y = y * _other.y;
	retVal.z = z * _other.z;

	return retVal;
}

FVector3D FVector3D::operator*(float _value) const
{
	FVector3D retVal;
	retVal.x = x * _value;
	retVal.y = y * _value;
	retVal.z = z * _value;

	return retVal;
}

FVector3D FVector3D::operator*(double _value) const
{
	FVector3D retVal;
	retVal.x = x * static_cast<float>(_value);
	retVal.y = y * static_cast<float>(_value);
	retVal.z = z * static_cast<float>(_value);

	return retVal;
}

FVector3D FVector3D::operator*(int _value) const
{
	FVector3D retVal;
	retVal.x = x * static_cast<float>(_value);
	retVal.y = y * static_cast<float>(_value);
	retVal.z = z * static_cast<float>(_value);

	return retVal;
}

const FVector3D& FVector3D::operator*=(const FVector3D& _other)
{
	x *= _other.x;
	y *= _other.y;
	z *= _other.z;

	return *this;
}

const FVector3D& FVector3D::operator*=(float _value)
{
	x *= _value;
	y *= _value;
	z *= _value;

	return *this;
}

const FVector3D& FVector3D::operator*=(double _value)
{
	x *= static_cast<float>(_value);
	y *= static_cast<float>(_value);
	z *= static_cast<float>(_value);

	return *this;
}

const FVector3D& FVector3D::operator*=(int _value)
{
	x *= static_cast<float>(_value);
	y *= static_cast<float>(_value);
	z *= static_cast<float>(_value);

	return *this;
}

FVector3D FVector3D::operator/(const FVector3D& _other) const
{
	FVector3D retVal;
	retVal.x = x / _other.x;
	retVal.y = y / _other.y;
	retVal.z = z / _other.z;

	return retVal;
}

FVector3D FVector3D::operator/(float _value) const
{
	FVector3D retVal;
	retVal.x = x / _value;
	retVal.y = y / _value;
	retVal.z = z / _value;

	return retVal;
}

FVector3D FVector3D::operator/(double _value) const
{
	FVector3D retVal;
	retVal.x = x / static_cast<float>(_value);
	retVal.y = y / static_cast<float>(_value);
	retVal.z = z / static_cast<float>(_value);

	return retVal;
}

FVector3D FVector3D::operator/(int _value) const
{
	FVector3D retVal;
	retVal.x = x / static_cast<float>(_value);
	retVal.y = y / static_cast<float>(_value);
	retVal.z = z / static_cast<float>(_value);

	return retVal;
}

const FVector3D& FVector3D::operator/=(const FVector3D& _other)
{
	x /= _other.x;
	y /= _other.y;
	z /= _other.z;

	return *this;
}

const FVector3D& FVector3D::operator/=(float _value)
{
	x /= _value;
	y /= _value;
	z /= _value;

	return *this;
}

const FVector3D& FVector3D::operator/=(double _value)
{
	x /= static_cast<float>(_value);
	y /= static_cast<float>(_value);
	z /= static_cast<float>(_value);

	return *this;
}

const FVector3D& FVector3D::operator/=(int _value)
{
	x /= static_cast<float>(_value);
	y /= static_cast<float>(_value);
	z /= static_cast<float>(_value);

	return *this;
}

bool FVector3D::operator==(const FVector3D& other)
{
	//if (x == other.x && y == other.y && z == other.z)
	//	return true;

	//return false;

	return x == other.x && y == other.y && z == other.z;
}

bool FVector3D::operator!=(const FVector3D& other)
{
	return x != other.x || y != other.y || z != other.z;
}

FVector3D FVector3D::operator-() const
{
	return FVector3D(-x, -y, -z);
}

float FVector3D::Length() const
{
	return sqrtf(x * x + y * y + z * z);
}

void FVector3D::Normalize()
{
	float size = Length();
	if (size == 0.f)
		return;

	x /= size;
	y /= size;
	z /= size;
}

float FVector3D::Dot(const FVector3D& _other) const
{
	return x * _other.x + y * _other.y + z * _other.z;
}

//두벡터에 직교벡터
FVector3D FVector3D::Cross(const FVector3D& _other) const
{
	FVector3D retVal;
	retVal.x = y * _other.z - z * _other.y;
	retVal.y = z * _other.x - x * _other.z;
	retVal.z = x * _other.y - y * _other.x;

	return retVal;
}

float FVector3D::Distance(const FVector3D& _other) const
{
	FVector3D v1 = *this - _other;

	return v1.Length();
}

FVector3D FVector3D::Normalize(const FVector3D& _other)
{
	FVector3D retVal(_other);
	retVal.Normalize();

	return retVal;
}

FVector3D FVector3D::TransformNormal(const FMatrix& mat) const
{
	//XMVector3TransformNormal : w를 0으로 해서 4*4 행렬과 곱하고 그 결과물을
	//반환
	DirectX::XMVECTOR ret = DirectX::XMVector3TransformNormal(Convert(), mat.m);
	
	return ret;
}

FVector3D FVector3D::TransformCoord(const FMatrix& mat) const
{
	//XMVector2TransformCoord : w를 1로 해서 4*4 행렬과 곱하고
	//그 결과를 반환
	DirectX::XMVECTOR ret = DirectX::XMVector2TransformCoord(Convert(), mat.m);
	return ret;
}

FVector3D FVector3D::GetRotation(const FVector3D& rot) const
{
	FMatrix matRot;
	matRot.Rotation(rot);
	return TransformNormal(matRot);
}

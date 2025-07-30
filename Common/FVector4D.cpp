#include "FVector4D.h"

FVector4D FVector4D::White = FVector4D(1.f, 1.f, 1.f, 1.f);
FVector4D FVector4D::Black = FVector4D(0.f, 0.f, 0.f, 1.f);
FVector4D FVector4D::Red = FVector4D(1.f, 0.f, 0.f, 1.f);
FVector4D FVector4D::Green = FVector4D(0.f, 1.f, 0.f, 1.f);
FVector4D FVector4D::Blue = FVector4D(0.f, 0.f, 1.f, 1.f);

FVector4D::FVector4D() : x(0), y(0), z(0)
{
}

FVector4D::FVector4D(float _x, float _y, float _z, float _w) : x(_x), y(_y), z(_z), w(_w)
{
}

FVector4D::FVector4D(const FVector4D& _other) : x(_other.x), y(_other.y), z(_other.z), w(_other.w)
{
}

FVector4D::FVector4D(FVector4D&& _other) : x(_other.x), y(_other.y), z(_other.z), w(_other.w)
{
}

const FVector4D& FVector4D::operator=(const FVector4D& _other)
{
	x = _other.x;
	y = _other.y;
	z = _other.z;
	w = _other.w;

	return *this;
}

const FVector4D& FVector4D::operator=(float _value)
{
	x = _value;
	y = _value;
	z = _value;
	w = _value;

	return *this;
}

const FVector4D& FVector4D::operator=(double _value)
{
	x = static_cast<float>(_value);
	y = static_cast<float>(_value);
	z = static_cast<float>(_value);
	w = static_cast<float>(_value);

	return *this;
}

const FVector4D& FVector4D::operator=(int _value)
{
	x = static_cast<float>(_value);
	y = static_cast<float>(_value);
	z = static_cast<float>(_value);
	w = static_cast<float>(_value);

	return *this;
}

FVector4D FVector4D::operator+(const FVector4D& _other) const
{
	FVector4D retVal;
	retVal.x = x + _other.x;
	retVal.y = y + _other.y;
	retVal.z = z + _other.z;
	retVal.w = w + _other.w;

	return retVal;
}

FVector4D FVector4D::operator+(const float _value) const
{
	FVector4D retVal;
	retVal.x = x + _value;
	retVal.y = y + _value;
	retVal.z = z + _value;
	retVal.w = w + _value;

	return retVal;
}

FVector4D FVector4D::operator+(const double _value) const
{
	FVector4D retVal;
	retVal.x = x + static_cast<float>(_value);
	retVal.y = y + static_cast<float>(_value);
	retVal.z = z + static_cast<float>(_value);
	retVal.w = w + static_cast<float>(_value);

	return retVal;
}

FVector4D FVector4D::operator+(const int _value) const
{
	FVector4D retVal;
	retVal.x = x + static_cast<float>(_value);
	retVal.y = y + static_cast<float>(_value);
	retVal.z = z + static_cast<float>(_value);
	retVal.w = w + static_cast<float>(_value);

	return retVal;
}

const FVector4D& FVector4D::operator+=(const FVector4D& _other)
{
	x += _other.x;
	y += _other.y;
	z += _other.z;
	w += _other.w;

	return *this;
}

const FVector4D& FVector4D::operator+=(float _value)
{
	x += _value;
	y += _value;
	z += _value;
	w += _value;

	return *this;
}

const FVector4D& FVector4D::operator+=(double _value)
{
	x += static_cast<float>(_value);
	y += static_cast<float>(_value);
	z += static_cast<float>(_value);
	w += static_cast<float>(_value);

	return *this;
}

const FVector4D& FVector4D::operator+=(int _value)
{
	x += static_cast<float>(_value);
	y += static_cast<float>(_value);
	z += static_cast<float>(_value);
	w += static_cast<float>(_value);

	return *this;
}

FVector4D FVector4D::operator-(const FVector4D& _other) const
{
	FVector4D retVal;
	retVal.x = x - _other.x;
	retVal.y = y - _other.y;
	retVal.z = z - _other.z;
	retVal.w = w - _other.w;

	return retVal;
}

FVector4D FVector4D::operator-(float _value) const
{
	FVector4D retVal;
	retVal.x = x - static_cast<float>(_value);
	retVal.y = y - static_cast<float>(_value);
	retVal.z = z - static_cast<float>(_value);
	retVal.w = w - static_cast<float>(_value);

	return retVal;
}

FVector4D FVector4D::operator-(double _value) const
{
	FVector4D retVal;
	retVal.x = x - static_cast<float>(_value);
	retVal.y = y - static_cast<float>(_value);
	retVal.z = z - static_cast<float>(_value);
	retVal.w = w - static_cast<float>(_value);

	return retVal;
}

FVector4D FVector4D::operator-(int _value) const
{
	FVector4D retVal;
	retVal.x = x - static_cast<float>(_value);
	retVal.y = y - static_cast<float>(_value);
	retVal.z = z - static_cast<float>(_value);
	retVal.w = w - static_cast<float>(_value);

	return retVal;
}

const FVector4D& FVector4D::operator-=(const FVector4D& _other)
{
	x -= _other.x;
	y -= _other.y;
	z -= _other.z;
	w -= _other.w;


	return *this;
}

const FVector4D& FVector4D::operator-=(float _value)
{
	x -= _value;
	y -= _value;
	z -= _value;
	w -= _value;


	return *this;
}

const FVector4D& FVector4D::operator-=(double _value)
{
	x -= static_cast<float>(_value);
	y -= static_cast<float>(_value);
	z -= static_cast<float>(_value);
	w -= static_cast<float>(_value);

	return *this;
}

const FVector4D& FVector4D::operator-=(int _value)
{
	x -= static_cast<float>(_value);
	y -= static_cast<float>(_value);
	z -= static_cast<float>(_value);
	w -= static_cast<float>(_value);


	return *this;
}

FVector4D FVector4D::operator*(const FVector4D& _other) const
{
	FVector4D retVal;
	retVal.x = x * _other.x;
	retVal.y = y * _other.y;
	retVal.z = z * _other.z;
	retVal.w = w * _other.w;


	return retVal;
}

FVector4D FVector4D::operator*(float _value) const
{
	FVector4D retVal;
	retVal.x = x * _value;
	retVal.y = y * _value;
	retVal.z = z * _value;
	retVal.w = w * _value;


	return retVal;
}

FVector4D FVector4D::operator*(double _value) const
{
	FVector4D retVal;
	retVal.x = x * static_cast<float>(_value);
	retVal.y = y * static_cast<float>(_value);
	retVal.z = z * static_cast<float>(_value);
	retVal.w = w * static_cast<float>(_value);


	return retVal;
}

FVector4D FVector4D::operator*(int _value) const
{
	FVector4D retVal;
	retVal.x = x * static_cast<float>(_value);
	retVal.y = y * static_cast<float>(_value);
	retVal.z = z * static_cast<float>(_value);
	retVal.w = w * static_cast<float>(_value);


	return retVal;
}

const FVector4D& FVector4D::operator*=(const FVector4D& _other)
{
	x *= _other.x;
	y *= _other.y;
	z *= _other.z;
	w *= _other.w;


	return *this;
}

const FVector4D& FVector4D::operator*=(float _value)
{
	x *= _value;
	y *= _value;
	z *= _value;
	w *= _value;


	return *this;
}

const FVector4D& FVector4D::operator*=(double _value)
{
	x *= static_cast<float>(_value);
	y *= static_cast<float>(_value);
	z *= static_cast<float>(_value);
	w *= static_cast<float>(_value);


	return *this;
}

const FVector4D& FVector4D::operator*=(int _value)
{
	x *= static_cast<float>(_value);
	y *= static_cast<float>(_value);
	z *= static_cast<float>(_value);
	w *= static_cast<float>(_value);

	return *this;
}

FVector4D FVector4D::operator/(const FVector4D& _other) const
{
	FVector4D retVal;
	retVal.x = x / _other.x;
	retVal.y = y / _other.y;
	retVal.z = z / _other.z;
	retVal.w = w / _other.w;


	return retVal;
}

FVector4D FVector4D::operator/(float _value) const
{
	FVector4D retVal;
	retVal.x = x / _value;
	retVal.y = y / _value;
	retVal.z = z / _value;
	retVal.w = w / _value;


	return retVal;
}

FVector4D FVector4D::operator/(double _value) const
{
	FVector4D retVal;
	retVal.x = x / static_cast<float>(_value);
	retVal.y = y / static_cast<float>(_value);
	retVal.z = z / static_cast<float>(_value);
	retVal.w = w / static_cast<float>(_value);


	return retVal;
}

FVector4D FVector4D::operator/(int _value) const
{
	FVector4D retVal;
	retVal.x = x / static_cast<float>(_value);
	retVal.y = y / static_cast<float>(_value);
	retVal.z = z / static_cast<float>(_value);
	retVal.w = w / static_cast<float>(_value);


	return retVal;
}

const FVector4D& FVector4D::operator/=(const FVector4D& _other)
{
	x /= _other.x;
	y /= _other.y;
	z /= _other.z;
	w /= _other.w;

	return *this;
}

const FVector4D& FVector4D::operator/=(float _value)
{
	x /= _value;
	y /= _value;
	z /= _value;
	w /= _value;

	return *this;
}

const FVector4D& FVector4D::operator/=(double _value)
{
	x /= static_cast<float>(_value);
	y /= static_cast<float>(_value);
	z /= static_cast<float>(_value);
	w /= static_cast<float>(_value);

	return *this;
}

const FVector4D& FVector4D::operator/=(int _value)
{
	x /= static_cast<float>(_value);
	y /= static_cast<float>(_value);
	z /= static_cast<float>(_value);
	w /= static_cast<float>(_value);

	return *this;
}

float& FVector4D::operator[] (int _index)
{
	assert(0 <= _index && _index <= 3);

	switch (_index)
	{
	case 0: return x;
	case 1: return y;
	case 2: return z;
	case 3: return w;
	}
}

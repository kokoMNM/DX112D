#include "FVector2D.h"

FVector2D::FVector2D() : x(0), y(0)
{
}

FVector2D::FVector2D(float _x, float _y) : x(_x), y(_y)
{
}

FVector2D::FVector2D(const FVector2D& _other) : x(_other.x), y(_other.y)
{
}

FVector2D::FVector2D(FVector2D&& _other) : x(_other.x), y(_other.y)
{
}

const FVector2D& FVector2D::operator=(const FVector2D& _other)
{
	x = _other.x;
	y = _other.y;

	return *this;
}

const FVector2D& FVector2D::operator=(float _value)
{
	x = _value;
	y = _value;

	return *this;
}

const FVector2D& FVector2D::operator=(double _value)
{
	x = static_cast<float>(_value);
	y = static_cast<float>(_value);

	return *this;
}

const FVector2D& FVector2D::operator=(int _value)
{
	x = static_cast<float>(_value);
	y = static_cast<float>(_value);

	return *this;
}

FVector2D FVector2D::operator+(const FVector2D& _other) const
{
	FVector2D retVal;
	retVal.x = x + _other.x;
	retVal.y = y + _other.y;

	return retVal;
}

FVector2D FVector2D::operator+(const float _value) const
{
	FVector2D retVal;
	retVal.x = x + _value;
	retVal.y = y + _value;

	return retVal;
}

FVector2D FVector2D::operator+(const double _value) const
{
	FVector2D retVal;
	retVal.x = x + static_cast<float>(_value);
	retVal.y = y + static_cast<float>(_value);

	return retVal;
}

FVector2D FVector2D::operator+(const int _value) const
{
	FVector2D retVal;
	retVal.x = x + static_cast<float>(_value);
	retVal.y = y + static_cast<float>(_value);

	return retVal;
}

const FVector2D& FVector2D::operator+=(const FVector2D& _other)
{
	x += _other.x;
	y += _other.y;

	return *this;
}

const FVector2D& FVector2D::operator+=(float _value)
{
	x += _value;
	y += _value;

	return *this;
}

const FVector2D& FVector2D::operator+=(double _value)
{
	x += static_cast<float>(_value);
	y += static_cast<float>(_value);

	return *this;
}

const FVector2D& FVector2D::operator+=(int _value)
{
	x += static_cast<float>(_value);
	y += static_cast<float>(_value);

	return *this;
}

FVector2D FVector2D::operator-(const FVector2D& _other) const
{
	FVector2D retVal;
	retVal.x = x - _other.x;
	retVal.y = y - _other.y;

	return retVal;
}

FVector2D FVector2D::operator-(float _value) const
{
	FVector2D retVal;
	retVal.x = x - static_cast<float>(_value);
	retVal.y = y - static_cast<float>(_value);

	return retVal;
}

FVector2D FVector2D::operator-(double _value) const
{
	FVector2D retVal;
	retVal.x = x - static_cast<float>(_value);
	retVal.y = y - static_cast<float>(_value);

	return retVal;
}

FVector2D FVector2D::operator-(int _value) const
{
	FVector2D retVal;
	retVal.x = x - static_cast<float>(_value);
	retVal.y = y - static_cast<float>(_value);

	return retVal;
}

const FVector2D& FVector2D::operator-=(const FVector2D& _other)
{
	x -= _other.x;
	y -= _other.y;

	return *this;
}

const FVector2D& FVector2D::operator-=(float _value)
{
	x -= _value;
	y -= _value;

	return *this;
}

const FVector2D& FVector2D::operator-=(double _value)
{
	x -= static_cast<float>(_value);
	y -= static_cast<float>(_value);

	return *this;
}

const FVector2D& FVector2D::operator-=(int _value)
{
	x -= static_cast<float>(_value);
	y -= static_cast<float>(_value);

	return *this;
}

FVector2D FVector2D::operator*(const FVector2D& _other) const
{
	FVector2D retVal;
	retVal.x = x * _other.x;
	retVal.y = y * _other.y;

	return retVal;
}

FVector2D FVector2D::operator*(float _value) const
{
	FVector2D retVal;
	retVal.x = x * _value;
	retVal.y = y * _value;

	return retVal;
}

FVector2D FVector2D::operator*(double _value) const
{
	FVector2D retVal;
	retVal.x = x * static_cast<float>(_value);
	retVal.y = y * static_cast<float>(_value);

	return retVal;
}

FVector2D FVector2D::operator*(int _value) const
{
	FVector2D retVal;
	retVal.x = x * static_cast<float>(_value);
	retVal.y = y * static_cast<float>(_value);

	return retVal;
}

const FVector2D& FVector2D::operator*=(const FVector2D& _other)
{
	x *= _other.x;
	y *= _other.y;

	return *this;
}

const FVector2D& FVector2D::operator*=(float _value)
{
	x *= _value;
	y *= _value;

	return *this;
}

const FVector2D& FVector2D::operator*=(double _value)
{
	x *= static_cast<float>(_value);
	y *= static_cast<float>(_value);

	return *this;
}

const FVector2D& FVector2D::operator*=(int _value)
{
	x *= static_cast<float>(_value);
	y *= static_cast<float>(_value);

	return *this;
}

FVector2D FVector2D::operator/(const FVector2D& _other) const
{
	FVector2D retVal;
	retVal.x = x / _other.x;
	retVal.y = y / _other.y;

	return retVal;
}

FVector2D FVector2D::operator/(float _value) const
{
	FVector2D retVal;
	retVal.x = x / _value;
	retVal.y = y / _value;

	return retVal;
}

FVector2D FVector2D::operator/(double _value) const
{
	FVector2D retVal;
	retVal.x = x / static_cast<float>(_value);
	retVal.y = y / static_cast<float>(_value);

	return retVal;
}

FVector2D FVector2D::operator/(int _value) const
{
	FVector2D retVal;
	retVal.x = x / static_cast<float>(_value);
	retVal.y = y / static_cast<float>(_value);

	return retVal;
}

const FVector2D& FVector2D::operator/=(const FVector2D& _other)
{
	x /= _other.x;
	y /= _other.y;

	return *this;
}

const FVector2D& FVector2D::operator/=(float _value)
{
	x /= _value;
	y /= _value;

	return *this;
}

const FVector2D& FVector2D::operator/=(double _value)
{
	x /= static_cast<float>(_value);
	y /= static_cast<float>(_value);

	return *this;
}

const FVector2D& FVector2D::operator/=(int _value)
{
	x /= static_cast<float>(_value);
	y /= static_cast<float>(_value);

	return *this;
}

float FVector2D::Length() const
{
	return sqrtf(x * x + y * y);
}

void FVector2D::Normalize()
{
	float size = Length();
	if (size == 0.f)
		return;

	x /= size;
	y /= size;
}

float FVector2D::Dot(const FVector2D& _other) const
{
	return x * _other.x + y * _other.y;
}

float FVector2D::Distance(const FVector2D& _other) const
{
	FVector2D v1 = *this - _other;

	return v1.Length();
}

FVector2D FVector2D::Normalize(const FVector2D& _other)
{
	FVector2D retVal(_other);
	retVal.Normalize();

	return retVal;
}

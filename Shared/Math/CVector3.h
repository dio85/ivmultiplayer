//============== IV:Multiplayer - https://github.com/Neproify/ivmultiplayer ==============
//
// File: CVector3.h
// Project: Shared
// Author(s): jenksta
//            Multi Theft Auto Team
// License: See LICENSE in root directory
//
//==============================================================================

#pragma once

class CVector3
{
public:
	float fX;
	float fY;
	float fZ;

	CVector3()
		: fX(0.0f), fY(0.0f), fZ(0.0f)
	{}

	CVector3(float _fX, float _fY, float _fZ)
		: fX(_fX), fY(_fY), fZ(_fZ)
	{}

	bool IsEmpty() const noexcept
	{
		return (fX == 0.0f && fY == 0.0f && fZ == 0.0f);
	}

	float Length() const noexcept
	{
		return sqrtf((fX * fX) + (fY * fY) + (fZ * fZ));
	}

	CVector3 operator+ (const CVector3& vecRight) const
	{
		return CVector3(fX + vecRight.fX, fY + vecRight.fY, fZ + vecRight.fZ);
	}

	CVector3 operator+ (float fRight) const
	{
		return CVector3(fX + fRight, fY + fRight, fZ + fRight);
	}

	CVector3 operator- (const CVector3& vecRight) const
	{
		return CVector3(fX - vecRight.fX, fY - vecRight.fY, fZ - vecRight.fZ);
	}

	CVector3 operator- (float fRight) const
	{
		return CVector3(fX - fRight, fY - fRight, fZ - fRight);
	}

	CVector3 operator* (const CVector3& vecRight) const
	{
		return CVector3(fX * vecRight.fX, fY * vecRight.fY, fZ * vecRight.fZ);
	}

	CVector3 operator* (float fRight) const
	{
		return CVector3(fX * fRight, fY * fRight, fZ * fRight);
	}

	CVector3 operator/ (const CVector3& vecRight) const
	{
		return CVector3(fX / vecRight.fX, fY / vecRight.fY, fZ / vecRight.fZ);
	}

	CVector3 operator/ (float fRight) const
	{
		return CVector3(fX / fRight, fY / fRight, fZ / fRight);
	}

	CVector3 operator - () const
	{
		return CVector3(-fX, -fY, -fZ);
	}

	void operator += (float fRight) noexcept
	{
		fX += fRight;
		fY += fRight;
		fZ += fRight;
	}

	void operator -= (float fRight) noexcept
	{
		fX -= fRight;
		fY -= fRight;
		fZ -= fRight;
	}

	void operator *= (float fRight) noexcept
	{
		fX *= fRight;
		fY *= fRight;
		fZ *= fRight;
	}

	void operator /= (float fRight) noexcept
	{
		fX /= fRight;
		fY /= fRight;
		fZ /= fRight;
	}
};

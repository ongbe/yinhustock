// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.
 

#include "stdafx.h"
#include "picture.h"


/////////////////////////////////////////////////////////////////////////////
//tel:13366898744

long CPicture::GetHandle()
{
	long result;
	GetProperty(0x0, VT_I4, (void*)&result);
	return result;
}

long CPicture::GetHPal()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void CPicture::SetHPal(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

short CPicture::GetType()
{
	short result;
	GetProperty(0x3, VT_I2, (void*)&result);
	return result;
}

long CPicture::GetWidth()
{
	long result;
	GetProperty(0x4, VT_I4, (void*)&result);
	return result;
}

long CPicture::GetHeight()
{
	long result;
	GetProperty(0x5, VT_I4, (void*)&result);
	return result;
}

/////////////////////////////////////////////////////////////////////////////
// CPicture operations

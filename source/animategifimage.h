#if !defined(AFX_ANIMATEGIFIMAGE_H__38837C42_87F7_11D4_882A_00400552E583__INCLUDED_)
#define AFX_ANIMATEGIFIMAGE_H__38837C42_87F7_11D4_882A_00400552E583__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CAnimateGifImage wrapper class

class CAnimateGifImage : public CWnd
{
protected:
	DECLARE_DYNCREATE(CAnimateGifImage)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x172c6934, 0x75af, 0x11d4, { 0xa5, 0x32, 0x0, 0x0, 0xe8, 0xa1, 0xa5, 0xc0 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }


public:


public:
	long SetBevelWidth(const VARIANT& nBevelWidth);
	long SetBevelStyle(const VARIANT& varBevelStyle);
	long SetDrawBorder(const VARIANT& varbDrawBorder);
	long SetGifImageFilePath(LPCTSTR bstrFilePath);
	long SetAnimateGifImageTime(const VARIANT& varTime);
	long AnimateGifImagePlay(LPCTSTR bstrPass);
	long AnimateGifImagePlayStop();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ANIMATEGIFIMAGE_H__38837C42_87F7_11D4_882A_00400552E583__INCLUDED_)

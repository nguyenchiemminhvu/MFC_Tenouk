// ResourceManager.h: interface for the ResourceManager class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_RESOURCEMANAGER_H__1BE77BF7_C182_4FC4_AB3A_4F4DECA94178__INCLUDED_)
#define AFX_RESOURCEMANAGER_H__1BE77BF7_C182_4FC4_AB3A_4F4DECA94178__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <map>

class ResourceManager  
{
public:
	ResourceManager();
	virtual ~ResourceManager();

	void LoadDlls();
	void UnloadDlls();

public:

	std::map<CString, HINSTANCE> dlls;
};

#endif // !defined(AFX_RESOURCEMANAGER_H__1BE77BF7_C182_4FC4_AB3A_4F4DECA94178__INCLUDED_)

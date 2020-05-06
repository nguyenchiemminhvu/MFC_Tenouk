// ResourceManager.cpp: implementation of the ResourceManager class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MFC_Tenouk.h"
#include "ResourceManager.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

ResourceManager::ResourceManager()
{
	LoadDlls();
}

ResourceManager::~ResourceManager()
{
	UnloadDlls();
}

void ResourceManager::LoadDlls()
{
	
}

void ResourceManager::UnloadDlls()
{
	
}
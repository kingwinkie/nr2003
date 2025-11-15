///////////////////////////////////////////////////////////////////
// i6comp.h
//  
// InstallShield Compression and Maintenance util
// fOSSiL - 1999
//
// *Any use is authorized, granted the proper credit is given*
//
// No support will be provided for this code
//

#ifndef _I6COMP_H
#define _I6COMP_H

typedef int FILEHANDLE;

#ifndef BOOL
	typedef int BOOL;
	#define TRUE	1
	#define FALSE	0
#endif

#ifndef MAX_PATH
	#define MAX_PATH	260
#endif

#if defined(_MSC_VER)
	#define	fileseek(h,p,o)		_lseeki64(h,p,o)
	#define	filetell(h)			_telli64(h)
	#define	filelen(h)			_filelengthi64(h)
#else
	#define fileseek(h,p,o)		lseek(h,p,o)
	#define	filetell(h)			tell(h)
	#define	filelen(h)			filelength(h)
#endif

typedef struct tagSYSTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
} SYSTIME, *LPSYSTIME;

typedef struct tagRWHANDLES {
	FILEHANDLE hRead;
	FILEHANDLE hWrite;
	FILESIZE BytesIn;
	FILESIZE BytesOut;
	MD5_CTX* DigestCtx;
} RWHANDLES, *LPRWHANDLES;

typedef struct tagEXTRACTINFO {
	FILEHANDLE hRead;
	FILEHANDLE hWrite;
	FILESIZE BytesIn;
	FILESIZE BytesOut;
	DWORD FileIndex;
	DWORD Volume;
	FILESIZE ofsData;
	FILESIZE BytesHere;
} EXTRACTINFO, *LPEXTRACTINFO;

typedef struct tagCABFILELIST {
	struct tagCABFILELIST* pNext;
	DWORD CabIndex;
	char FileName[];
} CABFILELIST, *LPCABFILELIST;

typedef struct tagDISKFILELIST {
	struct tagDISKFILELIST* pNext;
	DWORD CabDirInd;
	char* DiskDir;
	char* CabDir;
	char FileName[];
} DISKFILELIST, *LPDISKFILELIST;

typedef struct tagDIRARRAY {
	DWORD Count;
	char* Dirs[];
} DIRARRAY, *LPDIRARRAY;

typedef enum {
	ver50 = 0,
	ver51,
	ver55,
	ver60
} ISVersion;

typedef enum {
	zdCompress = 0,
	zdDecompress
} ZDProcess;

#define GetFileGroup(ptr, ofs) ( (LPFILEGROUPDESC) (((BYTE*)ptr) + ofs) )
#define GetComponent(ptr, ofs) ( (LPCOMPONENTDESC) (((BYTE*)ptr) + ofs) )

#endif // _I6COMP_H

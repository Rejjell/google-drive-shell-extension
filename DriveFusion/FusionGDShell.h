

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Wed Apr 27 15:41:50 2016
 */
/* Compiler settings for FusionGDShell.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __FusionGDShell_h__
#define __FusionGDShell_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IGDriveShlExt_FWD_DEFINED__
#define __IGDriveShlExt_FWD_DEFINED__
typedef interface IGDriveShlExt IGDriveShlExt;

#endif 	/* __IGDriveShlExt_FWD_DEFINED__ */


#ifndef __IGDriveEnumerator_FWD_DEFINED__
#define __IGDriveEnumerator_FWD_DEFINED__
typedef interface IGDriveEnumerator IGDriveEnumerator;

#endif 	/* __IGDriveEnumerator_FWD_DEFINED__ */


#ifndef __IViewCallback_FWD_DEFINED__
#define __IViewCallback_FWD_DEFINED__
typedef interface IViewCallback IViewCallback;

#endif 	/* __IViewCallback_FWD_DEFINED__ */


#ifndef __IDriveItemStream_FWD_DEFINED__
#define __IDriveItemStream_FWD_DEFINED__
typedef interface IDriveItemStream IDriveItemStream;

#endif 	/* __IDriveItemStream_FWD_DEFINED__ */


#ifndef __IDriveItemDataObject_FWD_DEFINED__
#define __IDriveItemDataObject_FWD_DEFINED__
typedef interface IDriveItemDataObject IDriveItemDataObject;

#endif 	/* __IDriveItemDataObject_FWD_DEFINED__ */


#ifndef __IDriveItemRelatedItem_FWD_DEFINED__
#define __IDriveItemRelatedItem_FWD_DEFINED__
typedef interface IDriveItemRelatedItem IDriveItemRelatedItem;

#endif 	/* __IDriveItemRelatedItem_FWD_DEFINED__ */


#ifndef __GDriveShlExt_FWD_DEFINED__
#define __GDriveShlExt_FWD_DEFINED__

#ifdef __cplusplus
typedef class GDriveShlExt GDriveShlExt;
#else
typedef struct GDriveShlExt GDriveShlExt;
#endif /* __cplusplus */

#endif 	/* __GDriveShlExt_FWD_DEFINED__ */


#ifndef __GDriveEnumerator_FWD_DEFINED__
#define __GDriveEnumerator_FWD_DEFINED__

#ifdef __cplusplus
typedef class GDriveEnumerator GDriveEnumerator;
#else
typedef struct GDriveEnumerator GDriveEnumerator;
#endif /* __cplusplus */

#endif 	/* __GDriveEnumerator_FWD_DEFINED__ */


#ifndef __ViewCallback_FWD_DEFINED__
#define __ViewCallback_FWD_DEFINED__

#ifdef __cplusplus
typedef class ViewCallback ViewCallback;
#else
typedef struct ViewCallback ViewCallback;
#endif /* __cplusplus */

#endif 	/* __ViewCallback_FWD_DEFINED__ */


#ifndef __DriveItemStream_FWD_DEFINED__
#define __DriveItemStream_FWD_DEFINED__

#ifdef __cplusplus
typedef class DriveItemStream DriveItemStream;
#else
typedef struct DriveItemStream DriveItemStream;
#endif /* __cplusplus */

#endif 	/* __DriveItemStream_FWD_DEFINED__ */


#ifndef __DriveItemDataObject_FWD_DEFINED__
#define __DriveItemDataObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class DriveItemDataObject DriveItemDataObject;
#else
typedef struct DriveItemDataObject DriveItemDataObject;
#endif /* __cplusplus */

#endif 	/* __DriveItemDataObject_FWD_DEFINED__ */


#ifndef __DriveItemRelatedItem_FWD_DEFINED__
#define __DriveItemRelatedItem_FWD_DEFINED__

#ifdef __cplusplus
typedef class DriveItemRelatedItem DriveItemRelatedItem;
#else
typedef struct DriveItemRelatedItem DriveItemRelatedItem;
#endif /* __cplusplus */

#endif 	/* __DriveItemRelatedItem_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IGDriveShlExt_INTERFACE_DEFINED__
#define __IGDriveShlExt_INTERFACE_DEFINED__

/* interface IGDriveShlExt */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IGDriveShlExt;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A0C58DFA-0987-4A25-B25A-7EFCC2FA43C9")
    IGDriveShlExt : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IGDriveShlExtVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGDriveShlExt * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGDriveShlExt * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGDriveShlExt * This);
        
        END_INTERFACE
    } IGDriveShlExtVtbl;

    interface IGDriveShlExt
    {
        CONST_VTBL struct IGDriveShlExtVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGDriveShlExt_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGDriveShlExt_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGDriveShlExt_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGDriveShlExt_INTERFACE_DEFINED__ */


#ifndef __IGDriveEnumerator_INTERFACE_DEFINED__
#define __IGDriveEnumerator_INTERFACE_DEFINED__

/* interface IGDriveEnumerator */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IGDriveEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8C9B37F4-0814-4FDE-98A2-D49C8EA384BB")
    IGDriveEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ VARIANT *pFusionDriveManager,
            /* [in] */ VARIANT *pidl,
            /* [in] */ ULONG grfFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGDriveEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGDriveEnumerator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGDriveEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGDriveEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IGDriveEnumerator * This,
            /* [in] */ VARIANT *pFusionDriveManager,
            /* [in] */ VARIANT *pidl,
            /* [in] */ ULONG grfFlags);
        
        END_INTERFACE
    } IGDriveEnumeratorVtbl;

    interface IGDriveEnumerator
    {
        CONST_VTBL struct IGDriveEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGDriveEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGDriveEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGDriveEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGDriveEnumerator_Initialize(This,pFusionDriveManager,pidl,grfFlags)	\
    ( (This)->lpVtbl -> Initialize(This,pFusionDriveManager,pidl,grfFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGDriveEnumerator_INTERFACE_DEFINED__ */


#ifndef __IViewCallback_INTERFACE_DEFINED__
#define __IViewCallback_INTERFACE_DEFINED__

/* interface IViewCallback */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IViewCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("37D3543B-DED9-43CD-9893-E22BB0511622")
    IViewCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ VARIANT *pDriveMgr) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IViewCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IViewCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IViewCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IViewCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IViewCallback * This,
            /* [in] */ VARIANT *pDriveMgr);
        
        END_INTERFACE
    } IViewCallbackVtbl;

    interface IViewCallback
    {
        CONST_VTBL struct IViewCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IViewCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IViewCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IViewCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IViewCallback_Initialize(This,pDriveMgr)	\
    ( (This)->lpVtbl -> Initialize(This,pDriveMgr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IViewCallback_INTERFACE_DEFINED__ */


#ifndef __IDriveItemStream_INTERFACE_DEFINED__
#define __IDriveItemStream_INTERFACE_DEFINED__

/* interface IDriveItemStream */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDriveItemStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("885BD2CA-4ECD-4E67-BAD5-90D8F948B15D")
    IDriveItemStream : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IDriveItemStreamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDriveItemStream * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDriveItemStream * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDriveItemStream * This);
        
        END_INTERFACE
    } IDriveItemStreamVtbl;

    interface IDriveItemStream
    {
        CONST_VTBL struct IDriveItemStreamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDriveItemStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDriveItemStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDriveItemStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDriveItemStream_INTERFACE_DEFINED__ */


#ifndef __IDriveItemDataObject_INTERFACE_DEFINED__
#define __IDriveItemDataObject_INTERFACE_DEFINED__

/* interface IDriveItemDataObject */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDriveItemDataObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E8889386-DDCB-47F4-8221-C9667120AB38")
    IDriveItemDataObject : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IDriveItemDataObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDriveItemDataObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDriveItemDataObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDriveItemDataObject * This);
        
        END_INTERFACE
    } IDriveItemDataObjectVtbl;

    interface IDriveItemDataObject
    {
        CONST_VTBL struct IDriveItemDataObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDriveItemDataObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDriveItemDataObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDriveItemDataObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDriveItemDataObject_INTERFACE_DEFINED__ */


#ifndef __IDriveItemRelatedItem_INTERFACE_DEFINED__
#define __IDriveItemRelatedItem_INTERFACE_DEFINED__

/* interface IDriveItemRelatedItem */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDriveItemRelatedItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("129D38A1-012C-47E9-8F86-D85469A5EACA")
    IDriveItemRelatedItem : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IDriveItemRelatedItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDriveItemRelatedItem * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDriveItemRelatedItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDriveItemRelatedItem * This);
        
        END_INTERFACE
    } IDriveItemRelatedItemVtbl;

    interface IDriveItemRelatedItem
    {
        CONST_VTBL struct IDriveItemRelatedItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDriveItemRelatedItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDriveItemRelatedItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDriveItemRelatedItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDriveItemRelatedItem_INTERFACE_DEFINED__ */



#ifndef __FusionGDShellLib_LIBRARY_DEFINED__
#define __FusionGDShellLib_LIBRARY_DEFINED__

/* library FusionGDShellLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_FusionGDShellLib;

EXTERN_C const CLSID CLSID_GDriveShlExt;

#ifdef __cplusplus

class DECLSPEC_UUID("30323693-0E1E-4365-99FB-5074A5C6F273")
GDriveShlExt;
#endif

EXTERN_C const CLSID CLSID_GDriveEnumerator;

#ifdef __cplusplus

class DECLSPEC_UUID("623F912B-10E0-4E94-8CAF-925AC8A3ECC5")
GDriveEnumerator;
#endif

EXTERN_C const CLSID CLSID_ViewCallback;

#ifdef __cplusplus

class DECLSPEC_UUID("5DB729FE-8FB5-4553-AFC9-935D441AC52F")
ViewCallback;
#endif

EXTERN_C const CLSID CLSID_DriveItemStream;

#ifdef __cplusplus

class DECLSPEC_UUID("27E23000-8125-4694-859B-B9D97B45EC19")
DriveItemStream;
#endif

EXTERN_C const CLSID CLSID_DriveItemDataObject;

#ifdef __cplusplus

class DECLSPEC_UUID("C23E2E52-FDA6-4507-9EFD-9199B248B7C1")
DriveItemDataObject;
#endif

EXTERN_C const CLSID CLSID_DriveItemRelatedItem;

#ifdef __cplusplus

class DECLSPEC_UUID("14BEBA45-EB1D-465B-9CA8-37FCE2F9DD57")
DriveItemRelatedItem;
#endif
#endif /* __FusionGDShellLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



 // Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\Program Files (x86)\\Adobe\\Adobe Photoshop CS3\\Plug-Ins\\Automate\\ScriptingSupport.8li" no_namespace
// CBatchOptions wrapper class

class CBatchOptions : public COleDispatchDriver
{
public:
    CBatchOptions(){} // Calls COleDispatchDriver default constructor
    CBatchOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CBatchOptions(const CBatchOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _BatchOptions methods
public:
    BOOL get_OverrideOpen()
    {
        BOOL result;
        InvokeHelper(0x42543033, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_OverrideOpen(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x42543033, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_SuppressOpen()
    {
        BOOL result;
        InvokeHelper(0x42543034, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_SuppressOpen(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x42543034, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_SuppressProfile()
    {
        BOOL result;
        InvokeHelper(0x42543035, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_SuppressProfile(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x42543035, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_Destination()
    {
        long result;
        InvokeHelper(0x42543036, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Destination(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x42543036, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    CString get_DestinationFolder()
    {
        CString result;
        InvokeHelper(0x42543337, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    void put_DestinationFolder(LPCTSTR newValue)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x42543337, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_OverrideSave()
    {
        BOOL result;
        InvokeHelper(0x42543037, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_OverrideSave(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x42543037, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    VARIANT get_FileNaming()
    {
        VARIANT result;
        InvokeHelper(0x42543038, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
        return result;
    }
    void put_FileNaming(VARIANT& newValue)
    {
        static BYTE parms[] = VTS_VARIANT ;
        InvokeHelper(0x42543038, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
    }
    long get_StartingSerial()
    {
        long result;
        InvokeHelper(0x42543039, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_StartingSerial(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x42543039, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_WindowsCompatible()
    {
        BOOL result;
        InvokeHelper(0x42543130, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_WindowsCompatible(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x42543130, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_MacintoshCompatible()
    {
        BOOL result;
        InvokeHelper(0x42543131, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_MacintoshCompatible(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x42543131, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_UnixCompatible()
    {
        BOOL result;
        InvokeHelper(0x42543132, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_UnixCompatible(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x42543132, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    CString get_ErrorFile()
    {
        CString result;
        InvokeHelper(0x42543133, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    void put_ErrorFile(LPCTSTR newValue)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x42543133, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    LPDISPATCH get_Application()
    {
        LPDISPATCH result;
        InvokeHelper(0x63617070, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void put_ObjectValue(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    void putref_ObjectValue(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x0, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
    }

    // _BatchOptions properties
public:

};

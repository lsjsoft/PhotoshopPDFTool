// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CSubPathInfo wrapper class

class CSubPathInfo : public COleDispatchDriver
{
public:
    CSubPathInfo(){} // Calls COleDispatchDriver default constructor
    CSubPathInfo(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CSubPathInfo(const CSubPathInfo& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _SubPathInfo methods
public:
    long get_Operation()
    {
        long result;
        InvokeHelper(0x50543037, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Operation(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50543037, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_Closed()
    {
        BOOL result;
        InvokeHelper(0x50543530, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_Closed(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50543530, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    VARIANT get_EntireSubPath()
    {
        VARIANT result;
        InvokeHelper(0x50543536, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
        return result;
    }
    void put_EntireSubPath(VARIANT& newValue)
    {
        static BYTE parms[] = VTS_VARIANT ;
        InvokeHelper(0x50543536, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
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

    // _SubPathInfo properties
public:

};

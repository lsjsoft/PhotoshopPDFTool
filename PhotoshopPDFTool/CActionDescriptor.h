// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CActionDescriptor wrapper class

class CActionDescriptor : public COleDispatchDriver
{
public:
    CActionDescriptor(){} // Calls COleDispatchDriver default constructor
    CActionDescriptor(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CActionDescriptor(const CActionDescriptor& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _ActionDescriptor methods
public:
    long get_Count()
    {
        long result;
        InvokeHelper(0x50416374, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
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
    void Clear()
    {
        InvokeHelper(0x4d413031, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void Erase(long Key)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413032, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Key);
    }
    BOOL GetBoolean(long Key)
    {
        BOOL result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413033, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, Key);
        return result;
    }
    long GetClass(long Key)
    {
        long result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413034, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Key);
        return result;
    }
    double GetDouble(long Key)
    {
        double result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413036, DISPATCH_METHOD, VT_R8, (void*)&result, parms, Key);
        return result;
    }
    long GetEnumerationType(long Key)
    {
        long result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413037, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Key);
        return result;
    }
    long GetEnumerationValue(long Key)
    {
        long result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413038, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Key);
        return result;
    }
    long GetInteger(long Key)
    {
        long result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413039, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Key);
        return result;
    }
    long GetKey(long Index)
    {
        long result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413130, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Index);
        return result;
    }
    LPDISPATCH GetList(long Key)
    {
        LPDISPATCH result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413131, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Key);
        return result;
    }
    long GetObjectType(long Key)
    {
        long result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413132, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Key);
        return result;
    }
    LPDISPATCH GetObjectValue(long Key)
    {
        LPDISPATCH result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413133, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Key);
        return result;
    }
    CString GetPath(long Key)
    {
        CString result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413134, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, Key);
        return result;
    }
    LPDISPATCH GetReference(long Key)
    {
        LPDISPATCH result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413135, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Key);
        return result;
    }
    CString GetString(long Key)
    {
        CString result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413136, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, Key);
        return result;
    }
    long GetType(long Key)
    {
        long result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413137, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Key);
        return result;
    }
    long GetUnitDoubleType(long Key)
    {
        long result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413138, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Key);
        return result;
    }
    double GetUnitDoubleValue(long Key)
    {
        double result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413139, DISPATCH_METHOD, VT_R8, (void*)&result, parms, Key);
        return result;
    }
    BOOL HasKey(long Key)
    {
        BOOL result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413230, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, Key);
        return result;
    }
    BOOL IsEqual(LPDISPATCH OtherDesc)
    {
        BOOL result;
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x4d413231, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, OtherDesc);
        return result;
    }
    void PutBoolean(long Key, BOOL Value)
    {
        static BYTE parms[] = VTS_I4 VTS_BOOL ;
        InvokeHelper(0x4d413232, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Key, Value);
    }
    void PutClass(long Key, long Value)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 ;
        InvokeHelper(0x4d413233, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Key, Value);
    }
    void PutDouble(long Key, double Value)
    {
        static BYTE parms[] = VTS_I4 VTS_R8 ;
        InvokeHelper(0x4d413234, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Key, Value);
    }
    void PutEnumerated(long Key, long EnumType, long Value)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 ;
        InvokeHelper(0x4d413235, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Key, EnumType, Value);
    }
    void PutInteger(long Key, long Value)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 ;
        InvokeHelper(0x4d413236, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Key, Value);
    }
    void PutList(long Key, LPDISPATCH Value)
    {
        static BYTE parms[] = VTS_I4 VTS_DISPATCH ;
        InvokeHelper(0x4d413237, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Key, Value);
    }
    void PutObject(long Key, long ClassID, LPDISPATCH Value)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 VTS_DISPATCH ;
        InvokeHelper(0x4d413238, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Key, ClassID, Value);
    }
    void PutPath(long Key, LPCTSTR Value)
    {
        static BYTE parms[] = VTS_I4 VTS_BSTR ;
        InvokeHelper(0x4d413239, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Key, Value);
    }
    void PutReference(long Key, LPDISPATCH Value)
    {
        static BYTE parms[] = VTS_I4 VTS_DISPATCH ;
        InvokeHelper(0x4d413330, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Key, Value);
    }
    void PutString(long Key, LPCTSTR Value)
    {
        static BYTE parms[] = VTS_I4 VTS_BSTR ;
        InvokeHelper(0x4d413331, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Key, Value);
    }
    void PutUnitDouble(long Key, long UnitID, double Value)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 VTS_R8 ;
        InvokeHelper(0x4d413332, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Key, UnitID, Value);
    }

    // _ActionDescriptor properties
public:

};

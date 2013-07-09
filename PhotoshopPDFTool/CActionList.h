// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CActionList wrapper class

class CActionList : public COleDispatchDriver
{
public:
    CActionList(){} // Calls COleDispatchDriver default constructor
    CActionList(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CActionList(const CActionList& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _ActionList methods
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
    BOOL GetBoolean(long Index)
    {
        BOOL result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413033, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, Index);
        return result;
    }
    long GetClass(long Index)
    {
        long result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413034, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Index);
        return result;
    }
    double GetDouble(long Index)
    {
        double result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413036, DISPATCH_METHOD, VT_R8, (void*)&result, parms, Index);
        return result;
    }
    long GetEnumerationType(long Index)
    {
        long result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413037, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Index);
        return result;
    }
    long GetEnumerationValue(long Index)
    {
        long result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413038, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Index);
        return result;
    }
    long GetInteger(long Index)
    {
        long result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413039, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Index);
        return result;
    }
    LPDISPATCH GetList(long Index)
    {
        LPDISPATCH result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413131, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Index);
        return result;
    }
    long GetObjectType(long Index)
    {
        long result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413132, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Index);
        return result;
    }
    LPDISPATCH GetObjectValue(long Index)
    {
        LPDISPATCH result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413133, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Index);
        return result;
    }
    CString GetPath(long Index)
    {
        CString result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413134, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, Index);
        return result;
    }
    LPDISPATCH GetReference(long Index)
    {
        LPDISPATCH result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413135, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Index);
        return result;
    }
    CString GetString(long Index)
    {
        CString result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413136, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, Index);
        return result;
    }
    long GetType(long Index)
    {
        long result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413137, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Index);
        return result;
    }
    long GetUnitDoubleType(long Index)
    {
        long result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413138, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Index);
        return result;
    }
    double GetUnitDoubleValue(long Index)
    {
        double result;
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413139, DISPATCH_METHOD, VT_R8, (void*)&result, parms, Index);
        return result;
    }
    void PutBoolean(BOOL Value)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x4d413232, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Value);
    }
    void PutClass(long Value)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413233, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Value);
    }
    void PutDouble(double Value)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x4d413234, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Value);
    }
    void PutEnumerated(long EnumType, long Value)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 ;
        InvokeHelper(0x4d413235, DISPATCH_METHOD, VT_EMPTY, NULL, parms, EnumType, Value);
    }
    void PutInteger(long Value)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413236, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Value);
    }
    void PutList(LPDISPATCH Value)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x4d413237, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Value);
    }
    void PutObject(long ClassID, LPDISPATCH Value)
    {
        static BYTE parms[] = VTS_I4 VTS_DISPATCH ;
        InvokeHelper(0x4d413238, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ClassID, Value);
    }
    void PutPath(LPCTSTR Value)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x4d413239, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Value);
    }
    void PutReference(LPDISPATCH Value)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x4d413330, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Value);
    }
    void PutString(LPCTSTR Value)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x4d413331, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Value);
    }
    void PutUnitDouble(long UnitID, double Value)
    {
        static BYTE parms[] = VTS_I4 VTS_R8 ;
        InvokeHelper(0x4d413332, DISPATCH_METHOD, VT_EMPTY, NULL, parms, UnitID, Value);
    }

    // _ActionList properties
public:

};

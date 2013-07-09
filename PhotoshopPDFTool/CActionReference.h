// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CActionReference wrapper class

class CActionReference : public COleDispatchDriver
{
public:
    CActionReference(){} // Calls COleDispatchDriver default constructor
    CActionReference(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CActionReference(const CActionReference& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _ActionReference methods
public:
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
    LPDISPATCH GetContainer()
    {
        LPDISPATCH result;
        InvokeHelper(0x4d413333, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    long GetDesiredClass()
    {
        long result;
        InvokeHelper(0x4d413334, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
        return result;
    }
    long GetEnumeratedType()
    {
        long result;
        InvokeHelper(0x4d413335, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
        return result;
    }
    long GetEnumeratedValue()
    {
        long result;
        InvokeHelper(0x4d413336, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
        return result;
    }
    long GetForm()
    {
        long result;
        InvokeHelper(0x4d413337, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
        return result;
    }
    long GetIdentifier()
    {
        long result;
        InvokeHelper(0x4d413338, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
        return result;
    }
    long GetIndex()
    {
        long result;
        InvokeHelper(0x4d413339, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
        return result;
    }
    CString GetName()
    {
        CString result;
        InvokeHelper(0x4d413430, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    long GetOffset()
    {
        long result;
        InvokeHelper(0x4d413431, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
        return result;
    }
    long GetProperty()
    {
        long result;
        InvokeHelper(0x4d413432, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
        return result;
    }
    void PutClass(long DesiredClass)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d413433, DISPATCH_METHOD, VT_EMPTY, NULL, parms, DesiredClass);
    }
    void PutEnumerated(long DesiredClass, long EnumType, long Value)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 ;
        InvokeHelper(0x4d413434, DISPATCH_METHOD, VT_EMPTY, NULL, parms, DesiredClass, EnumType, Value);
    }
    void PutIdentifier(long DesiredClass, long Value)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 ;
        InvokeHelper(0x4d413435, DISPATCH_METHOD, VT_EMPTY, NULL, parms, DesiredClass, Value);
    }
    void PutIndex(long DesiredClass, long Value)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 ;
        InvokeHelper(0x4d413436, DISPATCH_METHOD, VT_EMPTY, NULL, parms, DesiredClass, Value);
    }
    void PutName(long DesiredClass, LPCTSTR Value)
    {
        static BYTE parms[] = VTS_I4 VTS_BSTR ;
        InvokeHelper(0x4d413437, DISPATCH_METHOD, VT_EMPTY, NULL, parms, DesiredClass, Value);
    }
    void PutOffset(long DesiredClass, long Value)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 ;
        InvokeHelper(0x4d413438, DISPATCH_METHOD, VT_EMPTY, NULL, parms, DesiredClass, Value);
    }
    void PutProperty(long DesiredClass, long Value)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 ;
        InvokeHelper(0x4d413439, DISPATCH_METHOD, VT_EMPTY, NULL, parms, DesiredClass, Value);
    }

    // _ActionReference properties
public:

};

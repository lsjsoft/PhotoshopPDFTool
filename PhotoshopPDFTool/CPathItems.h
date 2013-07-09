// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CPathItems wrapper class

class CPathItems : public COleDispatchDriver
{
public:
    CPathItems(){} // Calls COleDispatchDriver default constructor
    CPathItems(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CPathItems(const CPathItems& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // PathItems methods
public:
    LPDISPATCH get_Application()
    {
        LPDISPATCH result;
        InvokeHelper(0x63617070, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_Parent()
    {
        LPDISPATCH result;
        InvokeHelper(0x63746e72, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    long get_Count()
    {
        long result;
        InvokeHelper(0x636e7465, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    LPUNKNOWN get__NewEnum()
    {
        LPUNKNOWN result;
        InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
        return result;
    }
    void RemoveAll()
    {
        InvokeHelper(0x5241456c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    LPDISPATCH get_Item(VARIANT& ItemKey)
    {
        LPDISPATCH result;
        static BYTE parms[] = VTS_VARIANT ;
        InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, &ItemKey);
        return result;
    }
    long Index(LPDISPATCH ItemPtr)
    {
        long result;
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x70696478, DISPATCH_METHOD, VT_I4, (void*)&result, parms, ItemPtr);
        return result;
    }
    LPDISPATCH Add(LPCTSTR Name, VARIANT& EntirePath)
    {
        LPDISPATCH result;
        static BYTE parms[] = VTS_BSTR VTS_VARIANT ;
        InvokeHelper(0x50543033, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Name, &EntirePath);
        return result;
    }

    // PathItems properties
public:

};

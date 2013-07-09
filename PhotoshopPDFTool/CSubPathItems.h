// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CSubPathItems wrapper class

class CSubPathItems : public COleDispatchDriver
{
public:
    CSubPathItems(){} // Calls COleDispatchDriver default constructor
    CSubPathItems(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CSubPathItems(const CSubPathItems& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // SubPathItems methods
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

    // SubPathItems properties
public:

};

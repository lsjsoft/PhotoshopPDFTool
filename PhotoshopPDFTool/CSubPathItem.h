// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CSubPathItem wrapper class

class CSubPathItem : public COleDispatchDriver
{
public:
    CSubPathItem(){} // Calls COleDispatchDriver default constructor
    CSubPathItem(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CSubPathItem(const CSubPathItem& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // SubPathItem methods
public:
    BOOL get_Closed()
    {
        BOOL result;
        InvokeHelper(0x50543530, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    long get_Operation()
    {
        long result;
        InvokeHelper(0x50543037, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_PathPoints()
    {
        LPDISPATCH result;
        InvokeHelper(0x50543034, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
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

    // SubPathItem properties
public:

};

// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CPathPointInfo wrapper class

class CPathPointInfo : public COleDispatchDriver
{
public:
    CPathPointInfo(){} // Calls COleDispatchDriver default constructor
    CPathPointInfo(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CPathPointInfo(const CPathPointInfo& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _PathPointInfo methods
public:
    VARIANT get_Anchor()
    {
        VARIANT result;
        InvokeHelper(0x50543138, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
        return result;
    }
    void put_Anchor(VARIANT& newValue)
    {
        static BYTE parms[] = VTS_VARIANT ;
        InvokeHelper(0x50543138, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
    }
    VARIANT get_LeftDirection()
    {
        VARIANT result;
        InvokeHelper(0x50543139, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
        return result;
    }
    void put_LeftDirection(VARIANT& newValue)
    {
        static BYTE parms[] = VTS_VARIANT ;
        InvokeHelper(0x50543139, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
    }
    VARIANT get_RightDirection()
    {
        VARIANT result;
        InvokeHelper(0x50543230, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
        return result;
    }
    void put_RightDirection(VARIANT& newValue)
    {
        static BYTE parms[] = VTS_VARIANT ;
        InvokeHelper(0x50543230, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
    }
    long get_Kind()
    {
        long result;
        InvokeHelper(0x4b696e64, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Kind(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4b696e64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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

    // _PathPointInfo properties
public:

};

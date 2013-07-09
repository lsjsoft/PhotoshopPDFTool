// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CPathItem wrapper class

class CPathItem : public COleDispatchDriver
{
public:
    CPathItem(){} // Calls COleDispatchDriver default constructor
    CPathItem(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CPathItem(const CPathItem& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // PathItem methods
public:
    CString get_Name()
    {
        CString result;
        InvokeHelper(0x706e616d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    void put_Name(LPCTSTR newValue)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x706e616d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    LPDISPATCH get_SubPathItems()
    {
        LPDISPATCH result;
        InvokeHelper(0x50543433, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
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
    LPDISPATCH get_Parent()
    {
        LPDISPATCH result;
        InvokeHelper(0x63746e72, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void Duplicate(VARIANT& Name)
    {
        static BYTE parms[] = VTS_VARIANT ;
        InvokeHelper(0x636c6f6e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Name);
    }
    void MakeSelection(VARIANT& Feather, VARIANT& AntiAlias, VARIANT& Operation)
    {
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x50543133, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Feather, &AntiAlias, &Operation);
    }
    void FillPath(VARIANT& FillColor, VARIANT& Mode, VARIANT& Opacity, VARIANT& PreserveTransparency, VARIANT& Feather, VARIANT& AntiAlias, VARIANT& WholePath)
    {
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x50543134, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &FillColor, &Mode, &Opacity, &PreserveTransparency, &Feather, &AntiAlias, &WholePath);
    }
    void StrokePath(VARIANT& Tool, VARIANT& SimulatePressure)
    {
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x50543135, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Tool, &SimulatePressure);
    }
    void MakeClippingPath(VARIANT& Flatness)
    {
        static BYTE parms[] = VTS_VARIANT ;
        InvokeHelper(0x50543137, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Flatness);
    }
    void Select()
    {
        InvokeHelper(0x736c6374, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void Deselect()
    {
        InvokeHelper(0x44736c74, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void Delete()
    {
        InvokeHelper(0x64656c6f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }

    // PathItem properties
public:

};

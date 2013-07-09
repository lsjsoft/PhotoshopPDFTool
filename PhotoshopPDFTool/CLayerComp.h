// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CLayerComp wrapper class

class CLayerComp : public COleDispatchDriver
{
public:
    CLayerComp(){} // Calls COleDispatchDriver default constructor
    CLayerComp(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CLayerComp(const CLayerComp& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // LayerComp methods
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
    VARIANT get_Comment()
    {
        VARIANT result;
        InvokeHelper(0x4c433032, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
        return result;
    }
    void put_Comment(VARIANT& newValue)
    {
        static BYTE parms[] = VTS_VARIANT ;
        InvokeHelper(0x4c433032, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
    }
    BOOL get_Appearance()
    {
        BOOL result;
        InvokeHelper(0x4c433033, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_Appearance(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x4c433033, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_Position()
    {
        BOOL result;
        InvokeHelper(0x4f72676e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_Position(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x4f72676e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_Visibility()
    {
        BOOL result;
        InvokeHelper(0x4c433035, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_Visibility(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x4c433035, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_Selected()
    {
        BOOL result;
        InvokeHelper(0x4c433036, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
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
    void Apply()
    {
        InvokeHelper(0x50473031, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void Recapture()
    {
        InvokeHelper(0x50473032, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void ResetFromComp()
    {
        InvokeHelper(0x50473632, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void Delete()
    {
        InvokeHelper(0x64656c6f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }

    // LayerComp properties
public:

};

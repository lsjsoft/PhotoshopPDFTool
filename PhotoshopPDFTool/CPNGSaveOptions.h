// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CPNGSaveOptions wrapper class

class CPNGSaveOptions : public COleDispatchDriver
{
public:
    CPNGSaveOptions(){} // Calls COleDispatchDriver default constructor
    CPNGSaveOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CPNGSaveOptions(const CPNGSaveOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _PNGSaveOptions methods
public:
    BOOL get_Interlaced()
    {
        BOOL result;
        InvokeHelper(0x52774f72, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_Interlaced(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x52774f72, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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

    // _PNGSaveOptions properties
public:

};

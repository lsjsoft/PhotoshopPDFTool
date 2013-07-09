// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CCMYKColor wrapper class

class CCMYKColor : public COleDispatchDriver
{
public:
    CCMYKColor(){} // Calls COleDispatchDriver default constructor
    CCMYKColor(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CCMYKColor(const CCMYKColor& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _CMYKColor methods
public:
    double get_Cyan()
    {
        double result;
        InvokeHelper(0x70434376, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_Cyan(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x70434376, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_Magenta()
    {
        double result;
        InvokeHelper(0x70434d76, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_Magenta(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x70434d76, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_Yellow()
    {
        double result;
        InvokeHelper(0x70435976, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_Yellow(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x70435976, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_Black()
    {
        double result;
        InvokeHelper(0x70434b76, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_Black(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x70434b76, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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

    // _CMYKColor properties
public:

};

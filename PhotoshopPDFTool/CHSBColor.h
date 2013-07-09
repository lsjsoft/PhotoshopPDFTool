// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CHSBColor wrapper class

class CHSBColor : public COleDispatchDriver
{
public:
    CHSBColor(){} // Calls COleDispatchDriver default constructor
    CHSBColor(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CHSBColor(const CHSBColor& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _HSBColor methods
public:
    double get_Hue()
    {
        double result;
        InvokeHelper(0x70487565, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_Hue(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x70487565, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_Saturation()
    {
        double result;
        InvokeHelper(0x70536174, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_Saturation(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x70536174, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_Brightness()
    {
        double result;
        InvokeHelper(0x4268746e, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_Brightness(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x4268746e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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

    // _HSBColor properties
public:

};

// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CLabColor wrapper class

class CLabColor : public COleDispatchDriver
{
public:
    CLabColor(){} // Calls COleDispatchDriver default constructor
    CLabColor(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CLabColor(const CLabColor& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _LabColor methods
public:
    double get_L()
    {
        double result;
        InvokeHelper(0x704c624c, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_L(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x704c624c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_A()
    {
        double result;
        InvokeHelper(0x704c6261, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_A(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x704c6261, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_B()
    {
        double result;
        InvokeHelper(0x704c6262, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_B(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x704c6262, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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

    // _LabColor properties
public:

};

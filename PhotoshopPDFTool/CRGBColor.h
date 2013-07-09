// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CRGBColor wrapper class

class CRGBColor : public COleDispatchDriver
{
public:
    CRGBColor(){} // Calls COleDispatchDriver default constructor
    CRGBColor(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CRGBColor(const CRGBColor& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _RGBColor methods
public:
    double get_Red()
    {
        double result;
        InvokeHelper(0x70525276, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_Red(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x70525276, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_Green()
    {
        double result;
        InvokeHelper(0x70524776, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_Green(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x70524776, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_Blue()
    {
        double result;
        InvokeHelper(0x70524276, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_Blue(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x70524276, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    CString get_HexValue()
    {
        CString result;
        InvokeHelper(0x70524878, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    void put_HexValue(LPCTSTR newValue)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x70524878, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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

    // _RGBColor properties
public:

};

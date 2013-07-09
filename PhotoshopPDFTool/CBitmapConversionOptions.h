// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CBitmapConversionOptions wrapper class

class CBitmapConversionOptions : public COleDispatchDriver
{
public:
    CBitmapConversionOptions(){} // Calls COleDispatchDriver default constructor
    CBitmapConversionOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CBitmapConversionOptions(const CBitmapConversionOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _BitmapConversionOptions methods
public:
    double get_Resolution()
    {
        double result;
        InvokeHelper(0x5265734c, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_Resolution(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x5265734c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_Method()
    {
        long result;
        InvokeHelper(0x43764d74, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Method(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x43764d74, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    CString get_PatternName()
    {
        CString result;
        InvokeHelper(0x50614e6d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    void put_PatternName(LPCTSTR newValue)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x50614e6d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_Frequency()
    {
        double result;
        InvokeHelper(0x46716379, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_Frequency(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x46716379, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_Angle()
    {
        double result;
        InvokeHelper(0x416e676c, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_Angle(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x416e676c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_Shape()
    {
        long result;
        InvokeHelper(0x53635368, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Shape(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x53635368, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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

    // _BitmapConversionOptions properties
public:

};

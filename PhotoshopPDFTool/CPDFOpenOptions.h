// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CPDFOpenOptions wrapper class

class CPDFOpenOptions : public COleDispatchDriver
{
public:
    CPDFOpenOptions(){} // Calls COleDispatchDriver default constructor
    CPDFOpenOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CPDFOpenOptions(const CPDFOpenOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _PDFOpenOptions methods
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
    long get_Mode()
    {
        long result;
        InvokeHelper(0x4f4d6465, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Mode(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4f4d6465, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_AntiAlias()
    {
        BOOL result;
        InvokeHelper(0x416e416c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_AntiAlias(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x416e416c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_Page()
    {
        long result;
        InvokeHelper(0x7050674e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Page(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x7050674e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_ConstrainProportions()
    {
        BOOL result;
        InvokeHelper(0x43507250, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_ConstrainProportions(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x43507250, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_Height()
    {
        double result;
        InvokeHelper(0x48676874, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_Height(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x48676874, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_Width()
    {
        double result;
        InvokeHelper(0x57647468, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_Width(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x57647468, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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

    // _PDFOpenOptions properties
public:

};

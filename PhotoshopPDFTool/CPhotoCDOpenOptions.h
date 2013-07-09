// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CPhotoCDOpenOptions wrapper class

class CPhotoCDOpenOptions : public COleDispatchDriver
{
public:
    CPhotoCDOpenOptions(){} // Calls COleDispatchDriver default constructor
    CPhotoCDOpenOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CPhotoCDOpenOptions(const CPhotoCDOpenOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _PhotoCDOpenOptions methods
public:
    long get_PixelSize()
    {
        long result;
        InvokeHelper(0x50786c5a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_PixelSize(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50786c5a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    CString get_ColorProfileName()
    {
        CString result;
        InvokeHelper(0x4463704e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    void put_ColorProfileName(LPCTSTR newValue)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x4463704e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
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
    long get_ColorSpace()
    {
        long result;
        InvokeHelper(0x436c5370, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_ColorSpace(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x436c5370, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_Orientation()
    {
        long result;
        InvokeHelper(0x446f7269, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Orientation(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x446f7269, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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

    // _PhotoCDOpenOptions properties
public:

};

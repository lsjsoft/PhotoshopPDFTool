// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CIndexedConversionOptions wrapper class

class CIndexedConversionOptions : public COleDispatchDriver
{
public:
    CIndexedConversionOptions(){} // Calls COleDispatchDriver default constructor
    CIndexedConversionOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CIndexedConversionOptions(const CIndexedConversionOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _IndexedConversionOptions methods
public:
    long get_Palette()
    {
        long result;
        InvokeHelper(0x50506c74, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Palette(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50506c74, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_Colors()
    {
        long result;
        InvokeHelper(0x7050434e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Colors(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x7050434e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_Forced()
    {
        long result;
        InvokeHelper(0x5046636c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Forced(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x5046636c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_Transparency()
    {
        BOOL result;
        InvokeHelper(0x54727063, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_Transparency(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x54727063, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_Dither()
    {
        long result;
        InvokeHelper(0x44745470, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Dither(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x44745470, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_DitherAmount()
    {
        long result;
        InvokeHelper(0x4474416d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_DitherAmount(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4474416d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_PreserveExactColors()
    {
        BOOL result;
        InvokeHelper(0x44506578, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_PreserveExactColors(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x44506578, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_Matte()
    {
        long result;
        InvokeHelper(0x4d747465, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Matte(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4d747465, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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

    // _IndexedConversionOptions properties
public:

};

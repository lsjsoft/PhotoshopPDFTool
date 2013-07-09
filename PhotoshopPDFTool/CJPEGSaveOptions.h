// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CJPEGSaveOptions wrapper class

class CJPEGSaveOptions : public COleDispatchDriver
{
public:
    CJPEGSaveOptions(){} // Calls COleDispatchDriver default constructor
    CJPEGSaveOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CJPEGSaveOptions(const CJPEGSaveOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _JPEGSaveOptions methods
public:
    BOOL get_EmbedColorProfile()
    {
        BOOL result;
        InvokeHelper(0x70534550, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_EmbedColorProfile(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x70534550, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_FormatOptions()
    {
        long result;
        InvokeHelper(0x4a504f70, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_FormatOptions(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4a504f70, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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
    long get_Scans()
    {
        long result;
        InvokeHelper(0x53636e73, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Scans(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x53636e73, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_Quality()
    {
        long result;
        InvokeHelper(0x516c7479, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Quality(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x516c7479, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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

    // _JPEGSaveOptions properties
public:

};

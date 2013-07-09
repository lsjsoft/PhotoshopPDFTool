// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CExportOptionsIllustrator wrapper class

class CExportOptionsIllustrator : public COleDispatchDriver
{
public:
    CExportOptionsIllustrator(){} // Calls COleDispatchDriver default constructor
    CExportOptionsIllustrator(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CExportOptionsIllustrator(const CExportOptionsIllustrator& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _ExportOptionsIllustrator methods
public:
    long get_Path()
    {
        long result;
        InvokeHelper(0x54675074, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Path(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x54675074, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    CString get_PathName()
    {
        CString result;
        InvokeHelper(0x54506e6d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    void put_PathName(LPCTSTR newValue)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x54506e6d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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

    // _ExportOptionsIllustrator properties
public:

};

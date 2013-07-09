// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CGalleryBannerOptions wrapper class

class CGalleryBannerOptions : public COleDispatchDriver
{
public:
    CGalleryBannerOptions(){} // Calls COleDispatchDriver default constructor
    CGalleryBannerOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CGalleryBannerOptions(const CGalleryBannerOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _GalleryBannerOptions methods
public:
    CString get_SiteName()
    {
        CString result;
        InvokeHelper(0x50473439, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    void put_SiteName(LPCTSTR newValue)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x50473439, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    CString get_Photographer()
    {
        CString result;
        InvokeHelper(0x50473530, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    void put_Photographer(LPCTSTR newValue)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x50473530, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    CString get_ContactInfo()
    {
        CString result;
        InvokeHelper(0x50473531, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    void put_ContactInfo(LPCTSTR newValue)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x50473531, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    CString get_Date()
    {
        CString result;
        InvokeHelper(0x50473532, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    void put_Date(LPCTSTR newValue)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x50473532, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_Font()
    {
        long result;
        InvokeHelper(0x63466e74, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Font(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x63466e74, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_FontSize()
    {
        long result;
        InvokeHelper(0x50473734, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_FontSize(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50473734, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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

    // _GalleryBannerOptions properties
public:

};

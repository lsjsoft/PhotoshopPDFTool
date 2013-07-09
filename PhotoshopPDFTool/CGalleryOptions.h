// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CGalleryOptions wrapper class

class CGalleryOptions : public COleDispatchDriver
{
public:
    CGalleryOptions(){} // Calls COleDispatchDriver default constructor
    CGalleryOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CGalleryOptions(const CGalleryOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _GalleryOptions methods
public:
    CString get_LayoutStyle()
    {
        CString result;
        InvokeHelper(0x50473338, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    void put_LayoutStyle(LPCTSTR newValue)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x50473338, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    CString get_EmailAddress()
    {
        CString result;
        InvokeHelper(0x50473339, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    void put_EmailAddress(LPCTSTR newValue)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x50473339, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_UseShortExtension()
    {
        BOOL result;
        InvokeHelper(0x50473430, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_UseShortExtension(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50473430, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_UseUTF8Encoding()
    {
        BOOL result;
        InvokeHelper(0x50473431, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_UseUTF8Encoding(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50473431, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_IncludeSubFolders()
    {
        BOOL result;
        InvokeHelper(0x50473432, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_IncludeSubFolders(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50473432, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_AddSizeAttributes()
    {
        BOOL result;
        InvokeHelper(0x50473433, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_AddSizeAttributes(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50473433, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_PreserveAllMetadata()
    {
        BOOL result;
        InvokeHelper(0x50473533, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_PreserveAllMetadata(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50473533, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    LPDISPATCH get_BannerOptions()
    {
        LPDISPATCH result;
        InvokeHelper(0x50473534, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void put_BannerOptions(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x50473534, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    void putref_BannerOptions(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x50473534, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
    }
    LPDISPATCH get_ImagesOptions()
    {
        LPDISPATCH result;
        InvokeHelper(0x50473435, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void put_ImagesOptions(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x50473435, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    void putref_ImagesOptions(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x50473435, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
    }
    LPDISPATCH get_ThumbnailOptions()
    {
        LPDISPATCH result;
        InvokeHelper(0x50473436, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void put_ThumbnailOptions(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x50473436, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    void putref_ThumbnailOptions(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x50473436, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
    }
    LPDISPATCH get_CustomColorOptions()
    {
        LPDISPATCH result;
        InvokeHelper(0x50473437, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void put_CustomColorOptions(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x50473437, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    void putref_CustomColorOptions(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x50473437, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
    }
    LPDISPATCH get_SecurityOptions()
    {
        LPDISPATCH result;
        InvokeHelper(0x50473438, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void put_SecurityOptions(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x50473438, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    void putref_SecurityOptions(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x50473438, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
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

    // _GalleryOptions properties
public:

};

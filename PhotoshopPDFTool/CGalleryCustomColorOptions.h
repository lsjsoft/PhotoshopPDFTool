// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CGalleryCustomColorOptions wrapper class

class CGalleryCustomColorOptions : public COleDispatchDriver
{
public:
    CGalleryCustomColorOptions(){} // Calls COleDispatchDriver default constructor
    CGalleryCustomColorOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CGalleryCustomColorOptions(const CGalleryCustomColorOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _GalleryCustomColorOptions methods
public:
    LPDISPATCH get_BackgroundColor()
    {
        LPDISPATCH result;
        InvokeHelper(0x42674372, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void put_BackgroundColor(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x42674372, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    void putref_BackgroundColor(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x42674372, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
    }
    LPDISPATCH get_BannerColor()
    {
        LPDISPATCH result;
        InvokeHelper(0x50473831, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void put_BannerColor(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x50473831, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    void putref_BannerColor(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x50473831, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
    }
    LPDISPATCH get_TextColor()
    {
        LPDISPATCH result;
        InvokeHelper(0x50473832, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void put_TextColor(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x50473832, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    void putref_TextColor(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x50473832, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
    }
    LPDISPATCH get_ActiveLinkColor()
    {
        LPDISPATCH result;
        InvokeHelper(0x50473833, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void put_ActiveLinkColor(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x50473833, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    void putref_ActiveLinkColor(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x50473833, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
    }
    LPDISPATCH get_LinkColor()
    {
        LPDISPATCH result;
        InvokeHelper(0x50473834, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void put_LinkColor(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x50473834, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    void putref_LinkColor(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x50473834, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
    }
    LPDISPATCH get_VisitedLinkColor()
    {
        LPDISPATCH result;
        InvokeHelper(0x50473835, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void put_VisitedLinkColor(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x50473835, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    void putref_VisitedLinkColor(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x50473835, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
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

    // _GalleryCustomColorOptions properties
public:

};

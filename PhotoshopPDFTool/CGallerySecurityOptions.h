// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CGallerySecurityOptions wrapper class

class CGallerySecurityOptions : public COleDispatchDriver
{
public:
    CGallerySecurityOptions(){} // Calls COleDispatchDriver default constructor
    CGallerySecurityOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CGallerySecurityOptions(const CGallerySecurityOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _GallerySecurityOptions methods
public:
    long get_Content()
    {
        long result;
        InvokeHelper(0x50473836, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Content(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50473836, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    CString get_Text()
    {
        CString result;
        InvokeHelper(0x50473837, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    void put_Text(LPCTSTR newValue)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x50473837, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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
    long get_Opacity()
    {
        long result;
        InvokeHelper(0x4f706374, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Opacity(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4f706374, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_TextPosition()
    {
        long result;
        InvokeHelper(0x50473933, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_TextPosition(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50473933, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_TextRotate()
    {
        long result;
        InvokeHelper(0x50473934, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_TextRotate(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50473934, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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

    // _GallerySecurityOptions properties
public:

};

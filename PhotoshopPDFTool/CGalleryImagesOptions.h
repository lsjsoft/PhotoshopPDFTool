// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CGalleryImagesOptions wrapper class

class CGalleryImagesOptions : public COleDispatchDriver
{
public:
    CGalleryImagesOptions(){} // Calls COleDispatchDriver default constructor
    CGalleryImagesOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CGalleryImagesOptions(const CGalleryImagesOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _GalleryImagesOptions methods
public:
    BOOL get_NumericLinks()
    {
        BOOL result;
        InvokeHelper(0x50473535, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_NumericLinks(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50473535, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_ResizeImages()
    {
        BOOL result;
        InvokeHelper(0x50473536, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_ResizeImages(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50473536, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_Dimension()
    {
        long result;
        InvokeHelper(0x50473537, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Dimension(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50473537, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_ResizeConstraint()
    {
        long result;
        InvokeHelper(0x50473538, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_ResizeConstraint(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50473538, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_ImageQuality()
    {
        long result;
        InvokeHelper(0x50473539, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_ImageQuality(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50473539, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_Border()
    {
        long result;
        InvokeHelper(0x50473630, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Border(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50473630, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_IncludeFilename()
    {
        BOOL result;
        InvokeHelper(0x50473631, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_IncludeFilename(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50473631, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_Caption()
    {
        BOOL result;
        InvokeHelper(0x44693031, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_Caption(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x44693031, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_IncludeCredits()
    {
        BOOL result;
        InvokeHelper(0x50473633, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_IncludeCredits(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50473633, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_IncludeTitle()
    {
        BOOL result;
        InvokeHelper(0x50473634, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_IncludeTitle(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50473634, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_IncludeCopyright()
    {
        BOOL result;
        InvokeHelper(0x50473635, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_IncludeCopyright(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50473635, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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

    // _GalleryImagesOptions properties
public:

};

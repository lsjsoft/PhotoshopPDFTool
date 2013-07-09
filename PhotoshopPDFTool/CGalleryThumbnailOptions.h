// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CGalleryThumbnailOptions wrapper class

class CGalleryThumbnailOptions : public COleDispatchDriver
{
public:
    CGalleryThumbnailOptions(){} // Calls COleDispatchDriver default constructor
    CGalleryThumbnailOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CGalleryThumbnailOptions(const CGalleryThumbnailOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _GalleryThumbnailOptions methods
public:
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
    long get_Size()
    {
        long result;
        InvokeHelper(0x7074737a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Size(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x7074737a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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
    long get_ColumnCount()
    {
        long result;
        InvokeHelper(0x50473737, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_ColumnCount(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50473737, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_RowCount()
    {
        long result;
        InvokeHelper(0x50473738, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_RowCount(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50473738, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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

    // _GalleryThumbnailOptions properties
public:

};

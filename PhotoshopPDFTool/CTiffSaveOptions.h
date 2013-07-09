// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CTiffSaveOptions wrapper class

class CTiffSaveOptions : public COleDispatchDriver
{
public:
    CTiffSaveOptions(){} // Calls COleDispatchDriver default constructor
    CTiffSaveOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CTiffSaveOptions(const CTiffSaveOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // _TiffSaveOptions methods
public:
    BOOL get_AlphaChannels()
    {
        BOOL result;
        InvokeHelper(0x70534163, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_AlphaChannels(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x70534163, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_Layers()
    {
        BOOL result;
        InvokeHelper(0x70534c72, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_Layers(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x70534c72, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_Annotations()
    {
        BOOL result;
        InvokeHelper(0x7053416e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_Annotations(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x7053416e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_SpotColors()
    {
        BOOL result;
        InvokeHelper(0x70535373, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_SpotColors(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x70535373, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
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
    long get_ImageCompression()
    {
        long result;
        InvokeHelper(0x496d4370, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_ImageCompression(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x496d4370, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_JPEGQuality()
    {
        long result;
        InvokeHelper(0x504a7067, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_JPEGQuality(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x504a7067, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_ByteOrder()
    {
        long result;
        InvokeHelper(0x5466426f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_ByteOrder(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x5466426f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_SaveImagePyramid()
    {
        BOOL result;
        InvokeHelper(0x70505972, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_SaveImagePyramid(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x70505972, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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
    long get_LayerCompression()
    {
        long result;
        InvokeHelper(0x4c794370, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_LayerCompression(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4c794370, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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

    // _TiffSaveOptions properties
public:

};

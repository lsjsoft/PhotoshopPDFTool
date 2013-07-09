// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CDocument0 wrapper class

class CDocument0 : public COleDispatchDriver
{
public:
    CDocument0(){} // Calls COleDispatchDriver default constructor
    CDocument0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CDocument0(const CDocument0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // Document methods
public:
    LPDISPATCH get_BackgroundLayer()
    {
        LPDISPATCH result;
        InvokeHelper(0x44624c72, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    long get_BitsPerChannel()
    {
        long result;
        InvokeHelper(0x44426368, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_BitsPerChannel(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x44426368, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_ColorProfileType()
    {
        long result;
        InvokeHelper(0x44637054, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_ColorProfileType(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x44637054, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    CString get_ColorProfileName()
    {
        CString result;
        InvokeHelper(0x4463704e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    void put_ColorProfileName(LPCTSTR newValue)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x4463704e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_Mode()
    {
        long result;
        InvokeHelper(0x4f4d6465, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    VARIANT get_ComponentChannels()
    {
        VARIANT result;
        InvokeHelper(0x43437073, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_ActiveHistoryState()
    {
        LPDISPATCH result;
        InvokeHelper(0x44436873, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void put_ActiveHistoryState(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x44436873, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    LPDISPATCH get_ActiveHistoryBrushSource()
    {
        LPDISPATCH result;
        InvokeHelper(0x44436272, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void put_ActiveHistoryBrushSource(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x44436272, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    LPDISPATCH get_ActiveLayer()
    {
        LPDISPATCH result;
        InvokeHelper(0x63724c72, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void put_ActiveLayer(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x63724c72, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    VARIANT get_ActiveChannels()
    {
        VARIANT result;
        InvokeHelper(0x44436e6c, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
        return result;
    }
    void put_ActiveChannels(VARIANT& newValue)
    {
        static BYTE parms[] = VTS_VARIANT ;
        InvokeHelper(0x44436e6c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
    }
    LPDISPATCH get_Info()
    {
        LPDISPATCH result;
        InvokeHelper(0x44696e66, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    CString get_FullName()
    {
        CString result;
        InvokeHelper(0x44707468, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    double get_Height()
    {
        double result;
        InvokeHelper(0x48676874, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    BOOL get_Managed()
    {
        BOOL result;
        InvokeHelper(0x644d6764, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    BOOL get_Saved()
    {
        BOOL result;
        InvokeHelper(0x44537664, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    CString get_Name()
    {
        CString result;
        InvokeHelper(0x706e616d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    CString get_Path()
    {
        CString result;
        InvokeHelper(0x44507468, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    BOOL get_QuickMaskMode()
    {
        BOOL result;
        InvokeHelper(0x514d4d64, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_QuickMaskMode(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x514d4d64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_Resolution()
    {
        double result;
        InvokeHelper(0x5265734c, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_Selection()
    {
        LPDISPATCH result;
        InvokeHelper(0x73656c65, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    double get_Width()
    {
        double result;
        InvokeHelper(0x57647468, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    VARIANT get_Histogram()
    {
        VARIANT result;
        InvokeHelper(0x48697374, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
        return result;
    }
    double get_PixelAspectRatio()
    {
        double result;
        InvokeHelper(0x44693236, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_PixelAspectRatio(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x44693236, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    LPDISPATCH get_XMPMetadata()
    {
        LPDISPATCH result;
        InvokeHelper(0x63584d64, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_Layers()
    {
        LPDISPATCH result;
        InvokeHelper(0x634c7972, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_LayerSets()
    {
        LPDISPATCH result;
        InvokeHelper(0x634c5a74, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_ArtLayers()
    {
        LPDISPATCH result;
        InvokeHelper(0x63434c72, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_Channels()
    {
        LPDISPATCH result;
        InvokeHelper(0x6343486e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_HistoryStates()
    {
        LPDISPATCH result;
        InvokeHelper(0x63487374, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_LayerComps()
    {
        LPDISPATCH result;
        InvokeHelper(0x4c433031, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_PathItems()
    {
        LPDISPATCH result;
        InvokeHelper(0x50543033, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_Application()
    {
        LPDISPATCH result;
        InvokeHelper(0x63617070, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_Parent()
    {
        LPDISPATCH result;
        InvokeHelper(0x63746e72, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void Close(VARIANT& Saving)
    {
        static BYTE parms[] = VTS_VARIANT ;
        InvokeHelper(0x636c6f73, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Saving);
    }
    void ConvertProfile(LPCTSTR DestinationProfile, long Intent, VARIANT& BlackPointCompensation, VARIANT& Dither)
    {
        static BYTE parms[] = VTS_BSTR VTS_I4 VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x43765072, DISPATCH_METHOD, VT_EMPTY, NULL, parms, DestinationProfile, Intent, &BlackPointCompensation, &Dither);
    }
    void ChangeMode(long DestinationMode, VARIANT& Options)
    {
        static BYTE parms[] = VTS_I4 VTS_VARIANT ;
        InvokeHelper(0x43684373, DISPATCH_METHOD, VT_EMPTY, NULL, parms, DestinationMode, &Options);
    }
    void Crop(VARIANT& Bounds, VARIANT& Angle, VARIANT& Width, VARIANT& Height)
    {
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x43726f70, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Bounds, &Angle, &Width, &Height);
    }
    void Export(LPCTSTR ExportIn, VARIANT& ExportAs, VARIANT& Options)
    {
        static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x45787072, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ExportIn, &ExportAs, &Options);
    }
    void FlipCanvas(long Direction)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x466c4376, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Direction);
    }
    void ImportAnnotations(LPCTSTR File)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x4970416e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, File);
    }
    void Flatten()
    {
        InvokeHelper(0x466c746e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void MergeVisibleLayers()
    {
        InvokeHelper(0x4d767362, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    LPDISPATCH Paste(VARIANT& IntoSelection)
    {
        LPDISPATCH result;
        static BYTE parms[] = VTS_VARIANT ;
        InvokeHelper(0x70617374, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &IntoSelection);
        return result;
    }
    void PrintOut(VARIANT& PostScriptEncoding, VARIANT& SourceSpace, VARIANT& PrintSpace, VARIANT& Intent, VARIANT& BlackPointCompensation)
    {
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x50734350, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &PostScriptEncoding, &SourceSpace, &PrintSpace, &Intent, &BlackPointCompensation);
    }
    void RevealAll()
    {
        InvokeHelper(0x5276416c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void RasterizeAllLayers()
    {
        InvokeHelper(0x527a416c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void RotateCanvas(double Angle)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x52744376, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Angle);
    }
    void ResizeCanvas(VARIANT& Width, VARIANT& Height, VARIANT& Anchor)
    {
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x527a4376, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Width, &Height, &Anchor);
    }
    void ResizeImage(VARIANT& Width, VARIANT& Height, VARIANT& Resolution, VARIANT& ResampleMethod)
    {
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x527a496d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Width, &Height, &Resolution, &ResampleMethod);
    }
    VARIANT SplitChannels()
    {
        VARIANT result;
        InvokeHelper(0x53704368, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
        return result;
    }
    void Save()
    {
        InvokeHelper(0x50435376, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void SaveAs(LPCTSTR SaveIn, VARIANT& Options, VARIANT& AsCopy, VARIANT& ExtensionType)
    {
        static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x53764173, DISPATCH_METHOD, VT_EMPTY, NULL, parms, SaveIn, &Options, &AsCopy, &ExtensionType);
    }
    void Trap(long Width)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x54726170, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Width);
    }
    void Trim(VARIANT& Type, VARIANT& Top, VARIANT& Left, VARIANT& Bottom, VARIANT& Right)
    {
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x5472696d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Type, &Top, &Left, &Bottom, &Right);
    }
    LPDISPATCH Duplicate()
    {
        LPDISPATCH result;
        InvokeHelper(0x636c6f6e, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }

    // Document properties
public:

};

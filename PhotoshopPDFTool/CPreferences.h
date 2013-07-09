// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CPreferences wrapper class

class CPreferences : public COleDispatchDriver
{
public:
    CPreferences(){} // Calls COleDispatchDriver default constructor
    CPreferences(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CPreferences(const CPreferences& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // Preferences methods
public:
    long get_ColorPicker()
    {
        long result;
        InvokeHelper(0x43506b72, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_ColorPicker(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x43506b72, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_Interpolation()
    {
        long result;
        InvokeHelper(0x49706c61, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Interpolation(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x49706c61, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_ExportClipboard()
    {
        BOOL result;
        InvokeHelper(0x50723031, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_ExportClipboard(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50723031, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_ShowToolTips()
    {
        BOOL result;
        InvokeHelper(0x50723033, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_ShowToolTips(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50723033, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_KeyboardZoomResizesWindows()
    {
        BOOL result;
        InvokeHelper(0x50723433, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_KeyboardZoomResizesWindows(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50723433, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_AutoUpdateOpenDocuments()
    {
        BOOL result;
        InvokeHelper(0x50723034, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_AutoUpdateOpenDocuments(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50723034, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_ShowAsianTextOptions()
    {
        BOOL result;
        InvokeHelper(0x50723035, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_ShowAsianTextOptions(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50723035, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_BeepWhenDone()
    {
        BOOL result;
        InvokeHelper(0x50723036, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_BeepWhenDone(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50723036, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_DynamicColorSliders()
    {
        BOOL result;
        InvokeHelper(0x50723037, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_DynamicColorSliders(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50723037, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_SavePaletteLocations()
    {
        BOOL result;
        InvokeHelper(0x50723038, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_SavePaletteLocations(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50723038, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_ShowEnglishFontNames()
    {
        BOOL result;
        InvokeHelper(0x50723039, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_ShowEnglishFontNames(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50723039, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_UseShiftKeyForToolSwitch()
    {
        BOOL result;
        InvokeHelper(0x50723130, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_UseShiftKeyForToolSwitch(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50723130, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_NumberOfHistoryStates()
    {
        long result;
        InvokeHelper(0x50723131, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_NumberOfHistoryStates(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50723131, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_CreateFirstSnapshot()
    {
        BOOL result;
        InvokeHelper(0x50723339, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_CreateFirstSnapshot(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50723339, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_NonLinearHistory()
    {
        BOOL result;
        InvokeHelper(0x50723430, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_NonLinearHistory(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50723430, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_SmartQuotes()
    {
        BOOL result;
        InvokeHelper(0x50723431, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_SmartQuotes(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50723431, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_ImagePreviews()
    {
        long result;
        InvokeHelper(0x50723132, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_ImagePreviews(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50723132, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_UseLowerCaseExtension()
    {
        BOOL result;
        InvokeHelper(0x70534c63, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_UseLowerCaseExtension(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x70534c63, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_AskBeforeSavingLayeredTIFF()
    {
        BOOL result;
        InvokeHelper(0x50723134, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_AskBeforeSavingLayeredTIFF(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50723134, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_MaximizeCompatibility()
    {
        long result;
        InvokeHelper(0x704d7843, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_MaximizeCompatibility(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x704d7843, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_RecentFileListLength()
    {
        long result;
        InvokeHelper(0x50723135, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_RecentFileListLength(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50723135, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_ColorChannelsInColor()
    {
        BOOL result;
        InvokeHelper(0x50723136, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_ColorChannelsInColor(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50723136, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_UseDiffusionDither()
    {
        BOOL result;
        InvokeHelper(0x50723137, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_UseDiffusionDither(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50723137, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_PixelDoubling()
    {
        BOOL result;
        InvokeHelper(0x50723138, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_PixelDoubling(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50723138, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_PaintingCursors()
    {
        long result;
        InvokeHelper(0x50723139, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_PaintingCursors(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50723139, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_OtherCursors()
    {
        long result;
        InvokeHelper(0x50723230, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_OtherCursors(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50723230, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_GridSize()
    {
        long result;
        InvokeHelper(0x50723231, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_GridSize(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50723231, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_UseVideoAlpha()
    {
        BOOL result;
        InvokeHelper(0x50723233, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_UseVideoAlpha(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50723233, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_GamutWarningOpacity()
    {
        double result;
        InvokeHelper(0x50723234, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_GamutWarningOpacity(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x50723234, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_RulerUnits()
    {
        long result;
        InvokeHelper(0x50723235, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_RulerUnits(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50723235, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_TypeUnits()
    {
        long result;
        InvokeHelper(0x50723236, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_TypeUnits(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50723236, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_ColumnWidth()
    {
        double result;
        InvokeHelper(0x50723237, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_ColumnWidth(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x50723237, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_ColumnGutter()
    {
        double result;
        InvokeHelper(0x50723238, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_ColumnGutter(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x50723238, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_PointSize()
    {
        long result;
        InvokeHelper(0x50723239, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_PointSize(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50723239, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_GuideStyle()
    {
        long result;
        InvokeHelper(0x50723330, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_GuideStyle(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50723330, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_GridStyle()
    {
        long result;
        InvokeHelper(0x50723331, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_GridStyle(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50723331, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_GridSubDivisions()
    {
        long result;
        InvokeHelper(0x50723333, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_GridSubDivisions(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50723333, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_ShowSliceNumber()
    {
        BOOL result;
        InvokeHelper(0x50723334, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_ShowSliceNumber(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50723334, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_UseAdditionalPluginFolder()
    {
        BOOL result;
        InvokeHelper(0x50723432, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_UseAdditionalPluginFolder(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50723432, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    CString get_AdditionalPluginFolder()
    {
        CString result;
        InvokeHelper(0x50723335, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    void put_AdditionalPluginFolder(LPCTSTR newValue)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x50723335, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_ImageCacheLevels()
    {
        long result;
        InvokeHelper(0x50723337, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_ImageCacheLevels(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50723337, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_ImageCacheForHistograms()
    {
        BOOL result;
        InvokeHelper(0x50723338, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_ImageCacheForHistograms(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50723338, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_MaxRAMuse()
    {
        long result;
        InvokeHelper(0x50723434, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_MaxRAMuse(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50723434, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_UseHistoryLog()
    {
        BOOL result;
        InvokeHelper(0x50723435, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_UseHistoryLog(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50723435, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_SaveLogItems()
    {
        long result;
        InvokeHelper(0x50723436, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_SaveLogItems(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50723436, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_EditLogItems()
    {
        long result;
        InvokeHelper(0x50723437, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_EditLogItems(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50723437, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    CString get_SaveLogItemsFile()
    {
        CString result;
        InvokeHelper(0x50723438, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    void put_SaveLogItemsFile(LPCTSTR newValue)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x50723438, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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

    // Preferences properties
public:

};

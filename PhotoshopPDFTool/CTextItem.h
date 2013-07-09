// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CTextItem wrapper class

class CTextItem : public COleDispatchDriver
{
public:
    CTextItem(){} // Calls COleDispatchDriver default constructor
    CTextItem(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CTextItem(const CTextItem& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // TextItem methods
public:
    long get_AntiAliasMethod()
    {
        long result;
        InvokeHelper(0x41417470, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_AntiAliasMethod(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x41417470, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_AutoKerning()
    {
        long result;
        InvokeHelper(0x416b726e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_AutoKerning(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x416b726e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    LPDISPATCH get_Color()
    {
        LPDISPATCH result;
        InvokeHelper(0x54436c43, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void put_Color(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x54436c43, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    void putref_Color(LPDISPATCH newValue)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x54436c43, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_UseAutoLeading()
    {
        BOOL result;
        InvokeHelper(0x416c6467, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_UseAutoLeading(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x416c6467, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_Tracking()
    {
        double result;
        InvokeHelper(0x54726b6e, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_Tracking(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x54726b6e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_VerticalScale()
    {
        long result;
        InvokeHelper(0x56745363, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_VerticalScale(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x56745363, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_HorizontalScale()
    {
        long result;
        InvokeHelper(0x48725363, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_HorizontalScale(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x48725363, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_BaselineShift()
    {
        double result;
        InvokeHelper(0x426c7368, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_BaselineShift(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x426c7368, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    CString get_Contents()
    {
        CString result;
        InvokeHelper(0x70636e74, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    void put_Contents(LPCTSTR newValue)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x70636e74, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    CString get_Font()
    {
        CString result;
        InvokeHelper(0x63466e74, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    void put_Font(LPCTSTR newValue)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x63466e74, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_Leading()
    {
        double result;
        InvokeHelper(0x544c6467, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_Leading(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x544c6467, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_Ligatures()
    {
        BOOL result;
        InvokeHelper(0x4c747273, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_Ligatures(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x4c747273, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_AlternateLigatures()
    {
        BOOL result;
        InvokeHelper(0x414c7473, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_AlternateLigatures(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x414c7473, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_OldStyle()
    {
        BOOL result;
        InvokeHelper(0x4f645374, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_OldStyle(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x4f645374, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    VARIANT get_Position()
    {
        VARIANT result;
        InvokeHelper(0x4f72676e, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
        return result;
    }
    void put_Position(VARIANT& newValue)
    {
        static BYTE parms[] = VTS_VARIANT ;
        InvokeHelper(0x4f72676e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
    }
    long get_Direction()
    {
        long result;
        InvokeHelper(0x54446972, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Direction(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x54446972, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_Size()
    {
        double result;
        InvokeHelper(0x7074737a, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_Size(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x7074737a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_FauxBold()
    {
        BOOL result;
        InvokeHelper(0x4678426c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_FauxBold(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x4678426c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_FauxItalic()
    {
        BOOL result;
        InvokeHelper(0x46784974, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_FauxItalic(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x46784974, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_Capitalization()
    {
        long result;
        InvokeHelper(0x43617073, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Capitalization(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x43617073, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_StrikeThru()
    {
        long result;
        InvokeHelper(0x50547275, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_StrikeThru(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x50547275, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_Underline()
    {
        long result;
        InvokeHelper(0x556c696e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Underline(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x556c696e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_Language()
    {
        long result;
        InvokeHelper(0x4c616e67, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Language(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4c616e67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_NoBreak()
    {
        BOOL result;
        InvokeHelper(0x4e6f626b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_NoBreak(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x4e6f626b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_Kind()
    {
        long result;
        InvokeHelper(0x4b696e64, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Kind(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x4b696e64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_Justification()
    {
        long result;
        InvokeHelper(0x706a7374, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_Justification(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x706a7374, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_LeftIndent()
    {
        double result;
        InvokeHelper(0x544c6964, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_LeftIndent(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x544c6964, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_FirstLineIndent()
    {
        double result;
        InvokeHelper(0x54466964, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_FirstLineIndent(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x54466964, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_RightIndent()
    {
        double result;
        InvokeHelper(0x54526964, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_RightIndent(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x54526964, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_SpaceBefore()
    {
        double result;
        InvokeHelper(0x54534266, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_SpaceBefore(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x54534266, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_SpaceAfter()
    {
        double result;
        InvokeHelper(0x54536166, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_SpaceAfter(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x54536166, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_HangingPuntuation()
    {
        BOOL result;
        InvokeHelper(0x48506374, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_HangingPuntuation(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x48506374, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_TextComposer()
    {
        long result;
        InvokeHelper(0x54437073, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_TextComposer(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x54437073, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_Hyphenation()
    {
        BOOL result;
        InvokeHelper(0x55487068, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_Hyphenation(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x55487068, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_MinimumGlyphScaling()
    {
        double result;
        InvokeHelper(0x4d694773, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_MinimumGlyphScaling(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x4d694773, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_DesiredGlyphScaling()
    {
        double result;
        InvokeHelper(0x44734773, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_DesiredGlyphScaling(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x44734773, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_MaximumGlyphScaling()
    {
        double result;
        InvokeHelper(0x4d734773, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_MaximumGlyphScaling(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x4d734773, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_MinimumLetterScaling()
    {
        double result;
        InvokeHelper(0x4d694c73, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_MinimumLetterScaling(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x4d694c73, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_DesiredLetterScaling()
    {
        double result;
        InvokeHelper(0x44734c73, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_DesiredLetterScaling(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x44734c73, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_MaximumLetterScaling()
    {
        double result;
        InvokeHelper(0x4d614c73, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_MaximumLetterScaling(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x4d614c73, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_MinimumWordScaling()
    {
        double result;
        InvokeHelper(0x4d695773, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_MinimumWordScaling(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x4d695773, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_DesiredWordScaling()
    {
        double result;
        InvokeHelper(0x44735773, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_DesiredWordScaling(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x44735773, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_MaximumWordScaling()
    {
        double result;
        InvokeHelper(0x4d615773, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_MaximumWordScaling(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x4d615773, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_AutoLeadingAmount()
    {
        double result;
        InvokeHelper(0x416c614d, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_AutoLeadingAmount(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x416c614d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_HyphenateWordsLongerThan()
    {
        long result;
        InvokeHelper(0x484c746e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_HyphenateWordsLongerThan(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x484c746e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_HyphenateAfterFirst()
    {
        long result;
        InvokeHelper(0x48416674, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_HyphenateAfterFirst(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x48416674, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_HyphenateBeforeLast()
    {
        long result;
        InvokeHelper(0x48426672, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_HyphenateBeforeLast(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x48426672, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_HyphenLimit()
    {
        long result;
        InvokeHelper(0x484c6d74, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_HyphenLimit(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x484c6d74, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_HyphenationZone()
    {
        double result;
        InvokeHelper(0x485a6e65, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_HyphenationZone(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x485a6e65, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_HyphenateCapitalWords()
    {
        BOOL result;
        InvokeHelper(0x48437073, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_HyphenateCapitalWords(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x48437073, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_Width()
    {
        double result;
        InvokeHelper(0x57647468, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_Width(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x57647468, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_Height()
    {
        double result;
        InvokeHelper(0x48676874, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_Height(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x48676874, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_WarpStyle()
    {
        long result;
        InvokeHelper(0x5753746c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_WarpStyle(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x5753746c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_WarpDirection()
    {
        long result;
        InvokeHelper(0x57446972, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_WarpDirection(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x57446972, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_WarpBend()
    {
        double result;
        InvokeHelper(0x57426e64, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_WarpBend(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x57426e64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_WarpHorizontalDistortion()
    {
        double result;
        InvokeHelper(0x57484473, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_WarpHorizontalDistortion(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x57484473, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    double get_WarpVerticalDistortion()
    {
        double result;
        InvokeHelper(0x57564473, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_WarpVerticalDistortion(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x57564473, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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
    void CreatePath()
    {
        InvokeHelper(0x43577074, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void ConvertToShape()
    {
        InvokeHelper(0x43763273, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }

    // TextItem properties
public:

};

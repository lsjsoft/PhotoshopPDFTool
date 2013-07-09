// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files\\Adobe\\Photoshop CS\\Plug-Ins\\Adobe Photoshop Only\\自动\\脚本支持.8li" no_namespace
// CArtLayer wrapper class

class CArtLayer : public COleDispatchDriver
{
public:
    CArtLayer(){} // Calls COleDispatchDriver default constructor
    CArtLayer(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CArtLayer(const CArtLayer& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

    // Attributes
public:

    // Operations
public:


    // ArtLayer methods
public:
    double get_FillOpacity()
    {
        double result;
        InvokeHelper(0x464f7063, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_FillOpacity(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x464f7063, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_Grouped()
    {
        BOOL result;
        InvokeHelper(0x70477750, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_Grouped(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x70477750, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_IsBackgroundLayer()
    {
        BOOL result;
        InvokeHelper(0x44624c72, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_IsBackgroundLayer(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x44624c72, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_PixelsLocked()
    {
        BOOL result;
        InvokeHelper(0x50784c63, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_PixelsLocked(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50784c63, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_PositionLocked()
    {
        BOOL result;
        InvokeHelper(0x50744c63, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_PositionLocked(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x50744c63, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_TransparentPixelsLocked()
    {
        BOOL result;
        InvokeHelper(0x54704c63, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_TransparentPixelsLocked(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x54704c63, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
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
    LPDISPATCH get_TextItem()
    {
        LPDISPATCH result;
        InvokeHelper(0x704c7254, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_Layer()
    {
        LPDISPATCH result;
        InvokeHelper(0x53436c73, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    CString get_Name()
    {
        CString result;
        InvokeHelper(0x706e616d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
        return result;
    }
    void put_Name(LPCTSTR newValue)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x706e616d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_AllLocked()
    {
        BOOL result;
        InvokeHelper(0x416c4c63, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_AllLocked(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x416c4c63, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_BlendMode()
    {
        long result;
        InvokeHelper(0x426c4d64, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    void put_BlendMode(long newValue)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x426c4d64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    VARIANT get_LinkedLayers()
    {
        VARIANT result;
        InvokeHelper(0x4c6b6564, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
        return result;
    }
    double get_Opacity()
    {
        double result;
        InvokeHelper(0x4f706374, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
        return result;
    }
    void put_Opacity(double newValue)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x4f706374, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    BOOL get_Visible()
    {
        BOOL result;
        InvokeHelper(0x70565362, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
        return result;
    }
    void put_Visible(BOOL newValue)
    {
        static BYTE parms[] = VTS_BOOL ;
        InvokeHelper(0x70565362, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
    }
    long get_LayerType()
    {
        long result;
        InvokeHelper(0x74797065, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_ArtLayer()
    {
        LPDISPATCH result;
        InvokeHelper(0x4c41744c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    LPDISPATCH get_LayerSet()
    {
        LPDISPATCH result;
        InvokeHelper(0x4c41745a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    VARIANT get_Bounds()
    {
        VARIANT result;
        InvokeHelper(0x426e6473, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
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
    void ApplyStyle(LPCTSTR StyleName)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x41704c73, DISPATCH_METHOD, VT_EMPTY, NULL, parms, StyleName);
    }
    void Clear()
    {
        InvokeHelper(0x4d413031, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void Copy(VARIANT& Merge)
    {
        static BYTE parms[] = VTS_VARIANT ;
        InvokeHelper(0x636f7079, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Merge);
    }
    void Cut()
    {
        InvokeHelper(0x63757420, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    LPDISPATCH Merge()
    {
        LPDISPATCH result;
        InvokeHelper(0x4d674c5a, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
        return result;
    }
    void Rasterize(long Target)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x52737472, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Target);
    }
    void ApplyGaussianBlur(double Radius)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x47426c72, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Radius);
    }
    void ApplyBlur()
    {
        InvokeHelper(0x46303031, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void ApplyBlurMore()
    {
        InvokeHelper(0x46303032, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void ApplyMotionBlur(long Angle, double Radius)
    {
        static BYTE parms[] = VTS_I4 VTS_R8 ;
        InvokeHelper(0x46303033, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Angle, Radius);
    }
    void ApplyRadialBlur(long Amount, long BlurMethod, long BlurQuality)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 ;
        InvokeHelper(0x46303034, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Amount, BlurMethod, BlurQuality);
    }
    void ApplySmartBlur(double Radius, double Threshold, long BlurQuality, long Mode)
    {
        static BYTE parms[] = VTS_R8 VTS_R8 VTS_I4 VTS_I4 ;
        InvokeHelper(0x46303035, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Radius, Threshold, BlurQuality, Mode);
    }
    void ApplyDiffuseGlow(long Graininess, long GlowAmount, long ClearAmount)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 ;
        InvokeHelper(0x46303036, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Graininess, GlowAmount, ClearAmount);
    }
    void ApplyDisplace(long HorizontalScale, long VerticalScale, long DisplacementType, long UndefinedAreas, LPCTSTR DisplacementMapFile)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR ;
        InvokeHelper(0x46303135, DISPATCH_METHOD, VT_EMPTY, NULL, parms, HorizontalScale, VerticalScale, DisplacementType, UndefinedAreas, DisplacementMapFile);
    }
    void ApplyGlassEffect(long Distortion, long Smoothness, long Scaling, VARIANT& Invert, VARIANT& Texture, VARIANT& TextureFile)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x46303037, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Distortion, Smoothness, Scaling, &Invert, &Texture, &TextureFile);
    }
    void ApplyOceanRipple(long Size, long Magnitude)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 ;
        InvokeHelper(0x46303038, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Size, Magnitude);
    }
    void ApplyPinch(long Amount)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x46303039, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Amount);
    }
    void ApplyPolarCoordinates(long Conversion)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x46303130, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Conversion);
    }
    void ApplyRipple(long Amount, long Size)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 ;
        InvokeHelper(0x46303131, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Amount, Size);
    }
    void ApplyShear(VARIANT& Curve, long UndefinedAreas)
    {
        static BYTE parms[] = VTS_VARIANT VTS_I4 ;
        InvokeHelper(0x46303132, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Curve, UndefinedAreas);
    }
    void ApplySpherize(long Amount, long Mode)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 ;
        InvokeHelper(0x46303133, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Amount, Mode);
    }
    void ApplyTwirl(long Angle)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x46303134, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Angle);
    }
    void ApplyWave(long GeneratorNumber, long MinimumWavelength, long MaximumWavelength, long MinimumAmplitude, long MaximumAmplitude, long HorizontalScale, long VerticalScale, long WaveType, long UndefinedAreas, long RandomSeed)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
        InvokeHelper(0x46303136, DISPATCH_METHOD, VT_EMPTY, NULL, parms, GeneratorNumber, MinimumWavelength, MaximumWavelength, MinimumAmplitude, MaximumAmplitude, HorizontalScale, VerticalScale, WaveType, UndefinedAreas, RandomSeed);
    }
    void ApplyZigZag(long Amount, long Ridges, long Style)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 ;
        InvokeHelper(0x46303137, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Amount, Ridges, Style);
    }
    void ApplyAddNoise(double Amount, long Distribution, BOOL Monochromatic)
    {
        static BYTE parms[] = VTS_R8 VTS_I4 VTS_BOOL ;
        InvokeHelper(0x46303138, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Amount, Distribution, Monochromatic);
    }
    void ApplyDespeckle()
    {
        InvokeHelper(0x46303139, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void ApplyDustAndScratches(long Radius, long Threshold)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 ;
        InvokeHelper(0x46303230, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Radius, Threshold);
    }
    void ApplyMedianNoise(double Radius)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x46303231, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Radius);
    }
    void ApplyClouds()
    {
        InvokeHelper(0x46303331, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void ApplyDifferenceClouds()
    {
        InvokeHelper(0x46303332, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void ApplyLensFlare(long Brightness, VARIANT& FlareCenter, long LensType)
    {
        static BYTE parms[] = VTS_I4 VTS_VARIANT VTS_I4 ;
        InvokeHelper(0x46303333, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Brightness, &FlareCenter, LensType);
    }
    void ApplyTextureFill(LPCTSTR TextureFile)
    {
        static BYTE parms[] = VTS_BSTR ;
        InvokeHelper(0x46303334, DISPATCH_METHOD, VT_EMPTY, NULL, parms, TextureFile);
    }
    void ApplySharpen()
    {
        InvokeHelper(0x46303232, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void ApplySharpenEdges()
    {
        InvokeHelper(0x46303233, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void ApplySharpenMore()
    {
        InvokeHelper(0x46303234, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void ApplyUnSharpMask(double Amount, double Radius, long Threshold)
    {
        static BYTE parms[] = VTS_R8 VTS_R8 VTS_I4 ;
        InvokeHelper(0x46303235, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Amount, Radius, Threshold);
    }
    void ApplyDeInterlace(long EliminateFields, long CreateFields)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 ;
        InvokeHelper(0x46303335, DISPATCH_METHOD, VT_EMPTY, NULL, parms, EliminateFields, CreateFields);
    }
    void ApplyNTSC()
    {
        InvokeHelper(0x46303336, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void ApplyCustomFilter(VARIANT& Characteristics, long Scale, long Offset)
    {
        static BYTE parms[] = VTS_VARIANT VTS_I4 VTS_I4 ;
        InvokeHelper(0x46303236, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Characteristics, Scale, Offset);
    }
    void ApplyHighPass(double Radius)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x46303330, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Radius);
    }
    void ApplyMaximum(double Radius)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x46303237, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Radius);
    }
    void ApplyMinimum(double Radius)
    {
        static BYTE parms[] = VTS_R8 ;
        InvokeHelper(0x46303238, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Radius);
    }
    void ApplyOffset(double Horizontal, double Vertical, long UndefinedAreas)
    {
        static BYTE parms[] = VTS_R8 VTS_R8 VTS_I4 ;
        InvokeHelper(0x46303239, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Horizontal, Vertical, UndefinedAreas);
    }
    void AdjustLevels(long InputRangeStart, long InputRangeEnd, double InputRangeGamma, long OutputRangeStart, long OutputRangeEnd)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 VTS_R8 VTS_I4 VTS_I4 ;
        InvokeHelper(0x41643031, DISPATCH_METHOD, VT_EMPTY, NULL, parms, InputRangeStart, InputRangeEnd, InputRangeGamma, OutputRangeStart, OutputRangeEnd);
    }
    void AutoLevels()
    {
        InvokeHelper(0x41423031, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void AutoContrast()
    {
        InvokeHelper(0x41643032, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void AdjustCurves(VARIANT& CurveShape)
    {
        static BYTE parms[] = VTS_VARIANT ;
        InvokeHelper(0x41643033, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &CurveShape);
    }
    void AdjustBrightnessContrast(long Brightness, long Contrast)
    {
        static BYTE parms[] = VTS_I4 VTS_I4 ;
        InvokeHelper(0x41643034, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Brightness, Contrast);
    }
    void AdjustColorBalance(VARIANT& Shadows, VARIANT& Midtones, VARIANT& Highlights, VARIANT& PreserveLuminosity)
    {
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x41643035, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Shadows, &Midtones, &Highlights, &PreserveLuminosity);
    }
    void Desaturate()
    {
        InvokeHelper(0x41643036, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void SelectiveColor(long SelectionMethod, VARIANT& Reds, VARIANT& Yellows, VARIANT& Greens, VARIANT& Cyans, VARIANT& Blues, VARIANT& Magentas, VARIANT& Whites, VARIANT& Neutrals, VARIANT& Blacks)
    {
        static BYTE parms[] = VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x41643037, DISPATCH_METHOD, VT_EMPTY, NULL, parms, SelectionMethod, &Reds, &Yellows, &Greens, &Cyans, &Blues, &Magentas, &Whites, &Neutrals, &Blacks);
    }
    void MixChannels(VARIANT& OutputChannels, VARIANT& Monochrome)
    {
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x41643038, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &OutputChannels, &Monochrome);
    }
    void Invert()
    {
        InvokeHelper(0x69566f6e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void Equalize()
    {
        InvokeHelper(0x41643039, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void Threshold(long Level)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x41643131, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Level);
    }
    void Posterize(long Levels)
    {
        static BYTE parms[] = VTS_I4 ;
        InvokeHelper(0x41643130, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Levels);
    }
    void Unlink()
    {
        InvokeHelper(0x556c6e6b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }
    void Link(LPDISPATCH With)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x6c6b546f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, With);
    }
    void Translate(VARIANT& DeltaX, VARIANT& DeltaY)
    {
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x4d765073, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &DeltaX, &DeltaY);
    }
    void Rotate(double Angle, VARIANT& Anchor)
    {
        static BYTE parms[] = VTS_R8 VTS_VARIANT ;
        InvokeHelper(0x526f7461, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Angle, &Anchor);
    }
    void Resize(VARIANT& Horizontal, VARIANT& Vertical, VARIANT& Anchor)
    {
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x53636c65, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Horizontal, &Vertical, &Anchor);
    }
    void MoveToBeginning(LPDISPATCH Container)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x4d764566, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Container);
    }
    void MoveToEnd(LPDISPATCH Container)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x4d764565, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Container);
    }
    void MoveBefore(LPDISPATCH RelativeObject)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x4d764562, DISPATCH_METHOD, VT_EMPTY, NULL, parms, RelativeObject);
    }
    void MoveAfter(LPDISPATCH RelativeObject)
    {
        static BYTE parms[] = VTS_DISPATCH ;
        InvokeHelper(0x4d764561, DISPATCH_METHOD, VT_EMPTY, NULL, parms, RelativeObject);
    }
    LPDISPATCH Duplicate(VARIANT& RelativeObject, VARIANT& InsertionLocation)
    {
        LPDISPATCH result;
        static BYTE parms[] = VTS_VARIANT VTS_VARIANT ;
        InvokeHelper(0x636c6f6e, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &RelativeObject, &InsertionLocation);
        return result;
    }
    void Move(LPDISPATCH RelativeObject, long InsertionLocation)
    {
        static BYTE parms[] = VTS_DISPATCH VTS_I4 ;
        InvokeHelper(0x6d6f7665, DISPATCH_METHOD, VT_EMPTY, NULL, parms, RelativeObject, InsertionLocation);
    }
    void Delete()
    {
        InvokeHelper(0x64656c6f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
    }

    // ArtLayer properties
public:

};

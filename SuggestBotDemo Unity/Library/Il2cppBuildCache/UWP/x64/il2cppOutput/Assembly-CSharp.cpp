#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,HololensScreenshot/KeywordAction>
struct Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,HololensScreenshot/KeywordAction>
struct KeyCollection_t15F81DE06CB74ED7E9930EA7B3CF931ABC807E05;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,HololensScreenshot/KeywordAction>
struct ValueCollection_t15246913AC6BE9F7C05A104649F29CAF339A0E80;
// System.Collections.Generic.Dictionary`2/Entry<System.String,HololensScreenshot/KeywordAction>[]
struct EntryU5BU5D_tDE2E341C9D2E7775422025CFF4E6CF3B9EA61CBB;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Resolution[]
struct ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597;
// UnityEngine.Windows.Speech.SemanticMeaning[]
struct SemanticMeaningU5BU5D_t7BA8135E11B4D0C1065824DA86D4B3DB63A5B4DD;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// EyeGazePointing
struct EyeGazePointing_t2B84E7090EFD354630AFE215AF3A865FE2198DB0;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// HololensScreenshot
struct HololensScreenshot_tB7BFFB7A4337F524319968E1217F392B0E789E63;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24;
// UnityEngine.Windows.Speech.KeywordRecognizer
struct KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Windows.WebCam.PhotoCapture
struct PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74;
// UnityEngine.Windows.WebCam.PhotoCaptureFrame
struct PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0;
// UnityEngine.Windows.Speech.PhraseRecognizer
struct PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2;
// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// HololensScreenshot/KeywordAction
struct KeywordAction_t8BFFE7D9BE1DFBCC2AD3C31B54763AF2169E3894;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.Windows.WebCam.PhotoCapture/OnCaptureResourceCreatedCallback
struct OnCaptureResourceCreatedCallback_t4975687A3DBE3DF603E72841D83C2BE2346B54DD;
// UnityEngine.Windows.WebCam.PhotoCapture/OnCapturedToMemoryCallback
struct OnCapturedToMemoryCallback_t7EEEA0998A9D7014C762A55764EC06C4C052B2C6;
// UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStartedCallback
struct OnPhotoModeStartedCallback_t21FCF86FB7933100968EE01A7B4BFB751F53EF92;
// UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStoppedCallback
struct OnPhotoModeStoppedCallback_tF6A2F039E1A8DB64BD4CF25675BED44F74E5B1F6;
// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate
struct PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F;

IL2CPP_EXTERN_C RuntimeClass* CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGazeProvider_t8CD90C5B0C055251CD31B191A9C898C0717BC3E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeywordAction_t8BFFE7D9BE1DFBCC2AD3C31B54763AF2169E3894_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCaptureResourceCreatedCallback_t4975687A3DBE3DF603E72841D83C2BE2346B54DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCapturedToMemoryCallback_t7EEEA0998A9D7014C762A55764EC06C4C052B2C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnPhotoModeStartedCallback_t21FCF86FB7933100968EE01A7B4BFB751F53EF92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnPhotoModeStoppedCallback_tF6A2F039E1A8DB64BD4CF25675BED44F74E5B1F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral25E0158D7778306A9F6E78EB553031B1E31C0EB7;
IL2CPP_EXTERN_C String_t* _stringLiteral5FCB964AC0598FC25B6C6A52C1FC24361824E751;
IL2CPP_EXTERN_C String_t* _stringLiteralC669F5942A80C2AEBE05A75A422F5976B7C1563B;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE298AC263F56DC19DB48B795C5B4BEC470424A89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m667D6142141480AA095056F989BCE5D0F3942C01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m60439039CB22A9C0C302DD10143A1363F611DDCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m46A29642D3E63567775BD4DCFCB9E2B592927599_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HololensScreenshot_KeywordRecognizer_OnPhraseRecognized_mCE5AD759BE883F195884AB0853A8E23347DB4D88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HololensScreenshot_OnCapturedPhotoToMemory_m2F32851F4C27B985DB44E88ED5E2F3FC5DFF3378_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HololensScreenshot_OnPhotoCaptureCreated_mD143DD550842BEA5CD508D30F4276593F1AA8001_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HololensScreenshot_OnPhotoModeStarted_mA5EB6C8AAC220D2AD964E81FFA362E3D35B8658C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HololensScreenshot_OnStoppedPhotoMode_m37FEB48F6F303B7AE5728D34EF429B8D1F5631C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HololensScreenshot_TakePicture_m7CA872BD1296E2A1CBF0DE63C41772B1EA1A4E59_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct SemanticMeaning_t5AEB02C787CA22E278A1E6D32FDA7CCA378F86E3_marshaled_com;
struct SemanticMeaning_t5AEB02C787CA22E278A1E6D32FDA7CCA378F86E3_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,HololensScreenshot/KeywordAction>
struct Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDE2E341C9D2E7775422025CFF4E6CF3B9EA61CBB* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t15F81DE06CB74ED7E9930EA7B3CF931ABC807E05 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t15246913AC6BE9F7C05A104649F29CAF339A0E80 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7, ___entries_1)); }
	inline EntryU5BU5D_tDE2E341C9D2E7775422025CFF4E6CF3B9EA61CBB* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDE2E341C9D2E7775422025CFF4E6CF3B9EA61CBB** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDE2E341C9D2E7775422025CFF4E6CF3B9EA61CBB* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7, ___keys_7)); }
	inline KeyCollection_t15F81DE06CB74ED7E9930EA7B3CF931ABC807E05 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t15F81DE06CB74ED7E9930EA7B3CF931ABC807E05 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t15F81DE06CB74ED7E9930EA7B3CF931ABC807E05 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7, ___values_8)); }
	inline ValueCollection_t15246913AC6BE9F7C05A104649F29CAF339A0E80 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t15246913AC6BE9F7C05A104649F29CAF339A0E80 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t15246913AC6BE9F7C05A104649F29CAF339A0E80 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,HololensScreenshot/KeywordAction>
struct KeyCollection_t15F81DE06CB74ED7E9930EA7B3CF931ABC807E05  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t15F81DE06CB74ED7E9930EA7B3CF931ABC807E05, ___dictionary_0)); }
	inline Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Windows.WebCam.CapturePixelFormat
struct CapturePixelFormat_t862C8DB99BB8A10907BDC63453CD3DAD3E422A61 
{
public:
	// System.Int32 UnityEngine.Windows.WebCam.CapturePixelFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CapturePixelFormat_t862C8DB99BB8A10907BDC63453CD3DAD3E422A61, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Windows.Speech.ConfidenceLevel
struct ConfidenceLevel_t1961445160E273E8B221599F4596C7B1A56CACE3 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.ConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfidenceLevel_t1961445160E273E8B221599F4596C7B1A56CACE3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Windows.WebCam.PhotoCapture
struct PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.WebCam.PhotoCapture::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

struct PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_StaticFields
{
public:
	// UnityEngine.Resolution[] UnityEngine.Windows.WebCam.PhotoCapture::s_SupportedResolutions
	ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* ___s_SupportedResolutions_1;
	// System.Int64 UnityEngine.Windows.WebCam.PhotoCapture::HR_SUCCESS
	int64_t ___HR_SUCCESS_2;

public:
	inline static int32_t get_offset_of_s_SupportedResolutions_1() { return static_cast<int32_t>(offsetof(PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_StaticFields, ___s_SupportedResolutions_1)); }
	inline ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* get_s_SupportedResolutions_1() const { return ___s_SupportedResolutions_1; }
	inline ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597** get_address_of_s_SupportedResolutions_1() { return &___s_SupportedResolutions_1; }
	inline void set_s_SupportedResolutions_1(ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* value)
	{
		___s_SupportedResolutions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SupportedResolutions_1), (void*)value);
	}

	inline static int32_t get_offset_of_HR_SUCCESS_2() { return static_cast<int32_t>(offsetof(PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_StaticFields, ___HR_SUCCESS_2)); }
	inline int64_t get_HR_SUCCESS_2() const { return ___HR_SUCCESS_2; }
	inline int64_t* get_address_of_HR_SUCCESS_2() { return &___HR_SUCCESS_2; }
	inline void set_HR_SUCCESS_2(int64_t value)
	{
		___HR_SUCCESS_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Windows.WebCam.PhotoCapture
struct PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.Windows.WebCam.PhotoCapture
struct PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};

// UnityEngine.Windows.Speech.PhraseRecognizer
struct PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.Speech.PhraseRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate UnityEngine.Windows.Speech.PhraseRecognizer::OnPhraseRecognized
	PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * ___OnPhraseRecognized_1;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_OnPhraseRecognized_1() { return static_cast<int32_t>(offsetof(PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2, ___OnPhraseRecognized_1)); }
	inline PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * get_OnPhraseRecognized_1() const { return ___OnPhraseRecognized_1; }
	inline PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F ** get_address_of_OnPhraseRecognized_1() { return &___OnPhraseRecognized_1; }
	inline void set_OnPhraseRecognized_1(PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * value)
	{
		___OnPhraseRecognized_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPhraseRecognized_1), (void*)value);
	}
};


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// UnityEngine.Windows.WebCam.PhotoCapture/CaptureResultType
struct CaptureResultType_tA7FDF613D8AE80F99DDF89D102A04C4F5D00768F 
{
public:
	// System.Int32 UnityEngine.Windows.WebCam.PhotoCapture/CaptureResultType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CaptureResultType_tA7FDF613D8AE80F99DDF89D102A04C4F5D00768F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Windows.WebCam.CameraParameters
struct CameraParameters_tA8CA69CDABC65CC198580835143B3C1BDD95D965 
{
public:
	// System.Single UnityEngine.Windows.WebCam.CameraParameters::m_HologramOpacity
	float ___m_HologramOpacity_0;
	// System.Single UnityEngine.Windows.WebCam.CameraParameters::m_FrameRate
	float ___m_FrameRate_1;
	// System.Int32 UnityEngine.Windows.WebCam.CameraParameters::m_CameraResolutionWidth
	int32_t ___m_CameraResolutionWidth_2;
	// System.Int32 UnityEngine.Windows.WebCam.CameraParameters::m_CameraResolutionHeight
	int32_t ___m_CameraResolutionHeight_3;
	// UnityEngine.Windows.WebCam.CapturePixelFormat UnityEngine.Windows.WebCam.CameraParameters::m_PixelFormat
	int32_t ___m_PixelFormat_4;

public:
	inline static int32_t get_offset_of_m_HologramOpacity_0() { return static_cast<int32_t>(offsetof(CameraParameters_tA8CA69CDABC65CC198580835143B3C1BDD95D965, ___m_HologramOpacity_0)); }
	inline float get_m_HologramOpacity_0() const { return ___m_HologramOpacity_0; }
	inline float* get_address_of_m_HologramOpacity_0() { return &___m_HologramOpacity_0; }
	inline void set_m_HologramOpacity_0(float value)
	{
		___m_HologramOpacity_0 = value;
	}

	inline static int32_t get_offset_of_m_FrameRate_1() { return static_cast<int32_t>(offsetof(CameraParameters_tA8CA69CDABC65CC198580835143B3C1BDD95D965, ___m_FrameRate_1)); }
	inline float get_m_FrameRate_1() const { return ___m_FrameRate_1; }
	inline float* get_address_of_m_FrameRate_1() { return &___m_FrameRate_1; }
	inline void set_m_FrameRate_1(float value)
	{
		___m_FrameRate_1 = value;
	}

	inline static int32_t get_offset_of_m_CameraResolutionWidth_2() { return static_cast<int32_t>(offsetof(CameraParameters_tA8CA69CDABC65CC198580835143B3C1BDD95D965, ___m_CameraResolutionWidth_2)); }
	inline int32_t get_m_CameraResolutionWidth_2() const { return ___m_CameraResolutionWidth_2; }
	inline int32_t* get_address_of_m_CameraResolutionWidth_2() { return &___m_CameraResolutionWidth_2; }
	inline void set_m_CameraResolutionWidth_2(int32_t value)
	{
		___m_CameraResolutionWidth_2 = value;
	}

	inline static int32_t get_offset_of_m_CameraResolutionHeight_3() { return static_cast<int32_t>(offsetof(CameraParameters_tA8CA69CDABC65CC198580835143B3C1BDD95D965, ___m_CameraResolutionHeight_3)); }
	inline int32_t get_m_CameraResolutionHeight_3() const { return ___m_CameraResolutionHeight_3; }
	inline int32_t* get_address_of_m_CameraResolutionHeight_3() { return &___m_CameraResolutionHeight_3; }
	inline void set_m_CameraResolutionHeight_3(int32_t value)
	{
		___m_CameraResolutionHeight_3 = value;
	}

	inline static int32_t get_offset_of_m_PixelFormat_4() { return static_cast<int32_t>(offsetof(CameraParameters_tA8CA69CDABC65CC198580835143B3C1BDD95D965, ___m_PixelFormat_4)); }
	inline int32_t get_m_PixelFormat_4() const { return ___m_PixelFormat_4; }
	inline int32_t* get_address_of_m_PixelFormat_4() { return &___m_PixelFormat_4; }
	inline void set_m_PixelFormat_4(int32_t value)
	{
		___m_PixelFormat_4 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Windows.Speech.KeywordRecognizer
struct KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F  : public PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2
{
public:
	// System.Collections.Generic.IEnumerable`1<System.String> UnityEngine.Windows.Speech.KeywordRecognizer::<Keywords>k__BackingField
	RuntimeObject* ___U3CKeywordsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F, ___U3CKeywordsU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CKeywordsU3Ek__BackingField_2() const { return ___U3CKeywordsU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CKeywordsU3Ek__BackingField_2() { return &___U3CKeywordsU3Ek__BackingField_2; }
	inline void set_U3CKeywordsU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CKeywordsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_2), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Windows.WebCam.PhotoCaptureFrame
struct PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.WebCam.PhotoCaptureFrame::m_NativePtr
	intptr_t ___m_NativePtr_0;
	// System.Int32 UnityEngine.Windows.WebCam.PhotoCaptureFrame::<dataLength>k__BackingField
	int32_t ___U3CdataLengthU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Windows.WebCam.PhotoCaptureFrame::<hasLocationData>k__BackingField
	bool ___U3ChasLocationDataU3Ek__BackingField_2;
	// UnityEngine.Windows.WebCam.CapturePixelFormat UnityEngine.Windows.WebCam.PhotoCaptureFrame::<pixelFormat>k__BackingField
	int32_t ___U3CpixelFormatU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}

	inline static int32_t get_offset_of_U3CdataLengthU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0, ___U3CdataLengthU3Ek__BackingField_1)); }
	inline int32_t get_U3CdataLengthU3Ek__BackingField_1() const { return ___U3CdataLengthU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CdataLengthU3Ek__BackingField_1() { return &___U3CdataLengthU3Ek__BackingField_1; }
	inline void set_U3CdataLengthU3Ek__BackingField_1(int32_t value)
	{
		___U3CdataLengthU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3ChasLocationDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0, ___U3ChasLocationDataU3Ek__BackingField_2)); }
	inline bool get_U3ChasLocationDataU3Ek__BackingField_2() const { return ___U3ChasLocationDataU3Ek__BackingField_2; }
	inline bool* get_address_of_U3ChasLocationDataU3Ek__BackingField_2() { return &___U3ChasLocationDataU3Ek__BackingField_2; }
	inline void set_U3ChasLocationDataU3Ek__BackingField_2(bool value)
	{
		___U3ChasLocationDataU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CpixelFormatU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0, ___U3CpixelFormatU3Ek__BackingField_3)); }
	inline int32_t get_U3CpixelFormatU3Ek__BackingField_3() const { return ___U3CpixelFormatU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CpixelFormatU3Ek__BackingField_3() { return &___U3CpixelFormatU3Ek__BackingField_3; }
	inline void set_U3CpixelFormatU3Ek__BackingField_3(int32_t value)
	{
		___U3CpixelFormatU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF 
{
public:
	// UnityEngine.Windows.Speech.ConfidenceLevel UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::confidence
	int32_t ___confidence_0;
	// UnityEngine.Windows.Speech.SemanticMeaning[] UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::semanticMeanings
	SemanticMeaningU5BU5D_t7BA8135E11B4D0C1065824DA86D4B3DB63A5B4DD* ___semanticMeanings_1;
	// System.String UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::text
	String_t* ___text_2;
	// System.DateTime UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::phraseStartTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___phraseStartTime_3;
	// System.TimeSpan UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::phraseDuration
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___phraseDuration_4;

public:
	inline static int32_t get_offset_of_confidence_0() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF, ___confidence_0)); }
	inline int32_t get_confidence_0() const { return ___confidence_0; }
	inline int32_t* get_address_of_confidence_0() { return &___confidence_0; }
	inline void set_confidence_0(int32_t value)
	{
		___confidence_0 = value;
	}

	inline static int32_t get_offset_of_semanticMeanings_1() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF, ___semanticMeanings_1)); }
	inline SemanticMeaningU5BU5D_t7BA8135E11B4D0C1065824DA86D4B3DB63A5B4DD* get_semanticMeanings_1() const { return ___semanticMeanings_1; }
	inline SemanticMeaningU5BU5D_t7BA8135E11B4D0C1065824DA86D4B3DB63A5B4DD** get_address_of_semanticMeanings_1() { return &___semanticMeanings_1; }
	inline void set_semanticMeanings_1(SemanticMeaningU5BU5D_t7BA8135E11B4D0C1065824DA86D4B3DB63A5B4DD* value)
	{
		___semanticMeanings_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___semanticMeanings_1), (void*)value);
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_2), (void*)value);
	}

	inline static int32_t get_offset_of_phraseStartTime_3() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF, ___phraseStartTime_3)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_phraseStartTime_3() const { return ___phraseStartTime_3; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_phraseStartTime_3() { return &___phraseStartTime_3; }
	inline void set_phraseStartTime_3(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___phraseStartTime_3 = value;
	}

	inline static int32_t get_offset_of_phraseDuration_4() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF, ___phraseDuration_4)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_phraseDuration_4() const { return ___phraseDuration_4; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_phraseDuration_4() { return &___phraseDuration_4; }
	inline void set_phraseDuration_4(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___phraseDuration_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF_marshaled_pinvoke
{
	int32_t ___confidence_0;
	SemanticMeaning_t5AEB02C787CA22E278A1E6D32FDA7CCA378F86E3_marshaled_pinvoke* ___semanticMeanings_1;
	char* ___text_2;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___phraseStartTime_3;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___phraseDuration_4;
};
// Native definition for COM marshalling of UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF_marshaled_com
{
	int32_t ___confidence_0;
	SemanticMeaning_t5AEB02C787CA22E278A1E6D32FDA7CCA378F86E3_marshaled_com* ___semanticMeanings_1;
	Il2CppChar* ___text_2;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___phraseStartTime_3;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___phraseDuration_4;
};

// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult
struct PhotoCaptureResult_t52FACAF7EF0D013BFE3E7DA93629702818507226 
{
public:
	// UnityEngine.Windows.WebCam.PhotoCapture/CaptureResultType UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult::resultType
	int32_t ___resultType_0;
	// System.Int64 UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult::hResult
	int64_t ___hResult_1;

public:
	inline static int32_t get_offset_of_resultType_0() { return static_cast<int32_t>(offsetof(PhotoCaptureResult_t52FACAF7EF0D013BFE3E7DA93629702818507226, ___resultType_0)); }
	inline int32_t get_resultType_0() const { return ___resultType_0; }
	inline int32_t* get_address_of_resultType_0() { return &___resultType_0; }
	inline void set_resultType_0(int32_t value)
	{
		___resultType_0 = value;
	}

	inline static int32_t get_offset_of_hResult_1() { return static_cast<int32_t>(offsetof(PhotoCaptureResult_t52FACAF7EF0D013BFE3E7DA93629702818507226, ___hResult_1)); }
	inline int64_t get_hResult_1() const { return ___hResult_1; }
	inline int64_t* get_address_of_hResult_1() { return &___hResult_1; }
	inline void set_hResult_1(int64_t value)
	{
		___hResult_1 = value;
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// HololensScreenshot/KeywordAction
struct KeywordAction_t8BFFE7D9BE1DFBCC2AD3C31B54763AF2169E3894  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.WebCam.PhotoCapture/OnCaptureResourceCreatedCallback
struct OnCaptureResourceCreatedCallback_t4975687A3DBE3DF603E72841D83C2BE2346B54DD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.WebCam.PhotoCapture/OnCapturedToMemoryCallback
struct OnCapturedToMemoryCallback_t7EEEA0998A9D7014C762A55764EC06C4C052B2C6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStartedCallback
struct OnPhotoModeStartedCallback_t21FCF86FB7933100968EE01A7B4BFB751F53EF92  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStoppedCallback
struct OnPhotoModeStoppedCallback_tF6A2F039E1A8DB64BD4CF25675BED44F74E5B1F6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate
struct PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// EyeGazePointing
struct EyeGazePointing_t2B84E7090EFD354630AFE215AF3A865FE2198DB0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// HololensScreenshot
struct HololensScreenshot_tB7BFFB7A4337F524319968E1217F392B0E789E63  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Windows.WebCam.PhotoCapture HololensScreenshot::photoCaptureObject
	PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74 * ___photoCaptureObject_4;
	// UnityEngine.Windows.Speech.KeywordRecognizer HololensScreenshot::keywordRecognizer
	KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * ___keywordRecognizer_5;
	// System.Collections.Generic.Dictionary`2<System.String,HololensScreenshot/KeywordAction> HololensScreenshot::keywordCollection
	Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7 * ___keywordCollection_6;

public:
	inline static int32_t get_offset_of_photoCaptureObject_4() { return static_cast<int32_t>(offsetof(HololensScreenshot_tB7BFFB7A4337F524319968E1217F392B0E789E63, ___photoCaptureObject_4)); }
	inline PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74 * get_photoCaptureObject_4() const { return ___photoCaptureObject_4; }
	inline PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74 ** get_address_of_photoCaptureObject_4() { return &___photoCaptureObject_4; }
	inline void set_photoCaptureObject_4(PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74 * value)
	{
		___photoCaptureObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photoCaptureObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_keywordRecognizer_5() { return static_cast<int32_t>(offsetof(HololensScreenshot_tB7BFFB7A4337F524319968E1217F392B0E789E63, ___keywordRecognizer_5)); }
	inline KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * get_keywordRecognizer_5() const { return ___keywordRecognizer_5; }
	inline KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F ** get_address_of_keywordRecognizer_5() { return &___keywordRecognizer_5; }
	inline void set_keywordRecognizer_5(KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * value)
	{
		___keywordRecognizer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keywordRecognizer_5), (void*)value);
	}

	inline static int32_t get_offset_of_keywordCollection_6() { return static_cast<int32_t>(offsetof(HololensScreenshot_tB7BFFB7A4337F524319968E1217F392B0E789E63, ___keywordCollection_6)); }
	inline Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7 * get_keywordCollection_6() const { return ___keywordCollection_6; }
	inline Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7 ** get_address_of_keywordCollection_6() { return &___keywordCollection_6; }
	inline void set_keywordCollection_6(Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7 * value)
	{
		___keywordCollection_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keywordCollection_6), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_UVRect_37;

public:
	inline static int32_t get_offset_of_m_Texture_36() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_Texture_36)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Texture_36() const { return ___m_Texture_36; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Texture_36() { return &___m_Texture_36; }
	inline void set_m_Texture_36(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Texture_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_UVRect_37() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_UVRect_37)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_UVRect_37() const { return ___m_UVRect_37; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_UVRect_37() { return &___m_UVRect_37; }
	inline void set_m_UVRect_37(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_UVRect_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D (const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, float ___distance0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,HololensScreenshot/KeywordAction>::.ctor()
inline void Dictionary_2__ctor_m60439039CB22A9C0C302DD10143A1363F611DDCD (Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void HololensScreenshot/KeywordAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordAction__ctor_m84D41EF2D96B2664D0E5EBCF5FD2799E45ED7395 (KeywordAction_t8BFFE7D9BE1DFBCC2AD3C31B54763AF2169E3894 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,HololensScreenshot/KeywordAction>::Add(!0,!1)
inline void Dictionary_2_Add_mE298AC263F56DC19DB48B795C5B4BEC470424A89 (Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7 * __this, String_t* ___key0, KeywordAction_t8BFFE7D9BE1DFBCC2AD3C31B54763AF2169E3894 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7 *, String_t*, KeywordAction_t8BFFE7D9BE1DFBCC2AD3C31B54763AF2169E3894 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,HololensScreenshot/KeywordAction>::get_Keys()
inline KeyCollection_t15F81DE06CB74ED7E9930EA7B3CF931ABC807E05 * Dictionary_2_get_Keys_m46A29642D3E63567775BD4DCFCB9E2B592927599 (Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7 * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t15F81DE06CB74ED7E9930EA7B3CF931ABC807E05 * (*) (Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7 *, const RuntimeMethod*))Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared)(__this, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.Void UnityEngine.Windows.Speech.KeywordRecognizer::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognizer__ctor_m2B1B5B8DD51A928C5E74D28958D033B735B16B0D (KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___keywords0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizedDelegate__ctor_m01A9360909C670C8869C24BB40DC38C2EFCAA03C (PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::add_OnPhraseRecognized(UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_add_OnPhraseRecognized_m78C6A460FD186BB5E9155C45A4DEDF369F80875D (PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2 * __this, PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Start_m051D982B305F1F0A7274443A8683417690276BA4 (PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,HololensScreenshot/KeywordAction>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m667D6142141480AA095056F989BCE5D0F3942C01 (Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7 * __this, String_t* ___key0, KeywordAction_t8BFFE7D9BE1DFBCC2AD3C31B54763AF2169E3894 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7 *, String_t*, KeywordAction_t8BFFE7D9BE1DFBCC2AD3C31B54763AF2169E3894 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void HololensScreenshot/KeywordAction::Invoke(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordAction_Invoke_m50E634395C58A0D3E45B84C3E22BBC9E12F4E4DB (KeywordAction_t8BFFE7D9BE1DFBCC2AD3C31B54763AF2169E3894 * __this, PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF  ___args0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCapture/OnCaptureResourceCreatedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCaptureResourceCreatedCallback__ctor_m18862383676D88F484C4F1D55DE53FD76A254BF6 (OnCaptureResourceCreatedCallback_t4975687A3DBE3DF603E72841D83C2BE2346B54DD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCapture::CreateAsync(System.Boolean,UnityEngine.Windows.WebCam.PhotoCapture/OnCaptureResourceCreatedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCapture_CreateAsync_mE7BE1ED985C04DE2A6B65027E42098A12A4B2750 (bool ___showHolograms0, OnCaptureResourceCreatedCallback_t4975687A3DBE3DF603E72841D83C2BE2346B54DD * ___onCreatedCallback1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.CameraParameters::set_hologramOpacity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraParameters_set_hologramOpacity_mEBA8173F3E9C2B667D1CEC9E02FE27F40840D1C2 (CameraParameters_tA8CA69CDABC65CC198580835143B3C1BDD95D965 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.CameraParameters::set_cameraResolutionWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraParameters_set_cameraResolutionWidth_mE94FDBD9FF805D0B214F8754F56100F699B9BBF2 (CameraParameters_tA8CA69CDABC65CC198580835143B3C1BDD95D965 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.CameraParameters::set_cameraResolutionHeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraParameters_set_cameraResolutionHeight_m6D59543C15169DBB84D1F1749FDC98721E152AFB (CameraParameters_tA8CA69CDABC65CC198580835143B3C1BDD95D965 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.CameraParameters::set_pixelFormat(UnityEngine.Windows.WebCam.CapturePixelFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraParameters_set_pixelFormat_m1198D32C2E3FCD471AB171FEED9F288E306AD5AA (CameraParameters_tA8CA69CDABC65CC198580835143B3C1BDD95D965 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStartedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPhotoModeStartedCallback__ctor_mD122FA9A03DF5DD7A950ADD2DE0E1061779415B8 (OnPhotoModeStartedCallback_t21FCF86FB7933100968EE01A7B4BFB751F53EF92 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCapture::StartPhotoModeAsync(UnityEngine.Windows.WebCam.CameraParameters,UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStartedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCapture_StartPhotoModeAsync_mB5549C9BEE0506118AC9C38F6EF1BB6A46FF2D39 (PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74 * __this, CameraParameters_tA8CA69CDABC65CC198580835143B3C1BDD95D965  ___setupParams0, OnPhotoModeStartedCallback_t21FCF86FB7933100968EE01A7B4BFB751F53EF92 * ___onPhotoModeStartedCallback1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult::get_success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotoCaptureResult_get_success_mDD98D8024B1B449CDF9C589C3E89AA7908DA51F7 (PhotoCaptureResult_t52FACAF7EF0D013BFE3E7DA93629702818507226 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCapture/OnCapturedToMemoryCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCapturedToMemoryCallback__ctor_mE6373867AD9BC33554D11BECDCF720FF7F41F431 (OnCapturedToMemoryCallback_t7EEEA0998A9D7014C762A55764EC06C4C052B2C6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCapture::TakePhotoAsync(UnityEngine.Windows.WebCam.PhotoCapture/OnCapturedToMemoryCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCapture_TakePhotoAsync_m39986F380BAD28E0FCC1F93476E30589ADFEC447 (PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74 * __this, OnCapturedToMemoryCallback_t7EEEA0998A9D7014C762A55764EC06C4C052B2C6 * ___onCapturedPhotoToMemoryCallback0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCaptureFrame::UploadImageDataToTexture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCaptureFrame_UploadImageDataToTexture_m1119BA5BC7FB8267FE5419392EFA551548B3FE00 (PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___targetTexture0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.RawImage>()
inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99 (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStoppedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPhotoModeStoppedCallback__ctor_mF8240EE3B1A20732ED29A0CF0D1CCE30CD838E6B (OnPhotoModeStoppedCallback_tF6A2F039E1A8DB64BD4CF25675BED44F74E5B1F6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCapture::StopPhotoModeAsync(UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStoppedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCapture_StopPhotoModeAsync_m06C7500BD2A5CA126F907FB07BA5C0FA8E9328CB (PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74 * __this, OnPhotoModeStoppedCallback_tF6A2F039E1A8DB64BD4CF25675BED44F74E5B1F6 * ___onPhotoModeStoppedCallback0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.WebCam.PhotoCapture::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotoCapture_Dispose_mC657D88FF9C469242501DC5E01C6EADA8DEE49CC (PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EyeGazePointing::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazePointing_Start_mC928709383E4673665D16E7A227C0D9DE3A54D0C (EyeGazePointing_t2B84E7090EFD354630AFE215AF3A865FE2198DB0 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void EyeGazePointing::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazePointing_Update_m6AA2176E5FE82D6BF92C774AF5AF5656D8252A4B (EyeGazePointing_t2B84E7090EFD354630AFE215AF3A865FE2198DB0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGazeProvider_t8CD90C5B0C055251CD31B191A9C898C0717BC3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3 gazeDir = CoreServices.InputSystem.EyeGazeProvider.GazeDirection;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(10 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_EyeGazeProvider() */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = InterfaceFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(11 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider::get_GazeDirection() */, IMixedRealityGazeProvider_t8CD90C5B0C055251CD31B191A9C898C0717BC3E9_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		// Vector3 gazeOrigin = CoreServices.InputSystem.EyeGazeProvider.GazeOrigin;
		RuntimeObject* L_3;
		L_3 = CoreServices_get_InputSystem_mE61A004642407339A8CC47764036D3BB52C43E8D(/*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(10 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_EyeGazeProvider() */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = InterfaceFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(10 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider::get_GazeOrigin() */, IMixedRealityGazeProvider_t8CD90C5B0C055251CD31B191A9C898C0717BC3E9_il2cpp_TypeInfo_var, L_4);
		V_1 = L_5;
		// Ray gazeRay = new Ray(gazeOrigin, gazeDir);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_2), L_6, L_7, /*hidden argument*/NULL);
		// this.transform.position = gazeRay.GetPoint(15.0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_2), (15.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EyeGazePointing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazePointing__ctor_m4E3BC9BC3E2B52FBE723709B98C0FB284A85BD9E (EyeGazePointing_t2B84E7090EFD354630AFE215AF3A865FE2198DB0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HololensScreenshot::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HololensScreenshot_Start_m926C291EF0B73DCEE357A2FC973D9516430AAB0C (HololensScreenshot_tB7BFFB7A4337F524319968E1217F392B0E789E63 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE298AC263F56DC19DB48B795C5B4BEC470424A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m60439039CB22A9C0C302DD10143A1363F611DDCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m46A29642D3E63567775BD4DCFCB9E2B592927599_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HololensScreenshot_KeywordRecognizer_OnPhraseRecognized_mCE5AD759BE883F195884AB0853A8E23347DB4D88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HololensScreenshot_TakePicture_m7CA872BD1296E2A1CBF0DE63C41772B1EA1A4E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeywordAction_t8BFFE7D9BE1DFBCC2AD3C31B54763AF2169E3894_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25E0158D7778306A9F6E78EB553031B1E31C0EB7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// keywordCollection = new Dictionary<string, KeywordAction>();
		Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7 * L_0 = (Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7 *)il2cpp_codegen_object_new(Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m60439039CB22A9C0C302DD10143A1363F611DDCD(L_0, /*hidden argument*/Dictionary_2__ctor_m60439039CB22A9C0C302DD10143A1363F611DDCD_RuntimeMethod_var);
		__this->set_keywordCollection_6(L_0);
		// keywordCollection.Add("Take Picture", TakePicture);
		Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7 * L_1 = __this->get_keywordCollection_6();
		KeywordAction_t8BFFE7D9BE1DFBCC2AD3C31B54763AF2169E3894 * L_2 = (KeywordAction_t8BFFE7D9BE1DFBCC2AD3C31B54763AF2169E3894 *)il2cpp_codegen_object_new(KeywordAction_t8BFFE7D9BE1DFBCC2AD3C31B54763AF2169E3894_il2cpp_TypeInfo_var);
		KeywordAction__ctor_m84D41EF2D96B2664D0E5EBCF5FD2799E45ED7395(L_2, __this, (intptr_t)((intptr_t)HololensScreenshot_TakePicture_m7CA872BD1296E2A1CBF0DE63C41772B1EA1A4E59_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		Dictionary_2_Add_mE298AC263F56DC19DB48B795C5B4BEC470424A89(L_1, _stringLiteral25E0158D7778306A9F6E78EB553031B1E31C0EB7, L_2, /*hidden argument*/Dictionary_2_Add_mE298AC263F56DC19DB48B795C5B4BEC470424A89_RuntimeMethod_var);
		// keywordRecognizer = new KeywordRecognizer(keywordCollection.Keys.ToArray());
		Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7 * L_3 = __this->get_keywordCollection_6();
		NullCheck(L_3);
		KeyCollection_t15F81DE06CB74ED7E9930EA7B3CF931ABC807E05 * L_4;
		L_4 = Dictionary_2_get_Keys_m46A29642D3E63567775BD4DCFCB9E2B592927599(L_3, /*hidden argument*/Dictionary_2_get_Keys_m46A29642D3E63567775BD4DCFCB9E2B592927599_RuntimeMethod_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5;
		L_5 = Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582(L_4, /*hidden argument*/Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_6 = (KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F *)il2cpp_codegen_object_new(KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_il2cpp_TypeInfo_var);
		KeywordRecognizer__ctor_m2B1B5B8DD51A928C5E74D28958D033B735B16B0D(L_6, L_5, /*hidden argument*/NULL);
		__this->set_keywordRecognizer_5(L_6);
		// keywordRecognizer.OnPhraseRecognized += KeywordRecognizer_OnPhraseRecognized;
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_7 = __this->get_keywordRecognizer_5();
		PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * L_8 = (PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F *)il2cpp_codegen_object_new(PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F_il2cpp_TypeInfo_var);
		PhraseRecognizedDelegate__ctor_m01A9360909C670C8869C24BB40DC38C2EFCAA03C(L_8, __this, (intptr_t)((intptr_t)HololensScreenshot_KeywordRecognizer_OnPhraseRecognized_mCE5AD759BE883F195884AB0853A8E23347DB4D88_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		PhraseRecognizer_add_OnPhraseRecognized_m78C6A460FD186BB5E9155C45A4DEDF369F80875D(L_7, L_8, /*hidden argument*/NULL);
		// keywordRecognizer.Start();
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_9 = __this->get_keywordRecognizer_5();
		NullCheck(L_9);
		PhraseRecognizer_Start_m051D982B305F1F0A7274443A8683417690276BA4(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HololensScreenshot::KeywordRecognizer_OnPhraseRecognized(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HololensScreenshot_KeywordRecognizer_OnPhraseRecognized_mCE5AD759BE883F195884AB0853A8E23347DB4D88 (HololensScreenshot_tB7BFFB7A4337F524319968E1217F392B0E789E63 * __this, PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF  ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m667D6142141480AA095056F989BCE5D0F3942C01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeywordAction_t8BFFE7D9BE1DFBCC2AD3C31B54763AF2169E3894 * V_0 = NULL;
	{
		// if (keywordCollection.TryGetValue(args.text, out keywordAction))
		Dictionary_2_tD992BF47237EFCE1D99BC240638C4002B5D932B7 * L_0 = __this->get_keywordCollection_6();
		PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF  L_1 = ___args0;
		String_t* L_2 = L_1.get_text_2();
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m667D6142141480AA095056F989BCE5D0F3942C01(L_0, L_2, (KeywordAction_t8BFFE7D9BE1DFBCC2AD3C31B54763AF2169E3894 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m667D6142141480AA095056F989BCE5D0F3942C01_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// keywordAction.Invoke(args);
		KeywordAction_t8BFFE7D9BE1DFBCC2AD3C31B54763AF2169E3894 * L_4 = V_0;
		PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF  L_5 = ___args0;
		NullCheck(L_4);
		KeywordAction_Invoke_m50E634395C58A0D3E45B84C3E22BBC9E12F4E4DB(L_4, L_5, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void HololensScreenshot::TakePicture(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HololensScreenshot_TakePicture_m7CA872BD1296E2A1CBF0DE63C41772B1EA1A4E59 (HololensScreenshot_tB7BFFB7A4337F524319968E1217F392B0E789E63 * __this, PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF  ___prea0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HololensScreenshot_OnPhotoCaptureCreated_mD143DD550842BEA5CD508D30F4276593F1AA8001_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCaptureResourceCreatedCallback_t4975687A3DBE3DF603E72841D83C2BE2346B54DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotoCapture.CreateAsync(false, OnPhotoCaptureCreated);
		OnCaptureResourceCreatedCallback_t4975687A3DBE3DF603E72841D83C2BE2346B54DD * L_0 = (OnCaptureResourceCreatedCallback_t4975687A3DBE3DF603E72841D83C2BE2346B54DD *)il2cpp_codegen_object_new(OnCaptureResourceCreatedCallback_t4975687A3DBE3DF603E72841D83C2BE2346B54DD_il2cpp_TypeInfo_var);
		OnCaptureResourceCreatedCallback__ctor_m18862383676D88F484C4F1D55DE53FD76A254BF6(L_0, __this, (intptr_t)((intptr_t)HololensScreenshot_OnPhotoCaptureCreated_mD143DD550842BEA5CD508D30F4276593F1AA8001_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_il2cpp_TypeInfo_var);
		PhotoCapture_CreateAsync_mE7BE1ED985C04DE2A6B65027E42098A12A4B2750((bool)0, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HololensScreenshot::OnPhotoCaptureCreated(UnityEngine.Windows.WebCam.PhotoCapture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HololensScreenshot_OnPhotoCaptureCreated_mD143DD550842BEA5CD508D30F4276593F1AA8001 (HololensScreenshot_tB7BFFB7A4337F524319968E1217F392B0E789E63 * __this, PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74 * ___captureObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HololensScreenshot_OnPhotoModeStarted_mA5EB6C8AAC220D2AD964E81FFA362E3D35B8658C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnPhotoModeStartedCallback_t21FCF86FB7933100968EE01A7B4BFB751F53EF92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CameraParameters_tA8CA69CDABC65CC198580835143B3C1BDD95D965  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// photoCaptureObject = captureObject;
		PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74 * L_0 = ___captureObject0;
		__this->set_photoCaptureObject_4(L_0);
		// CameraParameters c = new CameraParameters();
		il2cpp_codegen_initobj((&V_0), sizeof(CameraParameters_tA8CA69CDABC65CC198580835143B3C1BDD95D965 ));
		// c.hologramOpacity = 0.0f;
		CameraParameters_set_hologramOpacity_mEBA8173F3E9C2B667D1CEC9E02FE27F40840D1C2((CameraParameters_tA8CA69CDABC65CC198580835143B3C1BDD95D965 *)(&V_0), (0.0f), /*hidden argument*/NULL);
		// c.cameraResolutionWidth = 640;
		CameraParameters_set_cameraResolutionWidth_mE94FDBD9FF805D0B214F8754F56100F699B9BBF2((CameraParameters_tA8CA69CDABC65CC198580835143B3C1BDD95D965 *)(&V_0), ((int32_t)640), /*hidden argument*/NULL);
		// c.cameraResolutionHeight = 360;
		CameraParameters_set_cameraResolutionHeight_m6D59543C15169DBB84D1F1749FDC98721E152AFB((CameraParameters_tA8CA69CDABC65CC198580835143B3C1BDD95D965 *)(&V_0), ((int32_t)360), /*hidden argument*/NULL);
		// c.pixelFormat = CapturePixelFormat.BGRA32;
		CameraParameters_set_pixelFormat_m1198D32C2E3FCD471AB171FEED9F288E306AD5AA((CameraParameters_tA8CA69CDABC65CC198580835143B3C1BDD95D965 *)(&V_0), 0, /*hidden argument*/NULL);
		// captureObject.StartPhotoModeAsync(c, OnPhotoModeStarted);
		PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74 * L_1 = ___captureObject0;
		CameraParameters_tA8CA69CDABC65CC198580835143B3C1BDD95D965  L_2 = V_0;
		OnPhotoModeStartedCallback_t21FCF86FB7933100968EE01A7B4BFB751F53EF92 * L_3 = (OnPhotoModeStartedCallback_t21FCF86FB7933100968EE01A7B4BFB751F53EF92 *)il2cpp_codegen_object_new(OnPhotoModeStartedCallback_t21FCF86FB7933100968EE01A7B4BFB751F53EF92_il2cpp_TypeInfo_var);
		OnPhotoModeStartedCallback__ctor_mD122FA9A03DF5DD7A950ADD2DE0E1061779415B8(L_3, __this, (intptr_t)((intptr_t)HololensScreenshot_OnPhotoModeStarted_mA5EB6C8AAC220D2AD964E81FFA362E3D35B8658C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		PhotoCapture_StartPhotoModeAsync_mB5549C9BEE0506118AC9C38F6EF1BB6A46FF2D39(L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HololensScreenshot::OnPhotoModeStarted(UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HololensScreenshot_OnPhotoModeStarted_mA5EB6C8AAC220D2AD964E81FFA362E3D35B8658C (HololensScreenshot_tB7BFFB7A4337F524319968E1217F392B0E789E63 * __this, PhotoCaptureResult_t52FACAF7EF0D013BFE3E7DA93629702818507226  ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HololensScreenshot_OnCapturedPhotoToMemory_m2F32851F4C27B985DB44E88ED5E2F3FC5DFF3378_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCapturedToMemoryCallback_t7EEEA0998A9D7014C762A55764EC06C4C052B2C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC669F5942A80C2AEBE05A75A422F5976B7C1563B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (result.success)
		bool L_0;
		L_0 = PhotoCaptureResult_get_success_mDD98D8024B1B449CDF9C589C3E89AA7908DA51F7((PhotoCaptureResult_t52FACAF7EF0D013BFE3E7DA93629702818507226 *)(&___result0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// photoCaptureObject.TakePhotoAsync(OnCapturedPhotoToMemory);
		PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74 * L_1 = __this->get_photoCaptureObject_4();
		OnCapturedToMemoryCallback_t7EEEA0998A9D7014C762A55764EC06C4C052B2C6 * L_2 = (OnCapturedToMemoryCallback_t7EEEA0998A9D7014C762A55764EC06C4C052B2C6 *)il2cpp_codegen_object_new(OnCapturedToMemoryCallback_t7EEEA0998A9D7014C762A55764EC06C4C052B2C6_il2cpp_TypeInfo_var);
		OnCapturedToMemoryCallback__ctor_mE6373867AD9BC33554D11BECDCF720FF7F41F431(L_2, __this, (intptr_t)((intptr_t)HololensScreenshot_OnCapturedPhotoToMemory_m2F32851F4C27B985DB44E88ED5E2F3FC5DFF3378_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		PhotoCapture_TakePhotoAsync_m39986F380BAD28E0FCC1F93476E30589ADFEC447(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0021:
	{
		// Debug.LogError("Unable to start photo mode ...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralC669F5942A80C2AEBE05A75A422F5976B7C1563B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HololensScreenshot::OnCapturedPhotoToMemory(UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult,UnityEngine.Windows.WebCam.PhotoCaptureFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HololensScreenshot_OnCapturedPhotoToMemory_m2F32851F4C27B985DB44E88ED5E2F3FC5DFF3378 (HololensScreenshot_tB7BFFB7A4337F524319968E1217F392B0E789E63 * __this, PhotoCaptureResult_t52FACAF7EF0D013BFE3E7DA93629702818507226  ___result0, PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0 * ___photoCaptureFrame1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HololensScreenshot_OnStoppedPhotoMode_m37FEB48F6F303B7AE5728D34EF429B8D1F5631C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnPhotoModeStoppedCallback_tF6A2F039E1A8DB64BD4CF25675BED44F74E5B1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FCB964AC0598FC25B6C6A52C1FC24361824E751);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	{
		// if (result.success)
		bool L_0;
		L_0 = PhotoCaptureResult_get_success_mDD98D8024B1B449CDF9C589C3E89AA7908DA51F7((PhotoCaptureResult_t52FACAF7EF0D013BFE3E7DA93629702818507226 *)(&___result0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		// Texture2D targetTexture = new Texture2D(900, 500);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_1, ((int32_t)900), ((int32_t)500), /*hidden argument*/NULL);
		V_0 = L_1;
		// photoCaptureFrame.UploadImageDataToTexture(targetTexture);
		PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0 * L_2 = ___photoCaptureFrame1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = V_0;
		NullCheck(L_2);
		PhotoCaptureFrame_UploadImageDataToTexture_m1119BA5BC7FB8267FE5419392EFA551548B3FE00(L_2, L_3, /*hidden argument*/NULL);
		// RawImage ri = GameObject.Find("CapturedViewCanvas/RawImage").GetComponent<RawImage>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5FCB964AC0598FC25B6C6A52C1FC24361824E751, /*hidden argument*/NULL);
		NullCheck(L_4);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_5;
		L_5 = GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7(L_4, /*hidden argument*/GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7_RuntimeMethod_var);
		// ri.texture = targetTexture;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = V_0;
		NullCheck(L_5);
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// photoCaptureObject.StopPhotoModeAsync(OnStoppedPhotoMode);
		PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74 * L_7 = __this->get_photoCaptureObject_4();
		OnPhotoModeStoppedCallback_tF6A2F039E1A8DB64BD4CF25675BED44F74E5B1F6 * L_8 = (OnPhotoModeStoppedCallback_tF6A2F039E1A8DB64BD4CF25675BED44F74E5B1F6 *)il2cpp_codegen_object_new(OnPhotoModeStoppedCallback_tF6A2F039E1A8DB64BD4CF25675BED44F74E5B1F6_il2cpp_TypeInfo_var);
		OnPhotoModeStoppedCallback__ctor_mF8240EE3B1A20732ED29A0CF0D1CCE30CD838E6B(L_8, __this, (intptr_t)((intptr_t)HololensScreenshot_OnStoppedPhotoMode_m37FEB48F6F303B7AE5728D34EF429B8D1F5631C4_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		PhotoCapture_StopPhotoModeAsync_m06C7500BD2A5CA126F907FB07BA5C0FA8E9328CB(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HololensScreenshot::OnStoppedPhotoMode(UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HololensScreenshot_OnStoppedPhotoMode_m37FEB48F6F303B7AE5728D34EF429B8D1F5631C4 (HololensScreenshot_tB7BFFB7A4337F524319968E1217F392B0E789E63 * __this, PhotoCaptureResult_t52FACAF7EF0D013BFE3E7DA93629702818507226  ___result0, const RuntimeMethod* method)
{
	{
		// photoCaptureObject.Dispose();
		PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74 * L_0 = __this->get_photoCaptureObject_4();
		NullCheck(L_0);
		PhotoCapture_Dispose_mC657D88FF9C469242501DC5E01C6EADA8DEE49CC(L_0, /*hidden argument*/NULL);
		// photoCaptureObject = null;
		__this->set_photoCaptureObject_4((PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74 *)NULL);
		// }
		return;
	}
}
// System.Void HololensScreenshot::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HololensScreenshot_Update_m40C87379EF1CBB2931BC6DA7CC21AAF3DB76F5B5 (HololensScreenshot_tB7BFFB7A4337F524319968E1217F392B0E789E63 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void HololensScreenshot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HololensScreenshot__ctor_m64BCACFDFFF1490EE13511DA56A1714297D1E1C2 (HololensScreenshot_tB7BFFB7A4337F524319968E1217F392B0E789E63 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HololensScreenshot/KeywordAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordAction__ctor_m84D41EF2D96B2664D0E5EBCF5FD2799E45ED7395 (KeywordAction_t8BFFE7D9BE1DFBCC2AD3C31B54763AF2169E3894 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void HololensScreenshot/KeywordAction::Invoke(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordAction_Invoke_m50E634395C58A0D3E45B84C3E22BBC9E12F4E4DB (KeywordAction_t8BFFE7D9BE1DFBCC2AD3C31B54763AF2169E3894 * __this, PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF  ___args0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___args0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF  >::Invoke(targetMethod, targetThis, ___args0);
					else
						GenericVirtActionInvoker1< PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF  >::Invoke(targetMethod, targetThis, ___args0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___args0);
					else
						VirtActionInvoker1< PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___args0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___args0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult HololensScreenshot/KeywordAction::BeginInvoke(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeywordAction_BeginInvoke_m44935CD02B43BFE9A23621F6A440CB595163C67A (KeywordAction_t8BFFE7D9BE1DFBCC2AD3C31B54763AF2169E3894 * __this, PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF  ___args0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF_il2cpp_TypeInfo_var, &___args0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void HololensScreenshot/KeywordAction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordAction_EndInvoke_m69C98716EA1918D6EBE07C45CFE08E2F0A43156F (KeywordAction_t8BFFE7D9BE1DFBCC2AD3C31B54763AF2169E3894 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

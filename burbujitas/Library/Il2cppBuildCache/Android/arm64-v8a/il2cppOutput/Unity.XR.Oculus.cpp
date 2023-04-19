#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6;
// UnityEngine.IntegratedSubsystem`1<System.Object>
struct IntegratedSubsystem_1_t0B19871ED45EAD9F0E0DD6AB41BABCAFBD8C56E4;
// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>
struct List_1_t56455D217921470E52E7D33A1794256E31084DD8;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_t6331523A19E51FB87CA899920C03B10A48A562B0;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.XR.XRDisplaySubsystem[]
struct XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344;
// UnityEngine.XR.XRDisplaySubsystemDescriptor[]
struct XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642;
// UnityEngine.XR.XRInputSubsystemDescriptor[]
struct XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14;
// Unity.XR.Oculus.InputFocus
struct InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002;
// UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Unity.XR.Oculus.OculusLoader
struct OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB;
// Unity.XR.Oculus.OculusRestarter
struct OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65;
// Unity.XR.Oculus.OculusSettings
struct OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// Unity.XR.Oculus.Stats
struct Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93;
// UnityEngine.XR.XRDisplaySubsystemDescriptor
struct XRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F;
// Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22
struct U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77;
// Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23
struct U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t56455D217921470E52E7D33A1794256E31084DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral039FC8798456705B4F372FB22E7B8A75FE2E6D6D;
IL2CPP_EXTERN_C String_t* _stringLiteral066D7D93F8175DDAAA3D6E4337D52AB827615B03;
IL2CPP_EXTERN_C String_t* _stringLiteral0E33CA6894EABEA68F4151858D5322F8246508A3;
IL2CPP_EXTERN_C String_t* _stringLiteral18731F484474DDB7AD0F0E7C15988C0A794DEC4D;
IL2CPP_EXTERN_C String_t* _stringLiteral19EEE9FEA675F3AD8283953350F19D8A2E2934A0;
IL2CPP_EXTERN_C String_t* _stringLiteral2089C15C4332D83D0388E9B6CF7057950BB5CD54;
IL2CPP_EXTERN_C String_t* _stringLiteral271AF6878EC3872B415EA8A73A1433E4B604ACDF;
IL2CPP_EXTERN_C String_t* _stringLiteral28DC90CC5E864B9BEFE7447A1CCD759D1F2D3991;
IL2CPP_EXTERN_C String_t* _stringLiteral3115DB94D93EB3315DED225F97D881D8A834AB58;
IL2CPP_EXTERN_C String_t* _stringLiteral3665CEE66FFACBAAC4FEA9EBCFB744AC1F3A9A57;
IL2CPP_EXTERN_C String_t* _stringLiteral4DADF60B90978099A286AA09DF75E789888C9904;
IL2CPP_EXTERN_C String_t* _stringLiteral50B8349DC34E14AB475F3453803BCDBD9F3B0F85;
IL2CPP_EXTERN_C String_t* _stringLiteral549D4E1BD7FFA7F485E084D961369B26386BA2A5;
IL2CPP_EXTERN_C String_t* _stringLiteral60295FC3A60C2E33E7CE2BBA56CDC92EDF6E0594;
IL2CPP_EXTERN_C String_t* _stringLiteral60EABBC07A25977B87CF58F7CB0D8D536D013DBA;
IL2CPP_EXTERN_C String_t* _stringLiteral650C77761A0B8B1C5C9AB2BB0D61E4767DDDB6E8;
IL2CPP_EXTERN_C String_t* _stringLiteral666C1D75F394950EFFDBE5C128752A9E0CBD1DEA;
IL2CPP_EXTERN_C String_t* _stringLiteral6C095088ADD88C25A47E7BBE6A81D13C798F9E75;
IL2CPP_EXTERN_C String_t* _stringLiteral6E837F416B0AD538A7C4B0B672467CAD351051C1;
IL2CPP_EXTERN_C String_t* _stringLiteral71D87D03368ADC0E5018E85E30CA4984F5FF2AA8;
IL2CPP_EXTERN_C String_t* _stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A;
IL2CPP_EXTERN_C String_t* _stringLiteral7589D1EF4E8D8454C532BCBFBC5823B5B4345F30;
IL2CPP_EXTERN_C String_t* _stringLiteral7B4329AE6518370E7FA79EABB817A9A8F33E72A1;
IL2CPP_EXTERN_C String_t* _stringLiteral7CF7D253C5E081CD8124B453E189315E3AB51312;
IL2CPP_EXTERN_C String_t* _stringLiteral83734951E6CF0220767BDF0CB126B869CED3387A;
IL2CPP_EXTERN_C String_t* _stringLiteral8695EE74D804B608F4CB465B35B41E02389AD412;
IL2CPP_EXTERN_C String_t* _stringLiteral86CB83E014FB5A27545E6442E0E4C0E783301DED;
IL2CPP_EXTERN_C String_t* _stringLiteral8A017E46CE09C02B042A499A98229FB4CB75E992;
IL2CPP_EXTERN_C String_t* _stringLiteral8B2341C27300FE7CC95F015A82D27378FA3E44C2;
IL2CPP_EXTERN_C String_t* _stringLiteral8D4C1624EBCE886FC4F782A22F67C15E64EF0BE1;
IL2CPP_EXTERN_C String_t* _stringLiteral9193CA2A883A8C656610DDBD604EA09532252279;
IL2CPP_EXTERN_C String_t* _stringLiteral9348643C476E6565E37FC0900AC244BD6F18AC32;
IL2CPP_EXTERN_C String_t* _stringLiteral9CA2736EB42A97B73E816FF8369ACA2005FA5AA2;
IL2CPP_EXTERN_C String_t* _stringLiteralA1B23EF8DFFD7E2D6521CBDDA3630AC111AE5F69;
IL2CPP_EXTERN_C String_t* _stringLiteralB0A88A6DB46B5BCFC8ED5871C81A6C91204F1E45;
IL2CPP_EXTERN_C String_t* _stringLiteralB261904704D3ADA83E0084DF37061DE2D4CE88C1;
IL2CPP_EXTERN_C String_t* _stringLiteralB81FB9482B9D82D5EF7151BE5724BB998E6C5F83;
IL2CPP_EXTERN_C String_t* _stringLiteralCAD7DAB1A0038F488CE6D7BD2E6F6D83311BED68;
IL2CPP_EXTERN_C String_t* _stringLiteralCD42F30283C4CE60465C4010C800AD9704733102;
IL2CPP_EXTERN_C String_t* _stringLiteralCDF3E124A1507F39224D73C8EFA9828D8BE3846B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC74641CA8B52702019111B91E29821576E700BB;
IL2CPP_EXTERN_C String_t* _stringLiteralDCD1BF12664AC38299958513D10BAA016D22904B;
IL2CPP_EXTERN_C String_t* _stringLiteralE0C17AE8C1199F6CD8F16D39E1B77CC319F01B26;
IL2CPP_EXTERN_C String_t* _stringLiteralEB59BE99DEEFC290177DB43CF6B387636E1E0904;
IL2CPP_EXTERN_C String_t* _stringLiteralF1BB48CEB008ADB81AB49FAD95AAB464FAD9CA84;
IL2CPP_EXTERN_C String_t* _stringLiteralF752B27A3F46D6A1A7B84CA9CC6E730C9B472E9A;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m204EA717B425B2D05BB91568E62A291F99E44F75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisOculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_m202AE7171E57107B6E8DDAFA0F044806B81EFBFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisOculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_mACE49B13D3DE9F0EE5F3B471A3230A439C6C8A92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystem_1_get_SubsystemDescriptor_m816FB5D3478D016CBD470BA93CF200BB0FA1DF42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegisterUpdateCallback_Update_m2DA82FDFC251E9F4D10F6F5ADB6A9F4B11BAD7ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7815329E7014FDE1DE442AF3F320E30E685A3880_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPauseAndRestartCoroutineU3Ed__22_System_Collections_IEnumerator_Reset_m437EE8315D091FAF8113083C558FB27ACDFD49AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRestartCoroutineU3Ed__23_System_Collections_IEnumerator_Reset_m8B74BC95BE0B29C902B5C7547EE3461E876BFC9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m2674D41E2C5D7DE045BEF6EDE661A9A0767A99FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m69A4EA17370FA4464CCE4BEAD83D5E0D47AADB56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7AE6139F914F84F8A7AA30CC70F6A01A757E1BE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m3724DC2747A9C6A68F78041E6FA78F6AC5CB39C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF935C6C4671BBBEA57D48C65DE73B9D27EB611D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m243694C799C58C0396A563991537B952A5B48F98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m8145C9418422BD4F45DBBF37D028DDD2F1A6F7AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m530AFB9035AAA37796915EEB42C678B7A7F39686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m6098CB15555B2E45C3BCAB9086012011CB382DAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_mC98D5F7030C574A69D86EA429F90CF769106A5EB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t29E6020F6B208E8C3E84F1F09ED89415CA01DC30 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>
struct List_1_t56455D217921470E52E7D33A1794256E31084DD8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8, ____items_1)); }
	inline XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* get__items_1() const { return ____items_1; }
	inline XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048, ____items_1)); }
	inline XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* get__items_1() const { return ____items_1; }
	inline XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____items_1)); }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* get__items_1() const { return ____items_1; }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Unity.XR.Oculus.Boundary
struct Boundary_tF1BA1FC40337D9A392078B7087CC32FF5EFE03E4  : public RuntimeObject
{
public:

public:
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};


// Unity.XR.Oculus.InputFocus
struct InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.NativeMethods
struct NativeMethods_t3621D74DE9BA054C3E33DB4FA2CFEC8DD7152EEF  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.OculusSession
struct OculusSession_tA5D60DB4C67D65843DEE55DCF2AC1A4DE412D1B2  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.Performance
struct Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.RegisterUpdateCallback
struct RegisterUpdateCallback_t1C829E95646132B4A54493595EFCFF669920ACE1  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.Stats
struct Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F  : public RuntimeObject
{
public:

public:
};


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


// Unity.XR.Oculus.Utils
struct Utils_tBC4D75397337A6F2AFDF84A3FCAA54D81045FF2A  : public RuntimeObject
{
public:

public:
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Unity.XR.Oculus.NativeMethods/Internal
struct Internal_tFE0FD2202F25632711238961AAA0DB0A1CB0F0DB  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22
struct U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77  : public RuntimeObject
{
public:
	// System.Int32 Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::pauseTimeInSeconds
	float ___pauseTimeInSeconds_2;
	// Unity.XR.Oculus.OculusRestarter Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::<>4__this
	OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_pauseTimeInSeconds_2() { return static_cast<int32_t>(offsetof(U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77, ___pauseTimeInSeconds_2)); }
	inline float get_pauseTimeInSeconds_2() const { return ___pauseTimeInSeconds_2; }
	inline float* get_address_of_pauseTimeInSeconds_2() { return &___pauseTimeInSeconds_2; }
	inline void set_pauseTimeInSeconds_2(float value)
	{
		___pauseTimeInSeconds_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77, ___U3CU3E4__this_3)); }
	inline OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23
struct U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D  : public RuntimeObject
{
public:
	// System.Int32 Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Unity.XR.Oculus.OculusRestarter Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::<>4__this
	OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * ___U3CU3E4__this_2;
	// System.Boolean Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::shouldRestart
	bool ___shouldRestart_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D, ___U3CU3E4__this_2)); }
	inline OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_shouldRestart_3() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D, ___shouldRestart_3)); }
	inline bool get_shouldRestart_3() const { return ___shouldRestart_3; }
	inline bool* get_address_of_shouldRestart_3() { return &___shouldRestart_3; }
	inline void set_shouldRestart_3(bool value)
	{
		___shouldRestart_3 = value;
	}
};


// Unity.XR.Oculus.Stats/AdaptivePerformance
struct AdaptivePerformance_t444AB47F076E0F5099F0163C1F1ED2E721DFC2B4  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.Stats/AppMetrics
struct AppMetrics_t3EFC22132A61330CAF1A99FFFD06F8C45F2EEEB5  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.Stats/PerfMetrics
struct PerfMetrics_t60645F5550DE7C05412D6701BEB5D055CE055166  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>
struct Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t56455D217921470E52E7D33A1794256E31084DD8 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828, ___list_0)); }
	inline List_1_t56455D217921470E52E7D33A1794256E31084DD8 * get_list_0() const { return ___list_0; }
	inline List_1_t56455D217921470E52E7D33A1794256E31084DD8 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t56455D217921470E52E7D33A1794256E31084DD8 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828, ___current_3)); }
	inline XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * get_current_3() const { return ___current_3; }
	inline XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
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


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// Unity.XR.Oculus.NativeMethods/UserDefinedSettings
struct UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D 
{
public:
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::sharedDepthBuffer
	uint16_t ___sharedDepthBuffer_0;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::dashSupport
	uint16_t ___dashSupport_1;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::stereoRenderingMode
	uint16_t ___stereoRenderingMode_2;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::colorSpace
	uint16_t ___colorSpace_3;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::lowOverheadMode
	uint16_t ___lowOverheadMode_4;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::protectedContext
	uint16_t ___protectedContext_5;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::focusAware
	uint16_t ___focusAware_6;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::optimizeBufferDiscards
	uint16_t ___optimizeBufferDiscards_7;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::phaseSync
	uint16_t ___phaseSync_8;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::symmetricProjection
	uint16_t ___symmetricProjection_9;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::subsampledLayout
	uint16_t ___subsampledLayout_10;

public:
	inline static int32_t get_offset_of_sharedDepthBuffer_0() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___sharedDepthBuffer_0)); }
	inline uint16_t get_sharedDepthBuffer_0() const { return ___sharedDepthBuffer_0; }
	inline uint16_t* get_address_of_sharedDepthBuffer_0() { return &___sharedDepthBuffer_0; }
	inline void set_sharedDepthBuffer_0(uint16_t value)
	{
		___sharedDepthBuffer_0 = value;
	}

	inline static int32_t get_offset_of_dashSupport_1() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___dashSupport_1)); }
	inline uint16_t get_dashSupport_1() const { return ___dashSupport_1; }
	inline uint16_t* get_address_of_dashSupport_1() { return &___dashSupport_1; }
	inline void set_dashSupport_1(uint16_t value)
	{
		___dashSupport_1 = value;
	}

	inline static int32_t get_offset_of_stereoRenderingMode_2() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___stereoRenderingMode_2)); }
	inline uint16_t get_stereoRenderingMode_2() const { return ___stereoRenderingMode_2; }
	inline uint16_t* get_address_of_stereoRenderingMode_2() { return &___stereoRenderingMode_2; }
	inline void set_stereoRenderingMode_2(uint16_t value)
	{
		___stereoRenderingMode_2 = value;
	}

	inline static int32_t get_offset_of_colorSpace_3() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___colorSpace_3)); }
	inline uint16_t get_colorSpace_3() const { return ___colorSpace_3; }
	inline uint16_t* get_address_of_colorSpace_3() { return &___colorSpace_3; }
	inline void set_colorSpace_3(uint16_t value)
	{
		___colorSpace_3 = value;
	}

	inline static int32_t get_offset_of_lowOverheadMode_4() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___lowOverheadMode_4)); }
	inline uint16_t get_lowOverheadMode_4() const { return ___lowOverheadMode_4; }
	inline uint16_t* get_address_of_lowOverheadMode_4() { return &___lowOverheadMode_4; }
	inline void set_lowOverheadMode_4(uint16_t value)
	{
		___lowOverheadMode_4 = value;
	}

	inline static int32_t get_offset_of_protectedContext_5() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___protectedContext_5)); }
	inline uint16_t get_protectedContext_5() const { return ___protectedContext_5; }
	inline uint16_t* get_address_of_protectedContext_5() { return &___protectedContext_5; }
	inline void set_protectedContext_5(uint16_t value)
	{
		___protectedContext_5 = value;
	}

	inline static int32_t get_offset_of_focusAware_6() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___focusAware_6)); }
	inline uint16_t get_focusAware_6() const { return ___focusAware_6; }
	inline uint16_t* get_address_of_focusAware_6() { return &___focusAware_6; }
	inline void set_focusAware_6(uint16_t value)
	{
		___focusAware_6 = value;
	}

	inline static int32_t get_offset_of_optimizeBufferDiscards_7() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___optimizeBufferDiscards_7)); }
	inline uint16_t get_optimizeBufferDiscards_7() const { return ___optimizeBufferDiscards_7; }
	inline uint16_t* get_address_of_optimizeBufferDiscards_7() { return &___optimizeBufferDiscards_7; }
	inline void set_optimizeBufferDiscards_7(uint16_t value)
	{
		___optimizeBufferDiscards_7 = value;
	}

	inline static int32_t get_offset_of_phaseSync_8() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___phaseSync_8)); }
	inline uint16_t get_phaseSync_8() const { return ___phaseSync_8; }
	inline uint16_t* get_address_of_phaseSync_8() { return &___phaseSync_8; }
	inline void set_phaseSync_8(uint16_t value)
	{
		___phaseSync_8 = value;
	}

	inline static int32_t get_offset_of_symmetricProjection_9() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___symmetricProjection_9)); }
	inline uint16_t get_symmetricProjection_9() const { return ___symmetricProjection_9; }
	inline uint16_t* get_address_of_symmetricProjection_9() { return &___symmetricProjection_9; }
	inline void set_symmetricProjection_9(uint16_t value)
	{
		___symmetricProjection_9 = value;
	}

	inline static int32_t get_offset_of_subsampledLayout_10() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___subsampledLayout_10)); }
	inline uint16_t get_subsampledLayout_10() const { return ___subsampledLayout_10; }
	inline uint16_t* get_address_of_subsampledLayout_10() { return &___subsampledLayout_10; }
	inline void set_subsampledLayout_10(uint16_t value)
	{
		___subsampledLayout_10 = value;
	}
};


// UnityEngine.ColorSpace
struct ColorSpace_tAD694F94295170CB332A0F99BBE086F4AC8C15BA 
{
public:
	// System.Int32 UnityEngine.ColorSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorSpace_tAD694F94295170CB332A0F99BBE086F4AC8C15BA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_SubsystemDescriptor_1)); }
	inline RuntimeObject* get_m_SubsystemDescriptor_1() const { return ___m_SubsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_SubsystemDescriptor_1() { return &___m_SubsystemDescriptor_1; }
	inline void set_m_SubsystemDescriptor_1(RuntimeObject* value)
	{
		___m_SubsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystemDescriptor::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// Unity.XR.Oculus.OculusUsages
struct OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.SystemHeadset
struct SystemHeadset_t16A682CFD8C01E96CE6D9E8AD92C5B33BFAA4137 
{
public:
	// System.Int32 Unity.XR.Oculus.SystemHeadset::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SystemHeadset_t16A682CFD8C01E96CE6D9E8AD92C5B33BFAA4137, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.Oculus.Boundary/BoundaryType
struct BoundaryType_t2D787F83347E327691F396B19C5DA6A49B2C29EC 
{
public:
	// System.Int32 Unity.XR.Oculus.Boundary/BoundaryType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BoundaryType_t2D787F83347E327691F396B19C5DA6A49B2C29EC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.Oculus.Development/UserDeveloperModeSettingCache
struct UserDeveloperModeSettingCache_tD3FF164E39B8C782608E279A1E9ECA582812B4C8 
{
public:
	// System.Int32 Unity.XR.Oculus.Development/UserDeveloperModeSettingCache::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserDeveloperModeSettingCache_tD3FF164E39B8C782608E279A1E9ECA582812B4C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.Oculus.OculusLoader/DeviceSupportedResult
struct DeviceSupportedResult_t91515A5FEA3D8ADF6777D4894FF176444CE2F15F 
{
public:
	// System.Int32 Unity.XR.Oculus.OculusLoader/DeviceSupportedResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceSupportedResult_t91515A5FEA3D8ADF6777D4894FF176444CE2F15F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid
struct StereoRenderingModeAndroid_t51C792A37730976614F2A445348686E8467ABCD2 
{
public:
	// System.Int32 Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoRenderingModeAndroid_t51C792A37730976614F2A445348686E8467ABCD2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop
struct StereoRenderingModeDesktop_t0AAEF2D9C556C46E75A630F2CB5145AA78AE3207 
{
public:
	// System.Int32 Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoRenderingModeDesktop_t0AAEF2D9C556C46E75A630F2CB5145AA78AE3207, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRDisplaySubsystem>
struct IntegratedSubsystemDescriptor_1_tFDF96CDD8FD2E980FF0C62E8161C66AF9FC212E2  : public IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_pinvoke : public IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_com : public IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_com
{
};
#endif

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Unity.XR.Oculus.Development
struct Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83  : public RuntimeObject
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

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
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


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Unity.XR.Oculus.OculusSettings
struct OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop Unity.XR.Oculus.OculusSettings::m_StereoRenderingModeDesktop
	int32_t ___m_StereoRenderingModeDesktop_4;
	// Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid Unity.XR.Oculus.OculusSettings::m_StereoRenderingModeAndroid
	int32_t ___m_StereoRenderingModeAndroid_5;
	// System.Boolean Unity.XR.Oculus.OculusSettings::SharedDepthBuffer
	bool ___SharedDepthBuffer_6;
	// System.Boolean Unity.XR.Oculus.OculusSettings::DashSupport
	bool ___DashSupport_7;
	// System.Boolean Unity.XR.Oculus.OculusSettings::V2Signing
	bool ___V2Signing_8;
	// System.Boolean Unity.XR.Oculus.OculusSettings::LowOverheadMode
	bool ___LowOverheadMode_9;
	// System.Boolean Unity.XR.Oculus.OculusSettings::ProtectedContext
	bool ___ProtectedContext_10;
	// System.Boolean Unity.XR.Oculus.OculusSettings::FocusAware
	bool ___FocusAware_11;
	// System.Boolean Unity.XR.Oculus.OculusSettings::OptimizeBufferDiscards
	bool ___OptimizeBufferDiscards_12;
	// System.Boolean Unity.XR.Oculus.OculusSettings::PhaseSync
	bool ___PhaseSync_13;
	// System.Boolean Unity.XR.Oculus.OculusSettings::SymmetricProjection
	bool ___SymmetricProjection_14;
	// System.Boolean Unity.XR.Oculus.OculusSettings::SubsampledLayout
	bool ___SubsampledLayout_15;
	// System.Boolean Unity.XR.Oculus.OculusSettings::TargetQuest
	bool ___TargetQuest_16;
	// System.Boolean Unity.XR.Oculus.OculusSettings::TargetQuest2
	bool ___TargetQuest2_17;
	// UnityEngine.Texture2D Unity.XR.Oculus.OculusSettings::SystemSplashScreen
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___SystemSplashScreen_18;

public:
	inline static int32_t get_offset_of_m_StereoRenderingModeDesktop_4() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___m_StereoRenderingModeDesktop_4)); }
	inline int32_t get_m_StereoRenderingModeDesktop_4() const { return ___m_StereoRenderingModeDesktop_4; }
	inline int32_t* get_address_of_m_StereoRenderingModeDesktop_4() { return &___m_StereoRenderingModeDesktop_4; }
	inline void set_m_StereoRenderingModeDesktop_4(int32_t value)
	{
		___m_StereoRenderingModeDesktop_4 = value;
	}

	inline static int32_t get_offset_of_m_StereoRenderingModeAndroid_5() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___m_StereoRenderingModeAndroid_5)); }
	inline int32_t get_m_StereoRenderingModeAndroid_5() const { return ___m_StereoRenderingModeAndroid_5; }
	inline int32_t* get_address_of_m_StereoRenderingModeAndroid_5() { return &___m_StereoRenderingModeAndroid_5; }
	inline void set_m_StereoRenderingModeAndroid_5(int32_t value)
	{
		___m_StereoRenderingModeAndroid_5 = value;
	}

	inline static int32_t get_offset_of_SharedDepthBuffer_6() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___SharedDepthBuffer_6)); }
	inline bool get_SharedDepthBuffer_6() const { return ___SharedDepthBuffer_6; }
	inline bool* get_address_of_SharedDepthBuffer_6() { return &___SharedDepthBuffer_6; }
	inline void set_SharedDepthBuffer_6(bool value)
	{
		___SharedDepthBuffer_6 = value;
	}

	inline static int32_t get_offset_of_DashSupport_7() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___DashSupport_7)); }
	inline bool get_DashSupport_7() const { return ___DashSupport_7; }
	inline bool* get_address_of_DashSupport_7() { return &___DashSupport_7; }
	inline void set_DashSupport_7(bool value)
	{
		___DashSupport_7 = value;
	}

	inline static int32_t get_offset_of_V2Signing_8() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___V2Signing_8)); }
	inline bool get_V2Signing_8() const { return ___V2Signing_8; }
	inline bool* get_address_of_V2Signing_8() { return &___V2Signing_8; }
	inline void set_V2Signing_8(bool value)
	{
		___V2Signing_8 = value;
	}

	inline static int32_t get_offset_of_LowOverheadMode_9() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___LowOverheadMode_9)); }
	inline bool get_LowOverheadMode_9() const { return ___LowOverheadMode_9; }
	inline bool* get_address_of_LowOverheadMode_9() { return &___LowOverheadMode_9; }
	inline void set_LowOverheadMode_9(bool value)
	{
		___LowOverheadMode_9 = value;
	}

	inline static int32_t get_offset_of_ProtectedContext_10() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___ProtectedContext_10)); }
	inline bool get_ProtectedContext_10() const { return ___ProtectedContext_10; }
	inline bool* get_address_of_ProtectedContext_10() { return &___ProtectedContext_10; }
	inline void set_ProtectedContext_10(bool value)
	{
		___ProtectedContext_10 = value;
	}

	inline static int32_t get_offset_of_FocusAware_11() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___FocusAware_11)); }
	inline bool get_FocusAware_11() const { return ___FocusAware_11; }
	inline bool* get_address_of_FocusAware_11() { return &___FocusAware_11; }
	inline void set_FocusAware_11(bool value)
	{
		___FocusAware_11 = value;
	}

	inline static int32_t get_offset_of_OptimizeBufferDiscards_12() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___OptimizeBufferDiscards_12)); }
	inline bool get_OptimizeBufferDiscards_12() const { return ___OptimizeBufferDiscards_12; }
	inline bool* get_address_of_OptimizeBufferDiscards_12() { return &___OptimizeBufferDiscards_12; }
	inline void set_OptimizeBufferDiscards_12(bool value)
	{
		___OptimizeBufferDiscards_12 = value;
	}

	inline static int32_t get_offset_of_PhaseSync_13() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___PhaseSync_13)); }
	inline bool get_PhaseSync_13() const { return ___PhaseSync_13; }
	inline bool* get_address_of_PhaseSync_13() { return &___PhaseSync_13; }
	inline void set_PhaseSync_13(bool value)
	{
		___PhaseSync_13 = value;
	}

	inline static int32_t get_offset_of_SymmetricProjection_14() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___SymmetricProjection_14)); }
	inline bool get_SymmetricProjection_14() const { return ___SymmetricProjection_14; }
	inline bool* get_address_of_SymmetricProjection_14() { return &___SymmetricProjection_14; }
	inline void set_SymmetricProjection_14(bool value)
	{
		___SymmetricProjection_14 = value;
	}

	inline static int32_t get_offset_of_SubsampledLayout_15() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___SubsampledLayout_15)); }
	inline bool get_SubsampledLayout_15() const { return ___SubsampledLayout_15; }
	inline bool* get_address_of_SubsampledLayout_15() { return &___SubsampledLayout_15; }
	inline void set_SubsampledLayout_15(bool value)
	{
		___SubsampledLayout_15 = value;
	}

	inline static int32_t get_offset_of_TargetQuest_16() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___TargetQuest_16)); }
	inline bool get_TargetQuest_16() const { return ___TargetQuest_16; }
	inline bool* get_address_of_TargetQuest_16() { return &___TargetQuest_16; }
	inline void set_TargetQuest_16(bool value)
	{
		___TargetQuest_16 = value;
	}

	inline static int32_t get_offset_of_TargetQuest2_17() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___TargetQuest2_17)); }
	inline bool get_TargetQuest2_17() const { return ___TargetQuest2_17; }
	inline bool* get_address_of_TargetQuest2_17() { return &___TargetQuest2_17; }
	inline void set_TargetQuest2_17(bool value)
	{
		___TargetQuest2_17 = value;
	}

	inline static int32_t get_offset_of_SystemSplashScreen_18() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___SystemSplashScreen_18)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_SystemSplashScreen_18() const { return ___SystemSplashScreen_18; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_SystemSplashScreen_18() { return &___SystemSplashScreen_18; }
	inline void set_SystemSplashScreen_18(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___SystemSplashScreen_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SystemSplashScreen_18), (void*)value);
	}
};


// System.TypeLoadException
struct TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_17;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_18;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_19;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_20;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassName_17), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyName_18() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___AssemblyName_18)); }
	inline String_t* get_AssemblyName_18() const { return ___AssemblyName_18; }
	inline String_t** get_address_of_AssemblyName_18() { return &___AssemblyName_18; }
	inline void set_AssemblyName_18(String_t* value)
	{
		___AssemblyName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyName_18), (void*)value);
	}

	inline static int32_t get_offset_of_MessageArg_19() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___MessageArg_19)); }
	inline String_t* get_MessageArg_19() const { return ___MessageArg_19; }
	inline String_t** get_address_of_MessageArg_19() { return &___MessageArg_19; }
	inline void set_MessageArg_19(String_t* value)
	{
		___MessageArg_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageArg_19), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceId_20() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___ResourceId_20)); }
	inline int32_t get_ResourceId_20() const { return ___ResourceId_20; }
	inline int32_t* get_address_of_ResourceId_20() { return &___ResourceId_20; }
	inline void set_ResourceId_20(int32_t value)
	{
		___ResourceId_20 = value;
	}
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93  : public IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4
{
public:
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___displayFocusChanged_2;

public:
	inline static int32_t get_offset_of_displayFocusChanged_2() { return static_cast<int32_t>(offsetof(XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93, ___displayFocusChanged_2)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_displayFocusChanged_2() const { return ___displayFocusChanged_2; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_displayFocusChanged_2() { return &___displayFocusChanged_2; }
	inline void set_displayFocusChanged_2(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___displayFocusChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFocusChanged_2), (void*)value);
	}
};


// UnityEngine.XR.XRDisplaySubsystemDescriptor
struct XRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833  : public IntegratedSubsystemDescriptor_1_tFDF96CDD8FD2E980FF0C62E8161C66AF9FC212E2
{
public:

public:
};


// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;

public:
	inline static int32_t get_offset_of_m_LoaderManagerInstance_6() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_LoaderManagerInstance_6)); }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * get_m_LoaderManagerInstance_6() const { return ___m_LoaderManagerInstance_6; }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F ** get_address_of_m_LoaderManagerInstance_6() { return &___m_LoaderManagerInstance_6; }
	inline void set_m_LoaderManagerInstance_6(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * value)
	{
		___m_LoaderManagerInstance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LoaderManagerInstance_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_InitManagerOnStart_7() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_InitManagerOnStart_7)); }
	inline bool get_m_InitManagerOnStart_7() const { return ___m_InitManagerOnStart_7; }
	inline bool* get_address_of_m_InitManagerOnStart_7() { return &___m_InitManagerOnStart_7; }
	inline void set_m_InitManagerOnStart_7(bool value)
	{
		___m_InitManagerOnStart_7 = value;
	}

	inline static int32_t get_offset_of_m_XRManager_8() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_XRManager_8)); }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * get_m_XRManager_8() const { return ___m_XRManager_8; }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F ** get_address_of_m_XRManager_8() { return &___m_XRManager_8; }
	inline void set_m_XRManager_8(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * value)
	{
		___m_XRManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_XRManager_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ProviderIntialized_9() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_ProviderIntialized_9)); }
	inline bool get_m_ProviderIntialized_9() const { return ___m_ProviderIntialized_9; }
	inline bool* get_address_of_m_ProviderIntialized_9() { return &___m_ProviderIntialized_9; }
	inline void set_m_ProviderIntialized_9(bool value)
	{
		___m_ProviderIntialized_9 = value;
	}

	inline static int32_t get_offset_of_m_ProviderStarted_10() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_ProviderStarted_10)); }
	inline bool get_m_ProviderStarted_10() const { return ___m_ProviderStarted_10; }
	inline bool* get_address_of_m_ProviderStarted_10() { return &___m_ProviderStarted_10; }
	inline void set_m_ProviderStarted_10(bool value)
	{
		___m_ProviderStarted_10 = value;
	}
};


// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09  : public IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE
{
public:
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___m_DeviceIdsCache_4;

public:
	inline static int32_t get_offset_of_trackingOriginUpdated_2() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___trackingOriginUpdated_2)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_trackingOriginUpdated_2() const { return ___trackingOriginUpdated_2; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_trackingOriginUpdated_2() { return &___trackingOriginUpdated_2; }
	inline void set_trackingOriginUpdated_2(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___trackingOriginUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingOriginUpdated_2), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryChanged_3() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___boundaryChanged_3)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_boundaryChanged_3() const { return ___boundaryChanged_3; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_boundaryChanged_3() { return &___boundaryChanged_3; }
	inline void set_boundaryChanged_3(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___boundaryChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceIdsCache_4() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___m_DeviceIdsCache_4)); }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * get_m_DeviceIdsCache_4() const { return ___m_DeviceIdsCache_4; }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B ** get_address_of_m_DeviceIdsCache_4() { return &___m_DeviceIdsCache_4; }
	inline void set_m_DeviceIdsCache_4(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * value)
	{
		___m_DeviceIdsCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceIdsCache_4), (void*)value);
	}
};


// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * ___U3CactiveLoaderU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_m_InitializationComplete_4() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_InitializationComplete_4)); }
	inline bool get_m_InitializationComplete_4() const { return ___m_InitializationComplete_4; }
	inline bool* get_address_of_m_InitializationComplete_4() { return &___m_InitializationComplete_4; }
	inline void set_m_InitializationComplete_4(bool value)
	{
		___m_InitializationComplete_4 = value;
	}

	inline static int32_t get_offset_of_m_RequiresSettingsUpdate_5() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_RequiresSettingsUpdate_5)); }
	inline bool get_m_RequiresSettingsUpdate_5() const { return ___m_RequiresSettingsUpdate_5; }
	inline bool* get_address_of_m_RequiresSettingsUpdate_5() { return &___m_RequiresSettingsUpdate_5; }
	inline void set_m_RequiresSettingsUpdate_5(bool value)
	{
		___m_RequiresSettingsUpdate_5 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticLoading_6() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticLoading_6)); }
	inline bool get_m_AutomaticLoading_6() const { return ___m_AutomaticLoading_6; }
	inline bool* get_address_of_m_AutomaticLoading_6() { return &___m_AutomaticLoading_6; }
	inline void set_m_AutomaticLoading_6(bool value)
	{
		___m_AutomaticLoading_6 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticRunning_7() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticRunning_7)); }
	inline bool get_m_AutomaticRunning_7() const { return ___m_AutomaticRunning_7; }
	inline bool* get_address_of_m_AutomaticRunning_7() { return &___m_AutomaticRunning_7; }
	inline void set_m_AutomaticRunning_7(bool value)
	{
		___m_AutomaticRunning_7 = value;
	}

	inline static int32_t get_offset_of_m_Loaders_8() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_Loaders_8)); }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * get_m_Loaders_8() const { return ___m_Loaders_8; }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 ** get_address_of_m_Loaders_8() { return &___m_Loaders_8; }
	inline void set_m_Loaders_8(List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * value)
	{
		___m_Loaders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Loaders_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_RegisteredLoaders_9() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_RegisteredLoaders_9)); }
	inline HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * get_m_RegisteredLoaders_9() const { return ___m_RegisteredLoaders_9; }
	inline HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 ** get_address_of_m_RegisteredLoaders_9() { return &___m_RegisteredLoaders_9; }
	inline void set_m_RegisteredLoaders_9(HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * value)
	{
		___m_RegisteredLoaders_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegisteredLoaders_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveLoaderU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___U3CactiveLoaderU3Ek__BackingField_10)); }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * get_U3CactiveLoaderU3Ek__BackingField_10() const { return ___U3CactiveLoaderU3Ek__BackingField_10; }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B ** get_address_of_U3CactiveLoaderU3Ek__BackingField_10() { return &___U3CactiveLoaderU3Ek__BackingField_10; }
	inline void set_U3CactiveLoaderU3Ek__BackingField_10(XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * value)
	{
		___U3CactiveLoaderU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CactiveLoaderU3Ek__BackingField_10), (void*)value);
	}
};


// System.DllNotFoundException
struct DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596  : public TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7
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


// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013  : public XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * ___m_SubsystemInstanceMap_4;

public:
	inline static int32_t get_offset_of_m_SubsystemInstanceMap_4() { return static_cast<int32_t>(offsetof(XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013, ___m_SubsystemInstanceMap_4)); }
	inline Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * get_m_SubsystemInstanceMap_4() const { return ___m_SubsystemInstanceMap_4; }
	inline Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B ** get_address_of_m_SubsystemInstanceMap_4() { return &___m_SubsystemInstanceMap_4; }
	inline void set_m_SubsystemInstanceMap_4(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * value)
	{
		___m_SubsystemInstanceMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemInstanceMap_4), (void*)value);
	}
};


// Unity.XR.Oculus.OculusLoader
struct OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB  : public XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013
{
public:

public:
};


// Unity.XR.Oculus.OculusRestarter
struct OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action Unity.XR.Oculus.OculusRestarter::onAfterRestart
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onAfterRestart_4;
	// System.Action Unity.XR.Oculus.OculusRestarter::onAfterShutdown
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onAfterShutdown_5;
	// System.Action Unity.XR.Oculus.OculusRestarter::onQuit
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onQuit_6;
	// System.Action Unity.XR.Oculus.OculusRestarter::onAfterCoroutine
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onAfterCoroutine_7;
	// UnityEngine.Coroutine Unity.XR.Oculus.OculusRestarter::m_Coroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_Coroutine_10;
	// UnityEngine.Coroutine Unity.XR.Oculus.OculusRestarter::m_pauseAndRestartCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_pauseAndRestartCoroutine_11;

public:
	inline static int32_t get_offset_of_onAfterRestart_4() { return static_cast<int32_t>(offsetof(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65, ___onAfterRestart_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onAfterRestart_4() const { return ___onAfterRestart_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onAfterRestart_4() { return &___onAfterRestart_4; }
	inline void set_onAfterRestart_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onAfterRestart_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAfterRestart_4), (void*)value);
	}

	inline static int32_t get_offset_of_onAfterShutdown_5() { return static_cast<int32_t>(offsetof(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65, ___onAfterShutdown_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onAfterShutdown_5() const { return ___onAfterShutdown_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onAfterShutdown_5() { return &___onAfterShutdown_5; }
	inline void set_onAfterShutdown_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onAfterShutdown_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAfterShutdown_5), (void*)value);
	}

	inline static int32_t get_offset_of_onQuit_6() { return static_cast<int32_t>(offsetof(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65, ___onQuit_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onQuit_6() const { return ___onQuit_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onQuit_6() { return &___onQuit_6; }
	inline void set_onQuit_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onQuit_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onQuit_6), (void*)value);
	}

	inline static int32_t get_offset_of_onAfterCoroutine_7() { return static_cast<int32_t>(offsetof(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65, ___onAfterCoroutine_7)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onAfterCoroutine_7() const { return ___onAfterCoroutine_7; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onAfterCoroutine_7() { return &___onAfterCoroutine_7; }
	inline void set_onAfterCoroutine_7(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onAfterCoroutine_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAfterCoroutine_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Coroutine_10() { return static_cast<int32_t>(offsetof(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65, ___m_Coroutine_10)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_Coroutine_10() const { return ___m_Coroutine_10; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_Coroutine_10() { return &___m_Coroutine_10; }
	inline void set_m_Coroutine_10(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_Coroutine_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Coroutine_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_pauseAndRestartCoroutine_11() { return static_cast<int32_t>(offsetof(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65, ___m_pauseAndRestartCoroutine_11)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_pauseAndRestartCoroutine_11() const { return ___m_pauseAndRestartCoroutine_11; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_pauseAndRestartCoroutine_11() { return &___m_pauseAndRestartCoroutine_11; }
	inline void set_m_pauseAndRestartCoroutine_11(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_pauseAndRestartCoroutine_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_pauseAndRestartCoroutine_11), (void*)value);
	}
};


// <Module>


// <Module>


// System.Object


// System.Object


// System.EmptyArray`1<System.Object>

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>


// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>

struct List_1_t56455D217921470E52E7D33A1794256E31084DD8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8_StaticFields, ____emptyArray_5)); }
	inline XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>


// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>

struct List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_StaticFields, ____emptyArray_5)); }
	inline XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>


// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>

struct List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_StaticFields, ____emptyArray_5)); }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// Unity.XR.Oculus.Boundary


// Unity.XR.Oculus.Boundary


// System.Text.Encoding

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.Text.Encoding


// Unity.XR.Oculus.InputFocus

struct InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields
{
public:
	// System.Action Unity.XR.Oculus.InputFocus::InputFocusAcquired
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InputFocusAcquired_0;
	// System.Action Unity.XR.Oculus.InputFocus::InputFocusLost
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InputFocusLost_1;
	// System.Boolean Unity.XR.Oculus.InputFocus::hadInputFocus
	bool ___hadInputFocus_2;

public:
	inline static int32_t get_offset_of_InputFocusAcquired_0() { return static_cast<int32_t>(offsetof(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields, ___InputFocusAcquired_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InputFocusAcquired_0() const { return ___InputFocusAcquired_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InputFocusAcquired_0() { return &___InputFocusAcquired_0; }
	inline void set_InputFocusAcquired_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InputFocusAcquired_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputFocusAcquired_0), (void*)value);
	}

	inline static int32_t get_offset_of_InputFocusLost_1() { return static_cast<int32_t>(offsetof(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields, ___InputFocusLost_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InputFocusLost_1() const { return ___InputFocusLost_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InputFocusLost_1() { return &___InputFocusLost_1; }
	inline void set_InputFocusLost_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InputFocusLost_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputFocusLost_1), (void*)value);
	}

	inline static int32_t get_offset_of_hadInputFocus_2() { return static_cast<int32_t>(offsetof(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields, ___hadInputFocus_2)); }
	inline bool get_hadInputFocus_2() const { return ___hadInputFocus_2; }
	inline bool* get_address_of_hadInputFocus_2() { return &___hadInputFocus_2; }
	inline void set_hadInputFocus_2(bool value)
	{
		___hadInputFocus_2 = value;
	}
};


// Unity.XR.Oculus.InputFocus


// Unity.XR.Oculus.NativeMethods


// Unity.XR.Oculus.NativeMethods


// Unity.XR.Oculus.OculusSession


// Unity.XR.Oculus.OculusSession


// Unity.XR.Oculus.Performance

struct Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields
{
public:
	// System.Single[] Unity.XR.Oculus.Performance::cachedDisplayAvailableFrequencies
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___cachedDisplayAvailableFrequencies_0;

public:
	inline static int32_t get_offset_of_cachedDisplayAvailableFrequencies_0() { return static_cast<int32_t>(offsetof(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields, ___cachedDisplayAvailableFrequencies_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_cachedDisplayAvailableFrequencies_0() const { return ___cachedDisplayAvailableFrequencies_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_cachedDisplayAvailableFrequencies_0() { return &___cachedDisplayAvailableFrequencies_0; }
	inline void set_cachedDisplayAvailableFrequencies_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___cachedDisplayAvailableFrequencies_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedDisplayAvailableFrequencies_0), (void*)value);
	}
};


// Unity.XR.Oculus.Performance


// Unity.XR.Oculus.RegisterUpdateCallback


// Unity.XR.Oculus.RegisterUpdateCallback


// Unity.XR.Oculus.Stats

struct Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields
{
public:
	// UnityEngine.IntegratedSubsystem Unity.XR.Oculus.Stats::m_Display
	IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * ___m_Display_0;
	// System.String Unity.XR.Oculus.Stats::m_PluginVersion
	String_t* ___m_PluginVersion_1;

public:
	inline static int32_t get_offset_of_m_Display_0() { return static_cast<int32_t>(offsetof(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields, ___m_Display_0)); }
	inline IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * get_m_Display_0() const { return ___m_Display_0; }
	inline IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 ** get_address_of_m_Display_0() { return &___m_Display_0; }
	inline void set_m_Display_0(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * value)
	{
		___m_Display_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Display_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PluginVersion_1() { return static_cast<int32_t>(offsetof(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields, ___m_PluginVersion_1)); }
	inline String_t* get_m_PluginVersion_1() const { return ___m_PluginVersion_1; }
	inline String_t** get_address_of_m_PluginVersion_1() { return &___m_PluginVersion_1; }
	inline void set_m_PluginVersion_1(String_t* value)
	{
		___m_PluginVersion_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PluginVersion_1), (void*)value);
	}
};


// Unity.XR.Oculus.Stats


// System.String

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


// System.String


// Unity.XR.Oculus.Utils


// Unity.XR.Oculus.Utils


// System.ValueType


// System.ValueType


// UnityEngine.YieldInstruction


// UnityEngine.YieldInstruction


// Unity.XR.Oculus.NativeMethods/Internal


// Unity.XR.Oculus.NativeMethods/Internal


// Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22


// Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22


// Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23


// Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23


// Unity.XR.Oculus.Stats/AdaptivePerformance


// Unity.XR.Oculus.Stats/AdaptivePerformance


// Unity.XR.Oculus.Stats/AppMetrics


// Unity.XR.Oculus.Stats/AppMetrics


// Unity.XR.Oculus.Stats/PerfMetrics


// Unity.XR.Oculus.Stats/PerfMetrics


// System.Collections.Generic.List`1/Enumerator<System.Object>


// System.Collections.Generic.List`1/Enumerator<System.Object>


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>


// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>


// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>


// System.Boolean

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


// System.Boolean


// System.Byte


// System.Byte


// System.Enum

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


// System.Enum


// System.Int32


// System.Int32


// System.IntPtr

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


// System.IntPtr


// System.Single


// System.Single


// System.UInt16


// System.UInt16


// UnityEngine.Vector3

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


// UnityEngine.Vector3


// UnityEngine.Vector4

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


// UnityEngine.Vector4


// System.Void


// System.Void


// UnityEngine.WaitForSeconds


// UnityEngine.WaitForSeconds


// Unity.XR.Oculus.NativeMethods/UserDefinedSettings


// Unity.XR.Oculus.NativeMethods/UserDefinedSettings


// UnityEngine.ColorSpace


// UnityEngine.ColorSpace


// UnityEngine.Coroutine


// UnityEngine.Coroutine


// System.Delegate


// System.Delegate


// System.Exception

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};


// System.Exception


// UnityEngine.HideFlags


// UnityEngine.HideFlags


// UnityEngine.IntegratedSubsystem


// UnityEngine.IntegratedSubsystem


// UnityEngine.IntegratedSubsystemDescriptor


// UnityEngine.IntegratedSubsystemDescriptor


// UnityEngine.Object

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


// UnityEngine.Object


// Unity.XR.Oculus.OculusUsages

struct OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::volumeUp
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___volumeUp_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::volumeDown
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___volumeDown_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::thumbrest
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___thumbrest_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::indexTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___indexTouch_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::thumbTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___thumbTouch_4;

public:
	inline static int32_t get_offset_of_volumeUp_0() { return static_cast<int32_t>(offsetof(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields, ___volumeUp_0)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_volumeUp_0() const { return ___volumeUp_0; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_volumeUp_0() { return &___volumeUp_0; }
	inline void set_volumeUp_0(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___volumeUp_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___volumeUp_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_volumeDown_1() { return static_cast<int32_t>(offsetof(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields, ___volumeDown_1)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_volumeDown_1() const { return ___volumeDown_1; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_volumeDown_1() { return &___volumeDown_1; }
	inline void set_volumeDown_1(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___volumeDown_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___volumeDown_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbrest_2() { return static_cast<int32_t>(offsetof(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields, ___thumbrest_2)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_thumbrest_2() const { return ___thumbrest_2; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_thumbrest_2() { return &___thumbrest_2; }
	inline void set_thumbrest_2(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___thumbrest_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbrest_2))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexTouch_3() { return static_cast<int32_t>(offsetof(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields, ___indexTouch_3)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_indexTouch_3() const { return ___indexTouch_3; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_indexTouch_3() { return &___indexTouch_3; }
	inline void set_indexTouch_3(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___indexTouch_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexTouch_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbTouch_4() { return static_cast<int32_t>(offsetof(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields, ___thumbTouch_4)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_thumbTouch_4() const { return ___thumbTouch_4; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_thumbTouch_4() { return &___thumbTouch_4; }
	inline void set_thumbTouch_4(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___thumbTouch_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbTouch_4))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// Unity.XR.Oculus.OculusUsages


// Unity.XR.Oculus.SystemHeadset


// Unity.XR.Oculus.SystemHeadset


// Unity.XR.Oculus.Boundary/BoundaryType


// Unity.XR.Oculus.Boundary/BoundaryType


// Unity.XR.Oculus.Development/UserDeveloperModeSettingCache


// Unity.XR.Oculus.Development/UserDeveloperModeSettingCache


// Unity.XR.Oculus.OculusLoader/DeviceSupportedResult


// Unity.XR.Oculus.OculusLoader/DeviceSupportedResult


// Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid


// Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid


// Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop


// Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop


// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRDisplaySubsystem>


// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRDisplaySubsystem>


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>


// UnityEngine.Component


// UnityEngine.Component


// Unity.XR.Oculus.Development

struct Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_StaticFields
{
public:
	// Unity.XR.Oculus.Development/UserDeveloperModeSettingCache Unity.XR.Oculus.Development::s_CachedMode
	int32_t ___s_CachedMode_0;

public:
	inline static int32_t get_offset_of_s_CachedMode_0() { return static_cast<int32_t>(offsetof(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_StaticFields, ___s_CachedMode_0)); }
	inline int32_t get_s_CachedMode_0() const { return ___s_CachedMode_0; }
	inline int32_t* get_address_of_s_CachedMode_0() { return &___s_CachedMode_0; }
	inline void set_s_CachedMode_0(int32_t value)
	{
		___s_CachedMode_0 = value;
	}
};


// Unity.XR.Oculus.Development


// UnityEngine.GameObject


// UnityEngine.GameObject


// System.MulticastDelegate


// System.MulticastDelegate


// UnityEngine.ScriptableObject


// UnityEngine.ScriptableObject


// System.SystemException


// System.SystemException


// System.Action


// System.Action


// UnityEngine.Behaviour


// UnityEngine.Behaviour


// System.NotSupportedException


// System.NotSupportedException


// Unity.XR.Oculus.OculusSettings

struct OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_StaticFields
{
public:
	// Unity.XR.Oculus.OculusSettings Unity.XR.Oculus.OculusSettings::s_Settings
	OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * ___s_Settings_19;

public:
	inline static int32_t get_offset_of_s_Settings_19() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_StaticFields, ___s_Settings_19)); }
	inline OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * get_s_Settings_19() const { return ___s_Settings_19; }
	inline OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C ** get_address_of_s_Settings_19() { return &___s_Settings_19; }
	inline void set_s_Settings_19(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * value)
	{
		___s_Settings_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Settings_19), (void*)value);
	}
};


// Unity.XR.Oculus.OculusSettings


// System.TypeLoadException


// System.TypeLoadException


// UnityEngine.Events.UnityAction


// UnityEngine.Events.UnityAction


// UnityEngine.XR.XRDisplaySubsystem


// UnityEngine.XR.XRDisplaySubsystem


// UnityEngine.XR.XRDisplaySubsystemDescriptor


// UnityEngine.XR.XRDisplaySubsystemDescriptor


// UnityEngine.XR.Management.XRGeneralSettings

struct XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields
{
public:
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * ___s_RuntimeSettingsInstance_5;

public:
	inline static int32_t get_offset_of_k_SettingsKey_4() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields, ___k_SettingsKey_4)); }
	inline String_t* get_k_SettingsKey_4() const { return ___k_SettingsKey_4; }
	inline String_t** get_address_of_k_SettingsKey_4() { return &___k_SettingsKey_4; }
	inline void set_k_SettingsKey_4(String_t* value)
	{
		___k_SettingsKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_SettingsKey_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_RuntimeSettingsInstance_5() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields, ___s_RuntimeSettingsInstance_5)); }
	inline XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * get_s_RuntimeSettingsInstance_5() const { return ___s_RuntimeSettingsInstance_5; }
	inline XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 ** get_address_of_s_RuntimeSettingsInstance_5() { return &___s_RuntimeSettingsInstance_5; }
	inline void set_s_RuntimeSettingsInstance_5(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * value)
	{
		___s_RuntimeSettingsInstance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RuntimeSettingsInstance_5), (void*)value);
	}
};


// UnityEngine.XR.Management.XRGeneralSettings


// UnityEngine.XR.XRInputSubsystem


// UnityEngine.XR.XRInputSubsystem


// UnityEngine.XR.Management.XRLoader


// UnityEngine.XR.Management.XRLoader


// UnityEngine.XR.Management.XRManagerSettings


// UnityEngine.XR.Management.XRManagerSettings


// System.DllNotFoundException


// System.DllNotFoundException


// UnityEngine.MonoBehaviour


// UnityEngine.MonoBehaviour


// UnityEngine.XR.Management.XRLoaderHelper


// UnityEngine.XR.Management.XRLoaderHelper


// Unity.XR.Oculus.OculusLoader

struct OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor> Unity.XR.Oculus.OculusLoader::s_DisplaySubsystemDescriptors
	List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * ___s_DisplaySubsystemDescriptors_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor> Unity.XR.Oculus.OculusLoader::s_InputSubsystemDescriptors
	List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * ___s_InputSubsystemDescriptors_6;

public:
	inline static int32_t get_offset_of_s_DisplaySubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields, ___s_DisplaySubsystemDescriptors_5)); }
	inline List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * get_s_DisplaySubsystemDescriptors_5() const { return ___s_DisplaySubsystemDescriptors_5; }
	inline List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 ** get_address_of_s_DisplaySubsystemDescriptors_5() { return &___s_DisplaySubsystemDescriptors_5; }
	inline void set_s_DisplaySubsystemDescriptors_5(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * value)
	{
		___s_DisplaySubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DisplaySubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_InputSubsystemDescriptors_6() { return static_cast<int32_t>(offsetof(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields, ___s_InputSubsystemDescriptors_6)); }
	inline List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * get_s_InputSubsystemDescriptors_6() const { return ___s_InputSubsystemDescriptors_6; }
	inline List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 ** get_address_of_s_InputSubsystemDescriptors_6() { return &___s_InputSubsystemDescriptors_6; }
	inline void set_s_InputSubsystemDescriptors_6(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * value)
	{
		___s_InputSubsystemDescriptors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystemDescriptors_6), (void*)value);
	}
};


// Unity.XR.Oculus.OculusLoader


// Unity.XR.Oculus.OculusRestarter

struct OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields
{
public:
	// System.String Unity.XR.Oculus.OculusRestarter::k_GameObjectName
	String_t* ___k_GameObjectName_8;
	// Unity.XR.Oculus.OculusRestarter Unity.XR.Oculus.OculusRestarter::s_Instance
	OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * ___s_Instance_9;
	// System.Int32 Unity.XR.Oculus.OculusRestarter::m_pauseAndRestartAttempts
	int32_t ___m_pauseAndRestartAttempts_12;
	// System.Single Unity.XR.Oculus.OculusRestarter::<TimeBetweenRestartAttempts>k__BackingField
	float ___U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_k_GameObjectName_8() { return static_cast<int32_t>(offsetof(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields, ___k_GameObjectName_8)); }
	inline String_t* get_k_GameObjectName_8() const { return ___k_GameObjectName_8; }
	inline String_t** get_address_of_k_GameObjectName_8() { return &___k_GameObjectName_8; }
	inline void set_k_GameObjectName_8(String_t* value)
	{
		___k_GameObjectName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_GameObjectName_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_Instance_9() { return static_cast<int32_t>(offsetof(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields, ___s_Instance_9)); }
	inline OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * get_s_Instance_9() const { return ___s_Instance_9; }
	inline OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 ** get_address_of_s_Instance_9() { return &___s_Instance_9; }
	inline void set_s_Instance_9(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * value)
	{
		___s_Instance_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_pauseAndRestartAttempts_12() { return static_cast<int32_t>(offsetof(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields, ___m_pauseAndRestartAttempts_12)); }
	inline int32_t get_m_pauseAndRestartAttempts_12() const { return ___m_pauseAndRestartAttempts_12; }
	inline int32_t* get_address_of_m_pauseAndRestartAttempts_12() { return &___m_pauseAndRestartAttempts_12; }
	inline void set_m_pauseAndRestartAttempts_12(int32_t value)
	{
		___m_pauseAndRestartAttempts_12 = value;
	}

	inline static int32_t get_offset_of_U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields, ___U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13)); }
	inline float get_U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13() const { return ___U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13; }
	inline float* get_address_of_U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13() { return &___U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13; }
	inline void set_U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13(float value)
	{
		___U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13 = value;
	}
};


// Unity.XR.Oculus.OculusRestarter

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<!!0>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StartSubsystem_TisRuntimeObject_m5FFD6719D8FE560199B25C5D3AF8D0D40DFD038E_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StopSubsystem_TisRuntimeObject_m5700EB064085C2D3E817458AD01E0C97624102A7_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_DestroySubsystem_TisRuntimeObject_m43760686D2E4C1FBCE4BD18489E767F294A68E8A_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_gshared (InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Byte>(!!0[],!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m204EA717B425B2D05BB91568E62A291F99E44F75_gshared (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, uint8_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_mF37532CC93E9088116D7150AA6A94582E7B7D3F4_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___subsystems0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 UnityEngine.IntegratedSubsystem`1<System.Object>::get_SubsystemDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * IntegratedSubsystem_1_get_SubsystemDescriptor_m17720E650E467036888C6716BD15BCB82C3BD30D_gshared (IntegratedSubsystem_1_t0B19871ED45EAD9F0E0DD6AB41BABCAFBD8C56E4 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline (const RuntimeMethod* method);

// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryConfigured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryConfigured_m63425B4A401546727492B96CEDDBDF636499D961 (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryDimensions(Unity.XR.Oculus.Boundary/BoundaryType,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryDimensions_m32B73039BE0E747DAFB358D71514D5E7C75153A6 (int32_t ___boundaryType0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___dimensions1, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryVisible_m274038DDF26F9FE120C68CD993C31D751C18B369 (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::SetBoundaryVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetBoundaryVisible_mC4CAB764018040FFB39B8034D86B8E282DB73FF1 (bool ___boundaryVisible0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_mEFC4658EA34BA262EB8D6D1AB5FDB73478EA32C7 (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::SetDeveloperModeStrict(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_SetDeveloperModeStrict_mB7F4A67FF3C6396D8600290B3BBA555A6CF56767 (bool ___active0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetHasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetHasInputFocus_mC5174AB5E09FCDEC72E3FE70EE041824A3328806 (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.InputFocus::get_hasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFocus_get_hasInputFocus_m89BC1D49BF5D1BD9207D5D32780FA93CEC6AD793 (const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetColorScale(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetColorScale_mA8ED134FCC56CCD16F92734ADCBF2526342EB02C (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetColorOffset(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetColorOffset_m6765A7EC8EFFDB061AE48B3F53658BBD3FC26FBF (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetIsSupportedDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetIsSupportedDevice_mA3EF73A5F9CA1AD2B6E9D8F1F560A62D14A19E92 (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::LoadOVRPlugin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_LoadOVRPlugin_m20BF6ADFC47F043ED9CB9F86199E26C8A46AD5AF (String_t* ___ovrpPath0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::UnloadOVRPlugin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_UnloadOVRPlugin_m6C683304420498120BF38390A1129A5B01A67F1E (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetUserDefinedSettings(Unity.XR.Oculus.NativeMethods/UserDefinedSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetUserDefinedSettings_mE187F03B58FEB8FE874B938E28401C06C919221E (UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  ___settings0, const RuntimeMethod* method);
// System.Int32 Unity.XR.Oculus.NativeMethods/Internal::SetCPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_SetCPULevel_m0568DA61DDC47E9F28D26C52EA4035A6A139CCA8 (int32_t ___cpuLevel0, const RuntimeMethod* method);
// System.Int32 Unity.XR.Oculus.NativeMethods/Internal::SetGPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_SetGPULevel_mBC46AC72882E2FFD4358F5812B8F45329C62843A (int32_t ___gpuLevel0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::GetOVRPVersion(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_GetOVRPVersion_m1E2BB4B4CDC04F9DAD64DF67D3CFC76085AF305B (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___version0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::EnablePerfMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_EnablePerfMetrics_m2572EAFC2373A4E10168EDD76D576A44212466D4 (bool ___enable0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::EnableAppMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_EnableAppMetrics_m327F6E0F90F1A962D000C105EFE540CD43E78D70 (bool ___enable0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::SetDeveloperModeStrict(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_SetDeveloperModeStrict_m0A2121361A4FFDA8D0EF716D2C011F0EF19A34F8 (bool ___active0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetAppHasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetAppHasInputFocus_mA679379FDE6F3AFAFBF35841818A0BD5A492579F (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryConfigured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryConfigured_m38A8FB6A7F2DCE7882E9DF3707530E40D85E6492 (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryDimensions(Unity.XR.Oculus.Boundary/BoundaryType,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryDimensions_m07ED6D4A7E3C368766B953282AE8FA76A257849B (int32_t ___boundaryType0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___dimensions1, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryVisible_mFFBE7E9B928B930A6C4B1F8F7391F3403CD9F72F (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetBoundaryVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetBoundaryVisible_m3F762D66ED2E7998D8EDD6B065398796C32B2139 (bool ___boundaryVisible0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetAppShouldQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetAppShouldQuit_m2201DC6D753AE50E8E041C75816721CC622DA353 (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetDisplayAvailableFrequencies(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetDisplayAvailableFrequencies_mA6A02093DF72E979557B913FEE19BA4B9CF61159 (intptr_t ___ptr0, int32_t* ___numFrequencies1, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::SetDisplayFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_SetDisplayFrequency_m3221766C0E2DF541A57A44508194B245E038A965 (float ___refreshRate0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetDisplayFrequency(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetDisplayFrequency_m3264CC851EAF260CA1EFD7E4984362B1B7BC8676 (float* ___refreshRate0, const RuntimeMethod* method);
// Unity.XR.Oculus.SystemHeadset Unity.XR.Oculus.NativeMethods/Internal::GetSystemHeadsetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_GetSystemHeadsetType_mC0537BB4F5EA3EDD3993C7A05487B04A0FADAEFB (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetTiledMultiResSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetTiledMultiResSupported_mEE711350D975E6C4FD4D0634AEDD64F3FEF2E0BB (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetTiledMultiResLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetTiledMultiResLevel_mEEC4003CC9AEA6156EE976678E3409FCABE6EDD2 (int32_t ___level0, const RuntimeMethod* method);
// System.Int32 Unity.XR.Oculus.NativeMethods/Internal::GetTiledMultiResLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_GetTiledMultiResLevel_m2BC392E4824622E98F610EC02CB4A8196FEF96CE (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetTiledMultiResDynamic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetTiledMultiResDynamic_m037817F3884FC015AC28AB27520A40B3511D2A10 (bool ___isDynamic0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetShouldRestartSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetShouldRestartSession_m232B73B6EB98D8E93F361FFBEDC386E93CD86E1E (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetIsSupportedDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetIsSupportedDevice_mFC86118E0FC74ABE30C84639472ADE492083AFD2 (const RuntimeMethod* method);
// Unity.XR.Oculus.OculusLoader/DeviceSupportedResult Unity.XR.Oculus.OculusLoader::IsDeviceSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OculusLoader_IsDeviceSupported_mC2E5A317811DBD9EB506037FD358CF7F64814286 (const RuntimeMethod* method);
// Unity.XR.Oculus.OculusSettings Unity.XR.Oculus.OculusLoader::GetSettings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * OculusLoader_GetSettings_mF0D5694BD84372039D4227997B00CAB33A419CAC_inline (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.UInt16 Unity.XR.Oculus.OculusSettings::GetStereoRenderingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t OculusSettings_GetStereoRenderingMode_mB4FF47E7831A653C90D7B08E336C40D66968F2FD (OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * __this, const RuntimeMethod* method);
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_mE0C265DD8E215FC537CFA8B000C0977B10C6A49C (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::SetUserDefinedSettings(Unity.XR.Oculus.NativeMethods/UserDefinedSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetUserDefinedSettings_m60831E50BCEB63E8B8E3A6421CE2D6BC21FB6FCD (UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  ___settings0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<UnityEngine.XR.XRDisplaySubsystemDescriptor,UnityEngine.XR.XRDisplaySubsystem>(System.Collections.Generic.List`1<!!0>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m2674D41E2C5D7DE045BEF6EDE661A9A0767A99FF (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 *, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_gshared)(__this, ___descriptors0, ___id1, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<UnityEngine.XR.XRInputSubsystemDescriptor,UnityEngine.XR.XRInputSubsystem>(System.Collections.Generic.List`1<!!0>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m69A4EA17370FA4464CCE4BEAD83D5E0D47AADB56 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 *, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_gshared)(__this, ___descriptors0, ___id1, method);
}
// UnityEngine.XR.XRDisplaySubsystem Unity.XR.Oculus.OculusLoader::get_displaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * OculusLoader_get_displaySubsystem_mE2C42E00522835401105B4A163E0768AA433E71A (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method);
// UnityEngine.XR.XRInputSubsystem Unity.XR.Oculus.OculusLoader::get_inputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * OculusLoader_get_inputSubsystem_m8E87DAAF3BB44B2F3945232518EAF6862E9D1B95 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Initialize_m009EBB49477FAD1D7E03DA45EB80F15E6D28F521 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF935C6C4671BBBEA57D48C65DE73B9D27EB611D7 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_StartSubsystem_TisRuntimeObject_m5FFD6719D8FE560199B25C5D3AF8D0D40DFD038E_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m243694C799C58C0396A563991537B952A5B48F98 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_StartSubsystem_TisRuntimeObject_m5FFD6719D8FE560199B25C5D3AF8D0D40DFD038E_gshared)(__this, method);
}
// System.Void Unity.XR.Oculus.Development::OverrideDeveloperModeStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_OverrideDeveloperModeStart_mC9E24212121397B0C37A27904F5B95B4FD871C88 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m8145C9418422BD4F45DBBF37D028DDD2F1A6F7AD (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_StopSubsystem_TisRuntimeObject_m5700EB064085C2D3E817458AD01E0C97624102A7_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m530AFB9035AAA37796915EEB42C678B7A7F39686 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_StopSubsystem_TisRuntimeObject_m5700EB064085C2D3E817458AD01E0C97624102A7_gshared)(__this, method);
}
// System.Void Unity.XR.Oculus.Development::OverrideDeveloperModeStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_OverrideDeveloperModeStop_mF62FEF98A60806E453F85B7419FE8A726A54A621 (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Deinitialize_m5783A25B492DD2271AF20528CC7225AA69B48D2B (const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7AE6139F914F84F8A7AA30CC70F6A01A757E1BE3 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_DestroySubsystem_TisRuntimeObject_m43760686D2E4C1FBCE4BD18489E767F294A68E8A_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m3724DC2747A9C6A68F78041E6FA78F6AC5CB39C8 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_DestroySubsystem_TisRuntimeObject_m43760686D2E4C1FBCE4BD18489E767F294A68E8A_gshared)(__this, method);
}
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m10E44C187C0E5807F9C955A176885FAA95829267 (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::LoadOVRPlugin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_LoadOVRPlugin_m4D4C796D2F76D0CA13969C61603C01B0A26478E7 (String_t* ___ovrpPath0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper__ctor_mD27E0396EC4B11E208CF891642475B496CADAC9B (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>::.ctor()
inline void List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00 (List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB (List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Unity.XR.Oculus.OculusRestarter::set_TimeBetweenRestartAttempts(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusRestarter_set_TimeBetweenRestartAttempts_m3FDA87CEAC42CF6AF6521DFF3E4EB1CC0BC9454F_inline (float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Unity.XR.Oculus.OculusRestarter>()
inline OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * GameObject_AddComponent_TisOculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_m202AE7171E57107B6E8DDAFA0F044806B81EFBFF (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Unity.XR.Oculus.OculusRestarter>()
inline OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * GameObject_GetComponent_TisOculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_mACE49B13D3DE9F0EE5F3B471A3230A439C6C8A92 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Single Unity.XR.Oculus.OculusRestarter::get_TimeBetweenRestartAttempts()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float OculusRestarter_get_TimeBetweenRestartAttempts_m4643B819097BB5929C5EA5AAC0BBD798817B2465_inline (const RuntimeMethod* method);
// System.Collections.IEnumerator Unity.XR.Oculus.OculusRestarter::PauseAndRestartCoroutine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OculusRestarter_PauseAndRestartCoroutine_mE17893C50E82B62DABC119C745041BD732A93E72 (OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * __this, float ___pauseTimeInSeconds0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndRestartCoroutineU3Ed__22__ctor_mE9A0F9B54589637F39AD77E522D257AAF233F600 (U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartCoroutineU3Ed__23__ctor_mFBCFBC73BF40550C580D2DBD6446E6765106D5DC (U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetShouldRestartSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetShouldRestartSession_m691BE303740AD0161244C7D02838D9A1397D8EA1 (const RuntimeMethod* method);
// Unity.XR.Oculus.OculusRestarter Unity.XR.Oculus.OculusRestarter::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * OculusRestarter_get_Instance_m39A581FAA5C8E45A6603F7FA0EA6CAD784887796 (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.OculusRestarter::PauseAndRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRestarter_PauseAndRestart_m28727BF6DE2EB3868DBCE80CB9FFB05F11800C9B (OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B (InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_gshared)(__this, ___usageName0, method);
}
// System.Int32 Unity.XR.Oculus.NativeMethods::SetCPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_SetCPULevel_mABD8BE1F1CE41DC683BA43822DB456530FD6D929 (int32_t ___cpuLevel0, const RuntimeMethod* method);
// System.Int32 Unity.XR.Oculus.NativeMethods::SetGPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_SetGPULevel_m055FCE766C4C218F61A06ACA963F5ED637834DF7 (int32_t ___gpuLevel0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetDisplayAvailableFrequencies(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetDisplayAvailableFrequencies_m2E4C861D87369CCA6A40AAFF6EA5CF65093D4F39 (intptr_t ___ptr0, int32_t* ___numFrequencies1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mB339DD0B9D5778400B8CA9BA45169C9C1C14835D (int32_t ___cb0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m5B004FA5DF0DC280EB8677D5E253BA93924C40AD (intptr_t ___source0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_mC556D1077E92ACD2AC3FDEF3040B88FAC0F7F390 (intptr_t ___hglobal0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::SetDisplayFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_SetDisplayFrequency_m0C913002249CA6C2FDAD4AB57A0957D4F5F8646C (float ___refreshRate0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetDisplayFrequency(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetDisplayFrequency_m5D89A6D7DF13E557DCF74B65770B5945A2C327BE (float* ___refreshRate0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::add_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_onBeforeRender_m1324FCAC06439BC14CFCE062C6BEFB76C7501228 (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::remove_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_onBeforeRender_mD2FFDA214D242F524EFF15932A7334F1F0D526D0 (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.InputFocus::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_Update_mA29F59D3148E351431EF53DEEE921320DC66945E (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.OculusSession::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusSession_Update_m9956F648A7B5BE12D6D26ED0DEBFD7B20722E4C2 (const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCB0E1C045647658CF6B7C646F98F938750AB1B19 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::GetOVRPVersion(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_GetOVRPVersion_mB328CD13DA707D9B1B26A3EBC82A9F364F140BE9 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___version0, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Byte>(!!0[],!!0)
inline int32_t Array_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m204EA717B425B2D05BB91568E62A291F99E44F75 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, uint8_t ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, uint8_t, const RuntimeMethod*))Array_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m204EA717B425B2D05BB91568E62A291F99E44F75_gshared)(___array0, ___value1, method);
}
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_ASCII_mFA250EFF131288B0C4572FC27C7393FD469DC1C0 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>::.ctor()
inline void List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4 (List_1_t56455D217921470E52E7D33A1794256E31084DD8 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t56455D217921470E52E7D33A1794256E31084DD8 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetInstances<UnityEngine.XR.XRDisplaySubsystem>(System.Collections.Generic.List`1<!!0>)
inline void SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7815329E7014FDE1DE442AF3F320E30E685A3880 (List_1_t56455D217921470E52E7D33A1794256E31084DD8 * ___subsystems0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t56455D217921470E52E7D33A1794256E31084DD8 *, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_mF37532CC93E9088116D7150AA6A94582E7B7D3F4_gshared)(___subsystems0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>::GetEnumerator()
inline Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828  List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D (List_1_t56455D217921470E52E7D33A1794256E31084DD8 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828  (*) (List_1_t56455D217921470E52E7D33A1794256E31084DD8 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>::get_Current()
inline XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_inline (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 * __this, const RuntimeMethod* method)
{
	return ((  XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * (*) (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// !0 UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>::get_SubsystemDescriptor()
inline XRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833 * IntegratedSubsystem_1_get_SubsystemDescriptor_m816FB5D3478D016CBD470BA93CF200BB0FA1DF42 (IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4 * __this, const RuntimeMethod* method)
{
	return ((  XRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833 * (*) (IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4 *, const RuntimeMethod*))IntegratedSubsystem_1_get_SubsystemDescriptor_m17720E650E467036888C6716BD15BCB82C3BD30D_gshared)(__this, method);
}
// System.String UnityEngine.IntegratedSubsystemDescriptor::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntegratedSubsystemDescriptor_get_id_m0347A7AE998F0210CC7DAD1DA974F788AB2CF879 (IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.IntegratedSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntegratedSubsystem_get_running_m3C6870588AA0F9816A3947F045BCB8F5662A9EC2 (IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>::MoveNext()
inline bool Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>::Dispose()
inline void Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5 (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Unity.XR.Oculus.NativeMethods::SetColorScale(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetColorScale_mABAA1FBFC163D8DE94AD47D7B8F848B78CD5E9A0 (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::SetColorOffset(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetColorOffset_m62E7000E8A015D685D76D915941FDE958732213D (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// Unity.XR.Oculus.SystemHeadset Unity.XR.Oculus.NativeMethods::GetSystemHeadsetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_GetSystemHeadsetType_m5D2B6BFDE86FE8DB56A48641E1EA3B3AC788C0AE (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetTiledMultiResSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetTiledMultiResSupported_mA3B09B2A1F0299A3AAD86C0DEB36625D598CD871 (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::SetTiledMultiResLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetTiledMultiResLevel_mB738658807A7B692985B9CD55A0AEE8AAE58FF2D (int32_t ___level0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::SetTiledMultiResDynamic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetTiledMultiResDynamic_mC79DF59B055FA02F3605881A38984454869DA66B (bool ___isDynamic0, const RuntimeMethod* method);
// System.Int32 Unity.XR.Oculus.NativeMethods::GetTiledMultiResLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_GetTiledMultiResLevel_m8082A03420962D025A24554936BC8802D190F3F0 (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndRestartCoroutineU3Ed__22_U3CU3Em__Finally1_m17836219B16F0E2F40AFE29DDADEACD9F0CEA00E (U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Collections.IEnumerator Unity.XR.Oculus.OculusRestarter::RestartCoroutine(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OculusRestarter_RestartCoroutine_mED386FBEC1602B3DB023E06F05EC3043E6FFC027 (OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * __this, bool ___shouldRestart0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline)(method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m2CDD2A21AF2BCE3CE07D634645F9A61B4CB7D9B3 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndRestartCoroutineU3Ed__22_System_IDisposable_Dispose_m2D4C564714370227159B843E3E3FD992C00C00BC (U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartCoroutineU3Ed__23_U3CU3Em__Finally1_m5D43CE3EF7B89A3C817C148215ABE10F5F221332 (U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * __this, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline (const RuntimeMethod* method);
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRManagerSettings::DeinitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_DeinitializeLoader_m6AD4F079818DF78946C99AD8D49E3D343DAAF290 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.XR.Management.XRManagerSettings::InitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_InitializeLoader_m92B987C89AF6F7E7D05718296243E0ED021FD6B3 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRManagerSettings::StartSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StartSubsystems_mB9F502956C1FC6AD6D421CD36C3980B095B4282E (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartCoroutineU3Ed__23_System_IDisposable_Dispose_m3CB326B58BAA27EB44C80329052E1D2FBB7701B9 (U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * __this, const RuntimeMethod* method);
// UnityEngine.IntegratedSubsystem Unity.XR.Oculus.Stats::GetOculusDisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetAppGPUTimeLastFrame(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetAppGPUTimeLastFrame_m6101C924131D97949D0BB807F0075C28464B6451 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, float* ___gpuTimeLastFrame0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetCompositorGPUTimeLastFrame(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetCompositorGPUTimeLastFrame_m168019E7D1D33CFA7218F9BC79E3C5E1640CC41B (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, float* ___gpuTimeLastFrameCompositor0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetMotionToPhoton(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetMotionToPhoton_m10E75B632588DB76D4C88E022CC2B5D678E1C9F5 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, float* ___motionToPhoton0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetDisplayRefreshRate(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetDisplayRefreshRate_m83B7B48711B68E8D05F3B5D2F1EDE61154EAC7A3 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, float* ___displayRefreshRate0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Provider.XRStats::TryGetStat(UnityEngine.IntegratedSubsystem,System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10 (IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * ___xrSubsystem0, String_t* ___tag1, float* ___value2, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::EnableAppMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_EnableAppMetrics_mBFF69EB9C54389B25A9FC271819E9B3FB2A6CDB6 (bool ___enable0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::EnablePerfMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_EnablePerfMetrics_mB9E9467765E2141254EAC993FF87E6595831DC74 (bool ___enable0, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetColorScale(float, float, float, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetColorOffset(float, float, float, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetIsSupportedDevice();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL LoadOVRPlugin(Il2CppChar*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnloadOVRPlugin();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetUserDefinedSettings(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D );
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetCPULevel(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetGPULevel(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GetOVRPVersion(uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL EnablePerfMetrics(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL EnableAppMetrics(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetDeveloperModeStrict(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetAppHasInputFocus();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetBoundaryConfigured();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetBoundaryDimensions(int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetBoundaryVisible();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetBoundaryVisible(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetAppShouldQuit();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetDisplayAvailableFrequencies(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetDisplayFrequency(float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetDisplayFrequency(float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetSystemHeadsetType();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetTiledMultiResSupported();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetTiledMultiResLevel(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetTiledMultiResLevel();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetTiledMultiResDynamic(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetShouldRestartSession();
#endif
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
// System.Boolean Unity.XR.Oculus.Boundary::GetBoundaryConfigured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boundary_GetBoundaryConfigured_m3084C1D2ED0E1456840215C4D022838D34A51CAB (const RuntimeMethod* method)
{
	{
		// return NativeMethods.GetBoundaryConfigured();
		bool L_0;
		L_0 = NativeMethods_GetBoundaryConfigured_m63425B4A401546727492B96CEDDBDF636499D961(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.Boundary::GetBoundaryDimensions(Unity.XR.Oculus.Boundary/BoundaryType,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boundary_GetBoundaryDimensions_m687BD292B02EC436F995EECDF128F88366575FE1 (int32_t ___boundaryType0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___dimensions1, const RuntimeMethod* method)
{
	{
		// return NativeMethods.GetBoundaryDimensions(boundaryType, out dimensions);
		int32_t L_0 = ___boundaryType0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = ___dimensions1;
		bool L_2;
		L_2 = NativeMethods_GetBoundaryDimensions_m32B73039BE0E747DAFB358D71514D5E7C75153A6(L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Unity.XR.Oculus.Boundary::GetBoundaryVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boundary_GetBoundaryVisible_m29E7D20DA141AA1666466B54833DFC1990338C69 (const RuntimeMethod* method)
{
	{
		// return NativeMethods.GetBoundaryVisible();
		bool L_0;
		L_0 = NativeMethods_GetBoundaryVisible_m274038DDF26F9FE120C68CD993C31D751C18B369(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Boundary::SetBoundaryVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_SetBoundaryVisible_mAE47C1076E3C28BB7A80CB3169C3DA411BEB347C (bool ___boundaryVisible0, const RuntimeMethod* method)
{
	{
		// NativeMethods.SetBoundaryVisible(boundaryVisible);
		bool L_0 = ___boundaryVisible0;
		NativeMethods_SetBoundaryVisible_mC4CAB764018040FFB39B8034D86B8E282DB73FF1(L_0, /*hidden argument*/NULL);
		// }
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
// System.Void Unity.XR.Oculus.Development::TrySetDeveloperMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_TrySetDeveloperMode_m42C081BDF42482D60F1FE1FCDEB1D4CA9E72B320 (bool ___active0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// s_CachedMode = active ? UserDeveloperModeSettingCache.UserSettingTrue : UserDeveloperModeSettingCache.UserSettingFalse;
		bool L_0 = ___active0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 2;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		((Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_StaticFields*)il2cpp_codegen_static_fields_for(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var))->set_s_CachedMode_0(G_B3_0);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Development::OverrideDeveloperModeStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_OverrideDeveloperModeStart_mC9E24212121397B0C37A27904F5B95B4FD871C88 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CA2736EB42A97B73E816FF8369ACA2005FA5AA2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// bool enable = true;
		V_0 = (bool)1;
		// bool shouldOverride = false;
		V_1 = (bool)0;
		// if (s_CachedMode != UserDeveloperModeSettingCache.NoUserSettingCached)
		IL2CPP_RUNTIME_CLASS_INIT(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_StaticFields*)il2cpp_codegen_static_fields_for(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var))->get_s_CachedMode_0();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// shouldOverride = true;
		V_1 = (bool)1;
		// enable = (s_CachedMode == UserDeveloperModeSettingCache.UserSettingTrue);
		IL2CPP_RUNTIME_CLASS_INIT(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_StaticFields*)il2cpp_codegen_static_fields_for(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var))->get_s_CachedMode_0();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		// }
		goto IL_0021;
	}

IL_0018:
	{
		// else if (Debug.isDebugBuild)
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Debug_get_isDebugBuild_mEFC4658EA34BA262EB8D6D1AB5FDB73478EA32C7(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// shouldOverride = true;
		V_1 = (bool)1;
	}

IL_0021:
	{
		// if (shouldOverride && !NativeMethods.SetDeveloperModeStrict(enable))
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		bool L_4 = V_0;
		bool L_5;
		L_5 = NativeMethods_SetDeveloperModeStrict_mB7F4A67FF3C6396D8600290B3BBA555A6CF56767(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		// Debug.LogError("Failed to set DeveloperMode on Start.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral9CA2736EB42A97B73E816FF8369ACA2005FA5AA2, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Development::OverrideDeveloperModeStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_OverrideDeveloperModeStop_mF62FEF98A60806E453F85B7419FE8A726A54A621 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C095088ADD88C25A47E7BBE6A81D13C798F9E75);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!NativeMethods.SetDeveloperModeStrict(false))
		bool L_0;
		L_0 = NativeMethods_SetDeveloperModeStrict_mB7F4A67FF3C6396D8600290B3BBA555A6CF56767((bool)0, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// Debug.LogError("Failed to set DeveloperMode to false on Stop.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral6C095088ADD88C25A47E7BBE6A81D13C798F9E75, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Development::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development__cctor_mBFD72BE5D5819D1EEBCB7D11CCD064B26AC4518C (const RuntimeMethod* method)
{
	{
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
// System.Void Unity.XR.Oculus.InputFocus::add_InputFocusAcquired(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_add_InputFocusAcquired_m792AC75AEC3F732433E7490A43EDD5ED153F6094 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusAcquired_0();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_address_of_InputFocusAcquired_0()), L_5, L_6);
		V_0 = L_7;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::remove_InputFocusAcquired(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_remove_InputFocusAcquired_m19273BB66624D67CE968DEC379569ECA0AA7D43A (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusAcquired_0();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_address_of_InputFocusAcquired_0()), L_5, L_6);
		V_0 = L_7;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::add_InputFocusLost(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_add_InputFocusLost_m11782A9ADE16C0FE65636052AEEACA5BF4BE07C1 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusLost_1();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_address_of_InputFocusLost_1()), L_5, L_6);
		V_0 = L_7;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::remove_InputFocusLost(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_remove_InputFocusLost_m381E9CF962F5C1CBB6E737334ED070A356C02582 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusLost_1();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_address_of_InputFocusLost_1()), L_5, L_6);
		V_0 = L_7;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Boolean Unity.XR.Oculus.InputFocus::get_hasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFocus_get_hasInputFocus_m89BC1D49BF5D1BD9207D5D32780FA93CEC6AD793 (const RuntimeMethod* method)
{
	{
		// return NativeMethods.GetHasInputFocus();
		bool L_0;
		L_0 = NativeMethods_GetHasInputFocus_mC5174AB5E09FCDEC72E3FE70EE041824A3328806(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_Update_mA29F59D3148E351431EF53DEEE921320DC66945E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool G_B4_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	bool G_B3_0 = false;
	bool G_B8_0 = false;
	bool G_B5_0 = false;
	bool G_B6_0 = false;
	bool G_B7_0 = false;
	{
		// bool appHasInputFocus = hasInputFocus;
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = InputFocus_get_hasInputFocus_m89BC1D49BF5D1BD9207D5D32780FA93CEC6AD793(/*hidden argument*/NULL);
		// if (!appHasInputFocus && hadInputFocus)
		bool L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B4_0 = L_1;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		bool L_2 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_hadInputFocus_2();
		G_B2_0 = G_B1_0;
		if (!L_2)
		{
			G_B4_0 = G_B1_0;
			goto IL_0020;
		}
	}
	{
		// if (InputFocusLost != null)
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusLost_1();
		G_B3_0 = G_B2_0;
		if (!L_3)
		{
			G_B4_0 = G_B2_0;
			goto IL_0020;
		}
	}
	{
		// InputFocusLost();
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusLost_1();
		NullCheck(L_4);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_4, /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
	}

IL_0020:
	{
		// if (appHasInputFocus && !hadInputFocus)
		bool L_5 = G_B4_0;
		G_B5_0 = L_5;
		if (!L_5)
		{
			G_B8_0 = L_5;
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		bool L_6 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_hadInputFocus_2();
		G_B6_0 = G_B5_0;
		if (L_6)
		{
			G_B8_0 = G_B5_0;
			goto IL_003b;
		}
	}
	{
		// if (InputFocusAcquired != null)
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusAcquired_0();
		G_B7_0 = G_B6_0;
		if (!L_7)
		{
			G_B8_0 = G_B6_0;
			goto IL_003b;
		}
	}
	{
		// InputFocusAcquired();
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusAcquired_0();
		NullCheck(L_8);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_8, /*hidden argument*/NULL);
		G_B8_0 = G_B7_0;
	}

IL_003b:
	{
		// hadInputFocus = appHasInputFocus;
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->set_hadInputFocus_2(G_B8_0);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus__ctor_m3EC50CAA3520F2BB04B7258680BD4B4081B9C9F3 (InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus__cctor_mB6300AFCE681F96FFBB24D1AAB76E815716B8C95 (const RuntimeMethod* method)
{
	{
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
// System.Void Unity.XR.Oculus.NativeMethods::SetColorScale(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetColorScale_mABAA1FBFC163D8DE94AD47D7B8F848B78CD5E9A0 (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	{
		// Internal.SetColorScale(x, y, z, w);
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		float L_3 = ___w3;
		Internal_SetColorScale_mA8ED134FCC56CCD16F92734ADCBF2526342EB02C(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::SetColorOffset(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetColorOffset_m62E7000E8A015D685D76D915941FDE958732213D (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	{
		// Internal.SetColorOffset(x, y, z, w);
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		float L_3 = ___w3;
		Internal_SetColorOffset_m6765A7EC8EFFDB061AE48B3F53658BBD3FC26FBF(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetIsSupportedDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetIsSupportedDevice_mFC86118E0FC74ABE30C84639472ADE492083AFD2 (const RuntimeMethod* method)
{
	{
		// return Internal.GetIsSupportedDevice();
		bool L_0;
		L_0 = Internal_GetIsSupportedDevice_mA3EF73A5F9CA1AD2B6E9D8F1F560A62D14A19E92(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::LoadOVRPlugin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_LoadOVRPlugin_m4D4C796D2F76D0CA13969C61603C01B0A26478E7 (String_t* ___ovrpPath0, const RuntimeMethod* method)
{
	{
		// return Internal.LoadOVRPlugin(ovrpPath);
		String_t* L_0 = ___ovrpPath0;
		bool L_1;
		L_1 = Internal_LoadOVRPlugin_m20BF6ADFC47F043ED9CB9F86199E26C8A46AD5AF(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::UnloadOVRPlugin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_UnloadOVRPlugin_mF9B47E517AB3E99DA9AE3E712054150C04D7D7DA (const RuntimeMethod* method)
{
	{
		// Internal.UnloadOVRPlugin();
		Internal_UnloadOVRPlugin_m6C683304420498120BF38390A1129A5B01A67F1E(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::SetUserDefinedSettings(Unity.XR.Oculus.NativeMethods/UserDefinedSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetUserDefinedSettings_m60831E50BCEB63E8B8E3A6421CE2D6BC21FB6FCD (UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  ___settings0, const RuntimeMethod* method)
{
	{
		// Internal.SetUserDefinedSettings(settings);
		UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  L_0 = ___settings0;
		Internal_SetUserDefinedSettings_mE187F03B58FEB8FE874B938E28401C06C919221E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Unity.XR.Oculus.NativeMethods::SetCPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_SetCPULevel_mABD8BE1F1CE41DC683BA43822DB456530FD6D929 (int32_t ___cpuLevel0, const RuntimeMethod* method)
{
	{
		// return Internal.SetCPULevel(cpuLevel);
		int32_t L_0 = ___cpuLevel0;
		int32_t L_1;
		L_1 = Internal_SetCPULevel_m0568DA61DDC47E9F28D26C52EA4035A6A139CCA8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Unity.XR.Oculus.NativeMethods::SetGPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_SetGPULevel_m055FCE766C4C218F61A06ACA963F5ED637834DF7 (int32_t ___gpuLevel0, const RuntimeMethod* method)
{
	{
		// return Internal.SetGPULevel(gpuLevel);
		int32_t L_0 = ___gpuLevel0;
		int32_t L_1;
		L_1 = Internal_SetGPULevel_mBC46AC72882E2FFD4358F5812B8F45329C62843A(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::GetOVRPVersion(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_GetOVRPVersion_mB328CD13DA707D9B1B26A3EBC82A9F364F140BE9 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___version0, const RuntimeMethod* method)
{
	{
		// Internal.GetOVRPVersion(version);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___version0;
		Internal_GetOVRPVersion_m1E2BB4B4CDC04F9DAD64DF67D3CFC76085AF305B(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::EnablePerfMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_EnablePerfMetrics_mB9E9467765E2141254EAC993FF87E6595831DC74 (bool ___enable0, const RuntimeMethod* method)
{
	{
		// Internal.EnablePerfMetrics(enable);
		bool L_0 = ___enable0;
		Internal_EnablePerfMetrics_m2572EAFC2373A4E10168EDD76D576A44212466D4(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::EnableAppMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_EnableAppMetrics_mBFF69EB9C54389B25A9FC271819E9B3FB2A6CDB6 (bool ___enable0, const RuntimeMethod* method)
{
	{
		// Internal.EnableAppMetrics(enable);
		bool L_0 = ___enable0;
		Internal_EnableAppMetrics_m327F6E0F90F1A962D000C105EFE540CD43E78D70(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::SetDeveloperModeStrict(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_SetDeveloperModeStrict_mB7F4A67FF3C6396D8600290B3BBA555A6CF56767 (bool ___active0, const RuntimeMethod* method)
{
	{
		// return Internal.SetDeveloperModeStrict(active);
		bool L_0 = ___active0;
		bool L_1;
		L_1 = Internal_SetDeveloperModeStrict_m0A2121361A4FFDA8D0EF716D2C011F0EF19A34F8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetHasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetHasInputFocus_mC5174AB5E09FCDEC72E3FE70EE041824A3328806 (const RuntimeMethod* method)
{
	{
		// return Internal.GetAppHasInputFocus();
		bool L_0;
		L_0 = Internal_GetAppHasInputFocus_mA679379FDE6F3AFAFBF35841818A0BD5A492579F(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryConfigured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryConfigured_m63425B4A401546727492B96CEDDBDF636499D961 (const RuntimeMethod* method)
{
	{
		// return Internal.GetBoundaryConfigured();
		bool L_0;
		L_0 = Internal_GetBoundaryConfigured_m38A8FB6A7F2DCE7882E9DF3707530E40D85E6492(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryDimensions(Unity.XR.Oculus.Boundary/BoundaryType,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryDimensions_m32B73039BE0E747DAFB358D71514D5E7C75153A6 (int32_t ___boundaryType0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___dimensions1, const RuntimeMethod* method)
{
	{
		// return Internal.GetBoundaryDimensions(boundaryType, out dimensions);
		int32_t L_0 = ___boundaryType0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = ___dimensions1;
		bool L_2;
		L_2 = Internal_GetBoundaryDimensions_m07ED6D4A7E3C368766B953282AE8FA76A257849B(L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryVisible_m274038DDF26F9FE120C68CD993C31D751C18B369 (const RuntimeMethod* method)
{
	{
		// return Internal.GetBoundaryVisible();
		bool L_0;
		L_0 = Internal_GetBoundaryVisible_mFFBE7E9B928B930A6C4B1F8F7391F3403CD9F72F(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::SetBoundaryVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetBoundaryVisible_mC4CAB764018040FFB39B8034D86B8E282DB73FF1 (bool ___boundaryVisible0, const RuntimeMethod* method)
{
	{
		// Internal.SetBoundaryVisible(boundaryVisible);
		bool L_0 = ___boundaryVisible0;
		Internal_SetBoundaryVisible_m3F762D66ED2E7998D8EDD6B065398796C32B2139(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetAppShouldQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetAppShouldQuit_m4A8AC6995227A1AA4F5EF087051DA57735D0C486 (const RuntimeMethod* method)
{
	{
		// return Internal.GetAppShouldQuit();
		bool L_0;
		L_0 = Internal_GetAppShouldQuit_m2201DC6D753AE50E8E041C75816721CC622DA353(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetDisplayAvailableFrequencies(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetDisplayAvailableFrequencies_m2E4C861D87369CCA6A40AAFF6EA5CF65093D4F39 (intptr_t ___ptr0, int32_t* ___numFrequencies1, const RuntimeMethod* method)
{
	{
		// return Internal.GetDisplayAvailableFrequencies(ptr, ref numFrequencies);
		intptr_t L_0 = ___ptr0;
		int32_t* L_1 = ___numFrequencies1;
		bool L_2;
		L_2 = Internal_GetDisplayAvailableFrequencies_mA6A02093DF72E979557B913FEE19BA4B9CF61159((intptr_t)L_0, (int32_t*)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::SetDisplayFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_SetDisplayFrequency_m0C913002249CA6C2FDAD4AB57A0957D4F5F8646C (float ___refreshRate0, const RuntimeMethod* method)
{
	{
		// return Internal.SetDisplayFrequency(refreshRate);
		float L_0 = ___refreshRate0;
		bool L_1;
		L_1 = Internal_SetDisplayFrequency_m3221766C0E2DF541A57A44508194B245E038A965(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetDisplayFrequency(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetDisplayFrequency_m5D89A6D7DF13E557DCF74B65770B5945A2C327BE (float* ___refreshRate0, const RuntimeMethod* method)
{
	{
		// return Internal.GetDisplayFrequency(out refreshRate);
		float* L_0 = ___refreshRate0;
		bool L_1;
		L_1 = Internal_GetDisplayFrequency_m3264CC851EAF260CA1EFD7E4984362B1B7BC8676((float*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Unity.XR.Oculus.SystemHeadset Unity.XR.Oculus.NativeMethods::GetSystemHeadsetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_GetSystemHeadsetType_m5D2B6BFDE86FE8DB56A48641E1EA3B3AC788C0AE (const RuntimeMethod* method)
{
	{
		// return Internal.GetSystemHeadsetType();
		int32_t L_0;
		L_0 = Internal_GetSystemHeadsetType_mC0537BB4F5EA3EDD3993C7A05487B04A0FADAEFB(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetTiledMultiResSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetTiledMultiResSupported_mA3B09B2A1F0299A3AAD86C0DEB36625D598CD871 (const RuntimeMethod* method)
{
	{
		// return Internal.GetTiledMultiResSupported();
		bool L_0;
		L_0 = Internal_GetTiledMultiResSupported_mEE711350D975E6C4FD4D0634AEDD64F3FEF2E0BB(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::SetTiledMultiResLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetTiledMultiResLevel_mB738658807A7B692985B9CD55A0AEE8AAE58FF2D (int32_t ___level0, const RuntimeMethod* method)
{
	{
		// Internal.SetTiledMultiResLevel(level);
		int32_t L_0 = ___level0;
		Internal_SetTiledMultiResLevel_mEEC4003CC9AEA6156EE976678E3409FCABE6EDD2(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Unity.XR.Oculus.NativeMethods::GetTiledMultiResLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_GetTiledMultiResLevel_m8082A03420962D025A24554936BC8802D190F3F0 (const RuntimeMethod* method)
{
	{
		// return Internal.GetTiledMultiResLevel();
		int32_t L_0;
		L_0 = Internal_GetTiledMultiResLevel_m2BC392E4824622E98F610EC02CB4A8196FEF96CE(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::SetTiledMultiResDynamic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetTiledMultiResDynamic_mC79DF59B055FA02F3605881A38984454869DA66B (bool ___isDynamic0, const RuntimeMethod* method)
{
	{
		// Internal.SetTiledMultiResDynamic(isDynamic);
		bool L_0 = ___isDynamic0;
		Internal_SetTiledMultiResDynamic_m037817F3884FC015AC28AB27520A40B3511D2A10(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetShouldRestartSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetShouldRestartSession_m691BE303740AD0161244C7D02838D9A1397D8EA1 (const RuntimeMethod* method)
{
	{
		// return Internal.GetShouldRestartSession();
		bool L_0;
		L_0 = Internal_GetShouldRestartSession_m232B73B6EB98D8E93F361FFBEDC386E93CD86E1E(/*hidden argument*/NULL);
		return L_0;
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
// Unity.XR.Oculus.OculusLoader/DeviceSupportedResult Unity.XR.Oculus.OculusLoader::IsDeviceSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OculusLoader_IsDeviceSupported_mC2E5A317811DBD9EB506037FD358CF7F64814286 (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// if (NativeMethods.GetIsSupportedDevice())
			bool L_0;
			L_0 = NativeMethods_GetIsSupportedDevice_mFC86118E0FC74ABE30C84639472ADE492083AFD2(/*hidden argument*/NULL);
			if (!L_0)
			{
				goto IL_000b;
			}
		}

IL_0007:
		{
			// return DeviceSupportedResult.Supported;
			V_0 = 0;
			goto IL_0014;
		}

IL_000b:
		{
			// return DeviceSupportedResult.ExitApplication;
			V_0 = 2;
			goto IL_0014;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000f;
		}
		throw e;
	}

CATCH_000f:
	{ // begin catch(System.DllNotFoundException)
		// catch(DllNotFoundException)
		// return DeviceSupportedResult.NotSupported;
		V_0 = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0014;
	} // end catch (depth: 1)

IL_0014:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.XR.XRDisplaySubsystem Unity.XR.Oculus.OculusLoader::get_displaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * OculusLoader_get_displaySubsystem_mE2C42E00522835401105B4A163E0768AA433E71A (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetLoadedSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m6098CB15555B2E45C3BCAB9086012011CB382DAA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetLoadedSubsystem<XRDisplaySubsystem>();
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_0;
		L_0 = GenericVirtFuncInvoker0< XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * >::Invoke(XRLoader_GetLoadedSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m6098CB15555B2E45C3BCAB9086012011CB382DAA_RuntimeMethod_var, __this);
		return L_0;
	}
}
// UnityEngine.XR.XRInputSubsystem Unity.XR.Oculus.OculusLoader::get_inputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * OculusLoader_get_inputSubsystem_m8E87DAAF3BB44B2F3945232518EAF6862E9D1B95 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetLoadedSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_mC98D5F7030C574A69D86EA429F90CF769106A5EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetLoadedSubsystem<XRInputSubsystem>();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_0;
		L_0 = GenericVirtFuncInvoker0< XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * >::Invoke(XRLoader_GetLoadedSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_mC98D5F7030C574A69D86EA429F90CF769106A5EB_RuntimeMethod_var, __this);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Initialize_m9F45EA7F9134BED3F23133D3B2A3467CF51B5561 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m2674D41E2C5D7DE045BEF6EDE661A9A0767A99FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m69A4EA17370FA4464CCE4BEAD83D5E0D47AADB56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral271AF6878EC3872B415EA8A73A1433E4B604ACDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50B8349DC34E14AB475F3453803BCDBD9F3B0F85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral666C1D75F394950EFFDBE5C128752A9E0CBD1DEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71D87D03368ADC0E5018E85E30CA4984F5FF2AA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A);
		s_Il2CppMethodInitialized = true;
	}
	OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * V_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B5_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B6_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B8_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B9_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B11_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B12_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B14_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B15_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B17_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B18_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B20_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B19_0 = NULL;
	int32_t G_B21_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B21_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B23_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B24_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B26_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B25_0 = NULL;
	int32_t G_B27_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B27_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B29_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B28_0 = NULL;
	int32_t G_B30_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B30_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B32_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B33_1 = NULL;
	{
		//             if (IsDeviceSupported() != DeviceSupportedResult.Supported
		// #if UNITY_EDITOR_WIN
		//                 || SystemInfo.graphicsDeviceType != GraphicsDeviceType.Direct3D11
		// #endif
		//             )
		IL2CPP_RUNTIME_CLASS_INIT(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = OculusLoader_IsDeviceSupported_mC2E5A317811DBD9EB506037FD358CF7F64814286(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// OculusSettings settings = GetSettings();
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_1;
		L_1 = OculusLoader_GetSettings_mF0D5694BD84372039D4227997B00CAB33A419CAC_inline(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (settings != null)
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00f7;
		}
	}
	{
		// userDefinedSettings.sharedDepthBuffer = (ushort)(settings.SharedDepthBuffer ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = L_4->get_SharedDepthBuffer_6();
		G_B4_0 = (&V_1);
		if (L_5)
		{
			G_B5_0 = (&V_1);
			goto IL_0029;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_002a;
	}

IL_0029:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002a:
	{
		G_B6_1->set_sharedDepthBuffer_0((uint16_t)((int32_t)((uint16_t)G_B6_0)));
		// userDefinedSettings.dashSupport = (ushort)(settings.DashSupport ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = L_6->get_DashSupport_7();
		G_B7_0 = (&V_1);
		if (L_7)
		{
			G_B8_0 = (&V_1);
			goto IL_003d;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_003e;
	}

IL_003d:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_003e:
	{
		G_B9_1->set_dashSupport_1((uint16_t)((int32_t)((uint16_t)G_B9_0)));
		// userDefinedSettings.stereoRenderingMode = (ushort)settings.GetStereoRenderingMode();
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_8 = V_0;
		NullCheck(L_8);
		uint16_t L_9;
		L_9 = OculusSettings_GetStereoRenderingMode_mB4FF47E7831A653C90D7B08E336C40D66968F2FD(L_8, /*hidden argument*/NULL);
		(&V_1)->set_stereoRenderingMode_2(L_9);
		// userDefinedSettings.colorSpace = (ushort)((QualitySettings.activeColorSpace == ColorSpace.Linear) ? 1 : 0);
		int32_t L_10;
		L_10 = QualitySettings_get_activeColorSpace_mE0C265DD8E215FC537CFA8B000C0977B10C6A49C(/*hidden argument*/NULL);
		G_B10_0 = (&V_1);
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			G_B11_0 = (&V_1);
			goto IL_005e;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_0;
		goto IL_005f;
	}

IL_005e:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
	}

IL_005f:
	{
		G_B12_1->set_colorSpace_3((uint16_t)((int32_t)((uint16_t)G_B12_0)));
		// userDefinedSettings.lowOverheadMode = (ushort)(settings.LowOverheadMode ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = L_11->get_LowOverheadMode_9();
		G_B13_0 = (&V_1);
		if (L_12)
		{
			G_B14_0 = (&V_1);
			goto IL_0072;
		}
	}
	{
		G_B15_0 = 0;
		G_B15_1 = G_B13_0;
		goto IL_0073;
	}

IL_0072:
	{
		G_B15_0 = 1;
		G_B15_1 = G_B14_0;
	}

IL_0073:
	{
		G_B15_1->set_lowOverheadMode_4((uint16_t)((int32_t)((uint16_t)G_B15_0)));
		// userDefinedSettings.protectedContext = (ushort)(settings.ProtectedContext ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = L_13->get_ProtectedContext_10();
		G_B16_0 = (&V_1);
		if (L_14)
		{
			G_B17_0 = (&V_1);
			goto IL_0086;
		}
	}
	{
		G_B18_0 = 0;
		G_B18_1 = G_B16_0;
		goto IL_0087;
	}

IL_0086:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
	}

IL_0087:
	{
		G_B18_1->set_protectedContext_5((uint16_t)((int32_t)((uint16_t)G_B18_0)));
		// userDefinedSettings.focusAware = (ushort)(settings.FocusAware ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_15 = V_0;
		NullCheck(L_15);
		bool L_16 = L_15->get_FocusAware_11();
		G_B19_0 = (&V_1);
		if (L_16)
		{
			G_B20_0 = (&V_1);
			goto IL_009a;
		}
	}
	{
		G_B21_0 = 0;
		G_B21_1 = G_B19_0;
		goto IL_009b;
	}

IL_009a:
	{
		G_B21_0 = 1;
		G_B21_1 = G_B20_0;
	}

IL_009b:
	{
		G_B21_1->set_focusAware_6((uint16_t)((int32_t)((uint16_t)G_B21_0)));
		// userDefinedSettings.optimizeBufferDiscards = (ushort)(settings.OptimizeBufferDiscards ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_17 = V_0;
		NullCheck(L_17);
		bool L_18 = L_17->get_OptimizeBufferDiscards_12();
		G_B22_0 = (&V_1);
		if (L_18)
		{
			G_B23_0 = (&V_1);
			goto IL_00ae;
		}
	}
	{
		G_B24_0 = 0;
		G_B24_1 = G_B22_0;
		goto IL_00af;
	}

IL_00ae:
	{
		G_B24_0 = 1;
		G_B24_1 = G_B23_0;
	}

IL_00af:
	{
		G_B24_1->set_optimizeBufferDiscards_7((uint16_t)((int32_t)((uint16_t)G_B24_0)));
		// userDefinedSettings.phaseSync = (ushort)(settings.PhaseSync ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_19 = V_0;
		NullCheck(L_19);
		bool L_20 = L_19->get_PhaseSync_13();
		G_B25_0 = (&V_1);
		if (L_20)
		{
			G_B26_0 = (&V_1);
			goto IL_00c2;
		}
	}
	{
		G_B27_0 = 0;
		G_B27_1 = G_B25_0;
		goto IL_00c3;
	}

IL_00c2:
	{
		G_B27_0 = 1;
		G_B27_1 = G_B26_0;
	}

IL_00c3:
	{
		G_B27_1->set_phaseSync_8((uint16_t)((int32_t)((uint16_t)G_B27_0)));
		// userDefinedSettings.symmetricProjection = (ushort)(settings.SymmetricProjection ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_21 = V_0;
		NullCheck(L_21);
		bool L_22 = L_21->get_SymmetricProjection_14();
		G_B28_0 = (&V_1);
		if (L_22)
		{
			G_B29_0 = (&V_1);
			goto IL_00d6;
		}
	}
	{
		G_B30_0 = 0;
		G_B30_1 = G_B28_0;
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B30_0 = 1;
		G_B30_1 = G_B29_0;
	}

IL_00d7:
	{
		G_B30_1->set_symmetricProjection_9((uint16_t)((int32_t)((uint16_t)G_B30_0)));
		// userDefinedSettings.subsampledLayout = (ushort)(settings.SubsampledLayout ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_23 = V_0;
		NullCheck(L_23);
		bool L_24 = L_23->get_SubsampledLayout_15();
		G_B31_0 = (&V_1);
		if (L_24)
		{
			G_B32_0 = (&V_1);
			goto IL_00ea;
		}
	}
	{
		G_B33_0 = 0;
		G_B33_1 = G_B31_0;
		goto IL_00eb;
	}

IL_00ea:
	{
		G_B33_0 = 1;
		G_B33_1 = G_B32_0;
	}

IL_00eb:
	{
		G_B33_1->set_subsampledLayout_10((uint16_t)((int32_t)((uint16_t)G_B33_0)));
		// NativeMethods.SetUserDefinedSettings(userDefinedSettings);
		UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  L_25 = V_1;
		NativeMethods_SetUserDefinedSettings_m60831E50BCEB63E8B8E3A6421CE2D6BC21FB6FCD(L_25, /*hidden argument*/NULL);
	}

IL_00f7:
	{
		// CreateSubsystem<XRDisplaySubsystemDescriptor, XRDisplaySubsystem>(s_DisplaySubsystemDescriptors, "oculus display");
		IL2CPP_RUNTIME_CLASS_INIT(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var);
		List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * L_26 = ((OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var))->get_s_DisplaySubsystemDescriptors_5();
		XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m2674D41E2C5D7DE045BEF6EDE661A9A0767A99FF(__this, L_26, _stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A, /*hidden argument*/XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m2674D41E2C5D7DE045BEF6EDE661A9A0767A99FF_RuntimeMethod_var);
		// CreateSubsystem<XRInputSubsystemDescriptor, XRInputSubsystem>(s_InputSubsystemDescriptors, "oculus input");
		List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * L_27 = ((OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var))->get_s_InputSubsystemDescriptors_6();
		XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m69A4EA17370FA4464CCE4BEAD83D5E0D47AADB56(__this, L_27, _stringLiteral71D87D03368ADC0E5018E85E30CA4984F5FF2AA8, /*hidden argument*/XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m69A4EA17370FA4464CCE4BEAD83D5E0D47AADB56_RuntimeMethod_var);
		// if (displaySubsystem == null && inputSubsystem == null)
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_28;
		L_28 = OculusLoader_get_displaySubsystem_mE2C42E00522835401105B4A163E0768AA433E71A(__this, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0133;
		}
	}
	{
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_29;
		L_29 = OculusLoader_get_inputSubsystem_m8E87DAAF3BB44B2F3945232518EAF6862E9D1B95(__this, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_0133;
		}
	}
	{
		// Debug.LogWarning("Unable to start Oculus XR Plugin.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(_stringLiteral666C1D75F394950EFFDBE5C128752A9E0CBD1DEA, /*hidden argument*/NULL);
		// }
		goto IL_0160;
	}

IL_0133:
	{
		// else if (displaySubsystem == null)
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_30;
		L_30 = OculusLoader_get_displaySubsystem_mE2C42E00522835401105B4A163E0768AA433E71A(__this, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0147;
		}
	}
	{
		// Debug.LogError("Unable to start Oculus XR Plugin. Failed to load display subsystem.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral50B8349DC34E14AB475F3453803BCDBD9F3B0F85, /*hidden argument*/NULL);
		// }
		goto IL_0160;
	}

IL_0147:
	{
		// else if (inputSubsystem == null)
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_31;
		L_31 = OculusLoader_get_inputSubsystem_m8E87DAAF3BB44B2F3945232518EAF6862E9D1B95(__this, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_015b;
		}
	}
	{
		// Debug.LogError("Unable to start Oculus XR Plugin. Failed to load input subsystem.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral271AF6878EC3872B415EA8A73A1433E4B604ACDF, /*hidden argument*/NULL);
		// }
		goto IL_0160;
	}

IL_015b:
	{
		// RegisterUpdateCallback.Initialize();
		RegisterUpdateCallback_Initialize_m009EBB49477FAD1D7E03DA45EB80F15E6D28F521(/*hidden argument*/NULL);
	}

IL_0160:
	{
		// return displaySubsystem != null && inputSubsystem != null;
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_32;
		L_32 = OculusLoader_get_displaySubsystem_mE2C42E00522835401105B4A163E0768AA433E71A(__this, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0172;
		}
	}
	{
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_33;
		L_33 = OculusLoader_get_inputSubsystem_m8E87DAAF3BB44B2F3945232518EAF6862E9D1B95(__this, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 *)L_33) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}

IL_0172:
	{
		return (bool)0;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Start_m48219B334C6D430348D0A6CE4B0BB8E9493E29F5 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF935C6C4671BBBEA57D48C65DE73B9D27EB611D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m243694C799C58C0396A563991537B952A5B48F98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartSubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF935C6C4671BBBEA57D48C65DE73B9D27EB611D7(__this, /*hidden argument*/XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF935C6C4671BBBEA57D48C65DE73B9D27EB611D7_RuntimeMethod_var);
		// StartSubsystem<XRInputSubsystem>();
		XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m243694C799C58C0396A563991537B952A5B48F98(__this, /*hidden argument*/XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m243694C799C58C0396A563991537B952A5B48F98_RuntimeMethod_var);
		// Development.OverrideDeveloperModeStart();
		IL2CPP_RUNTIME_CLASS_INIT(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		Development_OverrideDeveloperModeStart_mC9E24212121397B0C37A27904F5B95B4FD871C88(/*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Stop_m096A1F5907CFA0315161CDE8C28F889CC1709482 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m8145C9418422BD4F45DBBF37D028DDD2F1A6F7AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m530AFB9035AAA37796915EEB42C678B7A7F39686_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopSubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m8145C9418422BD4F45DBBF37D028DDD2F1A6F7AD(__this, /*hidden argument*/XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m8145C9418422BD4F45DBBF37D028DDD2F1A6F7AD_RuntimeMethod_var);
		// StopSubsystem<XRInputSubsystem>();
		XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m530AFB9035AAA37796915EEB42C678B7A7F39686(__this, /*hidden argument*/XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m530AFB9035AAA37796915EEB42C678B7A7F39686_RuntimeMethod_var);
		// Development.OverrideDeveloperModeStop();
		IL2CPP_RUNTIME_CLASS_INIT(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		Development_OverrideDeveloperModeStop_mF62FEF98A60806E453F85B7419FE8A726A54A621(/*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Deinitialize_m1DBBE6B4710416D0793C6869DC3C17656431599F (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7AE6139F914F84F8A7AA30CC70F6A01A757E1BE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m3724DC2747A9C6A68F78041E6FA78F6AC5CB39C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RegisterUpdateCallback.Deinitialize();
		RegisterUpdateCallback_Deinitialize_m5783A25B492DD2271AF20528CC7225AA69B48D2B(/*hidden argument*/NULL);
		// DestroySubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7AE6139F914F84F8A7AA30CC70F6A01A757E1BE3(__this, /*hidden argument*/XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7AE6139F914F84F8A7AA30CC70F6A01A757E1BE3_RuntimeMethod_var);
		// DestroySubsystem<XRInputSubsystem>();
		XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m3724DC2747A9C6A68F78041E6FA78F6AC5CB39C8(__this, /*hidden argument*/XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m3724DC2747A9C6A68F78041E6FA78F6AC5CB39C8_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Void Unity.XR.Oculus.OculusLoader::RuntimeLoadOVRPlugin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusLoader_RuntimeLoadOVRPlugin_m2CA81B2C2F621A6BEF5495DF46AE5B2E2F04C042 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral066D7D93F8175DDAAA3D6E4337D52AB827615B03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A017E46CE09C02B042A499A98229FB4CB75E992);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		// var supported = IsDeviceSupported();
		IL2CPP_RUNTIME_CLASS_INIT(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = OculusLoader_IsDeviceSupported_mC2E5A317811DBD9EB506037FD358CF7F64814286(/*hidden argument*/NULL);
		// if (supported == DeviceSupportedResult.ExitApplication)
		int32_t L_1 = L_0;
		G_B1_0 = L_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		// Debug.LogError("\n\nExiting application:\n\nThis .apk was built with the Oculus XR Plugin loader enabled, but is attempting to run on a non-Oculus device.\nTo build for general Android devices, please disable the Oculus XR Plugin before building the Android player.\n\n\n");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral8A017E46CE09C02B042A499A98229FB4CB75E992, /*hidden argument*/NULL);
		// Application.Quit();
		Application_Quit_m10E44C187C0E5807F9C955A176885FAA95829267(/*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
	}

IL_0018:
	{
		// if (supported != DeviceSupportedResult.Supported)
		if (!G_B2_0)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		return;
	}

IL_001b:
	{
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			// if (!NativeMethods.LoadOVRPlugin(""))
			bool L_2;
			L_2 = NativeMethods_LoadOVRPlugin_m4D4C796D2F76D0CA13969C61603C01B0A26478E7(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			if (L_2)
			{
				goto IL_0032;
			}
		}

IL_0028:
		{
			// Debug.LogError("Failed to load libOVRPlugin.so");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral066D7D93F8175DDAAA3D6E4337D52AB827615B03, /*hidden argument*/NULL);
		}

IL_0032:
		{
			// }
			goto IL_0037;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0034;
		}
		throw e;
	}

CATCH_0034:
	{ // begin catch(System.Object)
		// catch
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0037;
	} // end catch (depth: 1)

IL_0037:
	{
		// }
		return;
	}
}
// Unity.XR.Oculus.OculusSettings Unity.XR.Oculus.OculusLoader::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * OculusLoader_GetSettings_mF0D5694BD84372039D4227997B00CAB33A419CAC (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings = OculusSettings.s_Settings;
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_0 = ((OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_StaticFields*)il2cpp_codegen_static_fields_for(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var))->get_s_Settings_19();
		// return settings;
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.OculusLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusLoader__ctor_mF6A80167D63792923ADC3AB04D39BC1D0B3EB360 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	{
		XRLoaderHelper__ctor_mD27E0396EC4B11E208CF891642475B496CADAC9B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.XR.Oculus.OculusLoader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusLoader__cctor_mD99F1A4C2C8FA6EE03E450E22062EDC2AEF809BE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<XRDisplaySubsystemDescriptor> s_DisplaySubsystemDescriptors = new List<XRDisplaySubsystemDescriptor>();
		List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * L_0 = (List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 *)il2cpp_codegen_object_new(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_il2cpp_TypeInfo_var);
		List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00(L_0, /*hidden argument*/List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00_RuntimeMethod_var);
		((OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var))->set_s_DisplaySubsystemDescriptors_5(L_0);
		// private static List<XRInputSubsystemDescriptor> s_InputSubsystemDescriptors = new List<XRInputSubsystemDescriptor>();
		List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * L_1 = (List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 *)il2cpp_codegen_object_new(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_il2cpp_TypeInfo_var);
		List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB(L_1, /*hidden argument*/List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB_RuntimeMethod_var);
		((OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var))->set_s_InputSubsystemDescriptors_6(L_1);
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
// System.Void Unity.XR.Oculus.OculusRestarter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRestarter__cctor_m050787ED25CC19F82E8607F6A3DD74B6A92E7D57 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60295FC3A60C2E33E7CE2BBA56CDC92EDF6E0594);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly String k_GameObjectName = "~oculusrestarter";
		((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->set_k_GameObjectName_8(_stringLiteral60295FC3A60C2E33E7CE2BBA56CDC92EDF6E0594);
		// private static OculusRestarter s_Instance = null;
		((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->set_s_Instance_9((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 *)NULL);
		// private static int m_pauseAndRestartAttempts = 0;
		((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->set_m_pauseAndRestartAttempts_12(0);
		// TimeBetweenRestartAttempts = 5.0f;
		OculusRestarter_set_TimeBetweenRestartAttempts_m3FDA87CEAC42CF6AF6521DFF3E4EB1CC0BC9454F_inline((5.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.OculusRestarter::ResetCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRestarter_ResetCallbacks_mDFC9B5CDAF74BFE121D4F813709A09DF60E75CC3 (OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onAfterRestart = null;
		__this->set_onAfterRestart_4((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL);
		// onAfterShutdown = null;
		__this->set_onAfterShutdown_5((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL);
		// onAfterCoroutine = null;
		__this->set_onAfterCoroutine_7((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL);
		// onQuit = null;
		__this->set_onQuit_6((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL);
		// m_pauseAndRestartAttempts = 0;
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->set_m_pauseAndRestartAttempts_12(0);
		// }
		return;
	}
}
// System.Boolean Unity.XR.Oculus.OculusRestarter::get_isRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusRestarter_get_isRunning_mD3558955217FE9FEC976D5AE772617EBEB44E25E (OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * __this, const RuntimeMethod* method)
{
	{
		// public bool isRunning => m_Coroutine != null;
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_0 = __this->get_m_Coroutine_10();
		return (bool)((!(((RuntimeObject*)(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Single Unity.XR.Oculus.OculusRestarter::get_TimeBetweenRestartAttempts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OculusRestarter_get_TimeBetweenRestartAttempts_m4643B819097BB5929C5EA5AAC0BBD798817B2465 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get;
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		float L_0 = ((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->get_U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.OculusRestarter::set_TimeBetweenRestartAttempts(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRestarter_set_TimeBetweenRestartAttempts_m3FDA87CEAC42CF6AF6521DFF3E4EB1CC0BC9454F (float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set;
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->set_U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.Int32 Unity.XR.Oculus.OculusRestarter::get_PauseAndRestartAttempts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OculusRestarter_get_PauseAndRestartAttempts_m5073862450728EBD76EDC01F37A6CCFEA52F0AA9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_pauseAndRestartAttempts;
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		int32_t L_0 = ((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->get_m_pauseAndRestartAttempts_12();
		return L_0;
	}
}
// Unity.XR.Oculus.OculusRestarter Unity.XR.Oculus.OculusRestarter::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * OculusRestarter_get_Instance_m39A581FAA5C8E45A6603F7FA0EA6CAD784887796 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisOculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_m202AE7171E57107B6E8DDAFA0F044806B81EFBFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisOculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_mACE49B13D3DE9F0EE5F3B471A3230A439C6C8A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// if (s_Instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_0 = ((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->get_s_Instance_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		// var go = GameObject.Find(k_GameObjectName);
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		String_t* L_2 = ((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->get_k_GameObjectName_8();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (go == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// go = new GameObject(k_GameObjectName);
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		String_t* L_6 = ((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->get_k_GameObjectName_8();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_7, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// go.hideFlags = HideFlags.HideAndDontSave;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_0;
		NullCheck(L_8);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_8, ((int32_t)61), /*hidden argument*/NULL);
		// go.AddComponent<OculusRestarter>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_0;
		NullCheck(L_9);
		OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_10;
		L_10 = GameObject_AddComponent_TisOculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_m202AE7171E57107B6E8DDAFA0F044806B81EFBFF(L_9, /*hidden argument*/GameObject_AddComponent_TisOculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_m202AE7171E57107B6E8DDAFA0F044806B81EFBFF_RuntimeMethod_var);
	}

IL_003b:
	{
		// s_Instance = go.GetComponent<OculusRestarter>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_0;
		NullCheck(L_11);
		OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_12;
		L_12 = GameObject_GetComponent_TisOculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_mACE49B13D3DE9F0EE5F3B471A3230A439C6C8A92(L_11, /*hidden argument*/GameObject_GetComponent_TisOculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_mACE49B13D3DE9F0EE5F3B471A3230A439C6C8A92_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->set_s_Instance_9(L_12);
	}

IL_0046:
	{
		// return s_Instance;
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_13 = ((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->get_s_Instance_9();
		return L_13;
	}
}
// System.Void Unity.XR.Oculus.OculusRestarter::PauseAndRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRestarter_PauseAndRestart_m28727BF6DE2EB3868DBCE80CB9FFB05F11800C9B (OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7589D1EF4E8D8454C532BCBFBC5823B5B4345F30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1BB48CEB008ADB81AB49FAD95AAB464FAD9CA84);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_pauseAndRestartCoroutine != null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_0 = __this->get_m_pauseAndRestartCoroutine_11();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError("Only one pause then shutdown/restart can be executed at a time");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteralF1BB48CEB008ADB81AB49FAD95AAB464FAD9CA84, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// Debug.Log("Please make sure the device is connected. Will try to restart xr periodically.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteral7589D1EF4E8D8454C532BCBFBC5823B5B4345F30, /*hidden argument*/NULL);
		// m_pauseAndRestartCoroutine = StartCoroutine(PauseAndRestartCoroutine(TimeBetweenRestartAttempts));
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = OculusRestarter_get_TimeBetweenRestartAttempts_m4643B819097BB5929C5EA5AAC0BBD798817B2465_inline(/*hidden argument*/NULL);
		RuntimeObject* L_2;
		L_2 = OculusRestarter_PauseAndRestartCoroutine_mE17893C50E82B62DABC119C745041BD732A93E72(__this, L_1, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		__this->set_m_pauseAndRestartCoroutine_11(L_3);
		// }
		return;
	}
}
// System.Collections.IEnumerator Unity.XR.Oculus.OculusRestarter::PauseAndRestartCoroutine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OculusRestarter_PauseAndRestartCoroutine_mE17893C50E82B62DABC119C745041BD732A93E72 (OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * __this, float ___pauseTimeInSeconds0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * L_0 = (U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 *)il2cpp_codegen_object_new(U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77_il2cpp_TypeInfo_var);
		U3CPauseAndRestartCoroutineU3Ed__22__ctor_mE9A0F9B54589637F39AD77E522D257AAF233F600(L_0, 0, /*hidden argument*/NULL);
		U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * L_2 = L_1;
		float L_3 = ___pauseTimeInSeconds0;
		NullCheck(L_2);
		L_2->set_pauseTimeInSeconds_2(L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator Unity.XR.Oculus.OculusRestarter::RestartCoroutine(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OculusRestarter_RestartCoroutine_mED386FBEC1602B3DB023E06F05EC3043E6FFC027 (OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * __this, bool ___shouldRestart0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * L_0 = (U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D *)il2cpp_codegen_object_new(U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D_il2cpp_TypeInfo_var);
		U3CRestartCoroutineU3Ed__23__ctor_mFBCFBC73BF40550C580D2DBD6446E6765106D5DC(L_0, 0, /*hidden argument*/NULL);
		U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * L_2 = L_1;
		bool L_3 = ___shouldRestart0;
		NullCheck(L_2);
		L_2->set_shouldRestart_3(L_3);
		return L_2;
	}
}
// System.Void Unity.XR.Oculus.OculusRestarter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRestarter__ctor_mAFC467BA7F2B5C76CA9E93DF2B2FE5D4B991B05D (OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * __this, const RuntimeMethod* method)
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
// System.Void Unity.XR.Oculus.OculusSession::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusSession_Update_m9956F648A7B5BE12D6D26ED0DEBFD7B20722E4C2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NativeMethods.GetShouldRestartSession()) {
		bool L_0;
		L_0 = NativeMethods_GetShouldRestartSession_m691BE303740AD0161244C7D02838D9A1397D8EA1(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// OculusRestarter.Instance.PauseAndRestart();
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_1;
		L_1 = OculusRestarter_get_Instance_m39A581FAA5C8E45A6603F7FA0EA6CAD784887796(/*hidden argument*/NULL);
		NullCheck(L_1);
		OculusRestarter_PauseAndRestart_m28727BF6DE2EB3868DBCE80CB9FFB05F11800C9B(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
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
// System.UInt16 Unity.XR.Oculus.OculusSettings::GetStereoRenderingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t OculusSettings_GetStereoRenderingMode_mB4FF47E7831A653C90D7B08E336C40D66968F2FD (OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * __this, const RuntimeMethod* method)
{
	{
		// return (ushort)m_StereoRenderingModeAndroid;
		int32_t L_0 = __this->get_m_StereoRenderingModeAndroid_5();
		return (uint16_t)((int32_t)((uint16_t)L_0));
	}
}
// System.Void Unity.XR.Oculus.OculusSettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusSettings_Awake_m525FBEB4247E44DBC0D7E147581BD5EE751DCDB1 (OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Settings = this;
		((OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_StaticFields*)il2cpp_codegen_static_fields_for(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var))->set_s_Settings_19(__this);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.OculusSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusSettings__ctor_mBD02A264D1619566E55F183F6BE3E2F9D8C9747B (OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * __this, const RuntimeMethod* method)
{
	{
		// public bool SharedDepthBuffer = true;
		__this->set_SharedDepthBuffer_6((bool)1);
		// public bool DashSupport = true;
		__this->set_DashSupport_7((bool)1);
		// public bool V2Signing = true;
		__this->set_V2Signing_8((bool)1);
		// public bool FocusAware = true;
		__this->set_FocusAware_11((bool)1);
		// public bool OptimizeBufferDiscards = true;
		__this->set_OptimizeBufferDiscards_12((bool)1);
		// public bool TargetQuest = true;
		__this->set_TargetQuest_16((bool)1);
		// public bool TargetQuest2 = true;
		__this->set_TargetQuest2_17((bool)1);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void Unity.XR.Oculus.OculusUsages::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusUsages__cctor_m95A9C1418F76CD4C0603062DD186F0FC4362316C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral549D4E1BD7FFA7F485E084D961369B26386BA2A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83734951E6CF0220767BDF0CB126B869CED3387A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAD7DAB1A0038F488CE6D7BD2E6F6D83311BED68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD42F30283C4CE60465C4010C800AD9704733102);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCD1BF12664AC38299958513D10BAA016D22904B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static InputFeatureUsage<bool> volumeUp = new InputFeatureUsage<bool>("VolumeUp");
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_0;
		memset((&L_0), 0, sizeof(L_0));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_0), _stringLiteralCAD7DAB1A0038F488CE6D7BD2E6F6D83311BED68, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_il2cpp_TypeInfo_var))->set_volumeUp_0(L_0);
		// public static InputFeatureUsage<bool> volumeDown = new InputFeatureUsage<bool>("VolumeDown");
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_1;
		memset((&L_1), 0, sizeof(L_1));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_1), _stringLiteral83734951E6CF0220767BDF0CB126B869CED3387A, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_il2cpp_TypeInfo_var))->set_volumeDown_1(L_1);
		// public static InputFeatureUsage<bool> thumbrest = new InputFeatureUsage<bool>("Thumbrest");
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_2;
		memset((&L_2), 0, sizeof(L_2));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_2), _stringLiteralCD42F30283C4CE60465C4010C800AD9704733102, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_il2cpp_TypeInfo_var))->set_thumbrest_2(L_2);
		// public static InputFeatureUsage<bool> indexTouch = new InputFeatureUsage<bool>("IndexTouch");
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_3;
		memset((&L_3), 0, sizeof(L_3));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_3), _stringLiteral549D4E1BD7FFA7F485E084D961369B26386BA2A5, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_il2cpp_TypeInfo_var))->set_indexTouch_3(L_3);
		// public static InputFeatureUsage<bool> thumbTouch = new InputFeatureUsage<bool>("ThumbTouch");
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_4), _stringLiteralDCD1BF12664AC38299958513D10BAA016D22904B, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_il2cpp_TypeInfo_var))->set_thumbTouch_4(L_4);
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
// System.Boolean Unity.XR.Oculus.Performance::TrySetCPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Performance_TrySetCPULevel_m168A76958F71C27D5A17A346F699F874CD119D39 (int32_t ___level0, const RuntimeMethod* method)
{
	{
		// return (NativeMethods.SetCPULevel(level) == 0);
		int32_t L_0 = ___level0;
		int32_t L_1;
		L_1 = NativeMethods_SetCPULevel_mABD8BE1F1CE41DC683BA43822DB456530FD6D929(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Unity.XR.Oculus.Performance::TrySetGPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Performance_TrySetGPULevel_mE13008C6066A522BAEFE7B171A51AB78BDD81EDC (int32_t ___level0, const RuntimeMethod* method)
{
	{
		// return (NativeMethods.SetGPULevel(level) == 0);
		int32_t L_0 = ___level0;
		int32_t L_1;
		L_1 = NativeMethods_SetGPULevel_m055FCE766C4C218F61A06ACA963F5ED637834DF7(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Unity.XR.Oculus.Performance::TryGetAvailableDisplayRefreshRates(System.Single[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Performance_TryGetAvailableDisplayRefreshRates_m6322292C481D9F84FF1A56DCC33897047FF0AA42 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** ___refreshRates0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (cachedDisplayAvailableFrequencies == null || cachedDisplayAvailableFrequencies.Length == 0)
		IL2CPP_RUNTIME_CLASS_INIT(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ((Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields*)il2cpp_codegen_static_fields_for(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var))->get_cachedDisplayAvailableFrequencies_0();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ((Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields*)il2cpp_codegen_static_fields_for(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var))->get_cachedDisplayAvailableFrequencies_0();
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0063;
		}
	}

IL_000f:
	{
		// cachedDisplayAvailableFrequencies = new float[0];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)0);
		IL2CPP_RUNTIME_CLASS_INIT(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var);
		((Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields*)il2cpp_codegen_static_fields_for(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var))->set_cachedDisplayAvailableFrequencies_0(L_2);
		// int numFrequencies = 0;
		V_0 = 0;
		// if (NativeMethods.GetDisplayAvailableFrequencies(IntPtr.Zero, ref numFrequencies) && numFrequencies > 0)
		bool L_3;
		L_3 = NativeMethods_GetDisplayAvailableFrequencies_m2E4C861D87369CCA6A40AAFF6EA5CF65093D4F39((intptr_t)(0), (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		// int size = sizeof(float) * numFrequencies;
		int32_t L_5 = V_0;
		// IntPtr ptr = Marshal.AllocHGlobal(size);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_6;
		L_6 = Marshal_AllocHGlobal_mB339DD0B9D5778400B8CA9BA45169C9C1C14835D(((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_5)), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_6;
		// if (NativeMethods.GetDisplayAvailableFrequencies(ptr, ref numFrequencies) && numFrequencies > 0)
		intptr_t L_7 = V_1;
		bool L_8;
		L_8 = NativeMethods_GetDisplayAvailableFrequencies_m2E4C861D87369CCA6A40AAFF6EA5CF65093D4F39((intptr_t)L_7, (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		// cachedDisplayAvailableFrequencies = new float[numFrequencies];
		int32_t L_10 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_10);
		IL2CPP_RUNTIME_CLASS_INIT(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var);
		((Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields*)il2cpp_codegen_static_fields_for(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var))->set_cachedDisplayAvailableFrequencies_0(L_11);
		// Marshal.Copy(ptr, cachedDisplayAvailableFrequencies, 0, numFrequencies);
		intptr_t L_12 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_13 = ((Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields*)il2cpp_codegen_static_fields_for(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var))->get_cachedDisplayAvailableFrequencies_0();
		int32_t L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m5B004FA5DF0DC280EB8677D5E253BA93924C40AD((intptr_t)L_12, L_13, 0, L_14, /*hidden argument*/NULL);
	}

IL_005d:
	{
		// Marshal.FreeHGlobal(ptr);
		intptr_t L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_mC556D1077E92ACD2AC3FDEF3040B88FAC0F7F390((intptr_t)L_15, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// refreshRates = cachedDisplayAvailableFrequencies;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_16 = ___refreshRates0;
		IL2CPP_RUNTIME_CLASS_INIT(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_17 = ((Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields*)il2cpp_codegen_static_fields_for(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var))->get_cachedDisplayAvailableFrequencies_0();
		*((RuntimeObject **)L_16) = (RuntimeObject *)L_17;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_16, (void*)(RuntimeObject *)L_17);
		// return (cachedDisplayAvailableFrequencies.Length > 0);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_18 = ((Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields*)il2cpp_codegen_static_fields_for(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var))->get_cachedDisplayAvailableFrequencies_0();
		NullCheck(L_18);
		return (bool)((!(((uint32_t)(((RuntimeArray*)L_18)->max_length)) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Unity.XR.Oculus.Performance::TrySetDisplayRefreshRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Performance_TrySetDisplayRefreshRate_m08D4B41CCE153758A990FE1D45E90344B3AFB583 (float ___refreshRate0, const RuntimeMethod* method)
{
	{
		// return NativeMethods.SetDisplayFrequency(refreshRate);
		float L_0 = ___refreshRate0;
		bool L_1;
		L_1 = NativeMethods_SetDisplayFrequency_m0C913002249CA6C2FDAD4AB57A0957D4F5F8646C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.XR.Oculus.Performance::TryGetDisplayRefreshRate(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Performance_TryGetDisplayRefreshRate_mE352668E6C1C1FF8B6184F23FF31C047B8F34C45 (float* ___refreshRate0, const RuntimeMethod* method)
{
	{
		// return NativeMethods.GetDisplayFrequency(out refreshRate);
		float* L_0 = ___refreshRate0;
		bool L_1;
		L_1 = NativeMethods_GetDisplayFrequency_m5D89A6D7DF13E557DCF74B65770B5945A2C327BE((float*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Unity.XR.Oculus.Performance::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Performance__cctor_m01F738B7F7C2CC8CFBFA44910D5BF0ABB33F820B (const RuntimeMethod* method)
{
	{
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
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Initialize_m009EBB49477FAD1D7E03DA45EB80F15E6D28F521 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegisterUpdateCallback_Update_m2DA82FDFC251E9F4D10F6F5ADB6A9F4B11BAD7ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.onBeforeRender += Update;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_0, NULL, (intptr_t)((intptr_t)RegisterUpdateCallback_Update_m2DA82FDFC251E9F4D10F6F5ADB6A9F4B11BAD7ED_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_add_onBeforeRender_m1324FCAC06439BC14CFCE062C6BEFB76C7501228(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Deinitialize_m5783A25B492DD2271AF20528CC7225AA69B48D2B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegisterUpdateCallback_Update_m2DA82FDFC251E9F4D10F6F5ADB6A9F4B11BAD7ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.onBeforeRender -= Update;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_0, NULL, (intptr_t)((intptr_t)RegisterUpdateCallback_Update_m2DA82FDFC251E9F4D10F6F5ADB6A9F4B11BAD7ED_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_remove_onBeforeRender_mD2FFDA214D242F524EFF15932A7334F1F0D526D0(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Update_m2DA82FDFC251E9F4D10F6F5ADB6A9F4B11BAD7ED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputFocus.Update();
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		InputFocus_Update_mA29F59D3148E351431EF53DEEE921320DC66945E(/*hidden argument*/NULL);
		// OculusSession.Update();
		OculusSession_Update_m9956F648A7B5BE12D6D26ED0DEBFD7B20722E4C2(/*hidden argument*/NULL);
		// }
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
// System.String Unity.XR.Oculus.Stats::get_PluginVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Stats_get_PluginVersion_m66F99A5B04F4CADEE440E825BF1A29E927363674 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m204EA717B425B2D05BB91568E62A291F99E44F75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (string.Equals(string.Empty, m_PluginVersion))
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		String_t* L_1 = ((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->get_m_PluginVersion_1();
		bool L_2;
		L_2 = String_Equals_mCB0E1C045647658CF6B7C646F98F938750AB1B19(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// byte[] buf = new byte[256];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_0 = L_3;
		// NativeMethods.GetOVRPVersion(buf);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		NativeMethods_GetOVRPVersion_mB328CD13DA707D9B1B26A3EBC82A9F364F140BE9(L_4, /*hidden argument*/NULL);
		// var end = Array.IndexOf<byte>(buf, 0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		int32_t L_6;
		L_6 = Array_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m204EA717B425B2D05BB91568E62A291F99E44F75(L_5, (uint8_t)0, /*hidden argument*/Array_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m204EA717B425B2D05BB91568E62A291F99E44F75_RuntimeMethod_var);
		V_1 = L_6;
		// m_PluginVersion = System.Text.Encoding.ASCII.GetString(buf, 0, end);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_7;
		L_7 = Encoding_get_ASCII_mFA250EFF131288B0C4572FC27C7393FD469DC1C0(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_7);
		String_t* L_10;
		L_10 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->set_m_PluginVersion_1(L_10);
	}

IL_003c:
	{
		// return m_PluginVersion;
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		String_t* L_11 = ((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->get_m_PluginVersion_1();
		return L_11;
	}
}
// UnityEngine.IntegratedSubsystem Unity.XR.Oculus.Stats::GetOculusDisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystem_1_get_SubsystemDescriptor_m816FB5D3478D016CBD470BA93CF200BB0FA1DF42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t56455D217921470E52E7D33A1794256E31084DD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7815329E7014FDE1DE442AF3F320E30E685A3880_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86CB83E014FB5A27545E6442E0E4C0E783301DED);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828  V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * V_1 = NULL;
	IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (m_Display != null)
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0 = ((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->get_m_Display_0();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return m_Display;
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_1 = ((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->get_m_Display_0();
		return L_1;
	}

IL_000d:
	{
		// List<XRDisplaySubsystem> displays = new List<XRDisplaySubsystem>();
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_2 = (List_1_t56455D217921470E52E7D33A1794256E31084DD8 *)il2cpp_codegen_object_new(List_1_t56455D217921470E52E7D33A1794256E31084DD8_il2cpp_TypeInfo_var);
		List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4(L_2, /*hidden argument*/List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4_RuntimeMethod_var);
		// SubsystemManager.GetInstances(displays);
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7815329E7014FDE1DE442AF3F320E30E685A3880(L_3, /*hidden argument*/SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7815329E7014FDE1DE442AF3F320E30E685A3880_RuntimeMethod_var);
		// foreach (XRDisplaySubsystem xrDisplaySubsystem in displays)
		NullCheck(L_3);
		Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828  L_4;
		L_4 = List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D(L_3, /*hidden argument*/List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0055;
		}

IL_0020:
		{
			// foreach (XRDisplaySubsystem xrDisplaySubsystem in displays)
			XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_5;
			L_5 = Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_inline((Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_RuntimeMethod_var);
			V_1 = L_5;
			// if (xrDisplaySubsystem.SubsystemDescriptor.id == "oculus display" && xrDisplaySubsystem.running)
			XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_6 = V_1;
			NullCheck(L_6);
			XRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833 * L_7;
			L_7 = IntegratedSubsystem_1_get_SubsystemDescriptor_m816FB5D3478D016CBD470BA93CF200BB0FA1DF42(L_6, /*hidden argument*/IntegratedSubsystem_1_get_SubsystemDescriptor_m816FB5D3478D016CBD470BA93CF200BB0FA1DF42_RuntimeMethod_var);
			NullCheck(L_7);
			String_t* L_8;
			L_8 = IntegratedSubsystemDescriptor_get_id_m0347A7AE998F0210CC7DAD1DA974F788AB2CF879(L_7, /*hidden argument*/NULL);
			bool L_9;
			L_9 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_8, _stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0055;
			}
		}

IL_003f:
		{
			XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_10 = V_1;
			NullCheck(L_10);
			bool L_11;
			L_11 = IntegratedSubsystem_get_running_m3C6870588AA0F9816A3947F045BCB8F5662A9EC2(L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0055;
			}
		}

IL_0047:
		{
			// m_Display = xrDisplaySubsystem;
			XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_12 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
			((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->set_m_Display_0(L_12);
			// return m_Display;
			IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_13 = ((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->get_m_Display_0();
			V_2 = L_13;
			IL2CPP_LEAVE(0x7E, FINALLY_0060);
		}

IL_0055:
		{
			// foreach (XRDisplaySubsystem xrDisplaySubsystem in displays)
			bool L_14;
			L_14 = Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C((Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0020;
			}
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0060);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5((Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5_RuntimeMethod_var);
		IL2CPP_END_FINALLY(96)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
	}

IL_006e:
	{
		// Debug.LogError("No active Oculus display subsystem was found.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral86CB83E014FB5A27545E6442E0E4C0E783301DED, /*hidden argument*/NULL);
		// return m_Display;
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_15 = ((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->get_m_Display_0();
		return L_15;
	}

IL_007e:
	{
		// }
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_16 = V_2;
		return L_16;
	}
}
// System.Void Unity.XR.Oculus.Stats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stats__ctor_mA96DB2D702AAB276E41CD7C005AB64B599C0B63C (Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.XR.Oculus.Stats::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stats__cctor_mC93F4550849911809F978CF11798655CAAB0E528 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string m_PluginVersion = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->set_m_PluginVersion_1(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.XR.Oculus.Utils::SetColorScaleAndOffset(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_SetColorScaleAndOffset_m6434F29CDE9823397828ECE9F9A2817D44D48D84 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___colorScale0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___colorOffset1, const RuntimeMethod* method)
{
	{
		// NativeMethods.SetColorScale(colorScale.x, colorScale.y, colorScale.z, colorScale.w);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___colorScale0;
		float L_1 = L_0.get_x_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = ___colorScale0;
		float L_3 = L_2.get_y_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___colorScale0;
		float L_5 = L_4.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6 = ___colorScale0;
		float L_7 = L_6.get_w_4();
		NativeMethods_SetColorScale_mABAA1FBFC163D8DE94AD47D7B8F848B78CD5E9A0(L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		// NativeMethods.SetColorOffset(colorOffset.x, colorOffset.y, colorOffset.z, colorOffset.w);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8 = ___colorOffset1;
		float L_9 = L_8.get_x_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_10 = ___colorOffset1;
		float L_11 = L_10.get_y_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12 = ___colorOffset1;
		float L_13 = L_12.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_14 = ___colorOffset1;
		float L_15 = L_14.get_w_4();
		NativeMethods_SetColorOffset_m62E7000E8A015D685D76D915941FDE958732213D(L_9, L_11, L_13, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.XR.Oculus.SystemHeadset Unity.XR.Oculus.Utils::GetSystemHeadsetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_GetSystemHeadsetType_m383047E3555F08E216DD00B53BFE5F3C016FAFE9 (const RuntimeMethod* method)
{
	{
		// return NativeMethods.GetSystemHeadsetType();
		int32_t L_0;
		L_0 = NativeMethods_GetSystemHeadsetType_m5D2B6BFDE86FE8DB56A48641E1EA3B3AC788C0AE(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Utils::SetFoveationLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_SetFoveationLevel_m16335000BA8172A666725F27407B2FEC32EB43D0 (int32_t ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D4C1624EBCE886FC4F782A22F67C15E64EF0BE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!NativeMethods.GetTiledMultiResSupported())
		bool L_0;
		L_0 = NativeMethods_GetTiledMultiResSupported_mA3B09B2A1F0299A3AAD86C0DEB36625D598CD871(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// Debug.LogWarning("Can't set foveation level on current platform");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(_stringLiteral8D4C1624EBCE886FC4F782A22F67C15E64EF0BE1, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0012:
	{
		// NativeMethods.SetTiledMultiResLevel(level);
		int32_t L_1 = ___level0;
		NativeMethods_SetTiledMultiResLevel_mB738658807A7B692985B9CD55A0AEE8AAE58FF2D(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Unity.XR.Oculus.Utils::EnableDynamicFFR(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_EnableDynamicFFR_mAFC73962AAB99074606ED7D65ECC9D35B41C430A (bool ___enable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral039FC8798456705B4F372FB22E7B8A75FE2E6D6D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!NativeMethods.GetTiledMultiResSupported())
		bool L_0;
		L_0 = NativeMethods_GetTiledMultiResSupported_mA3B09B2A1F0299A3AAD86C0DEB36625D598CD871(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning("Can't enable dynamic FFR on current platform");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(_stringLiteral039FC8798456705B4F372FB22E7B8A75FE2E6D6D, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0013:
	{
		// NativeMethods.SetTiledMultiResDynamic(enable);
		bool L_1 = ___enable0;
		NativeMethods_SetTiledMultiResDynamic_mC79DF59B055FA02F3605881A38984454869DA66B(L_1, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Int32 Unity.XR.Oculus.Utils::GetFoveationLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_GetFoveationLevel_m922BB229AFE1AA65CDD41B454CCD930F0D93522B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E33CA6894EABEA68F4151858D5322F8246508A3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!NativeMethods.GetTiledMultiResSupported())
		bool L_0;
		L_0 = NativeMethods_GetTiledMultiResSupported_mA3B09B2A1F0299A3AAD86C0DEB36625D598CD871(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning("Can't get foveation level on current platform");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(_stringLiteral0E33CA6894EABEA68F4151858D5322F8246508A3, /*hidden argument*/NULL);
		// return -1;
		return (-1);
	}

IL_0013:
	{
		// return NativeMethods.GetTiledMultiResLevel();
		int32_t L_1;
		L_1 = NativeMethods_GetTiledMultiResLevel_m8082A03420962D025A24554936BC8802D190F3F0(/*hidden argument*/NULL);
		return L_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetColorScale(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetColorScale_mA8ED134FCC56CCD16F92734ADCBF2526342EB02C (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float, float, float, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(float) + sizeof(float) + sizeof(float) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetColorScale", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetColorScale)(___x0, ___y1, ___z2, ___w3);
	#else
	il2cppPInvokeFunc(___x0, ___y1, ___z2, ___w3);
	#endif

}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetColorOffset(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetColorOffset_m6765A7EC8EFFDB061AE48B3F53658BBD3FC26FBF (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float, float, float, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(float) + sizeof(float) + sizeof(float) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetColorOffset", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetColorOffset)(___x0, ___y1, ___z2, ___w3);
	#else
	il2cppPInvokeFunc(___x0, ___y1, ___z2, ___w3);
	#endif

}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetIsSupportedDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetIsSupportedDevice_mA3EF73A5F9CA1AD2B6E9D8F1F560A62D14A19E92 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetIsSupportedDevice", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetIsSupportedDevice)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::LoadOVRPlugin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_LoadOVRPlugin_m20BF6ADFC47F043ED9CB9F86199E26C8A46AD5AF (String_t* ___ovrpPath0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "LoadOVRPlugin", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___ovrpPath0' to native representation
	Il2CppChar* ____ovrpPath0_marshaled = NULL;
	if (___ovrpPath0 != NULL)
	{
		____ovrpPath0_marshaled = ___ovrpPath0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(LoadOVRPlugin)(____ovrpPath0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____ovrpPath0_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::UnloadOVRPlugin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_UnloadOVRPlugin_m6C683304420498120BF38390A1129A5B01A67F1E (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "UnloadOVRPlugin", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnloadOVRPlugin)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetUserDefinedSettings(Unity.XR.Oculus.NativeMethods/UserDefinedSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetUserDefinedSettings_mE187F03B58FEB8FE874B938E28401C06C919221E (UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  ___settings0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D );
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D ) + 2;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetUserDefinedSettings", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetUserDefinedSettings)(___settings0);
	#else
	il2cppPInvokeFunc(___settings0);
	#endif

}
// System.Int32 Unity.XR.Oculus.NativeMethods/Internal::SetCPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_SetCPULevel_m0568DA61DDC47E9F28D26C52EA4035A6A139CCA8 (int32_t ___cpuLevel0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetCPULevel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetCPULevel)(___cpuLevel0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cpuLevel0);
	#endif

	return returnValue;
}
// System.Int32 Unity.XR.Oculus.NativeMethods/Internal::SetGPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_SetGPULevel_mBC46AC72882E2FFD4358F5812B8F45329C62843A (int32_t ___gpuLevel0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetGPULevel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetGPULevel)(___gpuLevel0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___gpuLevel0);
	#endif

	return returnValue;
}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::GetOVRPVersion(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_GetOVRPVersion_m1E2BB4B4CDC04F9DAD64DF67D3CFC76085AF305B (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___version0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetOVRPVersion", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___version0' to native representation
	uint8_t* ____version0_marshaled = NULL;
	if (___version0 != NULL)
	{
		____version0_marshaled = reinterpret_cast<uint8_t*>((___version0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GetOVRPVersion)(____version0_marshaled);
	#else
	il2cppPInvokeFunc(____version0_marshaled);
	#endif

}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::EnablePerfMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_EnablePerfMetrics_m2572EAFC2373A4E10168EDD76D576A44212466D4 (bool ___enable0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "EnablePerfMetrics", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(EnablePerfMetrics)(static_cast<int32_t>(___enable0));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___enable0));
	#endif

}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::EnableAppMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_EnableAppMetrics_m327F6E0F90F1A962D000C105EFE540CD43E78D70 (bool ___enable0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "EnableAppMetrics", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(EnableAppMetrics)(static_cast<int32_t>(___enable0));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___enable0));
	#endif

}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::SetDeveloperModeStrict(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_SetDeveloperModeStrict_m0A2121361A4FFDA8D0EF716D2C011F0EF19A34F8 (bool ___active0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetDeveloperModeStrict", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetDeveloperModeStrict)(static_cast<int32_t>(___active0));
	#else
	int32_t returnValue = il2cppPInvokeFunc(static_cast<int32_t>(___active0));
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetAppHasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetAppHasInputFocus_mA679379FDE6F3AFAFBF35841818A0BD5A492579F (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetAppHasInputFocus", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetAppHasInputFocus)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryConfigured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryConfigured_m38A8FB6A7F2DCE7882E9DF3707530E40D85E6492 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetBoundaryConfigured", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetBoundaryConfigured)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryDimensions(Unity.XR.Oculus.Boundary/BoundaryType,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryDimensions_m07ED6D4A7E3C368766B953282AE8FA76A257849B (int32_t ___boundaryType0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___dimensions1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetBoundaryDimensions", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetBoundaryDimensions)(___boundaryType0, ___dimensions1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___boundaryType0, ___dimensions1);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryVisible_mFFBE7E9B928B930A6C4B1F8F7391F3403CD9F72F (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetBoundaryVisible", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetBoundaryVisible)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetBoundaryVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetBoundaryVisible_m3F762D66ED2E7998D8EDD6B065398796C32B2139 (bool ___boundaryVisible0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetBoundaryVisible", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetBoundaryVisible)(static_cast<int32_t>(___boundaryVisible0));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___boundaryVisible0));
	#endif

}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetAppShouldQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetAppShouldQuit_m2201DC6D753AE50E8E041C75816721CC622DA353 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetAppShouldQuit", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetAppShouldQuit)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetDisplayAvailableFrequencies(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetDisplayAvailableFrequencies_mA6A02093DF72E979557B913FEE19BA4B9CF61159 (intptr_t ___ptr0, int32_t* ___numFrequencies1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetDisplayAvailableFrequencies", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetDisplayAvailableFrequencies)(___ptr0, ___numFrequencies1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ptr0, ___numFrequencies1);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::SetDisplayFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_SetDisplayFrequency_m3221766C0E2DF541A57A44508194B245E038A965 (float ___refreshRate0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetDisplayFrequency", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetDisplayFrequency)(___refreshRate0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___refreshRate0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetDisplayFrequency(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetDisplayFrequency_m3264CC851EAF260CA1EFD7E4984362B1B7BC8676 (float* ___refreshRate0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetDisplayFrequency", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetDisplayFrequency)(___refreshRate0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___refreshRate0);
	#endif

	return static_cast<bool>(returnValue);
}
// Unity.XR.Oculus.SystemHeadset Unity.XR.Oculus.NativeMethods/Internal::GetSystemHeadsetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_GetSystemHeadsetType_mC0537BB4F5EA3EDD3993C7A05487B04A0FADAEFB (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetSystemHeadsetType", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetSystemHeadsetType)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetTiledMultiResSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetTiledMultiResSupported_mEE711350D975E6C4FD4D0634AEDD64F3FEF2E0BB (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetTiledMultiResSupported", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetTiledMultiResSupported)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetTiledMultiResLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetTiledMultiResLevel_mEEC4003CC9AEA6156EE976678E3409FCABE6EDD2 (int32_t ___level0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetTiledMultiResLevel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetTiledMultiResLevel)(___level0);
	#else
	il2cppPInvokeFunc(___level0);
	#endif

}
// System.Int32 Unity.XR.Oculus.NativeMethods/Internal::GetTiledMultiResLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_GetTiledMultiResLevel_m2BC392E4824622E98F610EC02CB4A8196FEF96CE (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetTiledMultiResLevel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetTiledMultiResLevel)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetTiledMultiResDynamic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetTiledMultiResDynamic_m037817F3884FC015AC28AB27520A40B3511D2A10 (bool ___isDynamic0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetTiledMultiResDynamic", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetTiledMultiResDynamic)(static_cast<int32_t>(___isDynamic0));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___isDynamic0));
	#endif

}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetShouldRestartSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetShouldRestartSession_m232B73B6EB98D8E93F361FFBEDC386E93CD86E1E (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetShouldRestartSession", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetShouldRestartSession)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndRestartCoroutineU3Ed__22__ctor_mE9A0F9B54589637F39AD77E522D257AAF233F600 (U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndRestartCoroutineU3Ed__22_System_IDisposable_Dispose_m2D4C564714370227159B843E3E3FD992C00C00BC (U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CPauseAndRestartCoroutineU3Ed__22_U3CU3Em__Finally1_m17836219B16F0E2F40AFE29DDADEACD9F0CEA00E(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPauseAndRestartCoroutineU3Ed__22_MoveNext_m594251DEF3855E1BD0F30EB7B45CEF06C51E94D7 (U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9193CA2A883A8C656610DDBD604EA09532252279);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001c;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0047;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_009d;
		}

IL_001c:
		{
			__this->set_U3CU3E1__state_0((-1));
			// {
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return new WaitForSeconds(pauseTimeInSeconds);
			float L_4 = __this->get_pauseTimeInSeconds_2();
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, L_4, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_5);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_009d;
		}

IL_0047:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// m_pauseAndRestartAttempts += 1;
			IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
			int32_t L_6 = ((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->get_m_pauseAndRestartAttempts_12();
			((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->set_m_pauseAndRestartAttempts_12(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
			// if (m_Coroutine == null)
			OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_7 = V_2;
			NullCheck(L_7);
			Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_8 = L_7->get_m_Coroutine_10();
			if (L_8)
			{
				goto IL_0078;
			}
		}

IL_0063:
		{
			// m_Coroutine = StartCoroutine(RestartCoroutine(true));
			OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_9 = V_2;
			OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_10 = V_2;
			OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_11 = V_2;
			NullCheck(L_11);
			RuntimeObject* L_12;
			L_12 = OculusRestarter_RestartCoroutine_mED386FBEC1602B3DB023E06F05EC3043E6FFC027(L_11, (bool)1, /*hidden argument*/NULL);
			NullCheck(L_10);
			Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_13;
			L_13 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_10, L_12, /*hidden argument*/NULL);
			NullCheck(L_9);
			L_9->set_m_Coroutine_10(L_13);
			// }
			goto IL_008c;
		}

IL_0078:
		{
			// Debug.LogError(String.Format("Restart/Shutdown already in progress so skipping this attempt."));
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14;
			L_14 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
			String_t* L_15;
			L_15 = String_Format_m2CDD2A21AF2BCE3CE07D634645F9A61B4CB7D9B3(_stringLiteral9193CA2A883A8C656610DDBD604EA09532252279, L_14, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_15, /*hidden argument*/NULL);
		}

IL_008c:
		{
			// }
			U3CPauseAndRestartCoroutineU3Ed__22_U3CU3Em__Finally1_m17836219B16F0E2F40AFE29DDADEACD9F0CEA00E(__this, /*hidden argument*/NULL);
			// }
			V_0 = (bool)0;
			goto IL_009d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0096;
	}

FAULT_0096:
	{ // begin fault (depth: 1)
		U3CPauseAndRestartCoroutineU3Ed__22_System_IDisposable_Dispose_m2D4C564714370227159B843E3E3FD992C00C00BC(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(150)
	} // end fault
	IL2CPP_CLEANUP(150)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009d:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Void Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndRestartCoroutineU3Ed__22_U3CU3Em__Finally1_m17836219B16F0E2F40AFE29DDADEACD9F0CEA00E (U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		__this->set_U3CU3E1__state_0((-1));
		OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_0 = __this->get_U3CU3E4__this_3();
		// m_pauseAndRestartCoroutine = null;
		OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_m_pauseAndRestartCoroutine_11((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// onAfterCoroutine?.Invoke();
		NullCheck(L_1);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = L_1->get_onAfterCoroutine_7();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Object Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPauseAndRestartCoroutineU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5CE986377F44FF4B04030B2B1CB84A4630F803A9 (U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndRestartCoroutineU3Ed__22_System_Collections_IEnumerator_Reset_m437EE8315D091FAF8113083C558FB27ACDFD49AC (U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPauseAndRestartCoroutineU3Ed__22_System_Collections_IEnumerator_Reset_m437EE8315D091FAF8113083C558FB27ACDFD49AC_RuntimeMethod_var)));
	}
}
// System.Object Unity.XR.Oculus.OculusRestarter/<PauseAndRestartCoroutine>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPauseAndRestartCoroutineU3Ed__22_System_Collections_IEnumerator_get_Current_m1A0F4AF33C851DF304034CA195AB9A7DAA9E798A (U3CPauseAndRestartCoroutineU3Ed__22_tB2C01E4BC27AD9BE6161508D49252BF4D6A67E77 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartCoroutineU3Ed__23__ctor_mFBCFBC73BF40550C580D2DBD6446E6765106D5DC (U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartCoroutineU3Ed__23_System_IDisposable_Dispose_m3CB326B58BAA27EB44C80329052E1D2FBB7701B9 (U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))) <= ((uint32_t)2))))
		{
			goto IL_001c;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		U3CRestartCoroutineU3Ed__23_U3CU3Em__Finally1_m5D43CE3EF7B89A3C817C148215ABE10F5F221332(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1C, IL_001c)
	}

IL_001c:
	{
		return;
	}
}
// System.Boolean Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRestartCoroutineU3Ed__23_MoveNext_mCF04F2683E7B1F137036D577AA4C7A54AD86E648 (U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3115DB94D93EB3315DED225F97D881D8A834AB58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB261904704D3ADA83E0084DF37061DE2D4CE88C1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B6_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B5_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B14_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B13_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_002b;
				}
				case 1:
				{
					goto IL_004f;
				}
				case 2:
				{
					goto IL_007b;
				}
				case 3:
				{
					goto IL_00bc;
				}
			}
		}

IL_0024:
		{
			V_0 = (bool)0;
			goto IL_0128;
		}

IL_002b:
		{
			__this->set_U3CU3E1__state_0((-1));
			// {
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return null;
			__this->set_U3CU3E2__current_1(NULL);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0128;
		}

IL_004f:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// XRGeneralSettings.Instance.Manager.DeinitializeLoader();
			IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
			XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_3;
			L_3 = XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline(/*hidden argument*/NULL);
			NullCheck(L_3);
			XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_4;
			L_4 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			XRManagerSettings_DeinitializeLoader_m6AD4F079818DF78946C99AD8D49E3D343DAAF290(L_4, /*hidden argument*/NULL);
			// yield return null;
			__this->set_U3CU3E2__current_1(NULL);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_0128;
		}

IL_007b:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// onAfterShutdown?.Invoke();
			OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_5 = V_2;
			NullCheck(L_5);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = L_5->get_onAfterShutdown_5();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = L_6;
			G_B5_0 = L_7;
			if (L_7)
			{
				G_B6_0 = L_7;
				goto IL_008f;
			}
		}

IL_008c:
		{
			goto IL_0094;
		}

IL_008f:
		{
			NullCheck(G_B6_0);
			Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B6_0, /*hidden argument*/NULL);
		}

IL_0094:
		{
			// if (shouldRestart)
			bool L_8 = __this->get_shouldRestart_3();
			if (!L_8)
			{
				goto IL_0117;
			}
		}

IL_009c:
		{
			// yield return XRGeneralSettings.Instance.Manager.InitializeLoader();
			IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
			XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_9;
			L_9 = XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline(/*hidden argument*/NULL);
			NullCheck(L_9);
			XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_10;
			L_10 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = XRManagerSettings_InitializeLoader_m92B987C89AF6F7E7D05718296243E0ED021FD6B3(L_10, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_11);
			__this->set_U3CU3E1__state_0(3);
			V_0 = (bool)1;
			goto IL_0128;
		}

IL_00bc:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// XRGeneralSettings.Instance.Manager.StartSubsystems();
			IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
			XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_12;
			L_12 = XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline(/*hidden argument*/NULL);
			NullCheck(L_12);
			XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_13;
			L_13 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline(L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			XRManagerSettings_StartSubsystems_mB9F502956C1FC6AD6D421CD36C3980B095B4282E(L_13, /*hidden argument*/NULL);
			// if (XRGeneralSettings.Instance.Manager.activeLoader == null)
			XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_14;
			L_14 = XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline(/*hidden argument*/NULL);
			NullCheck(L_14);
			XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_15;
			L_15 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline(L_14, /*hidden argument*/NULL);
			NullCheck(L_15);
			XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_16;
			L_16 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline(L_15, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_17;
			L_17 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_16, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_00f6;
			}
		}

IL_00ea:
		{
			// Debug.LogError("Failure to restart OculusLoader after shutdown.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral3115DB94D93EB3315DED225F97D881D8A834AB58, /*hidden argument*/NULL);
			// }
			goto IL_0106;
		}

IL_00f6:
		{
			// Debug.Log("OculusLoader restart successful.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteralB261904704D3ADA83E0084DF37061DE2D4CE88C1, /*hidden argument*/NULL);
			// m_pauseAndRestartAttempts = 0;
			IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
			((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->set_m_pauseAndRestartAttempts_12(0);
		}

IL_0106:
		{
			// onAfterRestart?.Invoke();
			OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_18 = V_2;
			NullCheck(L_18);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_19 = L_18->get_onAfterRestart_4();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_20 = L_19;
			G_B13_0 = L_20;
			if (L_20)
			{
				G_B14_0 = L_20;
				goto IL_0112;
			}
		}

IL_010f:
		{
			goto IL_0117;
		}

IL_0112:
		{
			NullCheck(G_B14_0);
			Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B14_0, /*hidden argument*/NULL);
		}

IL_0117:
		{
			// }
			U3CRestartCoroutineU3Ed__23_U3CU3Em__Finally1_m5D43CE3EF7B89A3C817C148215ABE10F5F221332(__this, /*hidden argument*/NULL);
			// }
			V_0 = (bool)0;
			goto IL_0128;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0121;
	}

FAULT_0121:
	{ // begin fault (depth: 1)
		U3CRestartCoroutineU3Ed__23_System_IDisposable_Dispose_m3CB326B58BAA27EB44C80329052E1D2FBB7701B9(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(289)
	} // end fault
	IL2CPP_CLEANUP(289)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0128:
	{
		bool L_21 = V_0;
		return L_21;
	}
}
// System.Void Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartCoroutineU3Ed__23_U3CU3Em__Finally1_m5D43CE3EF7B89A3C817C148215ABE10F5F221332 (U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		__this->set_U3CU3E1__state_0((-1));
		OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_0 = __this->get_U3CU3E4__this_2();
		V_0 = L_0;
		// m_Coroutine = null;
		OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_m_Coroutine_10((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// onAfterCoroutine?.Invoke();
		OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_2 = V_0;
		NullCheck(L_2);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = L_2->get_onAfterCoroutine_7();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0021;
		}
	}
	{
		goto IL_0026;
	}

IL_0021:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// if (XRGeneralSettings.Instance.Manager.activeLoader == null) {
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_5;
		L_5 = XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline(/*hidden argument*/NULL);
		NullCheck(L_5);
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_6;
		L_6 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_7;
		L_7 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		// PauseAndRestart();
		OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65 * L_9 = V_0;
		NullCheck(L_9);
		OculusRestarter_PauseAndRestart_m28727BF6DE2EB3868DBCE80CB9FFB05F11800C9B(L_9, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Object Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRestartCoroutineU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC4D68BC3E723F9EA64A307AAAEBE92D15E9C7C10 (U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartCoroutineU3Ed__23_System_Collections_IEnumerator_Reset_m8B74BC95BE0B29C902B5C7547EE3461E876BFC9F (U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRestartCoroutineU3Ed__23_System_Collections_IEnumerator_Reset_m8B74BC95BE0B29C902B5C7547EE3461E876BFC9F_RuntimeMethod_var)));
	}
}
// System.Object Unity.XR.Oculus.OculusRestarter/<RestartCoroutine>d__23::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRestartCoroutineU3Ed__23_System_Collections_IEnumerator_get_Current_m5154B4EB20D93035D0D588C0498EAFF2D0F2C986 (U3CRestartCoroutineU3Ed__23_t22ED932CF8C05985AD3BC43DDA2487410FC4112D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_GPUAppTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_GPUAppTime_mFEEFEEDF7634F4064C690F07B1DB26825692A238 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// ((XRDisplaySubsystem) GetOculusDisplaySubsystem()).TryGetAppGPUTimeLastFrame(out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		NullCheck(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)));
		bool L_1;
		L_1 = XRDisplaySubsystem_TryGetAppGPUTimeLastFrame_m6101C924131D97949D0BB807F0075C28464B6451(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)), (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_GPUCompositorTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_GPUCompositorTime_mE88C5D2A9508EC775678D4AAFE172D644DD3B27E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// ((XRDisplaySubsystem) GetOculusDisplaySubsystem()).TryGetCompositorGPUTimeLastFrame(out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		NullCheck(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)));
		bool L_1;
		L_1 = XRDisplaySubsystem_TryGetCompositorGPUTimeLastFrame_m168019E7D1D33CFA7218F9BC79E3C5E1640CC41B(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)), (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_MotionToPhoton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_MotionToPhoton_m80740922FD30B202610BDB102AD95D46D3FB9F7C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// ((XRDisplaySubsystem) GetOculusDisplaySubsystem()).TryGetMotionToPhoton(out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		NullCheck(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)));
		bool L_1;
		L_1 = XRDisplaySubsystem_TryGetMotionToPhoton_m10E75B632588DB76D4C88E022CC2B5D678E1C9F5(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)), (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_RefreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_RefreshRate_mF58D1D911B6983F6C8E04DF0FD8D31863842F3D5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// ((XRDisplaySubsystem) GetOculusDisplaySubsystem()).TryGetDisplayRefreshRate(out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		NullCheck(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)));
		bool L_1;
		L_1 = XRDisplaySubsystem_TryGetDisplayRefreshRate_m83B7B48711B68E8D05F3B5D2F1EDE61154EAC7A3(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)), (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_BatteryTemp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_BatteryTemp_m47FB27D2D8E551DC256CDB9616F2142D2DEB2175 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral650C77761A0B8B1C5C9AB2BB0D61E4767DDDB6E8);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "batteryTemperature", out batteryTemp);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral650C77761A0B8B1C5C9AB2BB0D61E4767DDDB6E8, (float*)(&V_0), /*hidden argument*/NULL);
		// return batteryTemp;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_BatteryLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_BatteryLevel_mAA3234732E5829EA40C79610386C23B00D5DF07C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2089C15C4332D83D0388E9B6CF7057950BB5CD54);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "batteryLevel", out batteryLevel);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral2089C15C4332D83D0388E9B6CF7057950BB5CD54, (float*)(&V_0), /*hidden argument*/NULL);
		// return batteryLevel;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Unity.XR.Oculus.Stats/AdaptivePerformance::get_PowerSavingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdaptivePerformance_get_PowerSavingMode_m99226E3F46426919FA68C75216FA229A8F7F9851 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1B23EF8DFFD7E2D6521CBDDA3630AC111AE5F69);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "powerSavingMode", out powerSavingMode);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteralA1B23EF8DFFD7E2D6521CBDDA3630AC111AE5F69, (float*)(&V_0), /*hidden argument*/NULL);
		// return !(powerSavingMode == 0.0f);
		float L_2 = V_0;
		return (bool)((((int32_t)((((float)L_2) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_AdaptivePerformanceScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_AdaptivePerformanceScale_m9947FB5DB23E0092A71D3E08A775082FEC71B43E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DADF60B90978099A286AA09DF75E789888C9904);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "adaptivePerformanceScale", out performanceScale);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral4DADF60B90978099A286AA09DF75E789888C9904, (float*)(&V_0), /*hidden argument*/NULL);
		// return performanceScale;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.XR.Oculus.Stats/AdaptivePerformance::get_CPULevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdaptivePerformance_get_CPULevel_m1AD7E50E684841C20C52A92B65C516E112960847 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18731F484474DDB7AD0F0E7C15988C0A794DEC4D);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "cpuLevel", out cpuLevel);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral18731F484474DDB7AD0F0E7C15988C0A794DEC4D, (float*)(&V_0), /*hidden argument*/NULL);
		// return (int) cpuLevel;
		float L_2 = V_0;
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_2);
	}
}
// System.Int32 Unity.XR.Oculus.Stats/AdaptivePerformance::get_GPULevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdaptivePerformance_get_GPULevel_mBEFC052317F45BB89DC42293713AD696D24CBF2A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0A88A6DB46B5BCFC8ED5871C81A6C91204F1E45);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "gpuLevel", out gpuLevel);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteralB0A88A6DB46B5BCFC8ED5871C81A6C91204F1E45, (float*)(&V_0), /*hidden argument*/NULL);
		// return (int) gpuLevel;
		float L_2 = V_0;
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_2);
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
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_AppQueueAheadTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_AppQueueAheadTime_m6269E5088701FEB294099FA3B9411C7E631529EE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB59BE99DEEFC290177DB43CF6B387636E1E0904);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.appqueueahead", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteralEB59BE99DEEFC290177DB43CF6B387636E1E0904, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_AppCPUElapsedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_AppCPUElapsedTime_m27DCDA440E31783E74022FE2C088959ABA79CDA2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC74641CA8B52702019111B91E29821576E700BB);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.cpuelapsedtime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteralDC74641CA8B52702019111B91E29821576E700BB, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_CompositorDroppedFrames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_CompositorDroppedFrames_m76EAF296BC146D237038A450AE6616C2AD3E7547 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60EABBC07A25977B87CF58F7CB0D8D536D013DBA);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositordroppedframes", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral60EABBC07A25977B87CF58F7CB0D8D536D013DBA, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_CompositorLatency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_CompositorLatency_m0C0237CDA7D800BF3151C8309B50F03ED194CEEA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B2341C27300FE7CC95F015A82D27378FA3E44C2);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositorlatency", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral8B2341C27300FE7CC95F015A82D27378FA3E44C2, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_CompositorCPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_CompositorCPUTime_m75C30FD99DB6696C222044E0E4102007C15FB253 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28DC90CC5E864B9BEFE7447A1CCD759D1F2D3991);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositorcputime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral28DC90CC5E864B9BEFE7447A1CCD759D1F2D3991, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_CPUStartToGPUEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_CPUStartToGPUEnd_mA294A8E4B82FEA622DA1E042C70385655D45BD44 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDF3E124A1507F39224D73C8EFA9828D8BE3846B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositorcpustartgpuendelapsedtime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteralCDF3E124A1507F39224D73C8EFA9828D8BE3846B, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_GPUEndToVsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_GPUEndToVsync_m38FA875E11D5A9E5C377C09C60030243E3872B6D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8695EE74D804B608F4CB465B35B41E02389AD412);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositorgpuendtovsyncelapsedtime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral8695EE74D804B608F4CB465B35B41E02389AD412, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.XR.Oculus.Stats/AppMetrics::EnableAppMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppMetrics_EnableAppMetrics_m3D99B6DC2574C718873D2DC9941FDD14049F6779 (bool ___enable0, const RuntimeMethod* method)
{
	{
		// NativeMethods.EnableAppMetrics(enable);
		bool L_0 = ___enable0;
		NativeMethods_EnableAppMetrics_mBFF69EB9C54389B25A9FC271819E9B3FB2A6CDB6(L_0, /*hidden argument*/NULL);
		// }
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
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_AppCPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_AppCPUTime_mE53A84B8202BCA2E221EA0297D6F4C067434344D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3665CEE66FFACBAAC4FEA9EBCFB744AC1F3A9A57);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.appcputime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral3665CEE66FFACBAAC4FEA9EBCFB744AC1F3A9A57, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_AppGPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_AppGPUTime_m6055F2F6B1F987492D42B376AAF23F7DAB2CA9F9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E837F416B0AD538A7C4B0B672467CAD351051C1);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.appgputime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral6E837F416B0AD538A7C4B0B672467CAD351051C1, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_CompositorCPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CompositorCPUTime_mA25DE33A0AE7CE98363AD9CC589A275390602982 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19EEE9FEA675F3AD8283953350F19D8A2E2934A0);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.compositorcputime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral19EEE9FEA675F3AD8283953350F19D8A2E2934A0, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_CompositorGPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CompositorGPUTime_m42BD7C18C2BE1ABBAAEB0BA3A832A54C4B57478A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B4329AE6518370E7FA79EABB817A9A8F33E72A1);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.compositorgputime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral7B4329AE6518370E7FA79EABB817A9A8F33E72A1, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_GPUUtilization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_GPUUtilization_m1D6176628FCB67FE5C1F4665D1BA7FB608184E4C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0C17AE8C1199F6CD8F16D39E1B77CC319F01B26);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.gpuutil", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteralE0C17AE8C1199F6CD8F16D39E1B77CC319F01B26, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_CPUUtilizationAverage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CPUUtilizationAverage_mC7D22DDB555F09C483D19D7D6CA9EF911D8E0A8E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9348643C476E6565E37FC0900AC244BD6F18AC32);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.cpuutilavg", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral9348643C476E6565E37FC0900AC244BD6F18AC32, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_CPUUtilizationWorst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CPUUtilizationWorst_m2F112911B6C7BB7A2D684B01E41292857D9E54FD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF752B27A3F46D6A1A7B84CA9CC6E730C9B472E9A);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.cpuutilworst", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteralF752B27A3F46D6A1A7B84CA9CC6E730C9B472E9A, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_CPUClockFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CPUClockFrequency_m6A41A80961206C86DC37E23869EC04A4B506AC4B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CF7D253C5E081CD8124B453E189315E3AB51312);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.cpuclockfreq", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteral7CF7D253C5E081CD8124B453E189315E3AB51312, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_GPUClockFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_GPUClockFrequency_mE67C9D0558582243809FDFD11CEDBCE4B9C709E3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB81FB9482B9D82D5EF7151BE5724BB998E6C5F83);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.gpuclockfreq", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mC67658F860743C9A2AFA66A9C70A41446B309912(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m62E2B5F7760BD06E91A1C81EBEE343D9230F6D10(L_0, _stringLiteralB81FB9482B9D82D5EF7151BE5724BB998E6C5F83, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.XR.Oculus.Stats/PerfMetrics::EnablePerfMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerfMetrics_EnablePerfMetrics_m6DCAC8F8AAC829B357E7DA4876D7377FB3F45FAD (bool ___enable0, const RuntimeMethod* method)
{
	{
		// NativeMethods.EnablePerfMetrics(enable);
		bool L_0 = ___enable0;
		NativeMethods_EnablePerfMetrics_mB9E9467765E2141254EAC993FF87E6595831DC74(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * OculusLoader_GetSettings_mF0D5694BD84372039D4227997B00CAB33A419CAC_inline (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings = OculusSettings.s_Settings;
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_0 = ((OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_StaticFields*)il2cpp_codegen_static_fields_for(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var))->get_s_Settings_19();
		// return settings;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusRestarter_set_TimeBetweenRestartAttempts_m3FDA87CEAC42CF6AF6521DFF3E4EB1CC0BC9454F_inline (float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set;
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->set_U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float OculusRestarter_get_TimeBetweenRestartAttempts_m4643B819097BB5929C5EA5AAC0BBD798817B2465_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get;
		IL2CPP_RUNTIME_CLASS_INIT(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var);
		float L_0 = ((OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_StaticFields*)il2cpp_codegen_static_fields_for(OculusRestarter_tC087F3507BB90D788A467B42A2F68763B0D68D65_il2cpp_TypeInfo_var))->get_U3CTimeBetweenRestartAttemptsU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_0 = ((XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var))->get_s_RuntimeSettingsInstance_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_0 = __this->get_m_LoaderManagerInstance_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_0 = __this->get_U3CactiveLoaderU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}

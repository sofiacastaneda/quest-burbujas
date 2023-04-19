#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Comparison`1<Meta.Conduit.InvocationContext>
struct Comparison_1_tD48EB0E35206C00C67637769B711197EDC1EDC82;
// System.Comparison`1<System.Object>
struct Comparison_1_tB56E8E7C2BF431D44E8EBD15EA3E6F41AAFF03D2;
// System.Collections.Generic.Dictionary`2<System.Object,Meta.Conduit.ConduitParameterValue>
struct Dictionary_2_t4C2203DE319A24CFCBAA82219B58724DBFD9E155;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Type>>
struct Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12;
// System.Collections.Generic.Dictionary`2<System.String,Meta.Conduit.ConduitParameterValue>
struct Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85;
// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Json.WitResponseNode>
struct Dictionary_2_tECC5A88E0D3C00E18225DF9DA8684F00E45E8BCB;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E;
// System.Collections.Generic.Dictionary`2<System.Type,System.String>
struct Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0;
// System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean>
struct Func_2_tABC5D2B4AF92BE004DE38AADAD2AED77AD815246;
// System.Func`2<Meta.Conduit.InvocationContext,System.Boolean>
struct Func_2_tFCFE0C2B4CE4D6590B6FCE89CC6F1F45496AF49F;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct IEnumerable_1_tCB061DF39774B2BB951ACFC01A96706DF662C4F5;
// System.Collections.Generic.IEnumerable`1<Meta.Conduit.InvocationContext>
struct IEnumerable_1_t5DFF3DB3CDFC512182E61E08A825C75BFCA4AD8B;
// System.Collections.Generic.IEnumerable`1<Meta.Conduit.ManifestParameter>
struct IEnumerable_1_t22BDAB5D4482CDBAA80C675B55096F3456DA2B99;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.IEnumerable`1<Meta.Conduit.WitKeyword>
struct IEnumerable_1_tF1B4CD7E8B35FE09A22633CED0AC3E1551350EBC;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct KeyCollection_tC4959DA7A4751C982595C58F1379E3C83EBF1EE9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.Type>>
struct KeyCollection_tDFC913C055DAF5822BDF1D6144CB3CD5E15BAEAA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Meta.Conduit.ConduitParameterValue>
struct KeyCollection_t95E023AED9C3D58D31EB014A0BCE7C454290FCE2;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Type>
struct KeyCollection_t6397E1BA96E179AE535A53A9C3EE6CBF5FBF3E63;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.List`1<System.String>>
struct KeyCollection_t9DA0D1659B9CBD08480ED8C0112E8C98E36C1510;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.String>
struct KeyCollection_t9F7BDD2BD3F3743A41D9E432DCBE8D91C5D95646;
// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry>
struct LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92;
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>
struct List_1_t79F736795335714ABC337199FBF6AAA73558A6E1;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>
struct List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>
struct List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>
struct List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7;
// System.Collections.Generic.List`1<Meta.Conduit.WitKeyword>
struct List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct ValueCollection_t9B3D82D45C4D06438F35204E9F3461CA8FA8B4AA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.Type>>
struct ValueCollection_t70465FC000B5D858AFEBDAB5A507F825FC43103A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Meta.Conduit.ConduitParameterValue>
struct ValueCollection_t34B64D28E7EC867F6CECA3635BAB71C20E65F136;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Type>
struct ValueCollection_tA5053A670C1CE9C44F369C8F5505B785269C503A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.List`1<System.String>>
struct ValueCollection_tED9A72800E1BEFC3516DEF7F7D34BF3A861A45E7;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.String>
struct ValueCollection_tB729CAD6B3DCF5C8942A973BCFBCF503FC8E2099;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>[]
struct EntryU5BU5D_t518A47C07F063D52E0E6E137E877E67E3094C1A1;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.Type>>[]
struct EntryU5BU5D_t715B3900700A9152A8FA249B72C591885DF8EB84;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Meta.Conduit.ConduitParameterValue>[]
struct EntryU5BU5D_tD460E68554267D242467B9A9A3109C82DA7F7123;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Type>[]
struct EntryU5BU5D_tB0F36AD163FAA1A69B2868E108CBEC489F485A15;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.List`1<System.String>>[]
struct EntryU5BU5D_t5F4FF3A6BF426C12448DAF9E71EB69E8370C7CFC;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.String>[]
struct EntryU5BU5D_t781EDDBE5235AA95E2871158B003AB1EDBDB383A;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D;
// System.Collections.Generic.HashSet`1/Slot<System.Type>[]
struct SlotU5BU5D_t2EBE02159BAB090586C455BDD5784DDAF6EBBF69;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Meta.Conduit.InvocationContext[]
struct InvocationContextU5BU5D_tA958EF11143BF0F9A82D3266E078D32234130E8A;
// Meta.WitAi.Json.JsonConverter[]
struct JsonConverterU5BU5D_t8327F3FEA5C837FBE4A4A8503B5C0B1AD46A5154;
// Meta.Conduit.ManifestAction[]
struct ManifestActionU5BU5D_tDB004C2902FCC9EAA07BE81598B9C225BEEDC7A6;
// Meta.Conduit.ManifestEntity[]
struct ManifestEntityU5BU5D_t5CE4A6928018F6BF377CF65EC687D171EC8558AD;
// Meta.Conduit.ManifestParameter[]
struct ManifestParameterU5BU5D_t7F9FD4AB29CBB838B701FAC93649A0FF6948F7F2;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Meta.WitAi.Data.Info.WitEntityKeywordInfo[]
struct WitEntityKeywordInfoU5BU5D_tD857B15DB3BB229C42383A8F639660F8898A61C8;
// Meta.WitAi.Data.Info.WitEntityRoleInfo[]
struct WitEntityRoleInfoU5BU5D_t82D8B396CB4C924317D57DBBAA4B6B5F90FB8168;
// Meta.Conduit.WitKeyword[]
struct WitKeywordU5BU5D_t439367A93E1B57ED17D59434D5602AF8E2F3C4A9;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Meta.Conduit.ConduitActionAttribute
struct ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B;
// Meta.Conduit.ConduitAssemblyAttribute
struct ConduitAssemblyAttribute_t6626115E4FCA563208711AA592066A808C55B60E;
// Meta.Conduit.ConduitDispatcher
struct ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77;
// Meta.Conduit.ConduitDispatcherFactory
struct ConduitDispatcherFactory_t24D4569ADB5094B39031F83D8279D35FB5325E5D;
// Meta.Conduit.ConduitEntityAttribute
struct ConduitEntityAttribute_tF0B59DB09925F25FC1D54C97478E166A154A7CC9;
// Meta.Conduit.ConduitParameterAttribute
struct ConduitParameterAttribute_tC01224F078C01F1F35E12BFF18B2ED4D74AC4243;
// Meta.Conduit.ConduitUtilities
struct ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964;
// Meta.Conduit.ConduitValueAttribute
struct ConduitValueAttribute_tAF81995C3BC444F3FD0C173F3D12A935AE0D2D63;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Meta.Conduit.IConduitDispatcher
struct IConduitDispatcher_t60BBCAD31980E43542AF8E98ECBAEE51A8AEC9B5;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Meta.Conduit.IInstanceResolver
struct IInstanceResolver_tFB48143BAD9EF24DE091AD0B4DAC60103C8F0599;
// Meta.Conduit.IManifestLoader
struct IManifestLoader_tA865B9542FE00637BAAE371119EF3791BB0CC4C0;
// Meta.Conduit.IParameterProvider
struct IParameterProvider_t24DAEC91D61D987886A2207BDB533BC16D57A4AC;
// Meta.Conduit.InvocationContext
struct InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971;
// Meta.WitAi.Json.JsonConverter
struct JsonConverter_t190B6A25CC7F4B027121414C24452DF540968C7F;
// Meta.Conduit.Manifest
struct Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10;
// Meta.Conduit.ManifestAction
struct ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130;
// Meta.Conduit.ManifestEntity
struct ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4;
// Meta.Conduit.ManifestLoader
struct ManifestLoader_t685F0D1722130EE51F7064DCF379C08ED1DC64EF;
// Meta.Conduit.ManifestParameter
struct ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;
// Meta.Conduit.ParameterProvider
struct ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Text.RegularExpressions.SharedReference
struct SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Meta.Conduit.WitKeyword
struct WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0;
// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537;
// Meta.Conduit.ConduitDispatcher/InvocationContextFilter
struct InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653;
// Meta.Conduit.ConduitUtilities/ProgressDelegate
struct ProgressDelegate_t30218000FBF83D444E47FA55B9F780505C0E3BF9;
// Meta.Conduit.Manifest/<>c
struct U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3;
// Meta.Conduit.ParameterProvider/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_tD992F214B82EB3D359157B4A57D1FD567534695B;
// Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t251974C43BC9D4A07E86E1FF7970519EB83921E0;
// Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t0A464F4B91F35D8667CDC0F09A9E1C7C842EF246;

IL2CPP_EXTERN_C RuntimeClass* Comparison_1_tD48EB0E35206C00C67637769B711197EDC1EDC82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConduitDispatcherFactory_t24D4569ADB5094B39031F83D8279D35FB5325E5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tABC5D2B4AF92BE004DE38AADAD2AED77AD815246_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tFCFE0C2B4CE4D6590B6FCE89CC6F1F45496AF49F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t83DEA208B85D141AB524FBF062D6CEF098F561E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tCB061DF39774B2BB951ACFC01A96706DF662C4F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t5C4FADAE1CD0985640B2EDB887FE74A475EDEEDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t6D1BB5477B24E0F0D91C2BACC317A80E121064AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tCF140AA36E460E0C5C7D58A3E6EC144A424439A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInstanceResolver_tFB48143BAD9EF24DE091AD0B4DAC60103C8F0599_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IManifestLoader_tA865B9542FE00637BAAE371119EF3791BB0CC4C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IParameterProvider_t24DAEC91D61D987886A2207BDB533BC16D57A4AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t3E03C6491535D0515C23DC9BCF3B620DB0063098_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t79F736795335714ABC337199FBF6AAA73558A6E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManifestLoader_t685F0D1722130EE51F7064DCF379C08ED1DC64EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_tD992F214B82EB3D359157B4A57D1FD567534695B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t251974C43BC9D4A07E86E1FF7970519EB83921E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t0A464F4B91F35D8667CDC0F09A9E1C7C842EF246_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitEntityKeywordInfoU5BU5D_tD857B15DB3BB229C42383A8F639660F8898A61C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral02CC0B39116ABD35C7079A163B63FCBD3A7A28DC;
IL2CPP_EXTERN_C String_t* _stringLiteral0E3A4B6D33B5A752C5EF943BD7BFD2FCFC6572AB;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral12E2DF8D29931D0A7F6BAD259D3D8344D460ABA8;
IL2CPP_EXTERN_C String_t* _stringLiteral14DB4DEA8365D5E4F9AB6DB94C4130AA74ECB588;
IL2CPP_EXTERN_C String_t* _stringLiteral1AA7858C328063B10F93180DAA4F8CECEAAABBA4;
IL2CPP_EXTERN_C String_t* _stringLiteral1C7CEFA994B6C7CAB324A6AC0F37639A23E691A0;
IL2CPP_EXTERN_C String_t* _stringLiteral1EDECAA096CC9146E798F06E367FD32D469ADF53;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3;
IL2CPP_EXTERN_C String_t* _stringLiteral2BC1949680B79EF335143D2614303F45C2BD5433;
IL2CPP_EXTERN_C String_t* _stringLiteral2FD210F72F823B7D5F53048538C393F3BEE13397;
IL2CPP_EXTERN_C String_t* _stringLiteral30A2AC504761E7DD06F19C2F3AEF88096139945E;
IL2CPP_EXTERN_C String_t* _stringLiteral3A7170386A08A61D5E84BC34FFF9B2C3419758FB;
IL2CPP_EXTERN_C String_t* _stringLiteral421ADF95C1916B0441998BC8F11F62C26D09310F;
IL2CPP_EXTERN_C String_t* _stringLiteral45E8B3D3BF0062B76362F9E784FE3235D4B4DFEF;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4C572534613C66044C38AE3EBE85C27908D6FF28;
IL2CPP_EXTERN_C String_t* _stringLiteral54DED7E6C4142C7A4B393F38A26EA7563C817E66;
IL2CPP_EXTERN_C String_t* _stringLiteral699AC6096221581A5B617645650AB1ECDE7E264A;
IL2CPP_EXTERN_C String_t* _stringLiteral6A13904391B9244725CDA479F017C96337B784A1;
IL2CPP_EXTERN_C String_t* _stringLiteral6F3800A3E48CBEF8728378A99950F313348E3F83;
IL2CPP_EXTERN_C String_t* _stringLiteral723AD9D4A305C071CE5BA68F3BE119C1321AEE08;
IL2CPP_EXTERN_C String_t* _stringLiteral7386C7C44A61AE887AD9CFD7CF0DA932BBA457ED;
IL2CPP_EXTERN_C String_t* _stringLiteral7A3606EC2448DF9CCD84DF499ED72C8D6704E46E;
IL2CPP_EXTERN_C String_t* _stringLiteral7D7471446741543FC8F6CF76ED088D1071EFDEE3;
IL2CPP_EXTERN_C String_t* _stringLiteral7E38BE81D2CAEC365D5A2348FB759622EB3AD325;
IL2CPP_EXTERN_C String_t* _stringLiteral829A632019B79F9E3E4862CB519E27236E6769D1;
IL2CPP_EXTERN_C String_t* _stringLiteral82F0949FE776481A958565B508A97E357FF9EC29;
IL2CPP_EXTERN_C String_t* _stringLiteral86E87BFFE44DF63E1177A08463C331A3BF1DED67;
IL2CPP_EXTERN_C String_t* _stringLiteral8D2B0EE79B75C11DB007298C5EA80A923AA7E4AE;
IL2CPP_EXTERN_C String_t* _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
IL2CPP_EXTERN_C String_t* _stringLiteral93E063665B9B0BA4704D4E2337AEFCE11D860473;
IL2CPP_EXTERN_C String_t* _stringLiteral9AA220E0FCE5E917D823E177B898237A503A6AF9;
IL2CPP_EXTERN_C String_t* _stringLiteral9FDF9180296CDD3BFAEA23DC87830C15E2F3F69A;
IL2CPP_EXTERN_C String_t* _stringLiteralA504012C0A73DA581CCE241EE6A92AF955E01C66;
IL2CPP_EXTERN_C String_t* _stringLiteralC1611699FEF45A8574406A8E197A1B4C0494643A;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC446C706102FE739C7C607DC8C5EA3A0D0694D6E;
IL2CPP_EXTERN_C String_t* _stringLiteralCD9B14D4046ED1AD88F3E1F180FCBA71F134B53B;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralCE718B85C732127DA06EC4DDA3E9F112B092F786;
IL2CPP_EXTERN_C String_t* _stringLiteralCEA90F34C18252F7776BAD3E86E21337D970535D;
IL2CPP_EXTERN_C String_t* _stringLiteralCF77B7EB56FFCA00EA027593FFC88A4FD633A891;
IL2CPP_EXTERN_C String_t* _stringLiteralD1298000113B6711F92B8CD9D9A7FD1C6C03D07B;
IL2CPP_EXTERN_C String_t* _stringLiteralD449635E5B56DA36239C3DDA1F4523177DA5157C;
IL2CPP_EXTERN_C String_t* _stringLiteralD6567631BB9A28800CA018833DBF7581A00BC16C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF072CEDCFB53DF9A7858641FFC5B592474D304;
IL2CPP_EXTERN_C String_t* _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C;
IL2CPP_EXTERN_C String_t* _stringLiteralDF76DD643D55BE4936058374C0CC9C1AE6EBA60A;
IL2CPP_EXTERN_C String_t* _stringLiteralE15B6F2D7831CA81037E8DCF7B3F54A8A2AD80BC;
IL2CPP_EXTERN_C String_t* _stringLiteralE1A3CD913FA259DB8A074AE7BB483A85777F004B;
IL2CPP_EXTERN_C String_t* _stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9;
IL2CPP_EXTERN_C String_t* _stringLiteralE6B1DD48E50A830EA9A74DD5B2A89599D6F01C5A;
IL2CPP_EXTERN_C String_t* _stringLiteralE8AC6DCC7EE1605CE92D392470CBAE42DAC5BD4A;
IL2CPP_EXTERN_C String_t* _stringLiteralEE16E1FEE69D72AAD0655715C5885FBE040DD709;
IL2CPP_EXTERN_C String_t* _stringLiteralF19157630C2E302C33B88C5B6A53BB1D1F0B6896;
IL2CPP_EXTERN_C String_t* _stringLiteralF19C581C636A926E20F7D783DF0F1AE22C19E0B9;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFBDF8AFC94D560BD88EEA635CD05D9017B97E990;
IL2CPP_EXTERN_C String_t* _stringLiteralFDFD7C73EDC4C382BFC197F2D672F32B3A524150;
IL2CPP_EXTERN_C const RuntimeMethod* Comparison_1__ctor_m21DC8118E9261D3667F372E6A0B53B0505427674_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m4F370D06B42A39DE8D4CC4ECA25591BBB195B0E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m68080B54B36C06329C1EFF46DE3C4F9CBCCF5986_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE189E1865AFCFC5469D25A007EFCF43D0ACCE217_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m0999E28E34F97E04A673BFF5FFD3AAA7EBA1AB92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m561A89CC21043683561EDCB2D33A0B85B27DA71C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m99949C67DA6DC570336F1CCED45ADF8287252128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m9A6E5C2A0932D66C3D38B64E417811BBD0DEE219_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mC063FA870A55FA56E013AB91DAD7C7BE87C42C0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mCE3DC4CE93CB0306474D93FE078A433EF2270DCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mFA5667E9E7D3DC59C721751C6A020A45DF645929_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m2081C22E67B979AFF0710DA64B3BFE895BAE1635_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mBC160C6C503CBBE8C1192D6800255B0930F5DFFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mAD5155E7BDF9B0B146468C59E19A3190C07D1D06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m079AE1790DB8218117772D466378DF3BF739FF56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1B2E51BDF1C42CA5212FD2B19B8F24952DB654CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4757015DBB2285304C7222BE41A89FCB05BE5BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m51A0F5229DC8846B716F75FD6F349F0E3A84E2DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m98D1D89FA627EFF725A6112AFFBD3CBF6CB8CE27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA90F246C9CCA3C9E6B7A0D461973B8E3C27A96E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAB54DC9EA2E016E35B204E9E26F3CF9F978B1234_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD9C98FB1F414E695E642E6EAA4D2B66B3A03F295_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m0588E9512D07E941A36F7C1E6674EB62D56048DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m39473D804BE400460EEBD0CC75980510183E9A1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5EE5B257E761957633252673F7CE743880A8E17C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m79FCB5C0537CAA6EA8D745C5ED168F5F2D9BC6A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC42867F2E8D1AB134501007C7AD3AFF220D75BF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m05B6EAA5A9B7253285E4287A1E666A1B26FBD403_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m28B212A1EECEDE5DE08D65B4E93D7EB10ACE9C98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m54DA5467085BB6B286991F5B164EB4B1F57082D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9A0B3D61D5BB899BE4186A29CC8314CF2B546345_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisRuntimeObject_m191CE082915F09BBEF1FA66B7F02B14D919A0FEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisType_t_mED4F94DAE69D76F9F487EAF7E730ECF9CC02E056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D_mE3B5E7FEB795EC6B7F5072019340030374D9FBC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisString_t_m6725D76BF34DF9B9C48E007FEAD6C122CE4AEC17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisWitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0_mC6B6D969A583547F3999D1ACCB1D9B050E29D55B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisRuntimeObject_mA5E1AD3350B1E7EB1FAE7562CA67C49A5193E1F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisInvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971_mCAE33F58DF534893BEDD8E6816DC4C2FFD6250D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisType_t_m0097E5DDAD2068C1D084460E5324F7BA957309C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisInvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971_m25314D09EB244234C63A11E5F58208A53F541C27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisList_1_t79F736795335714ABC337199FBF6AAA73558A6E1_mEA27EFD786DBCD22DF285092511AF4D929C570BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisString_t_m271D41E8381DE1CDAC5C54BDCDD26B76A63D7E02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisType_t_m98A76BE80710D7FA14000B0C39096DFA6092DFEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0F7A4287088CE1A412D82007974A0154334542ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m32246B37DADF3CB4FD163A464051ACA9CC43F658_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m78298D1DA5CD9AC4EF8F9056672B3EECDD69EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m794A8065F96A52A636116CD7475B246BD39574CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7D3C5AB9967DFDFE269DC54DF367D0B21C59E356_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m81106B7D133B878824A3E6FE4E50484C65A2F0FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC84BF194A0433203991A8480CC4003E613428369_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1014044CC91CB6DD27CE358570BEA1BFD8C9FD15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m27DDAE22558733AB59D955136A7EF5AF05B1F4CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3EFCF097994D900E6B1680090DDD25452B0FF186_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4D8899097FFAE4593AA535D2A9311C7884F75492_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6418FB7E50E86D52EE58C79FE28B214FFDE2DC6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m66B5AC836B99AB9EEF77796B217E18E1AEB99F58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m76AD0C0FBBB414F5C7040C81D7453F4998A69E61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0E7DD0E65A51098263437149381C2227D1BF478E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m165F8ED4B5B749E6EA45C3254BAE647DD035F819_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4A5B91C6A96CDBD3DAB8D19E24596261354F7AB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m557855CD7AB5535158BEBB5F773B80036E88369E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5D01A6607C2199E7A7B5856E49119C26FE5327BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m65016ED0A0B788DA91DE3E3057C346D3F98B56EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD195752168D3CA865A7453D868E21BAE700D2749_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m6397C103AFDCE68F75EDF44FB493A9B6651F7AFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m9B4F5DC8EB5C5399B6F1183F80457805F00072B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mDEB78D6F07C536567157D880423F4AE2B9EEBF7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m2D141B160C366DB0A2B24DA4A97CC8653C77800E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisManifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10_m3E6717CB761093A2EBEB63FA9F64D74DE6DD4C35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_SerializeObject_TisManifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10_m053A2025857A7AB59C796091DEFF8B9241219062_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_mA7A3EDE79F7F742613170703D44941D7EBE09E7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_get_Count_m177354EC38675B4C9D014E7A800B83C21847C690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mE3FC8BDC999C0448B8CADE7BF2A72F332783526C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7A57A7B3B30CA021D78890684D5B338E39A55F63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC5CE78031AB21C2BBFFDAD4FAF20CFC60914F0DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1A7C5FE9C17CD872D4FA29283FA03E6EEF24193B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6721C43E824DF8F95CE1CCA02D6AC0507616EDF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA00086B33B6560F41A54282B3BC1FCCC583D6FA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD669CD295A1C7CC224A25FEA0040AD83495ED949_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_mCB6637C0DF90E3E960F15E9DC0B566AF0C7F6EA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m06D4213D813A14DE380DD5156140CC121094F165_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0E1DA99C500484FF7C9EB2D85D40EB378D3A8E70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m718CAEAAAA3CE7C939603B0D9E32658450EFA227_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9D78BB747F6D45B5B1FE1C8B3ABE4F3AC4C98ACF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE151EBAE39F9F93BB13D350B3A8D9F960F25E9B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m11541AE6ECA8C8CFE233279F4F7850D2EC11F2A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1B765A1E8C1E378192FF47343E7F963528EC0C68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4CC9C4E23941AFFE5744F9F7E2BFAF5CA74593CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA2472BBDF2F508EF1BB7D360B28CB9FCD636255D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m528E3CA9DB52D328760704289BCF649BFAF221C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9ED8474217B5B87FA7A5585EB65D5DD05C07BCB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Manifest_ResolveActions_m8F30EE572C6406B267DC6317B54426F2FA110E45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Manifest_ResolveEntities_m2F62A7FDDD83880FA17C42778A4AFD60D3893BCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_mCC9DF0627043A941E7E781AF7E452E8382475F67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m752788CA9E64FFC2DF70ABBDB8669E579849F4C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CResolveActionsU3Eb__26_0_m68023485CC5863B64C4819A66E209376AFAB6E6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CResolveActionsU3Eb__26_1_m641846455F8965CF4E6081EC0AF9D2325F05303A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CGetParameterTypesU3Eb__0_m2CB81C73623339FA04EC215ABCBC3D2D743632A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CResolveInvocationContextsU3Eb__0_m96F611DBFE8780A1716D6DFC5F3C638B34B14F7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CCompatibleInvocationContextU3Eb__0_m725BC37BE8AA0ADB4B5DDF8557D15011B75A06CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12_marshaled_com;
struct WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12_marshaled_pinvoke;
struct WitEntityRoleInfo_t0C123437FE502CD57612AC3D7A8CAA42795DA319_marshaled_com;
struct WitEntityRoleInfo_t0C123437FE502CD57612AC3D7A8CAA42795DA319_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct JsonConverterU5BU5D_t8327F3FEA5C837FBE4A4A8503B5C0B1AD46A5154;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
struct ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
struct WitEntityKeywordInfoU5BU5D_tD857B15DB3BB229C42383A8F639660F8898A61C8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t235BDA1EC9F3783F3F70E71954228C3FF4CE9B7F 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t518A47C07F063D52E0E6E137E877E67E3094C1A1* ___entries_1;
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
	KeyCollection_tC4959DA7A4751C982595C58F1379E3C83EBF1EE9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9B3D82D45C4D06438F35204E9F3461CA8FA8B4AA * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A, ___entries_1)); }
	inline EntryU5BU5D_t518A47C07F063D52E0E6E137E877E67E3094C1A1* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t518A47C07F063D52E0E6E137E877E67E3094C1A1** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t518A47C07F063D52E0E6E137E877E67E3094C1A1* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A, ___keys_7)); }
	inline KeyCollection_tC4959DA7A4751C982595C58F1379E3C83EBF1EE9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC4959DA7A4751C982595C58F1379E3C83EBF1EE9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC4959DA7A4751C982595C58F1379E3C83EBF1EE9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A, ___values_8)); }
	inline ValueCollection_t9B3D82D45C4D06438F35204E9F3461CA8FA8B4AA * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9B3D82D45C4D06438F35204E9F3461CA8FA8B4AA ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9B3D82D45C4D06438F35204E9F3461CA8FA8B4AA * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Type>>
struct Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t715B3900700A9152A8FA249B72C591885DF8EB84* ___entries_1;
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
	KeyCollection_tDFC913C055DAF5822BDF1D6144CB3CD5E15BAEAA * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t70465FC000B5D858AFEBDAB5A507F825FC43103A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12, ___entries_1)); }
	inline EntryU5BU5D_t715B3900700A9152A8FA249B72C591885DF8EB84* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t715B3900700A9152A8FA249B72C591885DF8EB84** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t715B3900700A9152A8FA249B72C591885DF8EB84* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12, ___keys_7)); }
	inline KeyCollection_tDFC913C055DAF5822BDF1D6144CB3CD5E15BAEAA * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tDFC913C055DAF5822BDF1D6144CB3CD5E15BAEAA ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tDFC913C055DAF5822BDF1D6144CB3CD5E15BAEAA * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12, ___values_8)); }
	inline ValueCollection_t70465FC000B5D858AFEBDAB5A507F825FC43103A * get_values_8() const { return ___values_8; }
	inline ValueCollection_t70465FC000B5D858AFEBDAB5A507F825FC43103A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t70465FC000B5D858AFEBDAB5A507F825FC43103A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Meta.Conduit.ConduitParameterValue>
struct Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD460E68554267D242467B9A9A3109C82DA7F7123* ___entries_1;
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
	KeyCollection_t95E023AED9C3D58D31EB014A0BCE7C454290FCE2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t34B64D28E7EC867F6CECA3635BAB71C20E65F136 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869, ___entries_1)); }
	inline EntryU5BU5D_tD460E68554267D242467B9A9A3109C82DA7F7123* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD460E68554267D242467B9A9A3109C82DA7F7123** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD460E68554267D242467B9A9A3109C82DA7F7123* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869, ___keys_7)); }
	inline KeyCollection_t95E023AED9C3D58D31EB014A0BCE7C454290FCE2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t95E023AED9C3D58D31EB014A0BCE7C454290FCE2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t95E023AED9C3D58D31EB014A0BCE7C454290FCE2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869, ___values_8)); }
	inline ValueCollection_t34B64D28E7EC867F6CECA3635BAB71C20E65F136 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t34B64D28E7EC867F6CECA3635BAB71C20E65F136 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t34B64D28E7EC867F6CECA3635BAB71C20E65F136 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
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
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
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
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB0F36AD163FAA1A69B2868E108CBEC489F485A15* ___entries_1;
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
	KeyCollection_t6397E1BA96E179AE535A53A9C3EE6CBF5FBF3E63 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA5053A670C1CE9C44F369C8F5505B785269C503A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___entries_1)); }
	inline EntryU5BU5D_tB0F36AD163FAA1A69B2868E108CBEC489F485A15* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB0F36AD163FAA1A69B2868E108CBEC489F485A15** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB0F36AD163FAA1A69B2868E108CBEC489F485A15* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___keys_7)); }
	inline KeyCollection_t6397E1BA96E179AE535A53A9C3EE6CBF5FBF3E63 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6397E1BA96E179AE535A53A9C3EE6CBF5FBF3E63 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6397E1BA96E179AE535A53A9C3EE6CBF5FBF3E63 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___values_8)); }
	inline ValueCollection_tA5053A670C1CE9C44F369C8F5505B785269C503A * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA5053A670C1CE9C44F369C8F5505B785269C503A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA5053A670C1CE9C44F369C8F5505B785269C503A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5F4FF3A6BF426C12448DAF9E71EB69E8370C7CFC* ___entries_1;
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
	KeyCollection_t9DA0D1659B9CBD08480ED8C0112E8C98E36C1510 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tED9A72800E1BEFC3516DEF7F7D34BF3A861A45E7 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E, ___entries_1)); }
	inline EntryU5BU5D_t5F4FF3A6BF426C12448DAF9E71EB69E8370C7CFC* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5F4FF3A6BF426C12448DAF9E71EB69E8370C7CFC** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5F4FF3A6BF426C12448DAF9E71EB69E8370C7CFC* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E, ___keys_7)); }
	inline KeyCollection_t9DA0D1659B9CBD08480ED8C0112E8C98E36C1510 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9DA0D1659B9CBD08480ED8C0112E8C98E36C1510 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9DA0D1659B9CBD08480ED8C0112E8C98E36C1510 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E, ___values_8)); }
	inline ValueCollection_tED9A72800E1BEFC3516DEF7F7D34BF3A861A45E7 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tED9A72800E1BEFC3516DEF7F7D34BF3A861A45E7 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tED9A72800E1BEFC3516DEF7F7D34BF3A861A45E7 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.String>
struct Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t781EDDBE5235AA95E2871158B003AB1EDBDB383A* ___entries_1;
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
	KeyCollection_t9F7BDD2BD3F3743A41D9E432DCBE8D91C5D95646 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB729CAD6B3DCF5C8942A973BCFBCF503FC8E2099 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___entries_1)); }
	inline EntryU5BU5D_t781EDDBE5235AA95E2871158B003AB1EDBDB383A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t781EDDBE5235AA95E2871158B003AB1EDBDB383A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t781EDDBE5235AA95E2871158B003AB1EDBDB383A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___keys_7)); }
	inline KeyCollection_t9F7BDD2BD3F3743A41D9E432DCBE8D91C5D95646 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9F7BDD2BD3F3743A41D9E432DCBE8D91C5D95646 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9F7BDD2BD3F3743A41D9E432DCBE8D91C5D95646 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___values_8)); }
	inline ValueCollection_tB729CAD6B3DCF5C8942A973BCFBCF503FC8E2099 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB729CAD6B3DCF5C8942A973BCFBCF503FC8E2099 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB729CAD6B3DCF5C8942A973BCFBCF503FC8E2099 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____slots_8)); }
	inline SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t2EBE02159BAB090586C455BDD5784DDAF6EBBF69* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____slots_8)); }
	inline SlotU5BU5D_t2EBE02159BAB090586C455BDD5784DDAF6EBBF69* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t2EBE02159BAB090586C455BDD5784DDAF6EBBF69** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t2EBE02159BAB090586C455BDD5784DDAF6EBBF69* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17, ___dictionary_0)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>
struct List_1_t79F736795335714ABC337199FBF6AAA73558A6E1  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InvocationContextU5BU5D_tA958EF11143BF0F9A82D3266E078D32234130E8A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t79F736795335714ABC337199FBF6AAA73558A6E1, ____items_1)); }
	inline InvocationContextU5BU5D_tA958EF11143BF0F9A82D3266E078D32234130E8A* get__items_1() const { return ____items_1; }
	inline InvocationContextU5BU5D_tA958EF11143BF0F9A82D3266E078D32234130E8A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InvocationContextU5BU5D_tA958EF11143BF0F9A82D3266E078D32234130E8A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t79F736795335714ABC337199FBF6AAA73558A6E1, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t79F736795335714ABC337199FBF6AAA73558A6E1, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t79F736795335714ABC337199FBF6AAA73558A6E1, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>
struct List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ManifestActionU5BU5D_tDB004C2902FCC9EAA07BE81598B9C225BEEDC7A6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A, ____items_1)); }
	inline ManifestActionU5BU5D_tDB004C2902FCC9EAA07BE81598B9C225BEEDC7A6* get__items_1() const { return ____items_1; }
	inline ManifestActionU5BU5D_tDB004C2902FCC9EAA07BE81598B9C225BEEDC7A6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ManifestActionU5BU5D_tDB004C2902FCC9EAA07BE81598B9C225BEEDC7A6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>
struct List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ManifestEntityU5BU5D_t5CE4A6928018F6BF377CF65EC687D171EC8558AD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855, ____items_1)); }
	inline ManifestEntityU5BU5D_t5CE4A6928018F6BF377CF65EC687D171EC8558AD* get__items_1() const { return ____items_1; }
	inline ManifestEntityU5BU5D_t5CE4A6928018F6BF377CF65EC687D171EC8558AD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ManifestEntityU5BU5D_t5CE4A6928018F6BF377CF65EC687D171EC8558AD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>
struct List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ManifestParameterU5BU5D_t7F9FD4AB29CBB838B701FAC93649A0FF6948F7F2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91, ____items_1)); }
	inline ManifestParameterU5BU5D_t7F9FD4AB29CBB838B701FAC93649A0FF6948F7F2* get__items_1() const { return ____items_1; }
	inline ManifestParameterU5BU5D_t7F9FD4AB29CBB838B701FAC93649A0FF6948F7F2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ManifestParameterU5BU5D_t7F9FD4AB29CBB838B701FAC93649A0FF6948F7F2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Type>
struct List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7, ____items_1)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get__items_1() const { return ____items_1; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<Meta.Conduit.WitKeyword>
struct List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WitKeywordU5BU5D_t439367A93E1B57ED17D59434D5602AF8E2F3C4A9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415, ____items_1)); }
	inline WitKeywordU5BU5D_t439367A93E1B57ED17D59434D5602AF8E2F3C4A9* get__items_1() const { return ____items_1; }
	inline WitKeywordU5BU5D_t439367A93E1B57ED17D59434D5602AF8E2F3C4A9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WitKeywordU5BU5D_t439367A93E1B57ED17D59434D5602AF8E2F3C4A9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct ValueCollection_t9B3D82D45C4D06438F35204E9F3461CA8FA8B4AA  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t9B3D82D45C4D06438F35204E9F3461CA8FA8B4AA, ___dictionary_0)); }
	inline Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30  : public RuntimeObject
{
public:

public:
};


// Meta.Conduit.ConduitDispatcher
struct ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77  : public RuntimeObject
{
public:
	// Meta.Conduit.Manifest Meta.Conduit.ConduitDispatcher::<Manifest>k__BackingField
	Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * ___U3CManifestU3Ek__BackingField_0;
	// Meta.Conduit.IManifestLoader Meta.Conduit.ConduitDispatcher::_manifestLoader
	RuntimeObject* ____manifestLoader_1;
	// Meta.Conduit.IInstanceResolver Meta.Conduit.ConduitDispatcher::_instanceResolver
	RuntimeObject* ____instanceResolver_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.Conduit.ConduitDispatcher::_parameterToRoleMap
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ____parameterToRoleMap_3;
	// System.Collections.Generic.HashSet`1<System.String> Meta.Conduit.ConduitDispatcher::_ignoredActionIds
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ____ignoredActionIds_4;

public:
	inline static int32_t get_offset_of_U3CManifestU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77, ___U3CManifestU3Ek__BackingField_0)); }
	inline Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * get_U3CManifestU3Ek__BackingField_0() const { return ___U3CManifestU3Ek__BackingField_0; }
	inline Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 ** get_address_of_U3CManifestU3Ek__BackingField_0() { return &___U3CManifestU3Ek__BackingField_0; }
	inline void set_U3CManifestU3Ek__BackingField_0(Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * value)
	{
		___U3CManifestU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CManifestU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of__manifestLoader_1() { return static_cast<int32_t>(offsetof(ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77, ____manifestLoader_1)); }
	inline RuntimeObject* get__manifestLoader_1() const { return ____manifestLoader_1; }
	inline RuntimeObject** get_address_of__manifestLoader_1() { return &____manifestLoader_1; }
	inline void set__manifestLoader_1(RuntimeObject* value)
	{
		____manifestLoader_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____manifestLoader_1), (void*)value);
	}

	inline static int32_t get_offset_of__instanceResolver_2() { return static_cast<int32_t>(offsetof(ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77, ____instanceResolver_2)); }
	inline RuntimeObject* get__instanceResolver_2() const { return ____instanceResolver_2; }
	inline RuntimeObject** get_address_of__instanceResolver_2() { return &____instanceResolver_2; }
	inline void set__instanceResolver_2(RuntimeObject* value)
	{
		____instanceResolver_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instanceResolver_2), (void*)value);
	}

	inline static int32_t get_offset_of__parameterToRoleMap_3() { return static_cast<int32_t>(offsetof(ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77, ____parameterToRoleMap_3)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get__parameterToRoleMap_3() const { return ____parameterToRoleMap_3; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of__parameterToRoleMap_3() { return &____parameterToRoleMap_3; }
	inline void set__parameterToRoleMap_3(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		____parameterToRoleMap_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parameterToRoleMap_3), (void*)value);
	}

	inline static int32_t get_offset_of__ignoredActionIds_4() { return static_cast<int32_t>(offsetof(ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77, ____ignoredActionIds_4)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get__ignoredActionIds_4() const { return ____ignoredActionIds_4; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of__ignoredActionIds_4() { return &____ignoredActionIds_4; }
	inline void set__ignoredActionIds_4(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		____ignoredActionIds_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ignoredActionIds_4), (void*)value);
	}
};


// Meta.Conduit.ConduitDispatcherFactory
struct ConduitDispatcherFactory_t24D4569ADB5094B39031F83D8279D35FB5325E5D  : public RuntimeObject
{
public:
	// Meta.Conduit.IInstanceResolver Meta.Conduit.ConduitDispatcherFactory::instanceResolver
	RuntimeObject* ___instanceResolver_1;
	// Meta.Conduit.IParameterProvider Meta.Conduit.ConduitDispatcherFactory::parameterProvider
	RuntimeObject* ___parameterProvider_2;

public:
	inline static int32_t get_offset_of_instanceResolver_1() { return static_cast<int32_t>(offsetof(ConduitDispatcherFactory_t24D4569ADB5094B39031F83D8279D35FB5325E5D, ___instanceResolver_1)); }
	inline RuntimeObject* get_instanceResolver_1() const { return ___instanceResolver_1; }
	inline RuntimeObject** get_address_of_instanceResolver_1() { return &___instanceResolver_1; }
	inline void set_instanceResolver_1(RuntimeObject* value)
	{
		___instanceResolver_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instanceResolver_1), (void*)value);
	}

	inline static int32_t get_offset_of_parameterProvider_2() { return static_cast<int32_t>(offsetof(ConduitDispatcherFactory_t24D4569ADB5094B39031F83D8279D35FB5325E5D, ___parameterProvider_2)); }
	inline RuntimeObject* get_parameterProvider_2() const { return ___parameterProvider_2; }
	inline RuntimeObject** get_address_of_parameterProvider_2() { return &___parameterProvider_2; }
	inline void set_parameterProvider_2(RuntimeObject* value)
	{
		___parameterProvider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parameterProvider_2), (void*)value);
	}
};


// Meta.Conduit.ConduitUtilities
struct ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964  : public RuntimeObject
{
public:

public:
};


// Meta.Conduit.InvocationContext
struct InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971  : public RuntimeObject
{
public:
	// System.Type Meta.Conduit.InvocationContext::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_0;
	// System.Reflection.MethodInfo Meta.Conduit.InvocationContext::<MethodInfo>k__BackingField
	MethodInfo_t * ___U3CMethodInfoU3Ek__BackingField_1;
	// System.Single Meta.Conduit.InvocationContext::<MinConfidence>k__BackingField
	float ___U3CMinConfidenceU3Ek__BackingField_2;
	// System.Single Meta.Conduit.InvocationContext::<MaxConfidence>k__BackingField
	float ___U3CMaxConfidenceU3Ek__BackingField_3;
	// System.Boolean Meta.Conduit.InvocationContext::<ValidatePartial>k__BackingField
	bool ___U3CValidatePartialU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.Conduit.InvocationContext::<ParameterMap>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CParameterMapU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971, ___U3CTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_0() const { return ___U3CTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_0() { return &___U3CTypeU3Ek__BackingField_0; }
	inline void set_U3CTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMethodInfoU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971, ___U3CMethodInfoU3Ek__BackingField_1)); }
	inline MethodInfo_t * get_U3CMethodInfoU3Ek__BackingField_1() const { return ___U3CMethodInfoU3Ek__BackingField_1; }
	inline MethodInfo_t ** get_address_of_U3CMethodInfoU3Ek__BackingField_1() { return &___U3CMethodInfoU3Ek__BackingField_1; }
	inline void set_U3CMethodInfoU3Ek__BackingField_1(MethodInfo_t * value)
	{
		___U3CMethodInfoU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMethodInfoU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMinConfidenceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971, ___U3CMinConfidenceU3Ek__BackingField_2)); }
	inline float get_U3CMinConfidenceU3Ek__BackingField_2() const { return ___U3CMinConfidenceU3Ek__BackingField_2; }
	inline float* get_address_of_U3CMinConfidenceU3Ek__BackingField_2() { return &___U3CMinConfidenceU3Ek__BackingField_2; }
	inline void set_U3CMinConfidenceU3Ek__BackingField_2(float value)
	{
		___U3CMinConfidenceU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CMaxConfidenceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971, ___U3CMaxConfidenceU3Ek__BackingField_3)); }
	inline float get_U3CMaxConfidenceU3Ek__BackingField_3() const { return ___U3CMaxConfidenceU3Ek__BackingField_3; }
	inline float* get_address_of_U3CMaxConfidenceU3Ek__BackingField_3() { return &___U3CMaxConfidenceU3Ek__BackingField_3; }
	inline void set_U3CMaxConfidenceU3Ek__BackingField_3(float value)
	{
		___U3CMaxConfidenceU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CValidatePartialU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971, ___U3CValidatePartialU3Ek__BackingField_4)); }
	inline bool get_U3CValidatePartialU3Ek__BackingField_4() const { return ___U3CValidatePartialU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CValidatePartialU3Ek__BackingField_4() { return &___U3CValidatePartialU3Ek__BackingField_4; }
	inline void set_U3CValidatePartialU3Ek__BackingField_4(bool value)
	{
		___U3CValidatePartialU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CParameterMapU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971, ___U3CParameterMapU3Ek__BackingField_5)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CParameterMapU3Ek__BackingField_5() const { return ___U3CParameterMapU3Ek__BackingField_5; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CParameterMapU3Ek__BackingField_5() { return &___U3CParameterMapU3Ek__BackingField_5; }
	inline void set_U3CParameterMapU3Ek__BackingField_5(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CParameterMapU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParameterMapU3Ek__BackingField_5), (void*)value);
	}
};


// Meta.WitAi.Json.JsonConverter
struct JsonConverter_t190B6A25CC7F4B027121414C24452DF540968C7F  : public RuntimeObject
{
public:
	// System.Boolean Meta.WitAi.Json.JsonConverter::<CanRead>k__BackingField
	bool ___U3CCanReadU3Ek__BackingField_0;
	// System.Boolean Meta.WitAi.Json.JsonConverter::<CanWrite>k__BackingField
	bool ___U3CCanWriteU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CCanReadU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(JsonConverter_t190B6A25CC7F4B027121414C24452DF540968C7F, ___U3CCanReadU3Ek__BackingField_0)); }
	inline bool get_U3CCanReadU3Ek__BackingField_0() const { return ___U3CCanReadU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CCanReadU3Ek__BackingField_0() { return &___U3CCanReadU3Ek__BackingField_0; }
	inline void set_U3CCanReadU3Ek__BackingField_0(bool value)
	{
		___U3CCanReadU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CCanWriteU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(JsonConverter_t190B6A25CC7F4B027121414C24452DF540968C7F, ___U3CCanWriteU3Ek__BackingField_1)); }
	inline bool get_U3CCanWriteU3Ek__BackingField_1() const { return ___U3CCanWriteU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CCanWriteU3Ek__BackingField_1() { return &___U3CCanWriteU3Ek__BackingField_1; }
	inline void set_U3CCanWriteU3Ek__BackingField_1(bool value)
	{
		___U3CCanWriteU3Ek__BackingField_1 = value;
	}
};


// Meta.Conduit.ListExtensions
struct ListExtensions_tBC400664E6EFF5DECED73204C60EC81DA2FEB658  : public RuntimeObject
{
public:

public:
};


// Meta.Conduit.Manifest
struct Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10  : public RuntimeObject
{
public:
	// System.String Meta.Conduit.Manifest::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_0;
	// System.String Meta.Conduit.Manifest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_1;
	// System.String Meta.Conduit.Manifest::<Domain>k__BackingField
	String_t* ___U3CDomainU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity> Meta.Conduit.Manifest::<Entities>k__BackingField
	List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855 * ___U3CEntitiesU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction> Meta.Conduit.Manifest::<Actions>k__BackingField
	List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A * ___U3CActionsU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>> Meta.Conduit.Manifest::_methodLookup
	Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A * ____methodLookup_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> Meta.Conduit.Manifest::<CustomEntityTypes>k__BackingField
	Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * ___U3CCustomEntityTypesU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10, ___U3CIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CIDU3Ek__BackingField_0() const { return ___U3CIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIDU3Ek__BackingField_0() { return &___U3CIDU3Ek__BackingField_0; }
	inline void set_U3CIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIDU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10, ___U3CVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CVersionU3Ek__BackingField_1() const { return ___U3CVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CVersionU3Ek__BackingField_1() { return &___U3CVersionU3Ek__BackingField_1; }
	inline void set_U3CVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVersionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDomainU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10, ___U3CDomainU3Ek__BackingField_2)); }
	inline String_t* get_U3CDomainU3Ek__BackingField_2() const { return ___U3CDomainU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CDomainU3Ek__BackingField_2() { return &___U3CDomainU3Ek__BackingField_2; }
	inline void set_U3CDomainU3Ek__BackingField_2(String_t* value)
	{
		___U3CDomainU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDomainU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEntitiesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10, ___U3CEntitiesU3Ek__BackingField_3)); }
	inline List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855 * get_U3CEntitiesU3Ek__BackingField_3() const { return ___U3CEntitiesU3Ek__BackingField_3; }
	inline List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855 ** get_address_of_U3CEntitiesU3Ek__BackingField_3() { return &___U3CEntitiesU3Ek__BackingField_3; }
	inline void set_U3CEntitiesU3Ek__BackingField_3(List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855 * value)
	{
		___U3CEntitiesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEntitiesU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CActionsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10, ___U3CActionsU3Ek__BackingField_4)); }
	inline List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A * get_U3CActionsU3Ek__BackingField_4() const { return ___U3CActionsU3Ek__BackingField_4; }
	inline List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A ** get_address_of_U3CActionsU3Ek__BackingField_4() { return &___U3CActionsU3Ek__BackingField_4; }
	inline void set_U3CActionsU3Ek__BackingField_4(List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A * value)
	{
		___U3CActionsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActionsU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of__methodLookup_5() { return static_cast<int32_t>(offsetof(Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10, ____methodLookup_5)); }
	inline Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A * get__methodLookup_5() const { return ____methodLookup_5; }
	inline Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A ** get_address_of__methodLookup_5() { return &____methodLookup_5; }
	inline void set__methodLookup_5(Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A * value)
	{
		____methodLookup_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____methodLookup_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCustomEntityTypesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10, ___U3CCustomEntityTypesU3Ek__BackingField_6)); }
	inline Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * get_U3CCustomEntityTypesU3Ek__BackingField_6() const { return ___U3CCustomEntityTypesU3Ek__BackingField_6; }
	inline Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 ** get_address_of_U3CCustomEntityTypesU3Ek__BackingField_6() { return &___U3CCustomEntityTypesU3Ek__BackingField_6; }
	inline void set_U3CCustomEntityTypesU3Ek__BackingField_6(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * value)
	{
		___U3CCustomEntityTypesU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCustomEntityTypesU3Ek__BackingField_6), (void*)value);
	}
};


// Meta.Conduit.ManifestAction
struct ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130  : public RuntimeObject
{
public:
	// System.String Meta.Conduit.ManifestAction::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_0;
	// System.String Meta.Conduit.ManifestAction::<Assembly>k__BackingField
	String_t* ___U3CAssemblyU3Ek__BackingField_1;
	// System.String Meta.Conduit.ManifestAction::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> Meta.Conduit.ManifestAction::<Parameters>k__BackingField
	List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * ___U3CParametersU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestAction::<Aliases>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CAliasesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130, ___U3CIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CIDU3Ek__BackingField_0() const { return ___U3CIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIDU3Ek__BackingField_0() { return &___U3CIDU3Ek__BackingField_0; }
	inline void set_U3CIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIDU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAssemblyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130, ___U3CAssemblyU3Ek__BackingField_1)); }
	inline String_t* get_U3CAssemblyU3Ek__BackingField_1() const { return ___U3CAssemblyU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAssemblyU3Ek__BackingField_1() { return &___U3CAssemblyU3Ek__BackingField_1; }
	inline void set_U3CAssemblyU3Ek__BackingField_1(String_t* value)
	{
		___U3CAssemblyU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAssemblyU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130, ___U3CNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CNameU3Ek__BackingField_2() const { return ___U3CNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_2() { return &___U3CNameU3Ek__BackingField_2; }
	inline void set_U3CNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CParametersU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130, ___U3CParametersU3Ek__BackingField_3)); }
	inline List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * get_U3CParametersU3Ek__BackingField_3() const { return ___U3CParametersU3Ek__BackingField_3; }
	inline List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 ** get_address_of_U3CParametersU3Ek__BackingField_3() { return &___U3CParametersU3Ek__BackingField_3; }
	inline void set_U3CParametersU3Ek__BackingField_3(List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * value)
	{
		___U3CParametersU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParametersU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAliasesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130, ___U3CAliasesU3Ek__BackingField_4)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CAliasesU3Ek__BackingField_4() const { return ___U3CAliasesU3Ek__BackingField_4; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CAliasesU3Ek__BackingField_4() { return &___U3CAliasesU3Ek__BackingField_4; }
	inline void set_U3CAliasesU3Ek__BackingField_4(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CAliasesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAliasesU3Ek__BackingField_4), (void*)value);
	}
};


// Meta.Conduit.ManifestEntity
struct ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4  : public RuntimeObject
{
public:
	// System.String Meta.Conduit.ManifestEntity::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_0;
	// System.String Meta.Conduit.ManifestEntity::<Namespace>k__BackingField
	String_t* ___U3CNamespaceU3Ek__BackingField_1;
	// System.String Meta.Conduit.ManifestEntity::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_2;
	// System.String Meta.Conduit.ManifestEntity::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<Meta.Conduit.WitKeyword> Meta.Conduit.ManifestEntity::<Values>k__BackingField
	List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 * ___U3CValuesU3Ek__BackingField_4;
	// System.String Meta.Conduit.ManifestEntity::<Assembly>k__BackingField
	String_t* ___U3CAssemblyU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4, ___U3CIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CIDU3Ek__BackingField_0() const { return ___U3CIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIDU3Ek__BackingField_0() { return &___U3CIDU3Ek__BackingField_0; }
	inline void set_U3CIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIDU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNamespaceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4, ___U3CNamespaceU3Ek__BackingField_1)); }
	inline String_t* get_U3CNamespaceU3Ek__BackingField_1() const { return ___U3CNamespaceU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNamespaceU3Ek__BackingField_1() { return &___U3CNamespaceU3Ek__BackingField_1; }
	inline void set_U3CNamespaceU3Ek__BackingField_1(String_t* value)
	{
		___U3CNamespaceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNamespaceU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4, ___U3CTypeU3Ek__BackingField_2)); }
	inline String_t* get_U3CTypeU3Ek__BackingField_2() const { return ___U3CTypeU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTypeU3Ek__BackingField_2() { return &___U3CTypeU3Ek__BackingField_2; }
	inline void set_U3CTypeU3Ek__BackingField_2(String_t* value)
	{
		___U3CTypeU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValuesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4, ___U3CValuesU3Ek__BackingField_4)); }
	inline List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 * get_U3CValuesU3Ek__BackingField_4() const { return ___U3CValuesU3Ek__BackingField_4; }
	inline List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 ** get_address_of_U3CValuesU3Ek__BackingField_4() { return &___U3CValuesU3Ek__BackingField_4; }
	inline void set_U3CValuesU3Ek__BackingField_4(List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 * value)
	{
		___U3CValuesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValuesU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAssemblyU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4, ___U3CAssemblyU3Ek__BackingField_5)); }
	inline String_t* get_U3CAssemblyU3Ek__BackingField_5() const { return ___U3CAssemblyU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CAssemblyU3Ek__BackingField_5() { return &___U3CAssemblyU3Ek__BackingField_5; }
	inline void set_U3CAssemblyU3Ek__BackingField_5(String_t* value)
	{
		___U3CAssemblyU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAssemblyU3Ek__BackingField_5), (void*)value);
	}
};


// Meta.Conduit.ManifestLoader
struct ManifestLoader_t685F0D1722130EE51F7064DCF379C08ED1DC64EF  : public RuntimeObject
{
public:

public:
};


// Meta.Conduit.ManifestParameter
struct ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D  : public RuntimeObject
{
public:
	// System.String Meta.Conduit.ManifestParameter::name
	String_t* ___name_0;
	// System.String Meta.Conduit.ManifestParameter::<InternalName>k__BackingField
	String_t* ___U3CInternalNameU3Ek__BackingField_1;
	// System.String Meta.Conduit.ManifestParameter::<QualifiedName>k__BackingField
	String_t* ___U3CQualifiedNameU3Ek__BackingField_2;
	// System.String Meta.Conduit.ManifestParameter::<TypeAssembly>k__BackingField
	String_t* ___U3CTypeAssemblyU3Ek__BackingField_3;
	// System.String Meta.Conduit.ManifestParameter::<QualifiedTypeName>k__BackingField
	String_t* ___U3CQualifiedTypeNameU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestParameter::<Aliases>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CAliasesU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestParameter::<Examples>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CExamplesU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInternalNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D, ___U3CInternalNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CInternalNameU3Ek__BackingField_1() const { return ___U3CInternalNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CInternalNameU3Ek__BackingField_1() { return &___U3CInternalNameU3Ek__BackingField_1; }
	inline void set_U3CInternalNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CInternalNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInternalNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CQualifiedNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D, ___U3CQualifiedNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CQualifiedNameU3Ek__BackingField_2() const { return ___U3CQualifiedNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CQualifiedNameU3Ek__BackingField_2() { return &___U3CQualifiedNameU3Ek__BackingField_2; }
	inline void set_U3CQualifiedNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CQualifiedNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CQualifiedNameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTypeAssemblyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D, ___U3CTypeAssemblyU3Ek__BackingField_3)); }
	inline String_t* get_U3CTypeAssemblyU3Ek__BackingField_3() const { return ___U3CTypeAssemblyU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CTypeAssemblyU3Ek__BackingField_3() { return &___U3CTypeAssemblyU3Ek__BackingField_3; }
	inline void set_U3CTypeAssemblyU3Ek__BackingField_3(String_t* value)
	{
		___U3CTypeAssemblyU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeAssemblyU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CQualifiedTypeNameU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D, ___U3CQualifiedTypeNameU3Ek__BackingField_4)); }
	inline String_t* get_U3CQualifiedTypeNameU3Ek__BackingField_4() const { return ___U3CQualifiedTypeNameU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CQualifiedTypeNameU3Ek__BackingField_4() { return &___U3CQualifiedTypeNameU3Ek__BackingField_4; }
	inline void set_U3CQualifiedTypeNameU3Ek__BackingField_4(String_t* value)
	{
		___U3CQualifiedTypeNameU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CQualifiedTypeNameU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAliasesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D, ___U3CAliasesU3Ek__BackingField_5)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CAliasesU3Ek__BackingField_5() const { return ___U3CAliasesU3Ek__BackingField_5; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CAliasesU3Ek__BackingField_5() { return &___U3CAliasesU3Ek__BackingField_5; }
	inline void set_U3CAliasesU3Ek__BackingField_5(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CAliasesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAliasesU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExamplesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D, ___U3CExamplesU3Ek__BackingField_6)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CExamplesU3Ek__BackingField_6() const { return ___U3CExamplesU3Ek__BackingField_6; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CExamplesU3Ek__BackingField_6() { return &___U3CExamplesU3Ek__BackingField_6; }
	inline void set_U3CExamplesU3Ek__BackingField_6(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CExamplesU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExamplesU3Ek__BackingField_6), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Meta.Conduit.ParameterProvider
struct ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Meta.Conduit.ParameterProvider::ActualParameters
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___ActualParameters_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.Conduit.ParameterProvider::_parameterToRoleMap
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ____parameterToRoleMap_3;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.String>> Meta.Conduit.ParameterProvider::_parametersOfType
	Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E * ____parametersOfType_4;
	// System.Collections.Generic.Dictionary`2<System.Type,System.String> Meta.Conduit.ParameterProvider::_specializedParameters
	Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * ____specializedParameters_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> Meta.Conduit.ParameterProvider::_customTypes
	Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * ____customTypes_7;

public:
	inline static int32_t get_offset_of_ActualParameters_2() { return static_cast<int32_t>(offsetof(ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26, ___ActualParameters_2)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_ActualParameters_2() const { return ___ActualParameters_2; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_ActualParameters_2() { return &___ActualParameters_2; }
	inline void set_ActualParameters_2(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___ActualParameters_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActualParameters_2), (void*)value);
	}

	inline static int32_t get_offset_of__parameterToRoleMap_3() { return static_cast<int32_t>(offsetof(ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26, ____parameterToRoleMap_3)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get__parameterToRoleMap_3() const { return ____parameterToRoleMap_3; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of__parameterToRoleMap_3() { return &____parameterToRoleMap_3; }
	inline void set__parameterToRoleMap_3(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		____parameterToRoleMap_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parameterToRoleMap_3), (void*)value);
	}

	inline static int32_t get_offset_of__parametersOfType_4() { return static_cast<int32_t>(offsetof(ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26, ____parametersOfType_4)); }
	inline Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E * get__parametersOfType_4() const { return ____parametersOfType_4; }
	inline Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E ** get_address_of__parametersOfType_4() { return &____parametersOfType_4; }
	inline void set__parametersOfType_4(Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E * value)
	{
		____parametersOfType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parametersOfType_4), (void*)value);
	}

	inline static int32_t get_offset_of__specializedParameters_5() { return static_cast<int32_t>(offsetof(ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26, ____specializedParameters_5)); }
	inline Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * get__specializedParameters_5() const { return ____specializedParameters_5; }
	inline Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 ** get_address_of__specializedParameters_5() { return &____specializedParameters_5; }
	inline void set__specializedParameters_5(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * value)
	{
		____specializedParameters_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____specializedParameters_5), (void*)value);
	}

	inline static int32_t get_offset_of__customTypes_7() { return static_cast<int32_t>(offsetof(ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26, ____customTypes_7)); }
	inline Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * get__customTypes_7() const { return ____customTypes_7; }
	inline Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 ** get_address_of__customTypes_7() { return &____customTypes_7; }
	inline void set__customTypes_7(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * value)
	{
		____customTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____customTypes_7), (void*)value);
	}
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6  : public RuntimeObject
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

// Meta.Conduit.WitKeyword
struct WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0  : public RuntimeObject
{
public:
	// System.String Meta.Conduit.WitKeyword::keyword
	String_t* ___keyword_0;
	// System.Collections.Generic.HashSet`1<System.String> Meta.Conduit.WitKeyword::synonyms
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___synonyms_1;

public:
	inline static int32_t get_offset_of_keyword_0() { return static_cast<int32_t>(offsetof(WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0, ___keyword_0)); }
	inline String_t* get_keyword_0() const { return ___keyword_0; }
	inline String_t** get_address_of_keyword_0() { return &___keyword_0; }
	inline void set_keyword_0(String_t* value)
	{
		___keyword_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyword_0), (void*)value);
	}

	inline static int32_t get_offset_of_synonyms_1() { return static_cast<int32_t>(offsetof(WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0, ___synonyms_1)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_synonyms_1() const { return ___synonyms_1; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_synonyms_1() { return &___synonyms_1; }
	inline void set_synonyms_1(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___synonyms_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___synonyms_1), (void*)value);
	}
};


// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537  : public RuntimeObject
{
public:

public:
};


// Meta.Conduit.ConduitDispatcher/InvocationContextFilter
struct InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.ConduitDispatcher/InvocationContextFilter::_actionContexts
	List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * ____actionContexts_0;
	// Meta.Conduit.IParameterProvider Meta.Conduit.ConduitDispatcher/InvocationContextFilter::_parameterProvider
	RuntimeObject* ____parameterProvider_1;
	// System.Boolean Meta.Conduit.ConduitDispatcher/InvocationContextFilter::_relaxed
	bool ____relaxed_2;

public:
	inline static int32_t get_offset_of__actionContexts_0() { return static_cast<int32_t>(offsetof(InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653, ____actionContexts_0)); }
	inline List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * get__actionContexts_0() const { return ____actionContexts_0; }
	inline List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 ** get_address_of__actionContexts_0() { return &____actionContexts_0; }
	inline void set__actionContexts_0(List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * value)
	{
		____actionContexts_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____actionContexts_0), (void*)value);
	}

	inline static int32_t get_offset_of__parameterProvider_1() { return static_cast<int32_t>(offsetof(InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653, ____parameterProvider_1)); }
	inline RuntimeObject* get__parameterProvider_1() const { return ____parameterProvider_1; }
	inline RuntimeObject** get_address_of__parameterProvider_1() { return &____parameterProvider_1; }
	inline void set__parameterProvider_1(RuntimeObject* value)
	{
		____parameterProvider_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parameterProvider_1), (void*)value);
	}

	inline static int32_t get_offset_of__relaxed_2() { return static_cast<int32_t>(offsetof(InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653, ____relaxed_2)); }
	inline bool get__relaxed_2() const { return ____relaxed_2; }
	inline bool* get_address_of__relaxed_2() { return &____relaxed_2; }
	inline void set__relaxed_2(bool value)
	{
		____relaxed_2 = value;
	}
};


// Meta.Conduit.Manifest/<>c
struct U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3  : public RuntimeObject
{
public:

public:
};


// Meta.Conduit.ParameterProvider/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_tD992F214B82EB3D359157B4A57D1FD567534695B  : public RuntimeObject
{
public:
	// Meta.Conduit.ParameterProvider Meta.Conduit.ParameterProvider/<>c__DisplayClass21_0::<>4__this
	ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * ___U3CU3E4__this_0;
	// System.String Meta.Conduit.ParameterProvider/<>c__DisplayClass21_0::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_tD992F214B82EB3D359157B4A57D1FD567534695B, ___U3CU3E4__this_0)); }
	inline ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_tD992F214B82EB3D359157B4A57D1FD567534695B, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t251974C43BC9D4A07E86E1FF7970519EB83921E0  : public RuntimeObject
{
public:
	// Meta.Conduit.ConduitDispatcher/InvocationContextFilter Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass4_0::<>4__this
	InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653 * ___U3CU3E4__this_0;
	// System.Single Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass4_0::confidence
	float ___confidence_1;
	// System.Boolean Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass4_0::partial
	bool ___partial_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t251974C43BC9D4A07E86E1FF7970519EB83921E0, ___U3CU3E4__this_0)); }
	inline InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_confidence_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t251974C43BC9D4A07E86E1FF7970519EB83921E0, ___confidence_1)); }
	inline float get_confidence_1() const { return ___confidence_1; }
	inline float* get_address_of_confidence_1() { return &___confidence_1; }
	inline void set_confidence_1(float value)
	{
		___confidence_1 = value;
	}

	inline static int32_t get_offset_of_partial_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t251974C43BC9D4A07E86E1FF7970519EB83921E0, ___partial_2)); }
	inline bool get_partial_2() const { return ___partial_2; }
	inline bool* get_address_of_partial_2() { return &___partial_2; }
	inline void set_partial_2(bool value)
	{
		___partial_2 = value;
	}
};


// Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t0A464F4B91F35D8667CDC0F09A9E1C7C842EF246  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.String> Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass5_0::exactMatches
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___exactMatches_0;
	// System.Func`2<System.String,System.Boolean> Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass5_0::<>9__0
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__0_1;

public:
	inline static int32_t get_offset_of_exactMatches_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t0A464F4B91F35D8667CDC0F09A9E1C7C842EF246, ___exactMatches_0)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_exactMatches_0() const { return ___exactMatches_0; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_exactMatches_0() { return &___exactMatches_0; }
	inline void set_exactMatches_0(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___exactMatches_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exactMatches_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t0A464F4B91F35D8667CDC0F09A9E1C7C842EF246, ___U3CU3E9__0_1)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__0_1() const { return ___U3CU3E9__0_1; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__0_1() { return &___U3CU3E9__0_1; }
	inline void set_U3CU3E9__0_1(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>
struct Enumerator_t7DB259F5C9FC9242AEC9B44AA1FA051D1E91E200 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7DB259F5C9FC9242AEC9B44AA1FA051D1E91E200, ___list_0)); }
	inline List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * get_list_0() const { return ___list_0; }
	inline List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7DB259F5C9FC9242AEC9B44AA1FA051D1E91E200, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7DB259F5C9FC9242AEC9B44AA1FA051D1E91E200, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7DB259F5C9FC9242AEC9B44AA1FA051D1E91E200, ___current_3)); }
	inline InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * get_current_3() const { return ___current_3; }
	inline InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>
struct Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1, ___list_0)); }
	inline List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A * get_list_0() const { return ___list_0; }
	inline List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1, ___current_3)); }
	inline ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * get_current_3() const { return ___current_3; }
	inline ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestEntity>
struct Enumerator_t46048D80EDCB748CD5CCC0077F3EB883855AA012 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t46048D80EDCB748CD5CCC0077F3EB883855AA012, ___list_0)); }
	inline List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855 * get_list_0() const { return ___list_0; }
	inline List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t46048D80EDCB748CD5CCC0077F3EB883855AA012, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t46048D80EDCB748CD5CCC0077F3EB883855AA012, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t46048D80EDCB748CD5CCC0077F3EB883855AA012, ___current_3)); }
	inline ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * get_current_3() const { return ___current_3; }
	inline ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>
struct Enumerator_tED955948DC62CBF2AB8A0BB4E373B30619B250D3 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tED955948DC62CBF2AB8A0BB4E373B30619B250D3, ___list_0)); }
	inline List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * get_list_0() const { return ___list_0; }
	inline List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tED955948DC62CBF2AB8A0BB4E373B30619B250D3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tED955948DC62CBF2AB8A0BB4E373B30619B250D3, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tED955948DC62CBF2AB8A0BB4E373B30619B250D3, ___current_3)); }
	inline ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * get_current_3() const { return ___current_3; }
	inline ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
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


// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___list_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_list_0() const { return ___list_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	RuntimeObject * ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___currentKey_3)); }
	inline RuntimeObject * get_currentKey_3() const { return ___currentKey_3; }
	inline RuntimeObject ** get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(RuntimeObject * value)
	{
		___currentKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentKey_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>
struct Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	String_t* ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF, ___dictionary_0)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF, ___currentKey_3)); }
	inline String_t* get_currentKey_3() const { return ___currentKey_3; }
	inline String_t** get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(String_t* value)
	{
		___currentKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentKey_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};


// Meta.Conduit.ConduitActionAttribute
struct ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Meta.Conduit.ConduitActionAttribute::<Intent>k__BackingField
	String_t* ___U3CIntentU3Ek__BackingField_0;
	// System.Single Meta.Conduit.ConduitActionAttribute::<MinConfidence>k__BackingField
	float ___U3CMinConfidenceU3Ek__BackingField_1;
	// System.Single Meta.Conduit.ConduitActionAttribute::<MaxConfidence>k__BackingField
	float ___U3CMaxConfidenceU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitActionAttribute::<Aliases>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CAliasesU3Ek__BackingField_5;
	// System.Boolean Meta.Conduit.ConduitActionAttribute::<ValidatePartial>k__BackingField
	bool ___U3CValidatePartialU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CIntentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B, ___U3CIntentU3Ek__BackingField_0)); }
	inline String_t* get_U3CIntentU3Ek__BackingField_0() const { return ___U3CIntentU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIntentU3Ek__BackingField_0() { return &___U3CIntentU3Ek__BackingField_0; }
	inline void set_U3CIntentU3Ek__BackingField_0(String_t* value)
	{
		___U3CIntentU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIntentU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMinConfidenceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B, ___U3CMinConfidenceU3Ek__BackingField_1)); }
	inline float get_U3CMinConfidenceU3Ek__BackingField_1() const { return ___U3CMinConfidenceU3Ek__BackingField_1; }
	inline float* get_address_of_U3CMinConfidenceU3Ek__BackingField_1() { return &___U3CMinConfidenceU3Ek__BackingField_1; }
	inline void set_U3CMinConfidenceU3Ek__BackingField_1(float value)
	{
		___U3CMinConfidenceU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMaxConfidenceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B, ___U3CMaxConfidenceU3Ek__BackingField_3)); }
	inline float get_U3CMaxConfidenceU3Ek__BackingField_3() const { return ___U3CMaxConfidenceU3Ek__BackingField_3; }
	inline float* get_address_of_U3CMaxConfidenceU3Ek__BackingField_3() { return &___U3CMaxConfidenceU3Ek__BackingField_3; }
	inline void set_U3CMaxConfidenceU3Ek__BackingField_3(float value)
	{
		___U3CMaxConfidenceU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CAliasesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B, ___U3CAliasesU3Ek__BackingField_5)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CAliasesU3Ek__BackingField_5() const { return ___U3CAliasesU3Ek__BackingField_5; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CAliasesU3Ek__BackingField_5() { return &___U3CAliasesU3Ek__BackingField_5; }
	inline void set_U3CAliasesU3Ek__BackingField_5(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CAliasesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAliasesU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValidatePartialU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B, ___U3CValidatePartialU3Ek__BackingField_6)); }
	inline bool get_U3CValidatePartialU3Ek__BackingField_6() const { return ___U3CValidatePartialU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CValidatePartialU3Ek__BackingField_6() { return &___U3CValidatePartialU3Ek__BackingField_6; }
	inline void set_U3CValidatePartialU3Ek__BackingField_6(bool value)
	{
		___U3CValidatePartialU3Ek__BackingField_6 = value;
	}
};


// Meta.Conduit.ConduitAssemblyAttribute
struct ConduitAssemblyAttribute_t6626115E4FCA563208711AA592066A808C55B60E  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Meta.Conduit.ConduitEntityAttribute
struct ConduitEntityAttribute_tF0B59DB09925F25FC1D54C97478E166A154A7CC9  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Meta.Conduit.ConduitEntityAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String Meta.Conduit.ConduitEntityAttribute::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConduitEntityAttribute_tF0B59DB09925F25FC1D54C97478E166A154A7CC9, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIDU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ConduitEntityAttribute_tF0B59DB09925F25FC1D54C97478E166A154A7CC9, ___U3CIDU3Ek__BackingField_1)); }
	inline String_t* get_U3CIDU3Ek__BackingField_1() const { return ___U3CIDU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CIDU3Ek__BackingField_1() { return &___U3CIDU3Ek__BackingField_1; }
	inline void set_U3CIDU3Ek__BackingField_1(String_t* value)
	{
		___U3CIDU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIDU3Ek__BackingField_1), (void*)value);
	}
};


// Meta.Conduit.ConduitParameterAttribute
struct ConduitParameterAttribute_tC01224F078C01F1F35E12BFF18B2ED4D74AC4243  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitParameterAttribute::<Examples>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CExamplesU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitParameterAttribute::<Aliases>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CAliasesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CExamplesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConduitParameterAttribute_tC01224F078C01F1F35E12BFF18B2ED4D74AC4243, ___U3CExamplesU3Ek__BackingField_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CExamplesU3Ek__BackingField_0() const { return ___U3CExamplesU3Ek__BackingField_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CExamplesU3Ek__BackingField_0() { return &___U3CExamplesU3Ek__BackingField_0; }
	inline void set_U3CExamplesU3Ek__BackingField_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CExamplesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExamplesU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAliasesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ConduitParameterAttribute_tC01224F078C01F1F35E12BFF18B2ED4D74AC4243, ___U3CAliasesU3Ek__BackingField_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CAliasesU3Ek__BackingField_1() const { return ___U3CAliasesU3Ek__BackingField_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CAliasesU3Ek__BackingField_1() { return &___U3CAliasesU3Ek__BackingField_1; }
	inline void set_U3CAliasesU3Ek__BackingField_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CAliasesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAliasesU3Ek__BackingField_1), (void*)value);
	}
};


// Meta.Conduit.ConduitParameterValue
struct ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA 
{
public:
	// System.Object Meta.Conduit.ConduitParameterValue::Value
	RuntimeObject * ___Value_0;
	// System.Type Meta.Conduit.ConduitParameterValue::DataType
	Type_t * ___DataType_1;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA, ___Value_0)); }
	inline RuntimeObject * get_Value_0() const { return ___Value_0; }
	inline RuntimeObject ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(RuntimeObject * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}

	inline static int32_t get_offset_of_DataType_1() { return static_cast<int32_t>(offsetof(ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA, ___DataType_1)); }
	inline Type_t * get_DataType_1() const { return ___DataType_1; }
	inline Type_t ** get_address_of_DataType_1() { return &___DataType_1; }
	inline void set_DataType_1(Type_t * value)
	{
		___DataType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DataType_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Meta.Conduit.ConduitParameterValue
struct ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA_marshaled_pinvoke
{
	Il2CppIUnknown* ___Value_0;
	Type_t * ___DataType_1;
};
// Native definition for COM marshalling of Meta.Conduit.ConduitParameterValue
struct ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA_marshaled_com
{
	Il2CppIUnknown* ___Value_0;
	Type_t * ___DataType_1;
};

// Meta.Conduit.ConduitValueAttribute
struct ConduitValueAttribute_tAF81995C3BC444F3FD0C173F3D12A935AE0D2D63  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String[] Meta.Conduit.ConduitValueAttribute::<Aliases>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CAliasesU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CAliasesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConduitValueAttribute_tAF81995C3BC444F3FD0C173F3D12A935AE0D2D63, ___U3CAliasesU3Ek__BackingField_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CAliasesU3Ek__BackingField_0() const { return ___U3CAliasesU3Ek__BackingField_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CAliasesU3Ek__BackingField_0() { return &___U3CAliasesU3Ek__BackingField_0; }
	inline void set_U3CAliasesU3Ek__BackingField_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CAliasesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAliasesU3Ek__BackingField_0), (void*)value);
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


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.ParameterModifier
struct ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____byRef_0;

public:
	inline static int32_t get_offset_of__byRef_0() { return static_cast<int32_t>(offsetof(ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA, ____byRef_0)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__byRef_0() const { return ____byRef_0; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__byRef_0() { return &____byRef_0; }
	inline void set__byRef_0(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		____byRef_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____byRef_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshaled_com
{
	int32_t* ____byRef_0;
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


// Meta.WitAi.Data.Info.WitEntityInfo
struct WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1 
{
public:
	// System.String Meta.WitAi.Data.Info.WitEntityInfo::name
	String_t* ___name_0;
	// System.String Meta.WitAi.Data.Info.WitEntityInfo::id
	String_t* ___id_1;
	// System.String[] Meta.WitAi.Data.Info.WitEntityInfo::lookups
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___lookups_2;
	// Meta.WitAi.Data.Info.WitEntityRoleInfo[] Meta.WitAi.Data.Info.WitEntityInfo::roles
	WitEntityRoleInfoU5BU5D_t82D8B396CB4C924317D57DBBAA4B6B5F90FB8168* ___roles_3;
	// Meta.WitAi.Data.Info.WitEntityKeywordInfo[] Meta.WitAi.Data.Info.WitEntityInfo::keywords
	WitEntityKeywordInfoU5BU5D_tD857B15DB3BB229C42383A8F639660F8898A61C8* ___keywords_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_1), (void*)value);
	}

	inline static int32_t get_offset_of_lookups_2() { return static_cast<int32_t>(offsetof(WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1, ___lookups_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_lookups_2() const { return ___lookups_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_lookups_2() { return &___lookups_2; }
	inline void set_lookups_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___lookups_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lookups_2), (void*)value);
	}

	inline static int32_t get_offset_of_roles_3() { return static_cast<int32_t>(offsetof(WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1, ___roles_3)); }
	inline WitEntityRoleInfoU5BU5D_t82D8B396CB4C924317D57DBBAA4B6B5F90FB8168* get_roles_3() const { return ___roles_3; }
	inline WitEntityRoleInfoU5BU5D_t82D8B396CB4C924317D57DBBAA4B6B5F90FB8168** get_address_of_roles_3() { return &___roles_3; }
	inline void set_roles_3(WitEntityRoleInfoU5BU5D_t82D8B396CB4C924317D57DBBAA4B6B5F90FB8168* value)
	{
		___roles_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roles_3), (void*)value);
	}

	inline static int32_t get_offset_of_keywords_4() { return static_cast<int32_t>(offsetof(WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1, ___keywords_4)); }
	inline WitEntityKeywordInfoU5BU5D_tD857B15DB3BB229C42383A8F639660F8898A61C8* get_keywords_4() const { return ___keywords_4; }
	inline WitEntityKeywordInfoU5BU5D_tD857B15DB3BB229C42383A8F639660F8898A61C8** get_address_of_keywords_4() { return &___keywords_4; }
	inline void set_keywords_4(WitEntityKeywordInfoU5BU5D_tD857B15DB3BB229C42383A8F639660F8898A61C8* value)
	{
		___keywords_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keywords_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Meta.WitAi.Data.Info.WitEntityInfo
struct WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1_marshaled_pinvoke
{
	char* ___name_0;
	char* ___id_1;
	char** ___lookups_2;
	WitEntityRoleInfo_t0C123437FE502CD57612AC3D7A8CAA42795DA319_marshaled_pinvoke* ___roles_3;
	WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12_marshaled_pinvoke* ___keywords_4;
};
// Native definition for COM marshalling of Meta.WitAi.Data.Info.WitEntityInfo
struct WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___id_1;
	Il2CppChar** ___lookups_2;
	WitEntityRoleInfo_t0C123437FE502CD57612AC3D7A8CAA42795DA319_marshaled_com* ___roles_3;
	WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12_marshaled_com* ___keywords_4;
};

// Meta.WitAi.Data.Info.WitEntityKeywordInfo
struct WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12 
{
public:
	// System.String Meta.WitAi.Data.Info.WitEntityKeywordInfo::keyword
	String_t* ___keyword_0;
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.Data.Info.WitEntityKeywordInfo::synonyms
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___synonyms_1;

public:
	inline static int32_t get_offset_of_keyword_0() { return static_cast<int32_t>(offsetof(WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12, ___keyword_0)); }
	inline String_t* get_keyword_0() const { return ___keyword_0; }
	inline String_t** get_address_of_keyword_0() { return &___keyword_0; }
	inline void set_keyword_0(String_t* value)
	{
		___keyword_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyword_0), (void*)value);
	}

	inline static int32_t get_offset_of_synonyms_1() { return static_cast<int32_t>(offsetof(WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12, ___synonyms_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_synonyms_1() const { return ___synonyms_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_synonyms_1() { return &___synonyms_1; }
	inline void set_synonyms_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___synonyms_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___synonyms_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Meta.WitAi.Data.Info.WitEntityKeywordInfo
struct WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12_marshaled_pinvoke
{
	char* ___keyword_0;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___synonyms_1;
};
// Native definition for COM marshalling of Meta.WitAi.Data.Info.WitEntityKeywordInfo
struct WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12_marshaled_com
{
	Il2CppChar* ___keyword_0;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___synonyms_1;
};

// Meta.WitAi.Json.WitResponseClass
struct WitResponseClass_t92850FD6953F4E6C1C2F7847D204A202ABAC1234  : public WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseClass::m_Dict
	Dictionary_2_tECC5A88E0D3C00E18225DF9DA8684F00E45E8BCB * ___m_Dict_0;

public:
	inline static int32_t get_offset_of_m_Dict_0() { return static_cast<int32_t>(offsetof(WitResponseClass_t92850FD6953F4E6C1C2F7847D204A202ABAC1234, ___m_Dict_0)); }
	inline Dictionary_2_tECC5A88E0D3C00E18225DF9DA8684F00E45E8BCB * get_m_Dict_0() const { return ___m_Dict_0; }
	inline Dictionary_2_tECC5A88E0D3C00E18225DF9DA8684F00E45E8BCB ** get_address_of_m_Dict_0() { return &___m_Dict_0; }
	inline void set_m_Dict_0(Dictionary_2_tECC5A88E0D3C00E18225DF9DA8684F00E45E8BCB * value)
	{
		___m_Dict_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dict_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
struct Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15, ___dictionary_0)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15, ___current_3)); }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___dictionary_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___current_3)); }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,Meta.Conduit.ConduitParameterValue>
struct KeyValuePair_2_t5965AA04DD9F00515A43502CCF9D43CF3B0D4359 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t5965AA04DD9F00515A43502CCF9D43CF3B0D4359, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t5965AA04DD9F00515A43502CCF9D43CF3B0D4359, ___value_1)); }
	inline ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA  get_value_1() const { return ___value_1; }
	inline ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA  value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->___Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->___DataType_1), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,Meta.Conduit.ConduitParameterValue>
struct KeyValuePair_2_t93E81114395271F14B1553A39149B212EAFCDC8E 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t93E81114395271F14B1553A39149B212EAFCDC8E, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t93E81114395271F14B1553A39149B212EAFCDC8E, ___value_1)); }
	inline ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA  get_value_1() const { return ___value_1; }
	inline ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA  value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->___Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->___DataType_1), (void*)NULL);
		#endif
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.CallingConventions
struct CallingConventions_t9EE04367ABED67A03DB2971F80F83D3EBA9C04E0 
{
public:
	// System.Int32 System.Reflection.CallingConventions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallingConventions_t9EE04367ABED67A03DB2971F80F83D3EBA9C04E0, ___value___2)); }
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
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

// System.Reflection.ParameterAttributes
struct ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Text.RegularExpressions.RegexOptions
struct RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
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


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Meta.Conduit.ConduitParameterValue>
struct Enumerator_t0C51EEB32B082AE195B7DF2761D5E6CE2D401B96 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t4C2203DE319A24CFCBAA82219B58724DBFD9E155 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t5965AA04DD9F00515A43502CCF9D43CF3B0D4359  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t0C51EEB32B082AE195B7DF2761D5E6CE2D401B96, ___dictionary_0)); }
	inline Dictionary_2_t4C2203DE319A24CFCBAA82219B58724DBFD9E155 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t4C2203DE319A24CFCBAA82219B58724DBFD9E155 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t4C2203DE319A24CFCBAA82219B58724DBFD9E155 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t0C51EEB32B082AE195B7DF2761D5E6CE2D401B96, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t0C51EEB32B082AE195B7DF2761D5E6CE2D401B96, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t0C51EEB32B082AE195B7DF2761D5E6CE2D401B96, ___current_3)); }
	inline KeyValuePair_2_t5965AA04DD9F00515A43502CCF9D43CF3B0D4359  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t5965AA04DD9F00515A43502CCF9D43CF3B0D4359 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t5965AA04DD9F00515A43502CCF9D43CF3B0D4359  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___value_1))->___Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___value_1))->___DataType_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t0C51EEB32B082AE195B7DF2761D5E6CE2D401B96, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Meta.Conduit.ConduitParameterValue>
struct Enumerator_t185B41F12B8E86468B067CF0095A2AEE51AC178B 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t93E81114395271F14B1553A39149B212EAFCDC8E  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t185B41F12B8E86468B067CF0095A2AEE51AC178B, ___dictionary_0)); }
	inline Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t185B41F12B8E86468B067CF0095A2AEE51AC178B, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t185B41F12B8E86468B067CF0095A2AEE51AC178B, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t185B41F12B8E86468B067CF0095A2AEE51AC178B, ___current_3)); }
	inline KeyValuePair_2_t93E81114395271F14B1553A39149B212EAFCDC8E  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t93E81114395271F14B1553A39149B212EAFCDC8E * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t93E81114395271F14B1553A39149B212EAFCDC8E  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___value_1))->___Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___value_1))->___DataType_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t185B41F12B8E86468B067CF0095A2AEE51AC178B, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
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

// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};

// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_0;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * ___factory_1;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_2;
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___internalMatchTimeout_5;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___caps_9;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___capnames_10;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___capslist_11;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_12;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::runnerref
	ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * ___runnerref_13;
	// System.Text.RegularExpressions.SharedReference System.Text.RegularExpressions.Regex::replref
	SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * ___replref_14;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::code
	RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * ___code_15;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_16;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pattern_0), (void*)value);
	}

	inline static int32_t get_offset_of_factory_1() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___factory_1)); }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * get_factory_1() const { return ___factory_1; }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 ** get_address_of_factory_1() { return &___factory_1; }
	inline void set_factory_1(RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * value)
	{
		___factory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_1), (void*)value);
	}

	inline static int32_t get_offset_of_roptions_2() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___roptions_2)); }
	inline int32_t get_roptions_2() const { return ___roptions_2; }
	inline int32_t* get_address_of_roptions_2() { return &___roptions_2; }
	inline void set_roptions_2(int32_t value)
	{
		___roptions_2 = value;
	}

	inline static int32_t get_offset_of_internalMatchTimeout_5() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___internalMatchTimeout_5)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_internalMatchTimeout_5() const { return ___internalMatchTimeout_5; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_internalMatchTimeout_5() { return &___internalMatchTimeout_5; }
	inline void set_internalMatchTimeout_5(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___internalMatchTimeout_5 = value;
	}

	inline static int32_t get_offset_of_caps_9() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___caps_9)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_caps_9() const { return ___caps_9; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_caps_9() { return &___caps_9; }
	inline void set_caps_9(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___caps_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caps_9), (void*)value);
	}

	inline static int32_t get_offset_of_capnames_10() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capnames_10)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_capnames_10() const { return ___capnames_10; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_capnames_10() { return &___capnames_10; }
	inline void set_capnames_10(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___capnames_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capnames_10), (void*)value);
	}

	inline static int32_t get_offset_of_capslist_11() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capslist_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_capslist_11() const { return ___capslist_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_capslist_11() { return &___capslist_11; }
	inline void set_capslist_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___capslist_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capslist_11), (void*)value);
	}

	inline static int32_t get_offset_of_capsize_12() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capsize_12)); }
	inline int32_t get_capsize_12() const { return ___capsize_12; }
	inline int32_t* get_address_of_capsize_12() { return &___capsize_12; }
	inline void set_capsize_12(int32_t value)
	{
		___capsize_12 = value;
	}

	inline static int32_t get_offset_of_runnerref_13() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___runnerref_13)); }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * get_runnerref_13() const { return ___runnerref_13; }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 ** get_address_of_runnerref_13() { return &___runnerref_13; }
	inline void set_runnerref_13(ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * value)
	{
		___runnerref_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runnerref_13), (void*)value);
	}

	inline static int32_t get_offset_of_replref_14() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___replref_14)); }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * get_replref_14() const { return ___replref_14; }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 ** get_address_of_replref_14() { return &___replref_14; }
	inline void set_replref_14(SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * value)
	{
		___replref_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replref_14), (void*)value);
	}

	inline static int32_t get_offset_of_code_15() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___code_15)); }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * get_code_15() const { return ___code_15; }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 ** get_address_of_code_15() { return &___code_15; }
	inline void set_code_15(RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * value)
	{
		___code_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___code_15), (void*)value);
	}

	inline static int32_t get_offset_of_refsInitialized_16() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___refsInitialized_16)); }
	inline bool get_refsInitialized_16() const { return ___refsInitialized_16; }
	inline bool* get_address_of_refsInitialized_16() { return &___refsInitialized_16; }
	inline void set_refsInitialized_16(bool value)
	{
		___refsInitialized_16 = value;
	}
};


// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};


// System.Comparison`1<Meta.Conduit.InvocationContext>
struct Comparison_1_tD48EB0E35206C00C67637769B711197EDC1EDC82  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean>
struct Func_2_tABC5D2B4AF92BE004DE38AADAD2AED77AD815246  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Meta.Conduit.InvocationContext,System.Boolean>
struct Func_2_tFCFE0C2B4CE4D6590B6FCE89CC6F1F45496AF49F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.String,System.Boolean>
struct Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Type,System.Boolean>
struct Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// Meta.Conduit.ConduitUtilities/ProgressDelegate
struct ProgressDelegate_t30218000FBF83D444E47FA55B9F780505C0E3BF9  : public MulticastDelegate_t
{
public:

public:
};


// <Module>


// <Module>


// System.Object


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>


// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>


// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Type>>


// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Type>>


// System.Collections.Generic.Dictionary`2<System.String,Meta.Conduit.ConduitParameterValue>


// System.Collections.Generic.Dictionary`2<System.String,Meta.Conduit.ConduitParameterValue>


// System.Collections.Generic.Dictionary`2<System.String,System.Object>


// System.Collections.Generic.Dictionary`2<System.String,System.Object>


// System.Collections.Generic.Dictionary`2<System.String,System.String>


// System.Collections.Generic.Dictionary`2<System.String,System.String>


// System.Collections.Generic.Dictionary`2<System.String,System.Type>


// System.Collections.Generic.Dictionary`2<System.String,System.Type>


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.String>>


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.String>>


// System.Collections.Generic.Dictionary`2<System.Type,System.String>


// System.Collections.Generic.Dictionary`2<System.Type,System.String>


// System.Collections.Generic.HashSet`1<System.String>


// System.Collections.Generic.HashSet`1<System.String>


// System.Collections.Generic.HashSet`1<System.Type>


// System.Collections.Generic.HashSet`1<System.Type>


// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>


// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>


// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>

struct List_1_t79F736795335714ABC337199FBF6AAA73558A6E1_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InvocationContextU5BU5D_tA958EF11143BF0F9A82D3266E078D32234130E8A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t79F736795335714ABC337199FBF6AAA73558A6E1_StaticFields, ____emptyArray_5)); }
	inline InvocationContextU5BU5D_tA958EF11143BF0F9A82D3266E078D32234130E8A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InvocationContextU5BU5D_tA958EF11143BF0F9A82D3266E078D32234130E8A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InvocationContextU5BU5D_tA958EF11143BF0F9A82D3266E078D32234130E8A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>


// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>

struct List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ManifestActionU5BU5D_tDB004C2902FCC9EAA07BE81598B9C225BEEDC7A6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A_StaticFields, ____emptyArray_5)); }
	inline ManifestActionU5BU5D_tDB004C2902FCC9EAA07BE81598B9C225BEEDC7A6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ManifestActionU5BU5D_tDB004C2902FCC9EAA07BE81598B9C225BEEDC7A6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ManifestActionU5BU5D_tDB004C2902FCC9EAA07BE81598B9C225BEEDC7A6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>


// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>

struct List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ManifestEntityU5BU5D_t5CE4A6928018F6BF377CF65EC687D171EC8558AD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855_StaticFields, ____emptyArray_5)); }
	inline ManifestEntityU5BU5D_t5CE4A6928018F6BF377CF65EC687D171EC8558AD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ManifestEntityU5BU5D_t5CE4A6928018F6BF377CF65EC687D171EC8558AD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ManifestEntityU5BU5D_t5CE4A6928018F6BF377CF65EC687D171EC8558AD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>


// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>

struct List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ManifestParameterU5BU5D_t7F9FD4AB29CBB838B701FAC93649A0FF6948F7F2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91_StaticFields, ____emptyArray_5)); }
	inline ManifestParameterU5BU5D_t7F9FD4AB29CBB838B701FAC93649A0FF6948F7F2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ManifestParameterU5BU5D_t7F9FD4AB29CBB838B701FAC93649A0FF6948F7F2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ManifestParameterU5BU5D_t7F9FD4AB29CBB838B701FAC93649A0FF6948F7F2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>


// System.Collections.Generic.List`1<System.Object>

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>


// System.Collections.Generic.List`1<System.String>

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>


// System.Collections.Generic.List`1<System.Type>

struct List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_StaticFields, ____emptyArray_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Type>


// System.Collections.Generic.List`1<Meta.Conduit.WitKeyword>

struct List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	WitKeywordU5BU5D_t439367A93E1B57ED17D59434D5602AF8E2F3C4A9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415_StaticFields, ____emptyArray_5)); }
	inline WitKeywordU5BU5D_t439367A93E1B57ED17D59434D5602AF8E2F3C4A9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline WitKeywordU5BU5D_t439367A93E1B57ED17D59434D5602AF8E2F3C4A9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(WitKeywordU5BU5D_t439367A93E1B57ED17D59434D5602AF8E2F3C4A9* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Meta.Conduit.WitKeyword>


// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>


// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// System.Attribute


// System.Attribute


// System.Reflection.Binder


// System.Reflection.Binder


// Meta.Conduit.ConduitDispatcher


// Meta.Conduit.ConduitDispatcher


// Meta.Conduit.ConduitDispatcherFactory

struct ConduitDispatcherFactory_t24D4569ADB5094B39031F83D8279D35FB5325E5D_StaticFields
{
public:
	// Meta.Conduit.IConduitDispatcher Meta.Conduit.ConduitDispatcherFactory::instance
	RuntimeObject* ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(ConduitDispatcherFactory_t24D4569ADB5094B39031F83D8279D35FB5325E5D_StaticFields, ___instance_0)); }
	inline RuntimeObject* get_instance_0() const { return ___instance_0; }
	inline RuntimeObject** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(RuntimeObject* value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// Meta.Conduit.ConduitDispatcherFactory


// Meta.Conduit.ConduitUtilities

struct ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex Meta.Conduit.ConduitUtilities::UnderscoreSplitter
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___UnderscoreSplitter_0;

public:
	inline static int32_t get_offset_of_UnderscoreSplitter_0() { return static_cast<int32_t>(offsetof(ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964_StaticFields, ___UnderscoreSplitter_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_UnderscoreSplitter_0() const { return ___UnderscoreSplitter_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_UnderscoreSplitter_0() { return &___UnderscoreSplitter_0; }
	inline void set_UnderscoreSplitter_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___UnderscoreSplitter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnderscoreSplitter_0), (void*)value);
	}
};


// Meta.Conduit.ConduitUtilities


// Meta.Conduit.InvocationContext


// Meta.Conduit.InvocationContext


// Meta.WitAi.Json.JsonConverter


// Meta.WitAi.Json.JsonConverter


// Meta.Conduit.ListExtensions


// Meta.Conduit.ListExtensions


// Meta.Conduit.Manifest


// Meta.Conduit.Manifest


// Meta.Conduit.ManifestAction


// Meta.Conduit.ManifestAction


// Meta.Conduit.ManifestEntity


// Meta.Conduit.ManifestEntity


// Meta.Conduit.ManifestLoader


// Meta.Conduit.ManifestLoader


// Meta.Conduit.ManifestParameter


// Meta.Conduit.ManifestParameter


// System.Reflection.MemberInfo


// System.Reflection.MemberInfo


// Meta.Conduit.ParameterProvider

struct ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Type>> Meta.Conduit.ParameterProvider::_builtInTypes
	Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 * ____builtInTypes_6;

public:
	inline static int32_t get_offset_of__builtInTypes_6() { return static_cast<int32_t>(offsetof(ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26_StaticFields, ____builtInTypes_6)); }
	inline Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 * get__builtInTypes_6() const { return ____builtInTypes_6; }
	inline Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 ** get_address_of__builtInTypes_6() { return &____builtInTypes_6; }
	inline void set__builtInTypes_6(Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 * value)
	{
		____builtInTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____builtInTypes_6), (void*)value);
	}
};


// Meta.Conduit.ParameterProvider


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


// System.Text.StringBuilder


// System.Text.StringBuilder


// System.StringComparer

struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields
{
public:
	// System.StringComparer System.StringComparer::_invariantCulture
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCulture_0;
	// System.StringComparer System.StringComparer::_invariantCultureIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCultureIgnoreCase_1;
	// System.StringComparer System.StringComparer::_ordinal
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinal_2;
	// System.StringComparer System.StringComparer::_ordinalIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinalIgnoreCase_3;

public:
	inline static int32_t get_offset_of__invariantCulture_0() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCulture_0)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCulture_0() const { return ____invariantCulture_0; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCulture_0() { return &____invariantCulture_0; }
	inline void set__invariantCulture_0(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCulture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCulture_0), (void*)value);
	}

	inline static int32_t get_offset_of__invariantCultureIgnoreCase_1() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCultureIgnoreCase_1)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCultureIgnoreCase_1() const { return ____invariantCultureIgnoreCase_1; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCultureIgnoreCase_1() { return &____invariantCultureIgnoreCase_1; }
	inline void set__invariantCultureIgnoreCase_1(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCultureIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCultureIgnoreCase_1), (void*)value);
	}

	inline static int32_t get_offset_of__ordinal_2() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinal_2)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinal_2() const { return ____ordinal_2; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinal_2() { return &____ordinal_2; }
	inline void set__ordinal_2(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinal_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinal_2), (void*)value);
	}

	inline static int32_t get_offset_of__ordinalIgnoreCase_3() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinalIgnoreCase_3)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinalIgnoreCase_3() const { return ____ordinalIgnoreCase_3; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinalIgnoreCase_3() { return &____ordinalIgnoreCase_3; }
	inline void set__ordinalIgnoreCase_3(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinalIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinalIgnoreCase_3), (void*)value);
	}
};


// System.StringComparer


// System.ValueType


// System.ValueType


// Meta.Conduit.WitKeyword


// Meta.Conduit.WitKeyword


// Meta.WitAi.Json.WitResponseNode


// Meta.WitAi.Json.WitResponseNode


// Meta.Conduit.ConduitDispatcher/InvocationContextFilter


// Meta.Conduit.ConduitDispatcher/InvocationContextFilter


// Meta.Conduit.Manifest/<>c

struct U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_StaticFields
{
public:
	// Meta.Conduit.Manifest/<>c Meta.Conduit.Manifest/<>c::<>9
	U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3 * ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean> Meta.Conduit.Manifest/<>c::<>9__26_0
	Func_2_tABC5D2B4AF92BE004DE38AADAD2AED77AD815246 * ___U3CU3E9__26_0_1;
	// System.Comparison`1<Meta.Conduit.InvocationContext> Meta.Conduit.Manifest/<>c::<>9__26_1
	Comparison_1_tD48EB0E35206C00C67637769B711197EDC1EDC82 * ___U3CU3E9__26_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__26_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_StaticFields, ___U3CU3E9__26_0_1)); }
	inline Func_2_tABC5D2B4AF92BE004DE38AADAD2AED77AD815246 * get_U3CU3E9__26_0_1() const { return ___U3CU3E9__26_0_1; }
	inline Func_2_tABC5D2B4AF92BE004DE38AADAD2AED77AD815246 ** get_address_of_U3CU3E9__26_0_1() { return &___U3CU3E9__26_0_1; }
	inline void set_U3CU3E9__26_0_1(Func_2_tABC5D2B4AF92BE004DE38AADAD2AED77AD815246 * value)
	{
		___U3CU3E9__26_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__26_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__26_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_StaticFields, ___U3CU3E9__26_1_2)); }
	inline Comparison_1_tD48EB0E35206C00C67637769B711197EDC1EDC82 * get_U3CU3E9__26_1_2() const { return ___U3CU3E9__26_1_2; }
	inline Comparison_1_tD48EB0E35206C00C67637769B711197EDC1EDC82 ** get_address_of_U3CU3E9__26_1_2() { return &___U3CU3E9__26_1_2; }
	inline void set_U3CU3E9__26_1_2(Comparison_1_tD48EB0E35206C00C67637769B711197EDC1EDC82 * value)
	{
		___U3CU3E9__26_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__26_1_2), (void*)value);
	}
};


// Meta.Conduit.Manifest/<>c


// Meta.Conduit.ParameterProvider/<>c__DisplayClass21_0


// Meta.Conduit.ParameterProvider/<>c__DisplayClass21_0


// Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass4_0


// Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass4_0


// Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass5_0


// Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass5_0


// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>


// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>


// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>


// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>


// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestEntity>


// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestEntity>


// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>


// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>


// System.Collections.Generic.List`1/Enumerator<System.Object>


// System.Collections.Generic.List`1/Enumerator<System.Object>


// System.Collections.Generic.List`1/Enumerator<System.String>


// System.Collections.Generic.List`1/Enumerator<System.String>


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>


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


// System.Char

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Char


// Meta.Conduit.ConduitActionAttribute


// Meta.Conduit.ConduitActionAttribute


// Meta.Conduit.ConduitAssemblyAttribute


// Meta.Conduit.ConduitAssemblyAttribute


// Meta.Conduit.ConduitEntityAttribute


// Meta.Conduit.ConduitEntityAttribute


// Meta.Conduit.ConduitParameterAttribute


// Meta.Conduit.ConduitParameterAttribute


// Meta.Conduit.ConduitParameterValue


// Meta.Conduit.ConduitParameterValue


// Meta.Conduit.ConduitValueAttribute


// Meta.Conduit.ConduitValueAttribute


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


// System.Reflection.MethodBase


// System.Reflection.MethodBase


// System.Reflection.ParameterModifier


// System.Reflection.ParameterModifier


// System.Single


// System.Single


// System.Void


// System.Void


// Meta.WitAi.Data.Info.WitEntityInfo


// Meta.WitAi.Data.Info.WitEntityInfo


// Meta.WitAi.Data.Info.WitEntityKeywordInfo


// Meta.WitAi.Data.Info.WitEntityKeywordInfo


// Meta.WitAi.Json.WitResponseClass


// Meta.WitAi.Json.WitResponseClass


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>


// System.Collections.Generic.KeyValuePair`2<System.Object,Meta.Conduit.ConduitParameterValue>


// System.Collections.Generic.KeyValuePair`2<System.Object,Meta.Conduit.ConduitParameterValue>


// System.Collections.Generic.KeyValuePair`2<System.String,Meta.Conduit.ConduitParameterValue>


// System.Collections.Generic.KeyValuePair`2<System.String,Meta.Conduit.ConduitParameterValue>


// System.Reflection.BindingFlags


// System.Reflection.BindingFlags


// System.Reflection.CallingConventions


// System.Reflection.CallingConventions


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


// System.Reflection.MethodInfo


// System.Reflection.MethodInfo


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


// System.Reflection.ParameterAttributes


// System.Reflection.ParameterAttributes


// System.Text.RegularExpressions.RegexOptions


// System.Text.RegularExpressions.RegexOptions


// System.RuntimeTypeHandle


// System.RuntimeTypeHandle


// System.TimeSpan

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


// System.TimeSpan


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Meta.Conduit.ConduitParameterValue>


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Meta.Conduit.ConduitParameterValue>


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Meta.Conduit.ConduitParameterValue>


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Meta.Conduit.ConduitParameterValue>


// System.MulticastDelegate


// System.MulticastDelegate


// System.Reflection.ParameterInfo


// System.Reflection.ParameterInfo


// System.Text.RegularExpressions.Regex

struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields
{
public:
	// System.TimeSpan System.Text.RegularExpressions.Regex::MaximumMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaximumMatchTimeout_3;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___InfiniteMatchTimeout_4;
	// System.TimeSpan System.Text.RegularExpressions.Regex::FallbackDefaultMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___FallbackDefaultMatchTimeout_7;
	// System.TimeSpan System.Text.RegularExpressions.Regex::DefaultMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___DefaultMatchTimeout_8;
	// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> System.Text.RegularExpressions.Regex::livecode
	LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * ___livecode_17;
	// System.Int32 System.Text.RegularExpressions.Regex::cacheSize
	int32_t ___cacheSize_18;

public:
	inline static int32_t get_offset_of_MaximumMatchTimeout_3() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___MaximumMatchTimeout_3)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaximumMatchTimeout_3() const { return ___MaximumMatchTimeout_3; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaximumMatchTimeout_3() { return &___MaximumMatchTimeout_3; }
	inline void set_MaximumMatchTimeout_3(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaximumMatchTimeout_3 = value;
	}

	inline static int32_t get_offset_of_InfiniteMatchTimeout_4() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___InfiniteMatchTimeout_4)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_InfiniteMatchTimeout_4() const { return ___InfiniteMatchTimeout_4; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_InfiniteMatchTimeout_4() { return &___InfiniteMatchTimeout_4; }
	inline void set_InfiniteMatchTimeout_4(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___InfiniteMatchTimeout_4 = value;
	}

	inline static int32_t get_offset_of_FallbackDefaultMatchTimeout_7() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___FallbackDefaultMatchTimeout_7)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_FallbackDefaultMatchTimeout_7() const { return ___FallbackDefaultMatchTimeout_7; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_FallbackDefaultMatchTimeout_7() { return &___FallbackDefaultMatchTimeout_7; }
	inline void set_FallbackDefaultMatchTimeout_7(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___FallbackDefaultMatchTimeout_7 = value;
	}

	inline static int32_t get_offset_of_DefaultMatchTimeout_8() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___DefaultMatchTimeout_8)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_DefaultMatchTimeout_8() const { return ___DefaultMatchTimeout_8; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_DefaultMatchTimeout_8() { return &___DefaultMatchTimeout_8; }
	inline void set_DefaultMatchTimeout_8(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___DefaultMatchTimeout_8 = value;
	}

	inline static int32_t get_offset_of_livecode_17() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___livecode_17)); }
	inline LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * get_livecode_17() const { return ___livecode_17; }
	inline LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 ** get_address_of_livecode_17() { return &___livecode_17; }
	inline void set_livecode_17(LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * value)
	{
		___livecode_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___livecode_17), (void*)value);
	}

	inline static int32_t get_offset_of_cacheSize_18() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___cacheSize_18)); }
	inline int32_t get_cacheSize_18() const { return ___cacheSize_18; }
	inline int32_t* get_address_of_cacheSize_18() { return &___cacheSize_18; }
	inline void set_cacheSize_18(int32_t value)
	{
		___cacheSize_18 = value;
	}
};


// System.Text.RegularExpressions.Regex


// UnityEngine.TextAsset


// UnityEngine.TextAsset


// System.Type

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Type


// System.Comparison`1<Meta.Conduit.InvocationContext>


// System.Comparison`1<Meta.Conduit.InvocationContext>


// System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean>


// System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean>


// System.Func`2<Meta.Conduit.InvocationContext,System.Boolean>


// System.Func`2<Meta.Conduit.InvocationContext,System.Boolean>


// System.Func`2<System.String,System.Boolean>


// System.Func`2<System.String,System.Boolean>


// System.Func`2<System.Type,System.Boolean>


// System.Func`2<System.Type,System.Boolean>


// System.AsyncCallback


// System.AsyncCallback


// Meta.Conduit.ConduitUtilities/ProgressDelegate


// Meta.Conduit.ConduitUtilities/ProgressDelegate

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
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * m_Items[1];

public:
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  m_Items[1];

public:
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
};
// Meta.WitAi.Json.JsonConverter[]
struct JsonConverterU5BU5D_t8327F3FEA5C837FBE4A4A8503B5C0B1AD46A5154  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) JsonConverter_t190B6A25CC7F4B027121414C24452DF540968C7F * m_Items[1];

public:
	inline JsonConverter_t190B6A25CC7F4B027121414C24452DF540968C7F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JsonConverter_t190B6A25CC7F4B027121414C24452DF540968C7F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JsonConverter_t190B6A25CC7F4B027121414C24452DF540968C7F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JsonConverter_t190B6A25CC7F4B027121414C24452DF540968C7F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JsonConverter_t190B6A25CC7F4B027121414C24452DF540968C7F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JsonConverter_t190B6A25CC7F4B027121414C24452DF540968C7F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.Data.Info.WitEntityKeywordInfo[]
struct WitEntityKeywordInfoU5BU5D_tD857B15DB3BB229C42383A8F639660F8898A61C8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12  m_Items[1];

public:
	inline WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___keyword_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___synonyms_1), (void*)NULL);
		#endif
	}
	inline WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___keyword_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___synonyms_1), (void*)NULL);
		#endif
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


// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_mEB3492D1398C284020E4C9C9E32397DFCD9C6FE7_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_mA5E1AD3350B1E7EB1FAE7562CA67C49A5193E1F2_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m42F33AB093A9AAB17C558FDBFF010443D1048400_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_First_TisRuntimeObject_m191CE082915F09BBEF1FA66B7F02B14D919A0FEA_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * Dictionary_2_get_Values_mC8EC343FADAE6B9CB93639D7FBCDB19ACD807DB5_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m016E64EEAC35EA6D2A28616261EA1C34A4365B4A_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mDE1798563694D30022D3B7E1010347C573690B4A_gshared (Comparison_1_tB56E8E7C2BF431D44E8EBD15EA3E6F41AAFF03D2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m5EB3F127CD42F1ACA97F4DB8754C49F23B64D750_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, Comparison_1_tB56E8E7C2BF431D44E8EBD15EA3E6F41AAFF03D2 * ___comparison0, const RuntimeMethod* method);
// System.String Meta.WitAi.Json.JsonConvert::SerializeObject<System.Object>(!!0,Meta.WitAi.Json.JsonConverter[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_TisRuntimeObject_m5AEC5FC801A5FE6A9123F31305B87CB206C0DEA0_gshared (RuntimeObject * ___inObject0, JsonConverterU5BU5D_t8327F3FEA5C837FBE4A4A8503B5C0B1AD46A5154* ___customConverters1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_SequenceEqual_TisRuntimeObject_m9A9C2C960A18BA5F7E0052D765F735E9A8C907E2_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_mD47CC322E1CBCFE7AB4E22D728C12B44986FCB88_gshared (String_t* ___path0, const RuntimeMethod* method);
// !!0 Meta.WitAi.Json.JsonConvert::DeserializeObject<System.Object>(System.String,Meta.WitAi.Json.JsonConverter[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonConvert_DeserializeObject_TisRuntimeObject_mC9AD66A9CB9226EB43F1BC78C89D3F281B252935_gshared (String_t* ___jsonString0, JsonConverterU5BU5D_t8327F3FEA5C837FBE4A4A8503B5C0B1AD46A5154* ___customConverters1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Meta.Conduit.ConduitParameterValue>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6B267189C56C5C2DC9CB46A79BDBBDE2BFD18444_gshared (Dictionary_2_t4C2203DE319A24CFCBAA82219B58724DBFD9E155 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Meta.Conduit.ConduitParameterValue>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mB7C8D09CEC1B1DC20B66A7C0F966DB062D8A4CC1_gshared (Dictionary_2_t4C2203DE319A24CFCBAA82219B58724DBFD9E155 * __this, RuntimeObject * ___key0, ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA  ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,Meta.Conduit.ConduitParameterValue>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t0C51EEB32B082AE195B7DF2761D5E6CE2D401B96  Dictionary_2_GetEnumerator_m80A7DDBB955AC38D8F2F2510A000251D3C8D1790_gshared (Dictionary_2_t4C2203DE319A24CFCBAA82219B58724DBFD9E155 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Meta.Conduit.ConduitParameterValue>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t5965AA04DD9F00515A43502CCF9D43CF3B0D4359  Enumerator_get_Current_m440B5511FA222C4515E15D86DAB85DAFB1470A95_gshared_inline (Enumerator_t0C51EEB32B082AE195B7DF2761D5E6CE2D401B96 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,Meta.Conduit.ConduitParameterValue>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m91073CF62C4B1563AED4656DEB550AFAE7A83899_gshared_inline (KeyValuePair_2_t5965AA04DD9F00515A43502CCF9D43CF3B0D4359 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,Meta.Conduit.ConduitParameterValue>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA  KeyValuePair_2_get_Value_mB85394DB1C1FD3095EA2C4D3189065FE8D130DC3_gshared_inline (KeyValuePair_2_t5965AA04DD9F00515A43502CCF9D43CF3B0D4359 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Meta.Conduit.ConduitParameterValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4EC433D46466AD87B60C65B707EDD549DF9183F3_gshared (Enumerator_t0C51EEB32B082AE195B7DF2761D5E6CE2D401B96 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Meta.Conduit.ConduitParameterValue>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m765F1AF9D690D6B2F0A362C5AB9C1CD0882603CA_gshared (Enumerator_t0C51EEB32B082AE195B7DF2761D5E6CE2D401B96 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyCollection_get_Count_m63E6DF1AA7AE0E00DC3800A837256C5B258AC71D_gshared (KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031  KeyCollection_GetEnumerator_m6B4DC134BB6777F8C99D26315F359E069004CF13_gshared (KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mF254C3BDEA9F0829958522BF88C75DE8BEC4961F_gshared_inline (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3714ECE30727E77F475635710D707743B6D930E6_gshared (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m5440E65428351CA6F19B1804D172DCB5E9C59C98_gshared (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2AB3E1DC3FE63AC2086C2DCFCE5B1B407A33FAEB_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void Meta.Conduit.ConduitActionAttribute::set_Intent(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Intent_m263CF9EFFE775B902A5FF7B333D11625C5962CFA_inline (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mEB3492D1398C284020E4C9C9E32397DFCD9C6FE7_gshared)(___source0, method);
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_Aliases(System.Collections.Generic.List`1<System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Aliases_m9937DAF4FEFE0EC7FEFCC7A982229111E9033816_inline (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method);
// System.Void Meta.Conduit.ConduitActionAttribute::set_MinConfidence(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MinConfidence_m04C5C6D94AEE7AFB00EA4B8D794AE5ED126CE136_inline (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, float ___value0, const RuntimeMethod* method);
// System.Void Meta.Conduit.ConduitActionAttribute::set_MaxConfidence(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MaxConfidence_mB79851401D1D596F9F136D5E3AABC368B45F9CA3_inline (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, float ___value0, const RuntimeMethod* method);
// System.Void Meta.Conduit.ConduitActionAttribute::set_ValidatePartial(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_ValidatePartial_m33404154DB6082F0BF07F46DE3D431B7F39B3E60_inline (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818 (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// Meta.Conduit.Manifest Meta.Conduit.ConduitDispatcher::get_Manifest()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * ConduitDispatcher_get_Manifest_m9AF54C493CDCF4B8784916D8766A4B08767217E7_inline (ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77 * __this, const RuntimeMethod* method);
// System.Void Meta.Conduit.ConduitDispatcher::set_Manifest(Meta.Conduit.Manifest)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitDispatcher_set_Manifest_m547F188C6EDA82E43B3992257AFBBCCCE60B6048_inline (ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77 * __this, Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction> Meta.Conduit.Manifest::get_Actions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A * Manifest_get_Actions_mD8705A97A545D14BEFA977C6EC90F0135D4F8AC1_inline (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>::GetEnumerator()
inline Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1  List_1_GetEnumerator_mA00086B33B6560F41A54282B3BC1FCCC583D6FA1 (List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1  (*) (List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>::get_Current()
inline ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * Enumerator_get_Current_m0E7DD0E65A51098263437149381C2227D1BF478E_inline (Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1 * __this, const RuntimeMethod* method)
{
	return ((  ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * (*) (Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> Meta.Conduit.ManifestAction::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * ManifestAction_get_Parameters_m20870BE54DBD68586A57573B431585871B05B7AE_inline (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>::GetEnumerator()
inline Enumerator_tED955948DC62CBF2AB8A0BB4E373B30619B250D3  List_1_GetEnumerator_m6721C43E824DF8F95CE1CCA02D6AC0507616EDF1 (List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tED955948DC62CBF2AB8A0BB4E373B30619B250D3  (*) (List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>::get_Current()
inline ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * Enumerator_get_Current_m4A5B91C6A96CDBD3DAB8D19E24596261354F7AB4_inline (Enumerator_tED955948DC62CBF2AB8A0BB4E373B30619B250D3 * __this, const RuntimeMethod* method)
{
	return ((  ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * (*) (Enumerator_tED955948DC62CBF2AB8A0BB4E373B30619B250D3 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.String Meta.Conduit.ManifestParameter::get_InternalName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_InternalName_m6A6ED9811F9520A02CE5D944BC6B50622DB0E7E1_inline (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.String Meta.Conduit.ManifestParameter::get_QualifiedName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedName_m69BDD38050AC8A6478C08E6119EC84294764FB1A_inline (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>::MoveNext()
inline bool Enumerator_MoveNext_m1014044CC91CB6DD27CE358570BEA1BFD8C9FD15 (Enumerator_tED955948DC62CBF2AB8A0BB4E373B30619B250D3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tED955948DC62CBF2AB8A0BB4E373B30619B250D3 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>::Dispose()
inline void Enumerator_Dispose_m78298D1DA5CD9AC4EF8F9056672B3EECDD69EE7D (Enumerator_tED955948DC62CBF2AB8A0BB4E373B30619B250D3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tED955948DC62CBF2AB8A0BB4E373B30619B250D3 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>::MoveNext()
inline bool Enumerator_MoveNext_m76AD0C0FBBB414F5C7040C81D7453F4998A69E61 (Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>::Dispose()
inline void Enumerator_Dispose_mC84BF194A0433203991A8480CC4003E613428369 (Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean Meta.Conduit.Manifest::ContainsAction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ContainsAction_mCF03300D0B05617962CC35EDFBC991763B31F050 (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, String_t* ___action0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(!0)
inline bool HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, String_t*, const RuntimeMethod*))HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(!0)
inline bool HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370 (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, String_t*, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Meta.WitAi.VLog::W(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_W_m5F51329123EA2255E208EEA9BBC8480126413706 (RuntimeObject * ___log0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.Manifest::GetInvocationContexts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * Manifest_GetInvocationContexts_m271750391476AF7F224F56757986724385A4AB73 (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, String_t* ___actionId0, const RuntimeMethod* method);
// System.Void Meta.Conduit.ConduitDispatcher/InvocationContextFilter::.ctor(Meta.Conduit.IParameterProvider,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContextFilter__ctor_mC917E85FD10A560AAEEBFA7B590EB1535ABAC603 (InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653 * __this, RuntimeObject* ___parameterProvider0, List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * ___actionContexts1, bool ___relaxed2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.ConduitDispatcher/InvocationContextFilter::ResolveInvocationContexts(System.String,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * InvocationContextFilter_ResolveInvocationContexts_mD6C245435EAD0BDD5C1D31249A9B01445538770C (InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653 * __this, String_t* ___actionId0, float ___confidence1, bool ___partial2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::get_Count()
inline int32_t List_1_get_Count_mA2472BBDF2F508EF1BB7D360B28CB9FCD636255D_inline (List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mD0D523A440845BA7F58E68187E029DC9AB821CED (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::GetEnumerator()
inline Enumerator_t7DB259F5C9FC9242AEC9B44AA1FA051D1E91E200  List_1_GetEnumerator_mD669CD295A1C7CC224A25FEA0040AD83495ED949 (List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7DB259F5C9FC9242AEC9B44AA1FA051D1E91E200  (*) (List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>::get_Current()
inline InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * Enumerator_get_Current_m65016ED0A0B788DA91DE3E3057C346D3F98B56EC_inline (Enumerator_t7DB259F5C9FC9242AEC9B44AA1FA051D1E91E200 * __this, const RuntimeMethod* method)
{
	return ((  InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * (*) (Enumerator_t7DB259F5C9FC9242AEC9B44AA1FA051D1E91E200 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean Meta.Conduit.ConduitDispatcher::InvokeMethod(Meta.Conduit.InvocationContext,Meta.Conduit.IParameterProvider,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_InvokeMethod_mFCCF342756097ED31A75A7009F19333FBC2CB67C (ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77 * __this, InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * ___invocationContext0, RuntimeObject* ___parameterProvider1, bool ___relaxed2, const RuntimeMethod* method);
// System.Reflection.MethodInfo Meta.Conduit.InvocationContext::get_MethodInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t * InvocationContext_get_MethodInfo_m2D90A4508D1FF72455B08A101724A2B400999C83_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>::MoveNext()
inline bool Enumerator_MoveNext_m3EFCF097994D900E6B1680090DDD25452B0FF186 (Enumerator_t7DB259F5C9FC9242AEC9B44AA1FA051D1E91E200 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7DB259F5C9FC9242AEC9B44AA1FA051D1E91E200 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>::Dispose()
inline void Enumerator_Dispose_m0F7A4287088CE1A412D82007974A0154334542ED (Enumerator_t7DB259F5C9FC9242AEC9B44AA1FA051D1E91E200 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7DB259F5C9FC9242AEC9B44AA1FA051D1E91E200 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.Conduit.InvocationContext::get_ParameterMap()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * InvocationContext_get_ParameterMap_m39659277E2C1CBF5CDBCAA1525E60026C1A3869C_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, const RuntimeMethod* method);
// System.Type Meta.Conduit.InvocationContext::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * InvocationContext_get_Type_m94663BEC59E45CCA072A6F895FF56EE1FEBB793B_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mDFDF51EDFE5DBDD5FE942564A1F56E3C7E3DE43F (MethodBase_t * __this, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_mA5E1AD3350B1E7EB1FAE7562CA67C49A5193E1F2 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA5E1AD3350B1E7EB1FAE7562CA67C49A5193E1F2_gshared)(___source0, method);
}
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Void Meta.Conduit.ManifestLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestLoader__ctor_mFA981E01FDE27FA33200E2471DE9E5EC9F0C4241 (ManifestLoader_t685F0D1722130EE51F7064DCF379C08ED1DC64EF * __this, const RuntimeMethod* method);
// System.Void Meta.Conduit.ConduitDispatcher::.ctor(Meta.Conduit.IManifestLoader,Meta.Conduit.IInstanceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitDispatcher__ctor_mE4A71725617B6D9466508F8B0251DF645E6433BC (ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77 * __this, RuntimeObject* ___manifestLoader0, RuntimeObject* ___instanceResolver1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Meta.Conduit.ConduitParameterValue::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitParameterValue__ctor_m2070DFD2B017E5CE5C1E6363E2438C45BEDDDCBD (ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void Meta.Conduit.ConduitParameterValue::.ctor(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitParameterValue__ctor_m15B8609296722DD3D4446C6E077B90D877DDB08D (ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA * __this, RuntimeObject * ___value0, Type_t * ___dataType1, const RuntimeMethod* method);
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Replace_m47C8C4AF6A7F1D1A2728F9ADA7791F4EABA49E2F (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, String_t* ___input0, String_t* ___replacement1, const RuntimeMethod* method);
// System.String Meta.Conduit.ConduitUtilities::StripWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_StripWhiteSpace_mD5FEEFC5B9A3084F4B09A6E4FE0211E9675A0EE8 (String_t* ___input0, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3 (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.String Meta.Conduit.ConduitUtilities::SanitizeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_SanitizeName_m711F0200DD27438001CAC6D160CE4B7F4D82911D (String_t* ___input0, const RuntimeMethod* method);
// System.String Meta.Conduit.ConduitUtilities::SanitizeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_SanitizeString_m3F1A9EFF4AFDBEEBECE8171FA807BA76A82A8528 (String_t* ___input0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m4BC629F8059C3E0C4E3F7C7E04DB50EBB0C1A05A (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Replace_mCD44330608E58AC19EA636370704ACE7D314C440 (String_t* ___input0, String_t* ___pattern1, String_t* ___replacement2, const RuntimeMethod* method);
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Regex_IsMatch_mD4663DC55CBEF7B987A8B57186689664EDD047C4 (String_t* ___input0, String_t* ___pattern1, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m5BA9C047FEB3C93AD388668FA855CB1A63FB62A4 (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, String_t* ___pattern0, int32_t ___options1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>::.ctor()
inline void List_1__ctor_m9D78BB747F6D45B5B1FE1C8B3ABE4F3AC4C98ACF (List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>::.ctor()
inline void List_1__ctor_m718CAEAAAA3CE7C939603B0D9E32658450EFA227 (List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_OrdinalIgnoreCase_m29F9466A219FDF7A4D61CB85C122A9B70579B2E2_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
inline void Dictionary_2__ctor_m51A0F5229DC8846B716F75FD6F349F0E3A84E2DF (Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A *, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m42F33AB093A9AAB17C558FDBFF010443D1048400_gshared)(__this, ___comparer0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::.ctor()
inline void Dictionary_2__ctor_mAB54DC9EA2E016E35B204E9E26F3CF9F978B1234 (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity> Meta.Conduit.Manifest::get_Entities()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855 * Manifest_get_Entities_mF45F3CF715A5EC40BE253EC1397FC058CD387D65_inline (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>::GetEnumerator()
inline Enumerator_t46048D80EDCB748CD5CCC0077F3EB883855AA012  List_1_GetEnumerator_m1A7C5FE9C17CD872D4FA29283FA03E6EEF24193B (List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t46048D80EDCB748CD5CCC0077F3EB883855AA012  (*) (List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestEntity>::get_Current()
inline ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * Enumerator_get_Current_mD195752168D3CA865A7453D868E21BAE700D2749_inline (Enumerator_t46048D80EDCB748CD5CCC0077F3EB883855AA012 * __this, const RuntimeMethod* method)
{
	return ((  ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * (*) (Enumerator_t46048D80EDCB748CD5CCC0077F3EB883855AA012 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.String Meta.Conduit.ManifestEntity::get_Namespace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Namespace_m9F470413C55992958A2C08F80963486BA8567172_inline (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, const RuntimeMethod* method);
// System.String Meta.Conduit.ManifestEntity::get_ID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_ID_m3B9958F8C96A39013CBC45DE69AC6CD8978A44EA_inline (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, const RuntimeMethod* method);
// System.String Meta.Conduit.ManifestEntity::get_Assembly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Assembly_m2E977627A6E8FE674FB8A354989EAC3F14EAEB06_inline (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m01CE523ADAD8D6348C8247353F7C1E5FA3031732 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void Meta.WitAi.VLog::E(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_E_m933DD49354CCDE1DA69ACB4991F68B7003B2BD09 (RuntimeObject * ___log0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Type> Meta.Conduit.Manifest::get_CustomEntityTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * Manifest_get_CustomEntityTypes_m9724BE86C733F32F09E3E093D5F9CB7E3F0B4AAE_inline (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, const RuntimeMethod* method);
// System.String Meta.Conduit.ManifestEntity::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Name_mB4D88A1CDB8DED1F4E5976249A7B50D81B119B5E_inline (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m54DA5467085BB6B286991F5B164EB4B1F57082D3 (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * __this, String_t* ___key0, Type_t * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 *, String_t*, Type_t *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestEntity>::MoveNext()
inline bool Enumerator_MoveNext_m6418FB7E50E86D52EE58C79FE28B214FFDE2DC6A (Enumerator_t46048D80EDCB748CD5CCC0077F3EB883855AA012 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t46048D80EDCB748CD5CCC0077F3EB883855AA012 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestEntity>::Dispose()
inline void Enumerator_Dispose_m81106B7D133B878824A3E6FE4E50484C65A2F0FE (Enumerator_t46048D80EDCB748CD5CCC0077F3EB883855AA012 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t46048D80EDCB748CD5CCC0077F3EB883855AA012 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.String Meta.Conduit.ManifestAction::get_ID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_ID_mA8C0AA2B8E0AD6997D82E9CD729C5ECED0029FE9_inline (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String Meta.Conduit.ManifestAction::get_Assembly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Assembly_m5C563ECB155985C292593A42FE94B9146EAFDF0C_inline (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>::get_Count()
inline int32_t List_1_get_Count_m11541AE6ECA8C8CFE233279F4F7850D2EC11F2A9_inline (List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>::get_Item(System.Int32)
inline ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * List_1_get_Item_m528E3CA9DB52D328760704289BCF649BFAF221C3_inline (List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * (*) (List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.String Meta.Conduit.ManifestParameter::get_QualifiedTypeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedTypeName_mB9D2527C2D0820F22F46AE03A82AFC75584B8D64_inline (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, const RuntimeMethod* method);
// System.String Meta.Conduit.ManifestParameter::get_TypeAssembly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_TypeAssembly_mB8CCA15F9B2593A3AEF8A242950D4F097E3CFB18_inline (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo Meta.Conduit.Manifest::GetBestMethodMatch(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Manifest_GetBestMethodMatch_mD83612F9ED012FBBAB2927DD7025A0E820D88A2A (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, Type_t * ___targetType0, String_t* ___method1, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___parameterTypes2, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m0716EB8EAA86F91031CF1C0B5E5D4B0269AC6A08 (MethodInfo_t * ___left0, MethodInfo_t * ___right1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject * Enumerable_First_TisRuntimeObject_m191CE082915F09BBEF1FA66B7F02B14D919A0FEA (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_m191CE082915F09BBEF1FA66B7F02B14D919A0FEA_gshared)(___source0, method);
}
// System.Void Meta.Conduit.InvocationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext__ctor_mA76EE5D311EA14BD541DF075484F584A658E7E02 (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, const RuntimeMethod* method);
// System.Void Meta.Conduit.InvocationContext::set_Type(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_Type_m91583D68A2D990F3A048E11204058D1BC98220A2_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void Meta.Conduit.InvocationContext::set_MethodInfo(System.Reflection.MethodInfo)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MethodInfo_m6BB1EE81B39EB5123E85B883D08CED3CB227ADCD_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, MethodInfo_t * ___value0, const RuntimeMethod* method);
// System.Single Meta.Conduit.ConduitActionAttribute::get_MinConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MinConfidence_mB80E03D4881A88E8F5BB25FB621C9AC73897228A_inline (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, const RuntimeMethod* method);
// System.Void Meta.Conduit.InvocationContext::set_MinConfidence(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MinConfidence_m1A8927D1523786E08BE1CBEC9EE0826968DE6AB7_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, float ___value0, const RuntimeMethod* method);
// System.Single Meta.Conduit.ConduitActionAttribute::get_MaxConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MaxConfidence_mB20819CD2B5B00EA7893A91326C4ED774FC9CCBC_inline (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, const RuntimeMethod* method);
// System.Void Meta.Conduit.InvocationContext::set_MaxConfidence(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MaxConfidence_m1FA275B7FCBDE491E03DAC59BC99C230F1D7F0A0_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean Meta.Conduit.ConduitActionAttribute::get_ValidatePartial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConduitActionAttribute_get_ValidatePartial_mEC2E91582DF23F6016B4B14D6560CC501C8BAA6C_inline (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, const RuntimeMethod* method);
// System.Void Meta.Conduit.InvocationContext::set_ValidatePartial(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_ValidatePartial_m3C83D984891A67A8E2661C5BB0BA021EE78B7964_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, bool ___value0, const RuntimeMethod* method);
// System.String Meta.Conduit.ManifestAction::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Name_mA0A17B5F92AD9040023F72D3FF8FA976E7194E33_inline (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mFA5667E9E7D3DC59C721751C6A020A45DF645929 (Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::.ctor()
inline void List_1__ctor_m0E1DA99C500484FF7C9EB2D85D40EB378D3A8E70 (List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::Add(!0,!1)
inline void Dictionary_2_Add_mE189E1865AFCFC5469D25A007EFCF43D0ACCE217 (Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A * __this, String_t* ___key0, List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A *, String_t*, List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::get_Item(!0)
inline List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * Dictionary_2_get_Item_m39473D804BE400460EEBD0CC75980510183E9A1C (Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * (*) (Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::Add(!0)
inline void List_1_Add_mC5CE78031AB21C2BBFFDAD4FAF20CFC60914F0DF (List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * __this, InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 *, InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::get_Values()
inline ValueCollection_t9B3D82D45C4D06438F35204E9F3461CA8FA8B4AA * Dictionary_2_get_Values_m05B6EAA5A9B7253285E4287A1E666A1B26FBD403 (Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t9B3D82D45C4D06438F35204E9F3461CA8FA8B4AA * (*) (Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A *, const RuntimeMethod*))Dictionary_2_get_Values_mC8EC343FADAE6B9CB93639D7FBCDB19ACD807DB5_gshared)(__this, method);
}
// System.Void System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m9B4F5DC8EB5C5399B6F1183F80457805F00072B8 (Func_2_tABC5D2B4AF92BE004DE38AADAD2AED77AD815246 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tABC5D2B4AF92BE004DE38AADAD2AED77AD815246 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisList_1_t79F736795335714ABC337199FBF6AAA73558A6E1_mEA27EFD786DBCD22DF285092511AF4D929C570BE (RuntimeObject* ___source0, Func_2_tABC5D2B4AF92BE004DE38AADAD2AED77AD815246 * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tABC5D2B4AF92BE004DE38AADAD2AED77AD815246 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m016E64EEAC35EA6D2A28616261EA1C34A4365B4A_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Comparison`1<Meta.Conduit.InvocationContext>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m21DC8118E9261D3667F372E6A0B53B0505427674 (Comparison_1_tD48EB0E35206C00C67637769B711197EDC1EDC82 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_tD48EB0E35206C00C67637769B711197EDC1EDC82 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mDE1798563694D30022D3B7E1010347C573690B4A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::Sort(System.Comparison`1<!0>)
inline void List_1_Sort_mCB6637C0DF90E3E960F15E9DC0B566AF0C7F6EA0 (List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * __this, Comparison_1_tD48EB0E35206C00C67637769B711197EDC1EDC82 * ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 *, Comparison_1_tD48EB0E35206C00C67637769B711197EDC1EDC82 *, const RuntimeMethod*))List_1_Sort_m5EB3F127CD42F1ACA97F4DB8754C49F23B64D750_gshared)(__this, ___comparison0, method);
}
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m029A213C09F61496D42B3101E8E770D1C66CB795 (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___binder2, int32_t ___callConvention3, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___types4, ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B* ___modifiers5, const RuntimeMethod* method);
// System.String Meta.WitAi.Json.JsonConvert::SerializeObject<Meta.Conduit.Manifest>(!!0,Meta.WitAi.Json.JsonConverter[])
inline String_t* JsonConvert_SerializeObject_TisManifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10_m053A2025857A7AB59C796091DEFF8B9241219062 (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * ___inObject0, JsonConverterU5BU5D_t8327F3FEA5C837FBE4A4A8503B5C0B1AD46A5154* ___customConverters1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 *, JsonConverterU5BU5D_t8327F3FEA5C837FBE4A4A8503B5C0B1AD46A5154*, const RuntimeMethod*))JsonConvert_SerializeObject_TisRuntimeObject_m5AEC5FC801A5FE6A9123F31305B87CB206C0DEA0_gshared)(___inObject0, ___customConverters1, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>::.ctor()
inline void List_1__ctor_m06D4213D813A14DE380DD5156140CC121094F165 (List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Boolean Meta.Conduit.ManifestAction::Equals(Meta.Conduit.ManifestAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestAction_Equals_m8099A8FA2624F0E99C5F6DCF85D3043CD760FF3B (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * ___other0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestAction::get_Aliases()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ManifestAction_get_Aliases_m09A1420BDCF18F4E0B7DE5E14EE8B94DC682488B_inline (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::SequenceEqual<Meta.Conduit.ManifestParameter>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_SequenceEqual_TisManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D_mE3B5E7FEB795EC6B7F5072019340030374D9FBC4 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisRuntimeObject_m9A9C2C960A18BA5F7E0052D765F735E9A8C907E2_gshared)(___first0, ___second1, method);
}
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_SequenceEqual_TisString_t_m6725D76BF34DF9B9C48E007FEAD6C122CE4AEC17 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisRuntimeObject_m9A9C2C960A18BA5F7E0052D765F735E9A8C907E2_gshared)(___first0, ___second1, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.WitKeyword>::.ctor()
inline void List_1__ctor_mE151EBAE39F9F93BB13D350B3A8D9F960F25E9B3 (List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.List`1<Meta.Conduit.WitKeyword> Meta.Conduit.ManifestEntity::get_Values()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 * ManifestEntity_get_Values_mF1AA90A3B30EAD99ACB8827089305AE2DB2092C7_inline (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Meta.Conduit.WitKeyword>::get_Count()
inline int32_t List_1_get_Count_m4CC9C4E23941AFFE5744F9F7E2BFAF5CA74593CA_inline (List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Meta.Conduit.WitKeyword>::get_Item(System.Int32)
inline WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0 * List_1_get_Item_m9ED8474217B5B87FA7A5585EB65D5DD05C07BCB2_inline (List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0 * (*) (List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// Meta.WitAi.Data.Info.WitEntityKeywordInfo Meta.Conduit.WitKeyword::GetAsInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12  WitKeyword_GetAsInfo_mD3F1F9FF0538EDD39B731CDF48761C09CAB37894 (WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0 * __this, const RuntimeMethod* method);
// System.Boolean Meta.Conduit.ManifestEntity::Equals(Meta.Conduit.ManifestEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestEntity_Equals_mE390697D4BC7FDEE97F71AD95C032B828D682EB7 (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * ___other0, const RuntimeMethod* method);
// System.String Meta.Conduit.ManifestEntity::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Type_mF29EDA2CAB1D4CA52EEEF9698033233BBE42057A_inline (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::SequenceEqual<Meta.Conduit.WitKeyword>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_SequenceEqual_TisWitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0_mC6B6D969A583547F3999D1ACCB1D9B050E29D55B (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisRuntimeObject_m9A9C2C960A18BA5F7E0052D765F735E9A8C907E2_gshared)(___first0, ___second1, method);
}
// !!0 UnityEngine.Resources::Load<UnityEngine.TextAsset>(System.String)
inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * Resources_Load_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_mCC9DF0627043A941E7E781AF7E452E8382475F67 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD47CC322E1CBCFE7AB4E22D728C12B44986FCB88_gshared)(___path0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218 (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * __this, const RuntimeMethod* method);
// Meta.Conduit.Manifest Meta.Conduit.ManifestLoader::LoadManifestFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * ManifestLoader_LoadManifestFromString_m5BB338371F64DB1629DE4FB06F4B4931594CD06F (ManifestLoader_t685F0D1722130EE51F7064DCF379C08ED1DC64EF * __this, String_t* ___manifestText0, const RuntimeMethod* method);
// !!0 Meta.WitAi.Json.JsonConvert::DeserializeObject<Meta.Conduit.Manifest>(System.String,Meta.WitAi.Json.JsonConverter[])
inline Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * JsonConvert_DeserializeObject_TisManifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10_m3E6717CB761093A2EBEB63FA9F64D74DE6DD4C35 (String_t* ___jsonString0, JsonConverterU5BU5D_t8327F3FEA5C837FBE4A4A8503B5C0B1AD46A5154* ___customConverters1, const RuntimeMethod* method)
{
	return ((  Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * (*) (String_t*, JsonConverterU5BU5D_t8327F3FEA5C837FBE4A4A8503B5C0B1AD46A5154*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_mC9AD66A9CB9226EB43F1BC78C89D3F281B252935_gshared)(___jsonString0, ___customConverters1, method);
}
// System.Boolean Meta.Conduit.Manifest::ResolveActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ResolveActions_m8F30EE572C6406B267DC6317B54426F2FA110E45 (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, const RuntimeMethod* method);
// System.Void Meta.WitAi.VLog::D(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_D_mB8DFC679557449B0F18DC36EB5CE5F9A35B8D67C (RuntimeObject * ___log0, const RuntimeMethod* method);
// System.String Meta.Conduit.ConduitUtilities::DelimitWithUnderscores(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_DelimitWithUnderscores_m7947C6CCF6F9D7695E1784C057200667EFE72F5A (String_t* ___input0, const RuntimeMethod* method);
// System.Boolean Meta.Conduit.ManifestParameter::Equals(Meta.Conduit.ManifestParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestParameter_Equals_mE8A904569240E6322DF3D963402C68F9FFEA6C5E (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * ___other0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestParameter::get_Aliases()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ManifestParameter_get_Aliases_mEFC955CEBE01F9F22EE08C426C3CC8CC793B06CB_inline (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, const RuntimeMethod* method);
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m7312E425C1DAD2C95188319D860160AD2BD53857 (RuntimeObject * ___objA0, RuntimeObject * ___objB1, const RuntimeMethod* method);
// System.String Meta.Conduit.ManifestParameter::get_EntityType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_EntityType_mC1B6C48D44C1B7D526CFDF20E3DB58C557C0DE9D (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Keys()
inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.String>>::Clear()
inline void Dictionary_2_Clear_m561A89CC21043683561EDCB2D33A0B85B27DA71C (Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E *, const RuntimeMethod*))Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Meta.Conduit.ConduitParameterValue>::.ctor()
inline void Dictionary_2__ctor_m1B2E51BDF1C42CA5212FD2B19B8F24952DB654CC (Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869 *, const RuntimeMethod*))Dictionary_2__ctor_m6B267189C56C5C2DC9CB46A79BDBBDE2BFD18444_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<System.Type> Meta.Conduit.ParameterProvider::GetParameterTypes(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParameterProvider_GetParameterTypes_mA670F705F61A8C169B965F9AAA0DD6D41335ACD2 (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, String_t* ___typeString0, String_t* ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.String>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mCE3DC4CE93CB0306474D93FE078A433EF2270DCF (Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E *, Type_t *, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.String>>::Add(!0,!1)
inline void Dictionary_2_Add_m68080B54B36C06329C1EFF46DE3C4F9CBCCF5986 (Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E * __this, Type_t * ___key0, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E *, Type_t *, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.String>>::get_Item(!0)
inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * Dictionary_2_get_Item_m0588E9512D07E941A36F7C1E6674EB62D56048DE (Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * (*) (Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E *, Type_t *, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !!0 System.Linq.Enumerable::First<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>)
inline Type_t * Enumerable_First_TisType_t_mED4F94DAE69D76F9F487EAF7E730ECF9CC02E056 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_m191CE082915F09BBEF1FA66B7F02B14D919A0FEA_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Meta.Conduit.ConduitParameterValue>::Add(!0,!1)
inline void Dictionary_2_Add_m4F370D06B42A39DE8D4CC4ECA25591BBB195B0E6 (Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869 * __this, String_t* ___key0, ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869 *, String_t*, ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA , const RuntimeMethod*))Dictionary_2_Add_mB7C8D09CEC1B1DC20B66A7C0F966DB062D8A4CC1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Meta.Conduit.ParameterProvider::PopulateParameters(System.Collections.Generic.Dictionary`2<System.String,Meta.Conduit.ConduitParameterValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider_PopulateParameters_m6181395A0CED8A88D5791791B4FF44672508CEE5 (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869 * ___actualParameters0, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m9A0B3D61D5BB899BE4186A29CC8314CF2B546345 (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * __this, Type_t * ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 *, Type_t *, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
inline void Dictionary_2_Clear_m0999E28E34F97E04A673BFF5FFD3AAA7EBA1AB92 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,Meta.Conduit.ConduitParameterValue>::GetEnumerator()
inline Enumerator_t185B41F12B8E86468B067CF0095A2AEE51AC178B  Dictionary_2_GetEnumerator_mBC160C6C503CBBE8C1192D6800255B0930F5DFFA (Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t185B41F12B8E86468B067CF0095A2AEE51AC178B  (*) (Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m80A7DDBB955AC38D8F2F2510A000251D3C8D1790_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,Meta.Conduit.ConduitParameterValue>::get_Current()
inline KeyValuePair_2_t93E81114395271F14B1553A39149B212EAFCDC8E  Enumerator_get_Current_m165F8ED4B5B749E6EA45C3254BAE647DD035F819_inline (Enumerator_t185B41F12B8E86468B067CF0095A2AEE51AC178B * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t93E81114395271F14B1553A39149B212EAFCDC8E  (*) (Enumerator_t185B41F12B8E86468B067CF0095A2AEE51AC178B *, const RuntimeMethod*))Enumerator_get_Current_m440B5511FA222C4515E15D86DAB85DAFB1470A95_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,Meta.Conduit.ConduitParameterValue>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mE3FC8BDC999C0448B8CADE7BF2A72F332783526C_inline (KeyValuePair_2_t93E81114395271F14B1553A39149B212EAFCDC8E * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t93E81114395271F14B1553A39149B212EAFCDC8E *, const RuntimeMethod*))KeyValuePair_2_get_Key_m91073CF62C4B1563AED4656DEB550AFAE7A83899_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,Meta.Conduit.ConduitParameterValue>::get_Value()
inline ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA  KeyValuePair_2_get_Value_m7A57A7B3B30CA021D78890684D5B338E39A55F63_inline (KeyValuePair_2_t93E81114395271F14B1553A39149B212EAFCDC8E * __this, const RuntimeMethod* method)
{
	return ((  ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA  (*) (KeyValuePair_2_t93E81114395271F14B1553A39149B212EAFCDC8E *, const RuntimeMethod*))KeyValuePair_2_get_Value_mB85394DB1C1FD3095EA2C4D3189065FE8D130DC3_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,Meta.Conduit.ConduitParameterValue>::MoveNext()
inline bool Enumerator_MoveNext_m66B5AC836B99AB9EEF77796B217E18E1AEB99F58 (Enumerator_t185B41F12B8E86468B067CF0095A2AEE51AC178B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t185B41F12B8E86468B067CF0095A2AEE51AC178B *, const RuntimeMethod*))Enumerator_MoveNext_m4EC433D46466AD87B60C65B707EDD549DF9183F3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Meta.Conduit.ConduitParameterValue>::Dispose()
inline void Enumerator_Dispose_m32246B37DADF3CB4FD163A464051ACA9CC43F658 (Enumerator_t185B41F12B8E86468B067CF0095A2AEE51AC178B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t185B41F12B8E86468B067CF0095A2AEE51AC178B *, const RuntimeMethod*))Enumerator_Dispose_m765F1AF9D690D6B2F0A362C5AB9C1CD0882603CA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Clear()
inline void Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Meta.Conduit.ParameterProvider::GetActualParameterName(System.Reflection.ParameterInfo,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParameterProvider_GetActualParameterName_m2021633F3F3C46CE0AD7B5723DC03CE7D9853426 (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___formalParameter0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___parameterMap1, bool ___relaxed2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mAD5155E7BDF9B0B146468C59E19A3190C07D1D06 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_Parse_mBF078678C6B2C5116261811AFBBFAE524D4D4BB4 (Type_t * ___enumType0, String_t* ___value1, bool ___ignoreCase2, const RuntimeMethod* method);
// System.Object System.Convert::ChangeType(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Convert_ChangeType_m39FC73F25D46B8B5D60E8F59B3BFCDD891E29669 (RuntimeObject * ___value0, Type_t * ___conversionType1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
inline Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15  Dictionary_2_GetEnumerator_m2081C22E67B979AFF0710DA64B3BFE895BAE1635 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15  (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_Current()
inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  Enumerator_get_Current_m5D01A6607C2199E7A7B5856E49119C26FE5327BB_inline (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  (*) (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m27DDAE22558733AB59D955136A7EF5AF05B1F4CE (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::Dispose()
inline void Enumerator_Dispose_m7D3C5AB9967DFDFE269DC54DF367D0B21C59E356 (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.String>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m28B212A1EECEDE5DE08D65B4E93D7EB10ACE9C98 (Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E * __this, Type_t * ___key0, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E *, Type_t *, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.String>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mC063FA870A55FA56E013AB91DAD7C7BE87C42C0F (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 *, Type_t *, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Type,System.String>::get_Item(!0)
inline String_t* Dictionary_2_get_Item_m79FCB5C0537CAA6EA8D745C5ED168F5F2D9BC6A0 (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 *, Type_t *, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::get_Count()
inline int32_t KeyCollection_get_Count_m177354EC38675B4C9D014E7A800B83C21847C690 (KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 *, const RuntimeMethod*))KeyCollection_get_Count_m63E6DF1AA7AE0E00DC3800A837256C5B258AC71D_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>::GetEnumerator()
inline Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF  KeyCollection_GetEnumerator_mA7A3EDE79F7F742613170703D44941D7EBE09E7D (KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF  (*) (KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 *, const RuntimeMethod*))KeyCollection_GetEnumerator_m6B4DC134BB6777F8C99D26315F359E069004CF13_gshared)(__this, method);
}
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>::get_Current()
inline String_t* Enumerator_get_Current_m557855CD7AB5535158BEBB5F773B80036E88369E_inline (Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF *, const RuntimeMethod*))Enumerator_get_Current_mF254C3BDEA9F0829958522BF88C75DE8BEC4961F_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m4D8899097FFAE4593AA535D2A9311C7884F75492 (Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF *, const RuntimeMethod*))Enumerator_MoveNext_m3714ECE30727E77F475635710D707743B6D930E6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>::Dispose()
inline void Enumerator_Dispose_m794A8065F96A52A636116CD7475B246BD39574CA (Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF *, const RuntimeMethod*))Enumerator_Dispose_m5440E65428351CA6F19B1804D172DCB5E9C59C98_gshared)(__this, method);
}
// System.Void Meta.Conduit.ParameterProvider/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mFC316B2DEACA1E0C1F7DB9EF79398484C2870F33 (U3CU3Ec__DisplayClass21_0_tD992F214B82EB3D359157B4A57D1FD567534695B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Type>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m9A6E5C2A0932D66C3D38B64E417811BBD0DEE219 (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
inline void List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Type>::get_Item(!0)
inline Type_t * Dictionary_2_get_Item_m5EE5B257E761957633252673F7CE743880A8E17C (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.Type>::Add(!0)
inline void List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * __this, Type_t * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *, Type_t *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Type>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m99949C67DA6DC570336F1CCED45ADF8287252128 (Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Type>>::get_Item(!0)
inline List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * Dictionary_2_get_Item_mC42867F2E8D1AB134501007C7AD3AFF220D75BF4 (Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * (*) (Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
inline int32_t List_1_get_Count_m1B765A1E8C1E378192FF47343E7F963528EC0C68_inline (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Func`2<System.Type,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D (Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisType_t_m98A76BE80710D7FA14000B0C39096DFA6092DFEA (RuntimeObject* ___source0, Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m016E64EEAC35EA6D2A28616261EA1C34A4365B4A_gshared)(___source0, ___predicate1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * Enumerable_ToList_TisType_t_m0097E5DDAD2068C1D084460E5324F7BA957309C7 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mEB3492D1398C284020E4C9C9E32397DFCD9C6FE7_gshared)(___source0, method);
}
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0)
inline String_t* Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ParameterProvider::GetParameterNamesOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ParameterProvider_GetParameterNamesOfType_m86CAEB85D54015496B46522D75193864885E4377 (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, Type_t * ___targetType0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ParameterProvider::get_AllParameterNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ParameterProvider_get_AllParameterNames_m5F1D9A6D13A47E9BD2057A11DDEC7F6111E25855 (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m0522A013F5616F75C1A52BC224B50B35FA3DDA5E (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
inline void Dictionary_2__ctor_m079AE1790DB8218117772D466378DF3BF739FF56 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m42F33AB093A9AAB17C558FDBFF010443D1048400_gshared)(__this, ___comparer0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
inline void Dictionary_2__ctor_m4757015DBB2285304C7222BE41A89FCB05BE5BC0 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m42F33AB093A9AAB17C558FDBFF010443D1048400_gshared)(__this, ___comparer0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.String>>::.ctor()
inline void Dictionary_2__ctor_mA90F246C9CCA3C9E6B7A0D461973B8E3C27A96E3 (Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.String>::.ctor()
inline void Dictionary_2__ctor_m98D1D89FA627EFF725A6112AFFBD3CBF6CB8CE27 (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Type>>::.ctor()
inline void Dictionary_2__ctor_mD9C98FB1F414E695E642E6EAA4D2B66B3A03F295 (Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Type>>::Add(!0,!1)
inline void Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668 (Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 * __this, String_t* ___key0, List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 *, String_t*, List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Meta.Conduit.WitKeyword::.ctor(System.String,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitKeyword__ctor_mA24856B88B54C49C4ED1B11D89714F8EF5C643B8 (WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0 * __this, String_t* ___keyword0, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___synonyms1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
inline void HashSet_1__ctor_m2D141B160C366DB0A2B24DA4A97CC8653C77800E (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m2AB3E1DC3FE63AC2086C2DCFCE5B1B407A33FAEB_gshared)(__this, ___comparer0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean Meta.Conduit.WitKeyword::Equals(Meta.Conduit.WitKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitKeyword_Equals_m340843728FA629787497D02B62E6707CE88FA2B3 (WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0 * __this, WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0 * ___other0, const RuntimeMethod* method);
// System.Void Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m33595A50E6FC00C90517ABF2D0B3B90DB8215912 (U3CU3Ec__DisplayClass4_0_t251974C43BC9D4A07E86E1FF7970519EB83921E0 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<Meta.Conduit.InvocationContext,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mDEB78D6F07C536567157D880423F4AE2B9EEBF7C (Func_2_tFCFE0C2B4CE4D6590B6FCE89CC6F1F45496AF49F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tFCFE0C2B4CE4D6590B6FCE89CC6F1F45496AF49F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<Meta.Conduit.InvocationContext>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisInvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971_m25314D09EB244234C63A11E5F58208A53F541C27 (RuntimeObject* ___source0, Func_2_tFCFE0C2B4CE4D6590B6FCE89CC6F1F45496AF49F * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFCFE0C2B4CE4D6590B6FCE89CC6F1F45496AF49F *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m016E64EEAC35EA6D2A28616261EA1C34A4365B4A_gshared)(___source0, ___predicate1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<Meta.Conduit.InvocationContext>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * Enumerable_ToList_TisInvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971_mCAE33F58DF534893BEDD8E6816DC4C2FFD6250D9 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mEB3492D1398C284020E4C9C9E32397DFCD9C6FE7_gshared)(___source0, method);
}
// System.Void Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mE8982F313BC5320E3B925DC65090E440EB1F955D (U3CU3Ec__DisplayClass5_0_t0A464F4B91F35D8667CDC0F09A9E1C7C842EF246 * __this, const RuntimeMethod* method);
// System.Boolean Meta.Conduit.InvocationContext::get_ValidatePartial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InvocationContext_get_ValidatePartial_m28E929E67B00C21745F3A352C1C3DBC37191FEF7_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, const RuntimeMethod* method);
// System.Single Meta.Conduit.InvocationContext::get_MinConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InvocationContext_get_MinConfidence_m51849B1141BEC4FE9A78A91ECC79C7A887F2FE6F_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, const RuntimeMethod* method);
// System.Single Meta.Conduit.InvocationContext::get_MaxConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InvocationContext_get_MaxConfidence_m744A5CA4356E4636030A1785C0D93D1CF1A52215_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Type>::.ctor()
inline void HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Type>::Contains(!0)
inline bool HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3 (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * __this, Type_t * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 *, Type_t *, const RuntimeMethod*))HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Type>::Add(!0)
inline bool HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6 (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * __this, Type_t * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 *, Type_t *, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Void System.Func`2<System.String,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6397C103AFDCE68F75EDF44FB493A9B6651F7AFE (Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisString_t_m271D41E8381DE1CDAC5C54BDCDD26B76A63D7E02 (RuntimeObject* ___source0, Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m016E64EEAC35EA6D2A28616261EA1C34A4365B4A_gshared)(___source0, ___predicate1, method);
}
// System.Void Meta.Conduit.InvocationContext::set_ParameterMap(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_ParameterMap_m1233C14215E6880AEF535DCAEC63FC3E3333ADDF_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___value0, const RuntimeMethod* method);
// System.Void Meta.Conduit.Manifest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m06DE2518A2516E8CDC24C942D734FB372A4BCAFD (U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3 * __this, const RuntimeMethod* method);
// System.Boolean Meta.Conduit.ParameterProvider::PerfectTypeMatch(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterProvider_PerfectTypeMatch_m4509B6BAC3CE6FF02EA643022C822060384F39AA (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, Type_t * ___targetType0, String_t* ___value1, const RuntimeMethod* method);
// System.Boolean Meta.Conduit.ConduitDispatcher/InvocationContextFilter::CompatibleInvocationContext(Meta.Conduit.InvocationContext,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvocationContextFilter_CompatibleInvocationContext_m112AA82195F134A0D8EF91C2F8086A645700E1C4 (InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653 * __this, InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * ___invocationContext0, float ___confidence1, bool ___partial2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070 (const RuntimeMethod* method);
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
// System.String Meta.Conduit.ConduitActionAttribute::get_Intent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitActionAttribute_get_Intent_m84D1C30D06B22872CEB2FB3E81E8E64407E47E04 (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, const RuntimeMethod* method)
{
	{
		// public string Intent { get; private set; }
		String_t* L_0 = __this->get_U3CIntentU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_Intent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Intent_m263CF9EFFE775B902A5FF7B333D11625C5962CFA (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Intent { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CIntentU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Single Meta.Conduit.ConduitActionAttribute::get_MinConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MinConfidence_mB80E03D4881A88E8F5BB25FB621C9AC73897228A (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, const RuntimeMethod* method)
{
	{
		// public float MinConfidence { get; protected set; }
		float L_0 = __this->get_U3CMinConfidenceU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_MinConfidence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MinConfidence_m04C5C6D94AEE7AFB00EA4B8D794AE5ED126CE136 (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MinConfidence { get; protected set; }
		float L_0 = ___value0;
		__this->set_U3CMinConfidenceU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Single Meta.Conduit.ConduitActionAttribute::get_MaxConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MaxConfidence_mB20819CD2B5B00EA7893A91326C4ED774FC9CCBC (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, const RuntimeMethod* method)
{
	{
		// public float MaxConfidence { get; protected set; }
		float L_0 = __this->get_U3CMaxConfidenceU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_MaxConfidence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MaxConfidence_mB79851401D1D596F9F136D5E3AABC368B45F9CA3 (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MaxConfidence { get; protected set; }
		float L_0 = ___value0;
		__this->set_U3CMaxConfidenceU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitActionAttribute::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ConduitActionAttribute_get_Aliases_m7F14239441AE67F6AE68768BE3DCE5D263772DF0 (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, const RuntimeMethod* method)
{
	{
		// public List<string> Aliases { get; private set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CAliasesU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_Aliases(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Aliases_m9937DAF4FEFE0EC7FEFCC7A982229111E9033816 (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method)
{
	{
		// public List<string> Aliases { get; private set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ___value0;
		__this->set_U3CAliasesU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Boolean Meta.Conduit.ConduitActionAttribute::get_ValidatePartial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitActionAttribute_get_ValidatePartial_mEC2E91582DF23F6016B4B14D6560CC501C8BAA6C (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, const RuntimeMethod* method)
{
	{
		// public bool ValidatePartial { get; private set; }
		bool L_0 = __this->get_U3CValidatePartialU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_ValidatePartial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_ValidatePartial_m33404154DB6082F0BF07F46DE3D431B7F39B3E60 (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ValidatePartial { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CValidatePartialU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute__ctor_m18E2CF3064E7C73B1A4CB2A02DD1491C25278839 (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, String_t* ___intent0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___aliases1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected ConduitActionAttribute(string intent = "", params string[] aliases)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// this.Intent = intent;
		String_t* L_0 = ___intent0;
		ConduitActionAttribute_set_Intent_m263CF9EFFE775B902A5FF7B333D11625C5962CFA_inline(__this, L_0, /*hidden argument*/NULL);
		// this.Aliases = aliases.ToList();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___aliases1;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2;
		L_2 = Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28((RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28_RuntimeMethod_var);
		ConduitActionAttribute_set_Aliases_m9937DAF4FEFE0EC7FEFCC7A982229111E9033816_inline(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::.ctor(System.String,System.Single,System.Single,System.Boolean,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute__ctor_m1C16B0DECDE370CD70BE8340276FBAA7D5A8F69D (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, String_t* ___intent0, float ___minConfidence1, float ___maxConfidence2, bool ___validatePartial3, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___aliases4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected ConduitActionAttribute(string intent = "", float minConfidence = DEFAULT_MIN_CONFIDENCE, float maxConfidence = DEFAULT_MAX_CONFIDENCE, bool validatePartial = false, params string[] aliases)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// this.Intent = intent;
		String_t* L_0 = ___intent0;
		ConduitActionAttribute_set_Intent_m263CF9EFFE775B902A5FF7B333D11625C5962CFA_inline(__this, L_0, /*hidden argument*/NULL);
		// this.MinConfidence = minConfidence;
		float L_1 = ___minConfidence1;
		ConduitActionAttribute_set_MinConfidence_m04C5C6D94AEE7AFB00EA4B8D794AE5ED126CE136_inline(__this, L_1, /*hidden argument*/NULL);
		// this.MaxConfidence = maxConfidence;
		float L_2 = ___maxConfidence2;
		ConduitActionAttribute_set_MaxConfidence_mB79851401D1D596F9F136D5E3AABC368B45F9CA3_inline(__this, L_2, /*hidden argument*/NULL);
		// this.ValidatePartial = validatePartial;
		bool L_3 = ___validatePartial3;
		ConduitActionAttribute_set_ValidatePartial_m33404154DB6082F0BF07F46DE3D431B7F39B3E60_inline(__this, L_3, /*hidden argument*/NULL);
		// this.Aliases = aliases.ToList();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___aliases4;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5;
		L_5 = Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28((RuntimeObject*)(RuntimeObject*)L_4, /*hidden argument*/Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28_RuntimeMethod_var);
		ConduitActionAttribute_set_Aliases_m9937DAF4FEFE0EC7FEFCC7A982229111E9033816_inline(__this, L_5, /*hidden argument*/NULL);
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
// System.Void Meta.Conduit.ConduitAssemblyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitAssemblyAttribute__ctor_m2F65A7E2DFE83EE810C4AC8D54EDA18D7D4BE87A (ConduitAssemblyAttribute_t6626115E4FCA563208711AA592066A808C55B60E * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// Meta.Conduit.Manifest Meta.Conduit.ConduitDispatcher::get_Manifest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * ConduitDispatcher_get_Manifest_m9AF54C493CDCF4B8784916D8766A4B08767217E7 (ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77 * __this, const RuntimeMethod* method)
{
	{
		// public Manifest Manifest { get; private set; }
		Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * L_0 = __this->get_U3CManifestU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitDispatcher::set_Manifest(Meta.Conduit.Manifest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitDispatcher_set_Manifest_m547F188C6EDA82E43B3992257AFBBCCCE60B6048 (ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77 * __this, Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * ___value0, const RuntimeMethod* method)
{
	{
		// public Manifest Manifest { get; private set; }
		Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * L_0 = ___value0;
		__this->set_U3CManifestU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Meta.Conduit.ConduitDispatcher::.ctor(Meta.Conduit.IManifestLoader,Meta.Conduit.IInstanceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitDispatcher__ctor_mE4A71725617B6D9466508F8B0251DF645E6433BC (ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77 * __this, RuntimeObject* ___manifestLoader0, RuntimeObject* ___instanceResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<string, string> _parameterToRoleMap = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_0, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		__this->set__parameterToRoleMap_3(L_0);
		// private readonly HashSet<string> _ignoredActionIds = new HashSet<string>();
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_1 = (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *)il2cpp_codegen_object_new(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818(L_1, /*hidden argument*/HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var);
		__this->set__ignoredActionIds_4(L_1);
		// public ConduitDispatcher(IManifestLoader manifestLoader, IInstanceResolver instanceResolver)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _manifestLoader = manifestLoader;
		RuntimeObject* L_2 = ___manifestLoader0;
		__this->set__manifestLoader_1(L_2);
		// _instanceResolver = instanceResolver;
		RuntimeObject* L_3 = ___instanceResolver1;
		__this->set__instanceResolver_2(L_3);
		// }
		return;
	}
}
// System.Void Meta.Conduit.ConduitDispatcher::Initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitDispatcher_Initialize_m4B9361622EE8F1C53293A9FFD4246D2D2B154603 (ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77 * __this, String_t* ___manifestFilePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m78298D1DA5CD9AC4EF8F9056672B3EECDD69EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC84BF194A0433203991A8480CC4003E613428369_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1014044CC91CB6DD27CE358570BEA1BFD8C9FD15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m76AD0C0FBBB414F5C7040C81D7453F4998A69E61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0E7DD0E65A51098263437149381C2227D1BF478E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4A5B91C6A96CDBD3DAB8D19E24596261354F7AB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IManifestLoader_tA865B9542FE00637BAAE371119EF3791BB0CC4C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6721C43E824DF8F95CE1CCA02D6AC0507616EDF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA00086B33B6560F41A54282B3BC1FCCC583D6FA1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_tED955948DC62CBF2AB8A0BB4E373B30619B250D3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (Manifest != null)
		Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * L_0;
		L_0 = ConduitDispatcher_get_Manifest_m9AF54C493CDCF4B8784916D8766A4B08767217E7_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Manifest = _manifestLoader.LoadManifest(manifestFilePath);
		RuntimeObject* L_1 = __this->get__manifestLoader_1();
		String_t* L_2 = ___manifestFilePath0;
		NullCheck(L_1);
		Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * L_3;
		L_3 = InterfaceFuncInvoker1< Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 *, String_t* >::Invoke(0 /* Meta.Conduit.Manifest Meta.Conduit.IManifestLoader::LoadManifest(System.String) */, IManifestLoader_tA865B9542FE00637BAAE371119EF3791BB0CC4C0_il2cpp_TypeInfo_var, L_1, L_2);
		ConduitDispatcher_set_Manifest_m547F188C6EDA82E43B3992257AFBBCCCE60B6048_inline(__this, L_3, /*hidden argument*/NULL);
		// if (Manifest == null)
		Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * L_4;
		L_4 = ConduitDispatcher_get_Manifest_m9AF54C493CDCF4B8784916D8766A4B08767217E7_inline(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// return;
		return;
	}

IL_0024:
	{
		// foreach (var action in Manifest.Actions)
		Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * L_5;
		L_5 = ConduitDispatcher_get_Manifest_m9AF54C493CDCF4B8784916D8766A4B08767217E7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A * L_6;
		L_6 = Manifest_get_Actions_mD8705A97A545D14BEFA977C6EC90F0135D4F8AC1_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1  L_7;
		L_7 = List_1_GetEnumerator_mA00086B33B6560F41A54282B3BC1FCCC583D6FA1(L_6, /*hidden argument*/List_1_GetEnumerator_mA00086B33B6560F41A54282B3BC1FCCC583D6FA1_RuntimeMethod_var);
		V_0 = L_7;
	}

IL_0035:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0096;
		}

IL_0037:
		{
			// foreach (var action in Manifest.Actions)
			ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * L_8;
			L_8 = Enumerator_get_Current_m0E7DD0E65A51098263437149381C2227D1BF478E_inline((Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m0E7DD0E65A51098263437149381C2227D1BF478E_RuntimeMethod_var);
			// foreach (var parameter in action.Parameters)
			NullCheck(L_8);
			List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * L_9;
			L_9 = ManifestAction_get_Parameters_m20870BE54DBD68586A57573B431585871B05B7AE_inline(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			Enumerator_tED955948DC62CBF2AB8A0BB4E373B30619B250D3  L_10;
			L_10 = List_1_GetEnumerator_m6721C43E824DF8F95CE1CCA02D6AC0507616EDF1(L_9, /*hidden argument*/List_1_GetEnumerator_m6721C43E824DF8F95CE1CCA02D6AC0507616EDF1_RuntimeMethod_var);
			V_1 = L_10;
		}

IL_0049:
		try
		{ // begin try (depth: 2)
			{
				goto IL_007d;
			}

IL_004b:
			{
				// foreach (var parameter in action.Parameters)
				ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * L_11;
				L_11 = Enumerator_get_Current_m4A5B91C6A96CDBD3DAB8D19E24596261354F7AB4_inline((Enumerator_tED955948DC62CBF2AB8A0BB4E373B30619B250D3 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m4A5B91C6A96CDBD3DAB8D19E24596261354F7AB4_RuntimeMethod_var);
				V_2 = L_11;
				// if (!_parameterToRoleMap.ContainsKey(parameter.InternalName))
				Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_12 = __this->get__parameterToRoleMap_3();
				ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * L_13 = V_2;
				NullCheck(L_13);
				String_t* L_14;
				L_14 = ManifestParameter_get_InternalName_m6A6ED9811F9520A02CE5D944BC6B50622DB0E7E1_inline(L_13, /*hidden argument*/NULL);
				NullCheck(L_12);
				bool L_15;
				L_15 = Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027(L_12, L_14, /*hidden argument*/Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_007d;
				}
			}

IL_0066:
			{
				// _parameterToRoleMap.Add(parameter.InternalName, parameter.QualifiedName);
				Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_16 = __this->get__parameterToRoleMap_3();
				ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * L_17 = V_2;
				NullCheck(L_17);
				String_t* L_18;
				L_18 = ManifestParameter_get_InternalName_m6A6ED9811F9520A02CE5D944BC6B50622DB0E7E1_inline(L_17, /*hidden argument*/NULL);
				ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * L_19 = V_2;
				NullCheck(L_19);
				String_t* L_20;
				L_20 = ManifestParameter_get_QualifiedName_m69BDD38050AC8A6478C08E6119EC84294764FB1A_inline(L_19, /*hidden argument*/NULL);
				NullCheck(L_16);
				Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_16, L_18, L_20, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
			}

IL_007d:
			{
				// foreach (var parameter in action.Parameters)
				bool L_21;
				L_21 = Enumerator_MoveNext_m1014044CC91CB6DD27CE358570BEA1BFD8C9FD15((Enumerator_tED955948DC62CBF2AB8A0BB4E373B30619B250D3 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m1014044CC91CB6DD27CE358570BEA1BFD8C9FD15_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_004b;
				}
			}

IL_0086:
			{
				IL2CPP_LEAVE(0x96, FINALLY_0088);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0088;
		}

FINALLY_0088:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m78298D1DA5CD9AC4EF8F9056672B3EECDD69EE7D((Enumerator_tED955948DC62CBF2AB8A0BB4E373B30619B250D3 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m78298D1DA5CD9AC4EF8F9056672B3EECDD69EE7D_RuntimeMethod_var);
			IL2CPP_END_FINALLY(136)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(136)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x96, IL_0096)
		}

IL_0096:
		{
			// foreach (var action in Manifest.Actions)
			bool L_22;
			L_22 = Enumerator_MoveNext_m76AD0C0FBBB414F5C7040C81D7453F4998A69E61((Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m76AD0C0FBBB414F5C7040C81D7453F4998A69E61_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_0037;
			}
		}

IL_009f:
		{
			IL2CPP_LEAVE(0xAF, FINALLY_00a1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a1;
	}

FINALLY_00a1:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC84BF194A0433203991A8480CC4003E613428369((Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mC84BF194A0433203991A8480CC4003E613428369_RuntimeMethod_var);
		IL2CPP_END_FINALLY(161)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(161)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAF, IL_00af)
	}

IL_00af:
	{
		// }
		return;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher::InvokeAction(Meta.Conduit.IParameterProvider,System.String,System.Boolean,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_InvokeAction_mA716CE69C7685155C57D0D4A361724EADBE08BB6 (ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77 * __this, RuntimeObject* ___parameterProvider0, String_t* ___actionId1, bool ___relaxed2, float ___confidence3, bool ___partial4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0F7A4287088CE1A412D82007974A0154334542ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3EFCF097994D900E6B1680090DDD25452B0FF186_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m65016ED0A0B788DA91DE3E3057C346D3F98B56EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParameterProvider_t24DAEC91D61D987886A2207BDB533BC16D57A4AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD669CD295A1C7CC224A25FEA0040AD83495ED949_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA2472BBDF2F508EF1BB7D360B28CB9FCD636255D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral829A632019B79F9E3E4862CB519E27236E6769D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC446C706102FE739C7C607DC8C5EA3A0D0694D6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA90F34C18252F7776BAD3E86E21337D970535D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE16E1FEE69D72AAD0655715C5885FBE040DD709);
		s_Il2CppMethodInitialized = true;
	}
	InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653 * V_0 = NULL;
	List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * V_1 = NULL;
	bool V_2 = false;
	Enumerator_t7DB259F5C9FC9242AEC9B44AA1FA051D1E91E200  V_3;
	memset((&V_3), 0, sizeof(V_3));
	InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * V_4 = NULL;
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// if (!Manifest.ContainsAction(actionId))
		Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * L_0;
		L_0 = ConduitDispatcher_get_Manifest_m9AF54C493CDCF4B8784916D8766A4B08767217E7_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___actionId1;
		NullCheck(L_0);
		bool L_2;
		L_2 = Manifest_ContainsAction_mCF03300D0B05617962CC35EDFBC991763B31F050(L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0040;
		}
	}
	{
		// if (!_ignoredActionIds.Contains(actionId))
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_3 = __this->get__ignoredActionIds_4();
		String_t* L_4 = ___actionId1;
		NullCheck(L_3);
		bool L_5;
		L_5 = HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF(L_3, L_4, /*hidden argument*/HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_003e;
		}
	}
	{
		// _ignoredActionIds.Add(actionId);
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_6 = __this->get__ignoredActionIds_4();
		String_t* L_7 = ___actionId1;
		NullCheck(L_6);
		bool L_8;
		L_8 = HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370(L_6, L_7, /*hidden argument*/HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		// VLog.W($"Conduit did not find intent '{actionId}' in manifest.");
		String_t* L_9 = ___actionId1;
		String_t* L_10;
		L_10 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(_stringLiteralEE16E1FEE69D72AAD0655715C5885FBE040DD709, L_9, _stringLiteralC446C706102FE739C7C607DC8C5EA3A0D0694D6E, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_W_m5F51329123EA2255E208EEA9BBC8480126413706(L_10, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// return false;
		return (bool)0;
	}

IL_0040:
	{
		// parameterProvider.PopulateRoles(_parameterToRoleMap);
		RuntimeObject* L_11 = ___parameterProvider0;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_12 = __this->get__parameterToRoleMap_3();
		NullCheck(L_11);
		InterfaceActionInvoker1< Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * >::Invoke(2 /* System.Void Meta.Conduit.IParameterProvider::PopulateRoles(System.Collections.Generic.Dictionary`2<System.String,System.String>) */, IParameterProvider_t24DAEC91D61D987886A2207BDB533BC16D57A4AC_il2cpp_TypeInfo_var, L_11, L_12);
		// var filter = new InvocationContextFilter(parameterProvider, Manifest.GetInvocationContexts(actionId), relaxed);
		RuntimeObject* L_13 = ___parameterProvider0;
		Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * L_14;
		L_14 = ConduitDispatcher_get_Manifest_m9AF54C493CDCF4B8784916D8766A4B08767217E7_inline(__this, /*hidden argument*/NULL);
		String_t* L_15 = ___actionId1;
		NullCheck(L_14);
		List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * L_16;
		L_16 = Manifest_GetInvocationContexts_m271750391476AF7F224F56757986724385A4AB73(L_14, L_15, /*hidden argument*/NULL);
		bool L_17 = ___relaxed2;
		InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653 * L_18 = (InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653 *)il2cpp_codegen_object_new(InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653_il2cpp_TypeInfo_var);
		InvocationContextFilter__ctor_mC917E85FD10A560AAEEBFA7B590EB1535ABAC603(L_18, L_13, L_16, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		// var invocationContexts = filter.ResolveInvocationContexts(actionId, confidence, partial);
		InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653 * L_19 = V_0;
		String_t* L_20 = ___actionId1;
		float L_21 = ___confidence3;
		bool L_22 = ___partial4;
		NullCheck(L_19);
		List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * L_23;
		L_23 = InvocationContextFilter_ResolveInvocationContexts_mD6C245435EAD0BDD5C1D31249A9B01445538770C(L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		// if (invocationContexts.Count < 1)
		List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_mA2472BBDF2F508EF1BB7D360B28CB9FCD636255D_inline(L_24, /*hidden argument*/List_1_get_Count_mA2472BBDF2F508EF1BB7D360B28CB9FCD636255D_RuntimeMethod_var);
		if ((((int32_t)L_25) >= ((int32_t)1)))
		{
			goto IL_00a3;
		}
	}
	{
		// if (!partial && filter.ResolveInvocationContexts(actionId, confidence, true).Count < 1)
		bool L_26 = ___partial4;
		if (L_26)
		{
			goto IL_00a1;
		}
	}
	{
		InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653 * L_27 = V_0;
		String_t* L_28 = ___actionId1;
		float L_29 = ___confidence3;
		NullCheck(L_27);
		List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * L_30;
		L_30 = InvocationContextFilter_ResolveInvocationContexts_mD6C245435EAD0BDD5C1D31249A9B01445538770C(L_27, L_28, L_29, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_mA2472BBDF2F508EF1BB7D360B28CB9FCD636255D_inline(L_30, /*hidden argument*/List_1_get_Count_mA2472BBDF2F508EF1BB7D360B28CB9FCD636255D_RuntimeMethod_var);
		if ((((int32_t)L_31) >= ((int32_t)1)))
		{
			goto IL_00a1;
		}
	}
	{
		// VLog.W($"Failed to resolve {("final")} method for {actionId} with supplied context\nParameters: {parameterProvider}");
		String_t* L_32 = ___actionId1;
		RuntimeObject* L_33 = ___parameterProvider0;
		String_t* L_34;
		L_34 = String_Format_mD0D523A440845BA7F58E68187E029DC9AB821CED(_stringLiteralCEA90F34C18252F7776BAD3E86E21337D970535D, _stringLiteral829A632019B79F9E3E4862CB519E27236E6769D1, L_32, L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_W_m5F51329123EA2255E208EEA9BBC8480126413706(L_34, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		// return false;
		return (bool)0;
	}

IL_00a3:
	{
		// var allSucceeded = true;
		V_2 = (bool)1;
		// foreach (var invocationContext in invocationContexts)
		List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * L_35 = V_1;
		NullCheck(L_35);
		Enumerator_t7DB259F5C9FC9242AEC9B44AA1FA051D1E91E200  L_36;
		L_36 = List_1_GetEnumerator_mD669CD295A1C7CC224A25FEA0040AD83495ED949(L_35, /*hidden argument*/List_1_GetEnumerator_mD669CD295A1C7CC224A25FEA0040AD83495ED949_RuntimeMethod_var);
		V_3 = L_36;
	}

IL_00ac:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ea;
		}

IL_00ae:
		{
			// foreach (var invocationContext in invocationContexts)
			InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_37;
			L_37 = Enumerator_get_Current_m65016ED0A0B788DA91DE3E3057C346D3F98B56EC_inline((Enumerator_t7DB259F5C9FC9242AEC9B44AA1FA051D1E91E200 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m65016ED0A0B788DA91DE3E3057C346D3F98B56EC_RuntimeMethod_var);
			V_4 = L_37;
		}

IL_00b7:
		try
		{ // begin try (depth: 2)
			{
				// if (!InvokeMethod(invocationContext, parameterProvider, relaxed))
				InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_38 = V_4;
				RuntimeObject* L_39 = ___parameterProvider0;
				bool L_40 = ___relaxed2;
				bool L_41;
				L_41 = ConduitDispatcher_InvokeMethod_mFCCF342756097ED31A75A7009F19333FBC2CB67C(__this, L_38, L_39, L_40, /*hidden argument*/NULL);
				if (L_41)
				{
					goto IL_00c5;
				}
			}

IL_00c3:
			{
				// allSucceeded = false;
				V_2 = (bool)0;
			}

IL_00c5:
			{
				// }
				goto IL_00ea;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00c7;
			}
			throw e;
		}

CATCH_00c7:
		{ // begin catch(System.Exception)
			// catch (Exception e)
			V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// VLog.W($"Failed to invoke {invocationContext.MethodInfo.Name}. {e}");
			InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_42 = V_4;
			NullCheck(L_42);
			MethodInfo_t * L_43;
			L_43 = InvocationContext_get_MethodInfo_m2D90A4508D1FF72455B08A101724A2B400999C83_inline(L_42, /*hidden argument*/NULL);
			NullCheck(L_43);
			String_t* L_44;
			L_44 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_43);
			Exception_t * L_45 = V_5;
			String_t* L_46;
			L_46 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1EDECAA096CC9146E798F06E367FD32D469ADF53)), L_44, L_45, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var)));
			VLog_W_m5F51329123EA2255E208EEA9BBC8480126413706(L_46, /*hidden argument*/NULL);
			// allSucceeded = false;
			V_2 = (bool)0;
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00ea;
		} // end catch (depth: 2)

IL_00ea:
		{
			// foreach (var invocationContext in invocationContexts)
			bool L_47;
			L_47 = Enumerator_MoveNext_m3EFCF097994D900E6B1680090DDD25452B0FF186((Enumerator_t7DB259F5C9FC9242AEC9B44AA1FA051D1E91E200 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m3EFCF097994D900E6B1680090DDD25452B0FF186_RuntimeMethod_var);
			if (L_47)
			{
				goto IL_00ae;
			}
		}

IL_00f3:
		{
			IL2CPP_LEAVE(0x103, FINALLY_00f5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f5;
	}

FINALLY_00f5:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0F7A4287088CE1A412D82007974A0154334542ED((Enumerator_t7DB259F5C9FC9242AEC9B44AA1FA051D1E91E200 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m0F7A4287088CE1A412D82007974A0154334542ED_RuntimeMethod_var);
		IL2CPP_END_FINALLY(245)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(245)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x103, IL_0103)
	}

IL_0103:
	{
		// return allSucceeded;
		bool L_48 = V_2;
		return L_48;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher::InvokeMethod(Meta.Conduit.InvocationContext,Meta.Conduit.IParameterProvider,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_InvokeMethod_mFCCF342756097ED31A75A7009F19333FBC2CB67C (ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77 * __this, InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * ___invocationContext0, RuntimeObject* ___parameterProvider1, bool ___relaxed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisRuntimeObject_mA5E1AD3350B1E7EB1FAE7562CA67C49A5193E1F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInstanceResolver_tFB48143BAD9EF24DE091AD0B4DAC60103C8F0599_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParameterProvider_t24DAEC91D61D987886A2207BDB533BC16D57A4AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF76DD643D55BE4936058374C0CC9C1AE6EBA60A);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* V_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_2 = NULL;
	int32_t V_3 = 0;
	StringBuilder_t * V_4 = NULL;
	Exception_t * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	RuntimeObject * V_9 = NULL;
	Exception_t * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		// var method = invocationContext.MethodInfo;
		InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_0 = ___invocationContext0;
		NullCheck(L_0);
		MethodInfo_t * L_1;
		L_1 = InvocationContext_get_MethodInfo_m2D90A4508D1FF72455B08A101724A2B400999C83_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var formalParametersInfo = method.GetParameters();
		MethodInfo_t * L_2 = V_0;
		NullCheck(L_2);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_3;
		L_3 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		V_1 = L_3;
		// var parameterObjects = new object[formalParametersInfo.Length];
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_4 = V_1;
		NullCheck(L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))));
		V_2 = L_5;
		// for (var i = 0; i < formalParametersInfo.Length; i++)
		V_3 = 0;
		goto IL_0067;
	}

IL_001b:
	{
		// var log = new StringBuilder();
		StringBuilder_t * L_6 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_6, /*hidden argument*/NULL);
		V_4 = L_6;
		// parameterObjects[i] = parameterProvider.GetParameterValue(formalParametersInfo[i],
		//     invocationContext.ParameterMap, relaxed);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = V_2;
		int32_t L_8 = V_3;
		RuntimeObject* L_9 = ___parameterProvider1;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_10 = V_1;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_14 = ___invocationContext0;
		NullCheck(L_14);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_15;
		L_15 = InvocationContext_get_ParameterMap_m39659277E2C1CBF5CDBCAA1525E60026C1A3869C_inline(L_14, /*hidden argument*/NULL);
		bool L_16 = ___relaxed2;
		NullCheck(L_9);
		RuntimeObject * L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject *, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 *, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, bool >::Invoke(6 /* System.Object Meta.Conduit.IParameterProvider::GetParameterValue(System.Reflection.ParameterInfo,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean) */, IParameterProvider_t24DAEC91D61D987886A2207BDB533BC16D57A4AC_il2cpp_TypeInfo_var, L_9, L_13, L_15, L_16);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_17);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RuntimeObject *)L_17);
		// if (parameterObjects[i] == null)
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = V_2;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if (L_21)
		{
			goto IL_0063;
		}
	}
	{
		// VLog.W(
		//     $"Failed to find method param while invoking\nType: {invocationContext.Type.FullName}\nMethod: {invocationContext.MethodInfo.Name}\nParameter Issues\n{log}");
		InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_22 = ___invocationContext0;
		NullCheck(L_22);
		Type_t * L_23;
		L_23 = InvocationContext_get_Type_m94663BEC59E45CCA072A6F895FF56EE1FEBB793B_inline(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_23);
		InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_25 = ___invocationContext0;
		NullCheck(L_25);
		MethodInfo_t * L_26;
		L_26 = InvocationContext_get_MethodInfo_m2D90A4508D1FF72455B08A101724A2B400999C83_inline(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_26);
		StringBuilder_t * L_28 = V_4;
		String_t* L_29;
		L_29 = String_Format_mD0D523A440845BA7F58E68187E029DC9AB821CED(_stringLiteralDF76DD643D55BE4936058374C0CC9C1AE6EBA60A, L_24, L_27, L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_W_m5F51329123EA2255E208EEA9BBC8480126413706(L_29, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0063:
	{
		// for (var i = 0; i < formalParametersInfo.Length; i++)
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_0067:
	{
		// for (var i = 0; i < formalParametersInfo.Length; i++)
		int32_t L_31 = V_3;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_32 = V_1;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		// if (method.IsStatic)
		MethodInfo_t * L_33 = V_0;
		NullCheck(L_33);
		bool L_34;
		L_34 = MethodBase_get_IsStatic_mDFDF51EDFE5DBDD5FE942564A1F56E3C7E3DE43F(L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00a5;
		}
	}

IL_0075:
	try
	{ // begin try (depth: 1)
		// method.Invoke(null, parameterObjects.ToArray());
		MethodInfo_t * L_35 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37;
		L_37 = Enumerable_ToArray_TisRuntimeObject_mA5E1AD3350B1E7EB1FAE7562CA67C49A5193E1F2((RuntimeObject*)(RuntimeObject*)L_36, /*hidden argument*/Enumerable_ToArray_TisRuntimeObject_mA5E1AD3350B1E7EB1FAE7562CA67C49A5193E1F2_RuntimeMethod_var);
		NullCheck(L_35);
		RuntimeObject * L_38;
		L_38 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_35, NULL, L_37, /*hidden argument*/NULL);
		// }
		goto IL_00a3;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0085;
		}
		throw e;
	}

CATCH_0085:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// VLog.W($"Failed to invoke static method {method.Name}. {e}");
		MethodInfo_t * L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_39);
		Exception_t * L_41 = V_5;
		String_t* L_42;
		L_42 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF19C581C636A926E20F7D783DF0F1AE22C19E0B9)), L_40, L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var)));
		VLog_W_m5F51329123EA2255E208EEA9BBC8480126413706(L_42, /*hidden argument*/NULL);
		// return false;
		V_6 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0116;
	} // end catch (depth: 1)

IL_00a3:
	{
		// return true;
		return (bool)1;
	}

IL_00a5:
	{
		// var allSucceeded = true;
		V_7 = (bool)1;
		// foreach (var obj in _instanceResolver.GetObjectsOfType(invocationContext.Type))
		RuntimeObject* L_43 = __this->get__instanceResolver_2();
		InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_44 = ___invocationContext0;
		NullCheck(L_44);
		Type_t * L_45;
		L_45 = InvocationContext_get_Type_m94663BEC59E45CCA072A6F895FF56EE1FEBB793B_inline(L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(0 /* System.Collections.Generic.IEnumerable`1<System.Object> Meta.Conduit.IInstanceResolver::GetObjectsOfType(System.Type) */, IInstanceResolver_tFB48143BAD9EF24DE091AD0B4DAC60103C8F0599_il2cpp_TypeInfo_var, L_43, L_45);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var, L_46);
		V_8 = L_47;
	}

IL_00c0:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00fc;
		}

IL_00c2:
		{
			// foreach (var obj in _instanceResolver.GetObjectsOfType(invocationContext.Type))
			RuntimeObject* L_48 = V_8;
			NullCheck(L_48);
			RuntimeObject * L_49;
			L_49 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E_il2cpp_TypeInfo_var, L_48);
			V_9 = L_49;
		}

IL_00cb:
		try
		{ // begin try (depth: 2)
			// method.Invoke(obj, parameterObjects.ToArray());
			MethodInfo_t * L_50 = V_0;
			RuntimeObject * L_51 = V_9;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_52 = V_2;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_53;
			L_53 = Enumerable_ToArray_TisRuntimeObject_mA5E1AD3350B1E7EB1FAE7562CA67C49A5193E1F2((RuntimeObject*)(RuntimeObject*)L_52, /*hidden argument*/Enumerable_ToArray_TisRuntimeObject_mA5E1AD3350B1E7EB1FAE7562CA67C49A5193E1F2_RuntimeMethod_var);
			NullCheck(L_50);
			RuntimeObject * L_54;
			L_54 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_50, L_51, L_53, /*hidden argument*/NULL);
			// }
			goto IL_00fc;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00dc;
			}
			throw e;
		}

CATCH_00dc:
		{ // begin catch(System.Exception)
			// catch (Exception e)
			V_10 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// VLog.W($"Failed to invoke method {method.Name}. {e} on {obj}");
			MethodInfo_t * L_55 = V_0;
			NullCheck(L_55);
			String_t* L_56;
			L_56 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_55);
			Exception_t * L_57 = V_10;
			RuntimeObject * L_58 = V_9;
			String_t* L_59;
			L_59 = String_Format_mD0D523A440845BA7F58E68187E029DC9AB821CED(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE15B6F2D7831CA81037E8DCF7B3F54A8A2AD80BC)), L_56, L_57, L_58, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var)));
			VLog_W_m5F51329123EA2255E208EEA9BBC8480126413706(L_59, /*hidden argument*/NULL);
			// allSucceeded = false;
			V_7 = (bool)0;
			// continue;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00fc;
		} // end catch (depth: 2)

IL_00fc:
		{
			// foreach (var obj in _instanceResolver.GetObjectsOfType(invocationContext.Type))
			RuntimeObject* L_60 = V_8;
			NullCheck(L_60);
			bool L_61;
			L_61 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_60);
			if (L_61)
			{
				goto IL_00c2;
			}
		}

IL_0105:
		{
			IL2CPP_LEAVE(0x113, FINALLY_0107);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0107;
	}

FINALLY_0107:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_62 = V_8;
			if (!L_62)
			{
				goto IL_0112;
			}
		}

IL_010b:
		{
			RuntimeObject* L_63 = V_8;
			NullCheck(L_63);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_63);
		}

IL_0112:
		{
			IL2CPP_END_FINALLY(263)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(263)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x113, IL_0113)
	}

IL_0113:
	{
		// return allSucceeded;
		bool L_64 = V_7;
		return L_64;
	}

IL_0116:
	{
		// }
		bool L_65 = V_6;
		return L_65;
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
// System.Void Meta.Conduit.ConduitDispatcherFactory::.ctor(Meta.Conduit.IInstanceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitDispatcherFactory__ctor_m996B44DE52447EDB5ADBCE72445847D4F770D948 (ConduitDispatcherFactory_t24D4569ADB5094B39031F83D8279D35FB5325E5D * __this, RuntimeObject* ___instanceResolver0, const RuntimeMethod* method)
{
	{
		// public ConduitDispatcherFactory(IInstanceResolver instanceResolver)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.instanceResolver = instanceResolver;
		RuntimeObject* L_0 = ___instanceResolver0;
		__this->set_instanceResolver_1(L_0);
		// }
		return;
	}
}
// Meta.Conduit.IConduitDispatcher Meta.Conduit.ConduitDispatcherFactory::GetDispatcher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConduitDispatcherFactory_GetDispatcher_m603B1B328101784064F51DC9D1B306035182CCB3 (ConduitDispatcherFactory_t24D4569ADB5094B39031F83D8279D35FB5325E5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitDispatcherFactory_t24D4569ADB5094B39031F83D8279D35FB5325E5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManifestLoader_t685F0D1722130EE51F7064DCF379C08ED1DC64EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// return instance = instance ??
		//                   new ConduitDispatcher(new ManifestLoader(), this.instanceResolver);
		RuntimeObject* L_0 = ((ConduitDispatcherFactory_t24D4569ADB5094B39031F83D8279D35FB5325E5D_StaticFields*)il2cpp_codegen_static_fields_for(ConduitDispatcherFactory_t24D4569ADB5094B39031F83D8279D35FB5325E5D_il2cpp_TypeInfo_var))->get_instance_0();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
	}
	{
		ManifestLoader_t685F0D1722130EE51F7064DCF379C08ED1DC64EF * L_2 = (ManifestLoader_t685F0D1722130EE51F7064DCF379C08ED1DC64EF *)il2cpp_codegen_object_new(ManifestLoader_t685F0D1722130EE51F7064DCF379C08ED1DC64EF_il2cpp_TypeInfo_var);
		ManifestLoader__ctor_mFA981E01FDE27FA33200E2471DE9E5EC9F0C4241(L_2, /*hidden argument*/NULL);
		RuntimeObject* L_3 = __this->get_instanceResolver_1();
		ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77 * L_4 = (ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77 *)il2cpp_codegen_object_new(ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77_il2cpp_TypeInfo_var);
		ConduitDispatcher__ctor_mE4A71725617B6D9466508F8B0251DF645E6433BC(L_4, L_2, L_3, /*hidden argument*/NULL);
		G_B2_0 = ((RuntimeObject*)(L_4));
	}

IL_0019:
	{
		RuntimeObject* L_5 = G_B2_0;
		((ConduitDispatcherFactory_t24D4569ADB5094B39031F83D8279D35FB5325E5D_StaticFields*)il2cpp_codegen_static_fields_for(ConduitDispatcherFactory_t24D4569ADB5094B39031F83D8279D35FB5325E5D_il2cpp_TypeInfo_var))->set_instance_0(L_5);
		return L_5;
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
// System.String Meta.Conduit.ConduitEntityAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitEntityAttribute_get_Name_mCB81A6848A69CC424ECA2DA9F628904CDD0A4294 (ConduitEntityAttribute_tF0B59DB09925F25FC1D54C97478E166A154A7CC9 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.String Meta.Conduit.ConduitEntityAttribute::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitEntityAttribute_get_ID_mBDFD7ACA389703E54EE0B9D81D0BE984B81EDEE4 (ConduitEntityAttribute_tF0B59DB09925F25FC1D54C97478E166A154A7CC9 * __this, const RuntimeMethod* method)
{
	{
		// public string ID { get; }
		String_t* L_0 = __this->get_U3CIDU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitEntityAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitEntityAttribute__ctor_mC9336CC9FD1D2FABC208497F198957FD6C7EBD97 (ConduitEntityAttribute_tF0B59DB09925F25FC1D54C97478E166A154A7CC9 * __this, String_t* ___name0, String_t* ___id1, const RuntimeMethod* method)
{
	{
		// public ConduitEntityAttribute(string name, string id = null)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// this.Name = name;
		String_t* L_0 = ___name0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		// this.ID = id;
		String_t* L_1 = ___id1;
		__this->set_U3CIDU3Ek__BackingField_1(L_1);
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
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitParameterAttribute::get_Examples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ConduitParameterAttribute_get_Examples_m5EB712E2D6BBA2B8990A966B7427584F763C19D2 (ConduitParameterAttribute_tC01224F078C01F1F35E12BFF18B2ED4D74AC4243 * __this, const RuntimeMethod* method)
{
	{
		// public List<string> Examples { get; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CExamplesU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitParameterAttribute::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ConduitParameterAttribute_get_Aliases_m0042E9D8A133FBD6C659B84727CDAE39613359F3 (ConduitParameterAttribute_tC01224F078C01F1F35E12BFF18B2ED4D74AC4243 * __this, const RuntimeMethod* method)
{
	{
		// public List<string> Aliases { get; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CAliasesU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitParameterAttribute::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitParameterAttribute__ctor_mA69D8E435C952AE369B5F7D5C66E673032FE08C0 (ConduitParameterAttribute_tC01224F078C01F1F35E12BFF18B2ED4D74AC4243 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___examples0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ConduitParameterAttribute(params string[] examples)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// this.Examples = examples.ToList();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___examples0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1;
		L_1 = Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28((RuntimeObject*)(RuntimeObject*)L_0, /*hidden argument*/Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28_RuntimeMethod_var);
		__this->set_U3CExamplesU3Ek__BackingField_0(L_1);
		// this.Aliases = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_2, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_U3CAliasesU3Ek__BackingField_1(L_2);
		// }
		return;
	}
}
// System.Void Meta.Conduit.ConduitParameterAttribute::.ctor(System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitParameterAttribute__ctor_m8A8BC0AD91ECA3BF11A82F938409DFDFE87F42C1 (ConduitParameterAttribute_tC01224F078C01F1F35E12BFF18B2ED4D74AC4243 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___aliases0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___examples1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ConduitParameterAttribute(string[] aliases, params string[] examples)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// this.Examples = examples.ToList();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___examples1;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1;
		L_1 = Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28((RuntimeObject*)(RuntimeObject*)L_0, /*hidden argument*/Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28_RuntimeMethod_var);
		__this->set_U3CExamplesU3Ek__BackingField_0(L_1);
		// this.Aliases = aliases.ToList();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = ___aliases0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3;
		L_3 = Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28((RuntimeObject*)(RuntimeObject*)L_2, /*hidden argument*/Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28_RuntimeMethod_var);
		__this->set_U3CAliasesU3Ek__BackingField_1(L_3);
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
// Conversion methods for marshalling of: Meta.Conduit.ConduitParameterValue
IL2CPP_EXTERN_C void ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA_marshal_pinvoke(const ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA& unmarshaled, ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA_marshaled_pinvoke& marshaled)
{
	Exception_t* ___DataType_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'DataType' of type 'ConduitParameterValue': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___DataType_1Exception, NULL);
}
IL2CPP_EXTERN_C void ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA_marshal_pinvoke_back(const ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA_marshaled_pinvoke& marshaled, ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA& unmarshaled)
{
	Exception_t* ___DataType_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'DataType' of type 'ConduitParameterValue': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___DataType_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Meta.Conduit.ConduitParameterValue
IL2CPP_EXTERN_C void ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA_marshal_pinvoke_cleanup(ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Meta.Conduit.ConduitParameterValue
IL2CPP_EXTERN_C void ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA_marshal_com(const ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA& unmarshaled, ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA_marshaled_com& marshaled)
{
	Exception_t* ___DataType_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'DataType' of type 'ConduitParameterValue': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___DataType_1Exception, NULL);
}
IL2CPP_EXTERN_C void ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA_marshal_com_back(const ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA_marshaled_com& marshaled, ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA& unmarshaled)
{
	Exception_t* ___DataType_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'DataType' of type 'ConduitParameterValue': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___DataType_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Meta.Conduit.ConduitParameterValue
IL2CPP_EXTERN_C void ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA_marshal_com_cleanup(ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA_marshaled_com& marshaled)
{
}
// System.Void Meta.Conduit.ConduitParameterValue::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitParameterValue__ctor_m2070DFD2B017E5CE5C1E6363E2438C45BEDDDCBD (ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// Value = value;
		RuntimeObject * L_0 = ___value0;
		__this->set_Value_0(L_0);
		// DataType = value.GetType();
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_1, /*hidden argument*/NULL);
		__this->set_DataType_1(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConduitParameterValue__ctor_m2070DFD2B017E5CE5C1E6363E2438C45BEDDDCBD_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA * _thisAdjusted = reinterpret_cast<ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA *>(__this + _offset);
	ConduitParameterValue__ctor_m2070DFD2B017E5CE5C1E6363E2438C45BEDDDCBD(_thisAdjusted, ___value0, method);
}
// System.Void Meta.Conduit.ConduitParameterValue::.ctor(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitParameterValue__ctor_m15B8609296722DD3D4446C6E077B90D877DDB08D (ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA * __this, RuntimeObject * ___value0, Type_t * ___dataType1, const RuntimeMethod* method)
{
	{
		// Value = value;
		RuntimeObject * L_0 = ___value0;
		__this->set_Value_0(L_0);
		// DataType = dataType;
		Type_t * L_1 = ___dataType1;
		__this->set_DataType_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConduitParameterValue__ctor_m15B8609296722DD3D4446C6E077B90D877DDB08D_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, Type_t * ___dataType1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA * _thisAdjusted = reinterpret_cast<ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA *>(__this + _offset);
	ConduitParameterValue__ctor_m15B8609296722DD3D4446C6E077B90D877DDB08D(_thisAdjusted, ___value0, ___dataType1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Meta.Conduit.ConduitUtilities::DelimitWithUnderscores(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_DelimitWithUnderscores_m7947C6CCF6F9D7695E1784C057200667EFE72F5A (String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30A2AC504761E7DD06F19C2F3AEF88096139945E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UnderscoreSplitter.Replace(input, "_$1");
		IL2CPP_RUNTIME_CLASS_INIT(ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964_il2cpp_TypeInfo_var);
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_0 = ((ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964_StaticFields*)il2cpp_codegen_static_fields_for(ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964_il2cpp_TypeInfo_var))->get_UnderscoreSplitter_0();
		String_t* L_1 = ___input0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = Regex_Replace_m47C8C4AF6A7F1D1A2728F9ADA7791F4EABA49E2F(L_0, L_1, _stringLiteral30A2AC504761E7DD06F19C2F3AEF88096139945E, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Meta.Conduit.ConduitUtilities::ContainsIgnoringWhitespace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitUtilities_ContainsIgnoringWhitespace_m0DCD5D8B725964A9337252A894673297E16E7D78 (String_t* ___stringToSearch0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stringToSearch = StripWhiteSpace(stringToSearch);
		String_t* L_0 = ___stringToSearch0;
		IL2CPP_RUNTIME_CLASS_INIT(ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = ConduitUtilities_StripWhiteSpace_mD5FEEFC5B9A3084F4B09A6E4FE0211E9675A0EE8(L_0, /*hidden argument*/NULL);
		___stringToSearch0 = L_1;
		// value = StripWhiteSpace(value);
		String_t* L_2 = ___value1;
		String_t* L_3;
		L_3 = ConduitUtilities_StripWhiteSpace_mD5FEEFC5B9A3084F4B09A6E4FE0211E9675A0EE8(L_2, /*hidden argument*/NULL);
		___value1 = L_3;
		// return stringToSearch.Contains(value);
		String_t* L_4 = ___stringToSearch0;
		String_t* L_5 = ___value1;
		NullCheck(L_4);
		bool L_6;
		L_6 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String Meta.Conduit.ConduitUtilities::StripWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_StripWhiteSpace_mD5FEEFC5B9A3084F4B09A6E4FE0211E9675A0EE8 (String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.IsNullOrEmpty(input) ? string.Empty :
		//     input.Replace(" ", string.Empty)
		//     .Replace("\n", string.Empty)
		//     .Replace("\r", string.Empty);
		String_t* L_0 = ___input0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_2 = ___input0;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_2);
		String_t* L_4;
		L_4 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_2, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_3, /*hidden argument*/NULL);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_4);
		String_t* L_6;
		L_6 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_4, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_5, /*hidden argument*/NULL);
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_6);
		String_t* L_8;
		L_8 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_6, _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0037:
	{
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_9;
	}
}
// System.String Meta.Conduit.ConduitUtilities::GetEntityEnumName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_GetEntityEnumName_mAB56F092E2565CCE95074826A66E3479C995D178 (String_t* ___entityRole0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SanitizeName(entityRole);
		String_t* L_0 = ___entityRole0;
		IL2CPP_RUNTIME_CLASS_INIT(ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = ConduitUtilities_SanitizeName_m711F0200DD27438001CAC6D160CE4B7F4D82911D(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Meta.Conduit.ConduitUtilities::GetEntityEnumValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_GetEntityEnumValue_mB65B5B0619E75ABA029021A05A4E98F9ADA1A1BD (String_t* ___entityValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SanitizeString(entityValue);
		String_t* L_0 = ___entityValue0;
		IL2CPP_RUNTIME_CLASS_INIT(ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = ConduitUtilities_SanitizeString_m3F1A9EFF4AFDBEEBECE8171FA807BA76A82A8528(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Meta.Conduit.ConduitUtilities::SanitizeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_SanitizeName_m711F0200DD27438001CAC6D160CE4B7F4D82911D (String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	{
		// if (string.IsNullOrEmpty(input))
		String_t* L_0 = ___input0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_2;
	}

IL_000e:
	{
		// string result = SanitizeString(input);
		String_t* L_3 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = ConduitUtilities_SanitizeString_m3F1A9EFF4AFDBEEBECE8171FA807BA76A82A8528(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// return result[0].ToString().ToUpper() + result.Substring(1);
		String_t* L_5 = V_0;
		NullCheck(L_5);
		Il2CppChar L_6;
		L_6 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_5, 0, /*hidden argument*/NULL);
		V_1 = L_6;
		String_t* L_7;
		L_7 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_ToUpper_m4BC629F8059C3E0C4E3F7C7E04DB50EBB0C1A05A(L_7, /*hidden argument*/NULL);
		String_t* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_9, 1, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(L_8, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.String Meta.Conduit.ConduitUtilities::SanitizeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_SanitizeString_m3F1A9EFF4AFDBEEBECE8171FA807BA76A82A8528 (String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82F0949FE776481A958565B508A97E357FF9EC29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1298000113B6711F92B8CD9D9A7FD1C6C03D07B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	{
		// if (string.IsNullOrEmpty(input))
		String_t* L_0 = ___input0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_2;
	}

IL_000e:
	{
		// string result = Regex.Replace(input, @"[^\w_-]", "");
		String_t* L_3 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Regex_Replace_mCD44330608E58AC19EA636370704ACE7D314C440(L_3, _stringLiteral82F0949FE776481A958565B508A97E357FF9EC29, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (Regex.IsMatch(result[0].ToString(), @"^\d$"))
		String_t* L_5 = V_0;
		NullCheck(L_5);
		Il2CppChar L_6;
		L_6 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_5, 0, /*hidden argument*/NULL);
		V_1 = L_6;
		String_t* L_7;
		L_7 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_1), /*hidden argument*/NULL);
		bool L_8;
		L_8 = Regex_IsMatch_mD4663DC55CBEF7B987A8B57186689664EDD047C4(L_7, _stringLiteralD1298000113B6711F92B8CD9D9A7FD1C6C03D07B, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		// result = $"N{result}";
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_0046:
	{
		// return result;
		String_t* L_11 = V_0;
		return L_11;
	}
}
// System.Void Meta.Conduit.ConduitUtilities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitUtilities__ctor_m82E380C7D102784AAA0322CEEBB811974250EF39 (ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Meta.Conduit.ConduitUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitUtilities__cctor_m39E10EBB38A31D9E5D21E355A973940C931A75DB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF19157630C2E302C33B88C5B6A53BB1D1F0B6896);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Regex UnderscoreSplitter = new Regex("(\\B[A-Z])", RegexOptions.Compiled);
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_0 = (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F *)il2cpp_codegen_object_new(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		Regex__ctor_m5BA9C047FEB3C93AD388668FA855CB1A63FB62A4(L_0, _stringLiteralF19157630C2E302C33B88C5B6A53BB1D1F0B6896, 8, /*hidden argument*/NULL);
		((ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964_StaticFields*)il2cpp_codegen_static_fields_for(ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964_il2cpp_TypeInfo_var))->set_UnderscoreSplitter_0(L_0);
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
// System.Void Meta.Conduit.ConduitValueAttribute::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitValueAttribute__ctor_m9A246F124FE27D76D1DB0DDE27E4F861C024B4DE (ConduitValueAttribute_tAF81995C3BC444F3FD0C173F3D12A935AE0D2D63 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___aliases0, const RuntimeMethod* method)
{
	{
		// public ConduitValueAttribute(params string[] aliases)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// this.Aliases = aliases;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___aliases0;
		__this->set_U3CAliasesU3Ek__BackingField_0(L_0);
		// }
		return;
	}
}
// System.String[] Meta.Conduit.ConduitValueAttribute::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConduitValueAttribute_get_Aliases_m389CCC0D7D48EDFD3F3C29BCF0CF21FC58470B91 (ConduitValueAttribute_tAF81995C3BC444F3FD0C173F3D12A935AE0D2D63 * __this, const RuntimeMethod* method)
{
	{
		// public string[] Aliases { get; }
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_U3CAliasesU3Ek__BackingField_0();
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
// System.Type Meta.Conduit.InvocationContext::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * InvocationContext_get_Type_m94663BEC59E45CCA072A6F895FF56EE1FEBB793B (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, const RuntimeMethod* method)
{
	{
		// public Type Type { get; set; }
		Type_t * L_0 = __this->get_U3CTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_Type(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_Type_m91583D68A2D990F3A048E11204058D1BC98220A2 (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type Type { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Reflection.MethodInfo Meta.Conduit.InvocationContext::get_MethodInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * InvocationContext_get_MethodInfo_m2D90A4508D1FF72455B08A101724A2B400999C83 (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, const RuntimeMethod* method)
{
	{
		// public MethodInfo MethodInfo { get; set; }
		MethodInfo_t * L_0 = __this->get_U3CMethodInfoU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_MethodInfo(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_MethodInfo_m6BB1EE81B39EB5123E85B883D08CED3CB227ADCD (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, MethodInfo_t * ___value0, const RuntimeMethod* method)
{
	{
		// public MethodInfo MethodInfo { get; set; }
		MethodInfo_t * L_0 = ___value0;
		__this->set_U3CMethodInfoU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Single Meta.Conduit.InvocationContext::get_MinConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InvocationContext_get_MinConfidence_m51849B1141BEC4FE9A78A91ECC79C7A887F2FE6F (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, const RuntimeMethod* method)
{
	{
		// public float MinConfidence { get; set; } = 0;
		float L_0 = __this->get_U3CMinConfidenceU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_MinConfidence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_MinConfidence_m1A8927D1523786E08BE1CBEC9EE0826968DE6AB7 (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MinConfidence { get; set; } = 0;
		float L_0 = ___value0;
		__this->set_U3CMinConfidenceU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Single Meta.Conduit.InvocationContext::get_MaxConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InvocationContext_get_MaxConfidence_m744A5CA4356E4636030A1785C0D93D1CF1A52215 (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, const RuntimeMethod* method)
{
	{
		// public float MaxConfidence { get; set; } = 1;
		float L_0 = __this->get_U3CMaxConfidenceU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_MaxConfidence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_MaxConfidence_m1FA275B7FCBDE491E03DAC59BC99C230F1D7F0A0 (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MaxConfidence { get; set; } = 1;
		float L_0 = ___value0;
		__this->set_U3CMaxConfidenceU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Boolean Meta.Conduit.InvocationContext::get_ValidatePartial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvocationContext_get_ValidatePartial_m28E929E67B00C21745F3A352C1C3DBC37191FEF7 (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, const RuntimeMethod* method)
{
	{
		// public bool ValidatePartial { get; set; } = false;
		bool L_0 = __this->get_U3CValidatePartialU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_ValidatePartial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_ValidatePartial_m3C83D984891A67A8E2661C5BB0BA021EE78B7964 (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ValidatePartial { get; set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CValidatePartialU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.Conduit.InvocationContext::get_ParameterMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * InvocationContext_get_ParameterMap_m39659277E2C1CBF5CDBCAA1525E60026C1A3869C (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, string> ParameterMap { get; set; } = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_U3CParameterMapU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_ParameterMap(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_ParameterMap_m1233C14215E6880AEF535DCAEC63FC3E3333ADDF (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___value0, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, string> ParameterMap { get; set; } = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = ___value0;
		__this->set_U3CParameterMapU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void Meta.Conduit.InvocationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext__ctor_mA76EE5D311EA14BD541DF075484F584A658E7E02 (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float MaxConfidence { get; set; } = 1;
		__this->set_U3CMaxConfidenceU3Ek__BackingField_3((1.0f));
		// public Dictionary<string, string> ParameterMap { get; set; } = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_0, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		__this->set_U3CParameterMapU3Ek__BackingField_5(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Meta.Conduit.Manifest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest__ctor_m5EE9B425D6A237BA381885339009A0F2E27E4AF6 (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m51A0F5229DC8846B716F75FD6F349F0E3A84E2DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAB54DC9EA2E016E35B204E9E26F3CF9F978B1234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m718CAEAAAA3CE7C939603B0D9E32658450EFA227_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9D78BB747F6D45B5B1FE1C8B3ABE4F3AC4C98ACF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ManifestEntity> Entities { get; set; } = new List<ManifestEntity>();
		List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855 * L_0 = (List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855 *)il2cpp_codegen_object_new(List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855_il2cpp_TypeInfo_var);
		List_1__ctor_m9D78BB747F6D45B5B1FE1C8B3ABE4F3AC4C98ACF(L_0, /*hidden argument*/List_1__ctor_m9D78BB747F6D45B5B1FE1C8B3ABE4F3AC4C98ACF_RuntimeMethod_var);
		__this->set_U3CEntitiesU3Ek__BackingField_3(L_0);
		// public List<ManifestAction> Actions { get; set; } = new List<ManifestAction>();
		List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A * L_1 = (List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A *)il2cpp_codegen_object_new(List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A_il2cpp_TypeInfo_var);
		List_1__ctor_m718CAEAAAA3CE7C939603B0D9E32658450EFA227(L_1, /*hidden argument*/List_1__ctor_m718CAEAAAA3CE7C939603B0D9E32658450EFA227_RuntimeMethod_var);
		__this->set_U3CActionsU3Ek__BackingField_4(L_1);
		// private readonly Dictionary<string, List<InvocationContext>> _methodLookup =
		//     new Dictionary<string, List<InvocationContext>>(StringComparer.OrdinalIgnoreCase);
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_2;
		L_2 = StringComparer_get_OrdinalIgnoreCase_m29F9466A219FDF7A4D61CB85C122A9B70579B2E2_inline(/*hidden argument*/NULL);
		Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A * L_3 = (Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A *)il2cpp_codegen_object_new(Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m51A0F5229DC8846B716F75FD6F349F0E3A84E2DF(L_3, L_2, /*hidden argument*/Dictionary_2__ctor_m51A0F5229DC8846B716F75FD6F349F0E3A84E2DF_RuntimeMethod_var);
		__this->set__methodLookup_5(L_3);
		// public Dictionary<string, Type> CustomEntityTypes { get; } = new Dictionary<string, Type>();
		Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_4 = (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 *)il2cpp_codegen_object_new(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mAB54DC9EA2E016E35B204E9E26F3CF9F978B1234(L_4, /*hidden argument*/Dictionary_2__ctor_mAB54DC9EA2E016E35B204E9E26F3CF9F978B1234_RuntimeMethod_var);
		__this->set_U3CCustomEntityTypesU3Ek__BackingField_6(L_4);
		// public Manifest() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public Manifest() { }
		return;
	}
}
// System.String Meta.Conduit.Manifest::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Manifest_get_ID_m3024465C37DE5BCEE80933529FE6B93A6BDC4D92 (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, const RuntimeMethod* method)
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->get_U3CIDU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_ID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_ID_m93D9E8BFD72D5E1E683D5D2DB420B40F0D3ECE97 (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string ID { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CIDU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Meta.Conduit.Manifest::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Manifest_get_Version_m5F47B5A959CD45A5F1CE5BBA9083C5EC84E6F248 (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, const RuntimeMethod* method)
{
	{
		// public string Version { get; set; }
		String_t* L_0 = __this->get_U3CVersionU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_Version(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_Version_mE6025C151F8BD6E8150F9BEF057226D552DA4FCE (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Version { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CVersionU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Meta.Conduit.Manifest::get_Domain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Manifest_get_Domain_mAA24580D53D38C1BE18F1BEB5FB7826E9D04E93C (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, const RuntimeMethod* method)
{
	{
		// public string Domain { get; set; }
		String_t* L_0 = __this->get_U3CDomainU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_Domain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_Domain_mFCC8FB48CD1242D930CC2193E3CD4BB1D5ECEF4A (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Domain { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CDomainU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity> Meta.Conduit.Manifest::get_Entities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855 * Manifest_get_Entities_mF45F3CF715A5EC40BE253EC1397FC058CD387D65 (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, const RuntimeMethod* method)
{
	{
		// public List<ManifestEntity> Entities { get; set; } = new List<ManifestEntity>();
		List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855 * L_0 = __this->get_U3CEntitiesU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_Entities(System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_Entities_m571B306731A0D5C392EE51652F9491E2D1A15152 (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855 * ___value0, const RuntimeMethod* method)
{
	{
		// public List<ManifestEntity> Entities { get; set; } = new List<ManifestEntity>();
		List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855 * L_0 = ___value0;
		__this->set_U3CEntitiesU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction> Meta.Conduit.Manifest::get_Actions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A * Manifest_get_Actions_mD8705A97A545D14BEFA977C6EC90F0135D4F8AC1 (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, const RuntimeMethod* method)
{
	{
		// public List<ManifestAction> Actions { get; set; } = new List<ManifestAction>();
		List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A * L_0 = __this->get_U3CActionsU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_Actions(System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_Actions_m9598E8D75278EA81E1611096659DFC7CA778F32A (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A * ___value0, const RuntimeMethod* method)
{
	{
		// public List<ManifestAction> Actions { get; set; } = new List<ManifestAction>();
		List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A * L_0 = ___value0;
		__this->set_U3CActionsU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Type> Meta.Conduit.Manifest::get_CustomEntityTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * Manifest_get_CustomEntityTypes_m9724BE86C733F32F09E3E093D5F9CB7E3F0B4AAE (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, Type> CustomEntityTypes { get; } = new Dictionary<string, Type>();
		Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_0 = __this->get_U3CCustomEntityTypesU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Boolean Meta.Conduit.Manifest::ResolveEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ResolveEntities_m2F62A7FDDD83880FA17C42778A4AFD60D3893BCE (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m54DA5467085BB6B286991F5B164EB4B1F57082D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m81106B7D133B878824A3E6FE4E50484C65A2F0FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6418FB7E50E86D52EE58C79FE28B214FFDE2DC6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD195752168D3CA865A7453D868E21BAE700D2749_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1A7C5FE9C17CD872D4FA29283FA03E6EEF24193B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manifest_ResolveEntities_m2F62A7FDDD83880FA17C42778A4AFD60D3893BCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m752788CA9E64FFC2DF70ABBDB8669E579849F4C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE718B85C732127DA06EC4DDA3E9F112B092F786);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t46048D80EDCB748CD5CCC0077F3EB883855AA012  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * V_2 = NULL;
	String_t* V_3 = NULL;
	Type_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	String_t* G_B5_0 = NULL;
	{
		// bool allResolved = true;
		V_0 = (bool)1;
		// foreach (var entity in Entities)
		List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855 * L_0;
		L_0 = Manifest_get_Entities_mF45F3CF715A5EC40BE253EC1397FC058CD387D65_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t46048D80EDCB748CD5CCC0077F3EB883855AA012  L_1;
		L_1 = List_1_GetEnumerator_m1A7C5FE9C17CD872D4FA29283FA03E6EEF24193B(L_0, /*hidden argument*/List_1_GetEnumerator_m1A7C5FE9C17CD872D4FA29283FA03E6EEF24193B_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008b;
		}

IL_0010:
		{
			// foreach (var entity in Entities)
			ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * L_2;
			L_2 = Enumerator_get_Current_mD195752168D3CA865A7453D868E21BAE700D2749_inline((Enumerator_t46048D80EDCB748CD5CCC0077F3EB883855AA012 *)(&V_1), /*hidden argument*/Enumerator_get_Current_mD195752168D3CA865A7453D868E21BAE700D2749_RuntimeMethod_var);
			V_2 = L_2;
			// var typeName = string.IsNullOrEmpty(entity.Namespace) ? entity.ID : $"{entity.Namespace}.{entity.ID}";
			ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * L_3 = V_2;
			NullCheck(L_3);
			String_t* L_4;
			L_4 = ManifestEntity_get_Namespace_m9F470413C55992958A2C08F80963486BA8567172_inline(L_3, /*hidden argument*/NULL);
			bool L_5;
			L_5 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_4, /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_003d;
			}
		}

IL_0025:
		{
			ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * L_6 = V_2;
			NullCheck(L_6);
			String_t* L_7;
			L_7 = ManifestEntity_get_Namespace_m9F470413C55992958A2C08F80963486BA8567172_inline(L_6, /*hidden argument*/NULL);
			ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * L_8 = V_2;
			NullCheck(L_8);
			String_t* L_9;
			L_9 = ManifestEntity_get_ID_m3B9958F8C96A39013CBC45DE69AC6CD8978A44EA_inline(L_8, /*hidden argument*/NULL);
			String_t* L_10;
			L_10 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(L_7, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_9, /*hidden argument*/NULL);
			G_B5_0 = L_10;
			goto IL_0043;
		}

IL_003d:
		{
			ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * L_11 = V_2;
			NullCheck(L_11);
			String_t* L_12;
			L_12 = ManifestEntity_get_ID_m3B9958F8C96A39013CBC45DE69AC6CD8978A44EA_inline(L_11, /*hidden argument*/NULL);
			G_B5_0 = L_12;
		}

IL_0043:
		{
			// var qualifiedTypeName = $"{typeName},{entity.Assembly}";
			ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * L_13 = V_2;
			NullCheck(L_13);
			String_t* L_14;
			L_14 = ManifestEntity_get_Assembly_m2E977627A6E8FE674FB8A354989EAC3F14EAEB06_inline(L_13, /*hidden argument*/NULL);
			String_t* L_15;
			L_15 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(G_B5_0, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_14, /*hidden argument*/NULL);
			V_3 = L_15;
			// var type = Type.GetType(qualifiedTypeName);
			String_t* L_16 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_17;
			L_17 = il2cpp_codegen_get_type(Type_GetType_m752788CA9E64FFC2DF70ABBDB8669E579849F4C3_RuntimeMethod_var, L_16, Manifest_ResolveEntities_m2F62A7FDDD83880FA17C42778A4AFD60D3893BCE_RuntimeMethod_var);
			V_4 = L_17;
			// if (type == null)
			Type_t * L_18 = V_4;
			bool L_19;
			L_19 = Type_op_Equality_m01CE523ADAD8D6348C8247353F7C1E5FA3031732(L_18, (Type_t *)NULL, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_0078;
			}
		}

IL_0066:
		{
			// VLog.E($"Failed to resolve type: {qualifiedTypeName}");
			String_t* L_20 = V_3;
			String_t* L_21;
			L_21 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralCE718B85C732127DA06EC4DDA3E9F112B092F786, L_20, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
			VLog_E_m933DD49354CCDE1DA69ACB4991F68B7003B2BD09(L_21, /*hidden argument*/NULL);
			// allResolved = false;
			V_0 = (bool)0;
		}

IL_0078:
		{
			// CustomEntityTypes[entity.Name] = type;
			Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_22;
			L_22 = Manifest_get_CustomEntityTypes_m9724BE86C733F32F09E3E093D5F9CB7E3F0B4AAE_inline(__this, /*hidden argument*/NULL);
			ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * L_23 = V_2;
			NullCheck(L_23);
			String_t* L_24;
			L_24 = ManifestEntity_get_Name_mB4D88A1CDB8DED1F4E5976249A7B50D81B119B5E_inline(L_23, /*hidden argument*/NULL);
			Type_t * L_25 = V_4;
			NullCheck(L_22);
			Dictionary_2_set_Item_m54DA5467085BB6B286991F5B164EB4B1F57082D3(L_22, L_24, L_25, /*hidden argument*/Dictionary_2_set_Item_m54DA5467085BB6B286991F5B164EB4B1F57082D3_RuntimeMethod_var);
		}

IL_008b:
		{
			// foreach (var entity in Entities)
			bool L_26;
			L_26 = Enumerator_MoveNext_m6418FB7E50E86D52EE58C79FE28B214FFDE2DC6A((Enumerator_t46048D80EDCB748CD5CCC0077F3EB883855AA012 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m6418FB7E50E86D52EE58C79FE28B214FFDE2DC6A_RuntimeMethod_var);
			if (L_26)
			{
				goto IL_0010;
			}
		}

IL_0097:
		{
			IL2CPP_LEAVE(0xA7, FINALLY_0099);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0099;
	}

FINALLY_0099:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m81106B7D133B878824A3E6FE4E50484C65A2F0FE((Enumerator_t46048D80EDCB748CD5CCC0077F3EB883855AA012 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m81106B7D133B878824A3E6FE4E50484C65A2F0FE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(153)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(153)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xA7, IL_00a7)
	}

IL_00a7:
	{
		// return allResolved;
		bool L_27 = V_0;
		return L_27;
	}
}
// System.Boolean Meta.Conduit.Manifest::ResolveActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ResolveActions_m8F30EE572C6406B267DC6317B54426F2FA110E45 (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1__ctor_m21DC8118E9261D3667F372E6A0B53B0505427674_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_tD48EB0E35206C00C67637769B711197EDC1EDC82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE189E1865AFCFC5469D25A007EFCF43D0ACCE217_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFA5667E9E7D3DC59C721751C6A020A45DF645929_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m39473D804BE400460EEBD0CC75980510183E9A1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m05B6EAA5A9B7253285E4287A1E666A1B26FBD403_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisRuntimeObject_m191CE082915F09BBEF1FA66B7F02B14D919A0FEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisList_1_t79F736795335714ABC337199FBF6AAA73558A6E1_mEA27EFD786DBCD22DF285092511AF4D929C570BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC84BF194A0433203991A8480CC4003E613428369_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m76AD0C0FBBB414F5C7040C81D7453F4998A69E61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0E7DD0E65A51098263437149381C2227D1BF478E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m9B4F5DC8EB5C5399B6F1183F80457805F00072B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tABC5D2B4AF92BE004DE38AADAD2AED77AD815246_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCB061DF39774B2BB951ACFC01A96706DF662C4F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tCF140AA36E460E0C5C7D58A3E6EC144A424439A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC5CE78031AB21C2BBFFDAD4FAF20CFC60914F0DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA00086B33B6560F41A54282B3BC1FCCC583D6FA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_mCB6637C0DF90E3E960F15E9DC0B566AF0C7F6EA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0E1DA99C500484FF7C9EB2D85D40EB378D3A8E70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m11541AE6ECA8C8CFE233279F4F7850D2EC11F2A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m528E3CA9DB52D328760704289BCF649BFAF221C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t79F736795335714ABC337199FBF6AAA73558A6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manifest_ResolveActions_m8F30EE572C6406B267DC6317B54426F2FA110E45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m752788CA9E64FFC2DF70ABBDB8669E579849F4C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CResolveActionsU3Eb__26_0_m68023485CC5863B64C4819A66E209376AFAB6E6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CResolveActionsU3Eb__26_1_m641846455F8965CF4E6081EC0AF9D2325F05303A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E3A4B6D33B5A752C5EF943BD7BFD2FCFC6572AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral699AC6096221581A5B617645650AB1ECDE7E264A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD9B14D4046ED1AD88F3E1F180FCBA71F134B53B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE718B85C732127DA06EC4DDA3E9F112B092F786);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	Type_t * V_7 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_8 = NULL;
	MethodInfo_t * V_9 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_10 = NULL;
	ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * V_11 = NULL;
	InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * V_12 = NULL;
	int32_t V_13 = 0;
	ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * V_14 = NULL;
	String_t* V_15 = NULL;
	RuntimeObject* V_16 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Func_2_tABC5D2B4AF92BE004DE38AADAD2AED77AD815246 * G_B23_0 = NULL;
	ValueCollection_t9B3D82D45C4D06438F35204E9F3461CA8FA8B4AA * G_B23_1 = NULL;
	Func_2_tABC5D2B4AF92BE004DE38AADAD2AED77AD815246 * G_B22_0 = NULL;
	ValueCollection_t9B3D82D45C4D06438F35204E9F3461CA8FA8B4AA * G_B22_1 = NULL;
	Comparison_1_tD48EB0E35206C00C67637769B711197EDC1EDC82 * G_B27_0 = NULL;
	List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * G_B27_1 = NULL;
	Comparison_1_tD48EB0E35206C00C67637769B711197EDC1EDC82 * G_B26_0 = NULL;
	List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * G_B26_1 = NULL;
	{
		// var resolvedAll = true;
		V_0 = (bool)1;
		// foreach (var action in this.Actions)
		List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A * L_0;
		L_0 = Manifest_get_Actions_mD8705A97A545D14BEFA977C6EC90F0135D4F8AC1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1  L_1;
		L_1 = List_1_GetEnumerator_mA00086B33B6560F41A54282B3BC1FCCC583D6FA1(L_0, /*hidden argument*/List_1_GetEnumerator_mA00086B33B6560F41A54282B3BC1FCCC583D6FA1_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0235;
		}

IL_0013:
		{
			// foreach (var action in this.Actions)
			ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * L_2;
			L_2 = Enumerator_get_Current_m0E7DD0E65A51098263437149381C2227D1BF478E_inline((Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m0E7DD0E65A51098263437149381C2227D1BF478E_RuntimeMethod_var);
			V_2 = L_2;
			// var lastPeriod = action.ID.LastIndexOf('.');
			ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * L_3 = V_2;
			NullCheck(L_3);
			String_t* L_4;
			L_4 = ManifestAction_get_ID_mA8C0AA2B8E0AD6997D82E9CD729C5ECED0029FE9_inline(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			int32_t L_5;
			L_5 = String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826(L_4, ((int32_t)46), /*hidden argument*/NULL);
			V_3 = L_5;
			// if (lastPeriod <= 0)
			int32_t L_6 = V_3;
			if ((((int32_t)L_6) > ((int32_t)0)))
			{
				goto IL_0049;
			}
		}

IL_002d:
		{
			// VLog.E($"Invalid Action ID: {action.ID}");
			ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * L_7 = V_2;
			NullCheck(L_7);
			String_t* L_8;
			L_8 = ManifestAction_get_ID_mA8C0AA2B8E0AD6997D82E9CD729C5ECED0029FE9_inline(L_7, /*hidden argument*/NULL);
			String_t* L_9;
			L_9 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralCD9B14D4046ED1AD88F3E1F180FCBA71F134B53B, L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
			VLog_E_m933DD49354CCDE1DA69ACB4991F68B7003B2BD09(L_9, /*hidden argument*/NULL);
			// resolvedAll = false;
			V_0 = (bool)0;
			// continue;
			goto IL_0235;
		}

IL_0049:
		{
			// var typeName = action.ID.Substring(0, lastPeriod);
			ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * L_10 = V_2;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = ManifestAction_get_ID_mA8C0AA2B8E0AD6997D82E9CD729C5ECED0029FE9_inline(L_10, /*hidden argument*/NULL);
			int32_t L_12 = V_3;
			NullCheck(L_11);
			String_t* L_13;
			L_13 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_11, 0, L_12, /*hidden argument*/NULL);
			V_4 = L_13;
			// var qualifiedTypeName = $"{typeName},{action.Assembly}";
			String_t* L_14 = V_4;
			ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * L_15 = V_2;
			NullCheck(L_15);
			String_t* L_16;
			L_16 = ManifestAction_get_Assembly_m5C563ECB155985C292593A42FE94B9146EAFDF0C_inline(L_15, /*hidden argument*/NULL);
			String_t* L_17;
			L_17 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(L_14, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_16, /*hidden argument*/NULL);
			V_5 = L_17;
			// var method = action.ID.Substring(lastPeriod + 1);
			ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * L_18 = V_2;
			NullCheck(L_18);
			String_t* L_19;
			L_19 = ManifestAction_get_ID_mA8C0AA2B8E0AD6997D82E9CD729C5ECED0029FE9_inline(L_18, /*hidden argument*/NULL);
			int32_t L_20 = V_3;
			NullCheck(L_19);
			String_t* L_21;
			L_21 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_19, ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)), /*hidden argument*/NULL);
			V_6 = L_21;
			// var targetType = Type.GetType(qualifiedTypeName);
			String_t* L_22 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_23;
			L_23 = il2cpp_codegen_get_type(Type_GetType_m752788CA9E64FFC2DF70ABBDB8669E579849F4C3_RuntimeMethod_var, L_22, Manifest_ResolveActions_m8F30EE572C6406B267DC6317B54426F2FA110E45_RuntimeMethod_var);
			V_7 = L_23;
			// if (targetType == null)
			Type_t * L_24 = V_7;
			bool L_25;
			L_25 = Type_op_Equality_m01CE523ADAD8D6348C8247353F7C1E5FA3031732(L_24, (Type_t *)NULL, /*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_00a7;
			}
		}

IL_008f:
		{
			// VLog.E($"Failed to resolve type: {qualifiedTypeName}");
			String_t* L_26 = V_5;
			String_t* L_27;
			L_27 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralCE718B85C732127DA06EC4DDA3E9F112B092F786, L_26, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
			VLog_E_m933DD49354CCDE1DA69ACB4991F68B7003B2BD09(L_27, /*hidden argument*/NULL);
			// resolvedAll = false;
			V_0 = (bool)0;
			// continue;
			goto IL_0235;
		}

IL_00a7:
		{
			// var types = new Type[action.Parameters.Count];
			ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * L_28 = V_2;
			NullCheck(L_28);
			List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * L_29;
			L_29 = ManifestAction_get_Parameters_m20870BE54DBD68586A57573B431585871B05B7AE_inline(L_28, /*hidden argument*/NULL);
			NullCheck(L_29);
			int32_t L_30;
			L_30 = List_1_get_Count_m11541AE6ECA8C8CFE233279F4F7850D2EC11F2A9_inline(L_29, /*hidden argument*/List_1_get_Count_m11541AE6ECA8C8CFE233279F4F7850D2EC11F2A9_RuntimeMethod_var);
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_31 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)L_30);
			V_8 = L_31;
			// for (var i = 0; i < action.Parameters.Count; i++)
			V_13 = 0;
			goto IL_0117;
		}

IL_00be:
		{
			// var manifestParameter = action.Parameters[i];
			ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * L_32 = V_2;
			NullCheck(L_32);
			List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * L_33;
			L_33 = ManifestAction_get_Parameters_m20870BE54DBD68586A57573B431585871B05B7AE_inline(L_32, /*hidden argument*/NULL);
			int32_t L_34 = V_13;
			NullCheck(L_33);
			ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * L_35;
			L_35 = List_1_get_Item_m528E3CA9DB52D328760704289BCF649BFAF221C3_inline(L_33, L_34, /*hidden argument*/List_1_get_Item_m528E3CA9DB52D328760704289BCF649BFAF221C3_RuntimeMethod_var);
			V_14 = L_35;
			// var fullTypeName = $"{manifestParameter.QualifiedTypeName},{manifestParameter.TypeAssembly}";
			ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * L_36 = V_14;
			NullCheck(L_36);
			String_t* L_37;
			L_37 = ManifestParameter_get_QualifiedTypeName_mB9D2527C2D0820F22F46AE03A82AFC75584B8D64_inline(L_36, /*hidden argument*/NULL);
			ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * L_38 = V_14;
			NullCheck(L_38);
			String_t* L_39;
			L_39 = ManifestParameter_get_TypeAssembly_mB8CCA15F9B2593A3AEF8A242950D4F097E3CFB18_inline(L_38, /*hidden argument*/NULL);
			String_t* L_40;
			L_40 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(L_37, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_39, /*hidden argument*/NULL);
			V_15 = L_40;
			// types[i] = Type.GetType(fullTypeName);
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_41 = V_8;
			int32_t L_42 = V_13;
			String_t* L_43 = V_15;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_44;
			L_44 = il2cpp_codegen_get_type(Type_GetType_m752788CA9E64FFC2DF70ABBDB8669E579849F4C3_RuntimeMethod_var, L_43, Manifest_ResolveActions_m8F30EE572C6406B267DC6317B54426F2FA110E45_RuntimeMethod_var);
			NullCheck(L_41);
			ArrayElementTypeCheck (L_41, L_44);
			(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (Type_t *)L_44);
			// if (types[i] == null)
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_45 = V_8;
			int32_t L_46 = V_13;
			NullCheck(L_45);
			int32_t L_47 = L_46;
			Type_t * L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
			bool L_49;
			L_49 = Type_op_Equality_m01CE523ADAD8D6348C8247353F7C1E5FA3031732(L_48, (Type_t *)NULL, /*hidden argument*/NULL);
			if (!L_49)
			{
				goto IL_0111;
			}
		}

IL_0100:
		{
			// VLog.E($"Failed to resolve type: {fullTypeName}");
			String_t* L_50 = V_15;
			String_t* L_51;
			L_51 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralCE718B85C732127DA06EC4DDA3E9F112B092F786, L_50, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
			VLog_E_m933DD49354CCDE1DA69ACB4991F68B7003B2BD09(L_51, /*hidden argument*/NULL);
		}

IL_0111:
		{
			// for (var i = 0; i < action.Parameters.Count; i++)
			int32_t L_52 = V_13;
			V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		}

IL_0117:
		{
			// for (var i = 0; i < action.Parameters.Count; i++)
			int32_t L_53 = V_13;
			ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * L_54 = V_2;
			NullCheck(L_54);
			List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * L_55;
			L_55 = ManifestAction_get_Parameters_m20870BE54DBD68586A57573B431585871B05B7AE_inline(L_54, /*hidden argument*/NULL);
			NullCheck(L_55);
			int32_t L_56;
			L_56 = List_1_get_Count_m11541AE6ECA8C8CFE233279F4F7850D2EC11F2A9_inline(L_55, /*hidden argument*/List_1_get_Count_m11541AE6ECA8C8CFE233279F4F7850D2EC11F2A9_RuntimeMethod_var);
			if ((((int32_t)L_53) < ((int32_t)L_56)))
			{
				goto IL_00be;
			}
		}

IL_0126:
		{
			// var targetMethod = GetBestMethodMatch(targetType, method, types);
			Type_t * L_57 = V_7;
			String_t* L_58 = V_6;
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_59 = V_8;
			MethodInfo_t * L_60;
			L_60 = Manifest_GetBestMethodMatch_mD83612F9ED012FBBAB2927DD7025A0E820D88A2A(__this, L_57, L_58, L_59, /*hidden argument*/NULL);
			V_9 = L_60;
			// if (targetMethod == null)
			MethodInfo_t * L_61 = V_9;
			bool L_62;
			L_62 = MethodInfo_op_Equality_m0716EB8EAA86F91031CF1C0B5E5D4B0269AC6A08(L_61, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
			if (!L_62)
			{
				goto IL_0177;
			}
		}

IL_013e:
		{
			// VLog.E($"Failed to resolve method {typeName}.{method}.");
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_63 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_64 = L_63;
			NullCheck(L_64);
			ArrayElementTypeCheck (L_64, _stringLiteral0E3A4B6D33B5A752C5EF943BD7BFD2FCFC6572AB);
			(L_64)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0E3A4B6D33B5A752C5EF943BD7BFD2FCFC6572AB);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_65 = L_64;
			String_t* L_66 = V_4;
			NullCheck(L_65);
			ArrayElementTypeCheck (L_65, L_66);
			(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_66);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = L_65;
			NullCheck(L_67);
			ArrayElementTypeCheck (L_67, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
			(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_68 = L_67;
			String_t* L_69 = V_6;
			NullCheck(L_68);
			ArrayElementTypeCheck (L_68, L_69);
			(L_68)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_69);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_70 = L_68;
			NullCheck(L_70);
			ArrayElementTypeCheck (L_70, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
			(L_70)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
			String_t* L_71;
			L_71 = String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417(L_70, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
			VLog_E_m933DD49354CCDE1DA69ACB4991F68B7003B2BD09(L_71, /*hidden argument*/NULL);
			// resolvedAll = false;
			V_0 = (bool)0;
			// continue;
			goto IL_0235;
		}

IL_0177:
		{
			// var attributes = targetMethod.GetCustomAttributes(typeof(ConduitActionAttribute), false);
			MethodInfo_t * L_72 = V_9;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_73 = { reinterpret_cast<intptr_t> (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_74;
			L_74 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_73, /*hidden argument*/NULL);
			NullCheck(L_72);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_75;
			L_75 = VirtFuncInvoker2< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Type_t *, bool >::Invoke(11 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_72, L_74, (bool)0);
			V_10 = L_75;
			// if (attributes.Length == 0)
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_76 = V_10;
			NullCheck(L_76);
			if ((((RuntimeArray*)L_76)->max_length))
			{
				goto IL_01a8;
			}
		}

IL_0190:
		{
			// VLog.E($"{targetMethod} - Did not have expected Conduit attribute");
			MethodInfo_t * L_77 = V_9;
			String_t* L_78;
			L_78 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(_stringLiteral699AC6096221581A5B617645650AB1ECDE7E264A, L_77, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
			VLog_E_m933DD49354CCDE1DA69ACB4991F68B7003B2BD09(L_78, /*hidden argument*/NULL);
			// resolvedAll = false;
			V_0 = (bool)0;
			// continue;
			goto IL_0235;
		}

IL_01a8:
		{
			// var actionAttribute = attributes.First() as ConduitActionAttribute;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_79 = V_10;
			RuntimeObject * L_80;
			L_80 = Enumerable_First_TisRuntimeObject_m191CE082915F09BBEF1FA66B7F02B14D919A0FEA((RuntimeObject*)(RuntimeObject*)L_79, /*hidden argument*/Enumerable_First_TisRuntimeObject_m191CE082915F09BBEF1FA66B7F02B14D919A0FEA_RuntimeMethod_var);
			V_11 = ((ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B *)IsInstClass((RuntimeObject*)L_80, ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B_il2cpp_TypeInfo_var));
			// var invocationContext = new InvocationContext()
			// {
			//     Type = targetType,
			//     MethodInfo = targetMethod,
			//     MinConfidence = actionAttribute.MinConfidence,
			//     MaxConfidence = actionAttribute.MaxConfidence,
			//     ValidatePartial = actionAttribute.ValidatePartial
			// };
			InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_81 = (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 *)il2cpp_codegen_object_new(InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971_il2cpp_TypeInfo_var);
			InvocationContext__ctor_mA76EE5D311EA14BD541DF075484F584A658E7E02(L_81, /*hidden argument*/NULL);
			InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_82 = L_81;
			Type_t * L_83 = V_7;
			NullCheck(L_82);
			InvocationContext_set_Type_m91583D68A2D990F3A048E11204058D1BC98220A2_inline(L_82, L_83, /*hidden argument*/NULL);
			InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_84 = L_82;
			MethodInfo_t * L_85 = V_9;
			NullCheck(L_84);
			InvocationContext_set_MethodInfo_m6BB1EE81B39EB5123E85B883D08CED3CB227ADCD_inline(L_84, L_85, /*hidden argument*/NULL);
			InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_86 = L_84;
			ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * L_87 = V_11;
			NullCheck(L_87);
			float L_88;
			L_88 = ConduitActionAttribute_get_MinConfidence_mB80E03D4881A88E8F5BB25FB621C9AC73897228A_inline(L_87, /*hidden argument*/NULL);
			NullCheck(L_86);
			InvocationContext_set_MinConfidence_m1A8927D1523786E08BE1CBEC9EE0826968DE6AB7_inline(L_86, L_88, /*hidden argument*/NULL);
			InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_89 = L_86;
			ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * L_90 = V_11;
			NullCheck(L_90);
			float L_91;
			L_91 = ConduitActionAttribute_get_MaxConfidence_mB20819CD2B5B00EA7893A91326C4ED774FC9CCBC_inline(L_90, /*hidden argument*/NULL);
			NullCheck(L_89);
			InvocationContext_set_MaxConfidence_m1FA275B7FCBDE491E03DAC59BC99C230F1D7F0A0_inline(L_89, L_91, /*hidden argument*/NULL);
			InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_92 = L_89;
			ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * L_93 = V_11;
			NullCheck(L_93);
			bool L_94;
			L_94 = ConduitActionAttribute_get_ValidatePartial_mEC2E91582DF23F6016B4B14D6560CC501C8BAA6C_inline(L_93, /*hidden argument*/NULL);
			NullCheck(L_92);
			InvocationContext_set_ValidatePartial_m3C83D984891A67A8E2661C5BB0BA021EE78B7964_inline(L_92, L_94, /*hidden argument*/NULL);
			V_12 = L_92;
			// if (!_methodLookup.ContainsKey(action.Name))
			Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A * L_95 = __this->get__methodLookup_5();
			ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * L_96 = V_2;
			NullCheck(L_96);
			String_t* L_97;
			L_97 = ManifestAction_get_Name_mA0A17B5F92AD9040023F72D3FF8FA976E7194E33_inline(L_96, /*hidden argument*/NULL);
			NullCheck(L_95);
			bool L_98;
			L_98 = Dictionary_2_ContainsKey_mFA5667E9E7D3DC59C721751C6A020A45DF645929(L_95, L_97, /*hidden argument*/Dictionary_2_ContainsKey_mFA5667E9E7D3DC59C721751C6A020A45DF645929_RuntimeMethod_var);
			if (L_98)
			{
				goto IL_021d;
			}
		}

IL_0207:
		{
			// _methodLookup.Add(action.Name, new List<InvocationContext>());
			Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A * L_99 = __this->get__methodLookup_5();
			ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * L_100 = V_2;
			NullCheck(L_100);
			String_t* L_101;
			L_101 = ManifestAction_get_Name_mA0A17B5F92AD9040023F72D3FF8FA976E7194E33_inline(L_100, /*hidden argument*/NULL);
			List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * L_102 = (List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 *)il2cpp_codegen_object_new(List_1_t79F736795335714ABC337199FBF6AAA73558A6E1_il2cpp_TypeInfo_var);
			List_1__ctor_m0E1DA99C500484FF7C9EB2D85D40EB378D3A8E70(L_102, /*hidden argument*/List_1__ctor_m0E1DA99C500484FF7C9EB2D85D40EB378D3A8E70_RuntimeMethod_var);
			NullCheck(L_99);
			Dictionary_2_Add_mE189E1865AFCFC5469D25A007EFCF43D0ACCE217(L_99, L_101, L_102, /*hidden argument*/Dictionary_2_Add_mE189E1865AFCFC5469D25A007EFCF43D0ACCE217_RuntimeMethod_var);
		}

IL_021d:
		{
			// _methodLookup[action.Name].Add(invocationContext);
			Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A * L_103 = __this->get__methodLookup_5();
			ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * L_104 = V_2;
			NullCheck(L_104);
			String_t* L_105;
			L_105 = ManifestAction_get_Name_mA0A17B5F92AD9040023F72D3FF8FA976E7194E33_inline(L_104, /*hidden argument*/NULL);
			NullCheck(L_103);
			List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * L_106;
			L_106 = Dictionary_2_get_Item_m39473D804BE400460EEBD0CC75980510183E9A1C(L_103, L_105, /*hidden argument*/Dictionary_2_get_Item_m39473D804BE400460EEBD0CC75980510183E9A1C_RuntimeMethod_var);
			InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_107 = V_12;
			NullCheck(L_106);
			List_1_Add_mC5CE78031AB21C2BBFFDAD4FAF20CFC60914F0DF(L_106, L_107, /*hidden argument*/List_1_Add_mC5CE78031AB21C2BBFFDAD4FAF20CFC60914F0DF_RuntimeMethod_var);
		}

IL_0235:
		{
			// foreach (var action in this.Actions)
			bool L_108;
			L_108 = Enumerator_MoveNext_m76AD0C0FBBB414F5C7040C81D7453F4998A69E61((Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m76AD0C0FBBB414F5C7040C81D7453F4998A69E61_RuntimeMethod_var);
			if (L_108)
			{
				goto IL_0013;
			}
		}

IL_0241:
		{
			IL2CPP_LEAVE(0x251, FINALLY_0243);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0243;
	}

FINALLY_0243:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC84BF194A0433203991A8480CC4003E613428369((Enumerator_t8B842F6C3209F0FC8FB9624B4FD224C5DB6E92C1 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mC84BF194A0433203991A8480CC4003E613428369_RuntimeMethod_var);
		IL2CPP_END_FINALLY(579)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(579)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x251, IL_0251)
	}

IL_0251:
	{
		// foreach (var invocationContext in _methodLookup.Values.Where(invocationContext =>
		//              invocationContext.Count > 1))
		Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A * L_109 = __this->get__methodLookup_5();
		NullCheck(L_109);
		ValueCollection_t9B3D82D45C4D06438F35204E9F3461CA8FA8B4AA * L_110;
		L_110 = Dictionary_2_get_Values_m05B6EAA5A9B7253285E4287A1E666A1B26FBD403(L_109, /*hidden argument*/Dictionary_2_get_Values_m05B6EAA5A9B7253285E4287A1E666A1B26FBD403_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_il2cpp_TypeInfo_var);
		Func_2_tABC5D2B4AF92BE004DE38AADAD2AED77AD815246 * L_111 = ((U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_il2cpp_TypeInfo_var))->get_U3CU3E9__26_0_1();
		Func_2_tABC5D2B4AF92BE004DE38AADAD2AED77AD815246 * L_112 = L_111;
		G_B22_0 = L_112;
		G_B22_1 = L_110;
		if (L_112)
		{
			G_B23_0 = L_112;
			G_B23_1 = L_110;
			goto IL_027b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_il2cpp_TypeInfo_var);
		U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3 * L_113 = ((U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tABC5D2B4AF92BE004DE38AADAD2AED77AD815246 * L_114 = (Func_2_tABC5D2B4AF92BE004DE38AADAD2AED77AD815246 *)il2cpp_codegen_object_new(Func_2_tABC5D2B4AF92BE004DE38AADAD2AED77AD815246_il2cpp_TypeInfo_var);
		Func_2__ctor_m9B4F5DC8EB5C5399B6F1183F80457805F00072B8(L_114, L_113, (intptr_t)((intptr_t)U3CU3Ec_U3CResolveActionsU3Eb__26_0_m68023485CC5863B64C4819A66E209376AFAB6E6E_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m9B4F5DC8EB5C5399B6F1183F80457805F00072B8_RuntimeMethod_var);
		Func_2_tABC5D2B4AF92BE004DE38AADAD2AED77AD815246 * L_115 = L_114;
		((U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_il2cpp_TypeInfo_var))->set_U3CU3E9__26_0_1(L_115);
		G_B23_0 = L_115;
		G_B23_1 = G_B22_1;
	}

IL_027b:
	{
		RuntimeObject* L_116;
		L_116 = Enumerable_Where_TisList_1_t79F736795335714ABC337199FBF6AAA73558A6E1_mEA27EFD786DBCD22DF285092511AF4D929C570BE(G_B23_1, G_B23_0, /*hidden argument*/Enumerable_Where_TisList_1_t79F736795335714ABC337199FBF6AAA73558A6E1_mEA27EFD786DBCD22DF285092511AF4D929C570BE_RuntimeMethod_var);
		NullCheck(L_116);
		RuntimeObject* L_117;
		L_117 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::GetEnumerator() */, IEnumerable_1_tCB061DF39774B2BB951ACFC01A96706DF662C4F5_il2cpp_TypeInfo_var, L_116);
		V_16 = L_117;
	}

IL_0287:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02b4;
		}

IL_0289:
		{
			// foreach (var invocationContext in _methodLookup.Values.Where(invocationContext =>
			RuntimeObject* L_118 = V_16;
			NullCheck(L_118);
			List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * L_119;
			L_119 = InterfaceFuncInvoker0< List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::get_Current() */, IEnumerator_1_tCF140AA36E460E0C5C7D58A3E6EC144A424439A9_il2cpp_TypeInfo_var, L_118);
			// invocationContext.Sort((one, two) =>
			//     two.MethodInfo.GetParameters().Length - one.MethodInfo.GetParameters().Length);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_il2cpp_TypeInfo_var);
			Comparison_1_tD48EB0E35206C00C67637769B711197EDC1EDC82 * L_120 = ((U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_il2cpp_TypeInfo_var))->get_U3CU3E9__26_1_2();
			Comparison_1_tD48EB0E35206C00C67637769B711197EDC1EDC82 * L_121 = L_120;
			G_B26_0 = L_121;
			G_B26_1 = L_119;
			if (L_121)
			{
				G_B27_0 = L_121;
				G_B27_1 = L_119;
				goto IL_02af;
			}
		}

IL_0298:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_il2cpp_TypeInfo_var);
			U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3 * L_122 = ((U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Comparison_1_tD48EB0E35206C00C67637769B711197EDC1EDC82 * L_123 = (Comparison_1_tD48EB0E35206C00C67637769B711197EDC1EDC82 *)il2cpp_codegen_object_new(Comparison_1_tD48EB0E35206C00C67637769B711197EDC1EDC82_il2cpp_TypeInfo_var);
			Comparison_1__ctor_m21DC8118E9261D3667F372E6A0B53B0505427674(L_123, L_122, (intptr_t)((intptr_t)U3CU3Ec_U3CResolveActionsU3Eb__26_1_m641846455F8965CF4E6081EC0AF9D2325F05303A_RuntimeMethod_var), /*hidden argument*/Comparison_1__ctor_m21DC8118E9261D3667F372E6A0B53B0505427674_RuntimeMethod_var);
			Comparison_1_tD48EB0E35206C00C67637769B711197EDC1EDC82 * L_124 = L_123;
			((U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_il2cpp_TypeInfo_var))->set_U3CU3E9__26_1_2(L_124);
			G_B27_0 = L_124;
			G_B27_1 = G_B26_1;
		}

IL_02af:
		{
			NullCheck(G_B27_1);
			List_1_Sort_mCB6637C0DF90E3E960F15E9DC0B566AF0C7F6EA0(G_B27_1, G_B27_0, /*hidden argument*/List_1_Sort_mCB6637C0DF90E3E960F15E9DC0B566AF0C7F6EA0_RuntimeMethod_var);
		}

IL_02b4:
		{
			// foreach (var invocationContext in _methodLookup.Values.Where(invocationContext =>
			RuntimeObject* L_125 = V_16;
			NullCheck(L_125);
			bool L_126;
			L_126 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_125);
			if (L_126)
			{
				goto IL_0289;
			}
		}

IL_02bd:
		{
			IL2CPP_LEAVE(0x2CB, FINALLY_02bf);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02bf;
	}

FINALLY_02bf:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_127 = V_16;
			if (!L_127)
			{
				goto IL_02ca;
			}
		}

IL_02c3:
		{
			RuntimeObject* L_128 = V_16;
			NullCheck(L_128);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_128);
		}

IL_02ca:
		{
			IL2CPP_END_FINALLY(703)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(703)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2CB, IL_02cb)
	}

IL_02cb:
	{
		// return resolvedAll;
		bool L_129 = V_0;
		return L_129;
	}
}
// System.Reflection.MethodInfo Meta.Conduit.Manifest::GetBestMethodMatch(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Manifest_GetBestMethodMatch_mD83612F9ED012FBBAB2927DD7025A0E820D88A2A (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, Type_t * ___targetType0, String_t* ___method1, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___parameterTypes2, const RuntimeMethod* method)
{
	{
		// var exactMatch = targetType.GetMethod(method,
		//     BindingFlags.Public | BindingFlags.Instance | BindingFlags.Static, null, CallingConventions.Any,
		//     parameterTypes, null);
		Type_t * L_0 = ___targetType0;
		String_t* L_1 = ___method1;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = ___parameterTypes2;
		NullCheck(L_0);
		MethodInfo_t * L_3;
		L_3 = Type_GetMethod_m029A213C09F61496D42B3101E8E770D1C66CB795(L_0, L_1, ((int32_t)28), (Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 *)NULL, 3, L_2, (ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B*)(ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B*)NULL, /*hidden argument*/NULL);
		// return exactMatch;
		return L_3;
	}
}
// System.Boolean Meta.Conduit.Manifest::ContainsAction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ContainsAction_mCF03300D0B05617962CC35EDFBC991763B31F050 (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, String_t* ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFA5667E9E7D3DC59C721751C6A020A45DF645929_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _methodLookup.ContainsKey(action);
		Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A * L_0 = __this->get__methodLookup_5();
		String_t* L_1 = ___action0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mFA5667E9E7D3DC59C721751C6A020A45DF645929(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mFA5667E9E7D3DC59C721751C6A020A45DF645929_RuntimeMethod_var);
		return L_2;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.Manifest::GetInvocationContexts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * Manifest_GetInvocationContexts_m271750391476AF7F224F56757986724385A4AB73 (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, String_t* ___actionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m39473D804BE400460EEBD0CC75980510183E9A1C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _methodLookup[actionId];
		Dictionary_2_t5A3A77C214DF509FC7282E8BD6E461FF0784182A * L_0 = __this->get__methodLookup_5();
		String_t* L_1 = ___actionId0;
		NullCheck(L_0);
		List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * L_2;
		L_2 = Dictionary_2_get_Item_m39473D804BE400460EEBD0CC75980510183E9A1C(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m39473D804BE400460EEBD0CC75980510183E9A1C_RuntimeMethod_var);
		return L_2;
	}
}
// System.String Meta.Conduit.Manifest::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Manifest_ToString_mB9FCF09BCE5C459B01AC2656CE26378C9CA997A7 (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_SerializeObject_TisManifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10_m053A2025857A7AB59C796091DEFF8B9241219062_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t3E03C6491535D0515C23DC9BCF3B620DB0063098_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JsonConvert.SerializeObject(this);
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t3E03C6491535D0515C23DC9BCF3B620DB0063098_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonConvert_SerializeObject_TisManifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10_m053A2025857A7AB59C796091DEFF8B9241219062(__this, (JsonConverterU5BU5D_t8327F3FEA5C837FBE4A4A8503B5C0B1AD46A5154*)(JsonConverterU5BU5D_t8327F3FEA5C837FBE4A4A8503B5C0B1AD46A5154*)NULL, /*hidden argument*/JsonConvert_SerializeObject_TisManifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10_m053A2025857A7AB59C796091DEFF8B9241219062_RuntimeMethod_var);
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
// System.Void Meta.Conduit.ManifestAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction__ctor_mBD486DB41CA3BF1669B90E88F63C14EAD8786392 (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m06D4213D813A14DE380DD5156140CC121094F165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * L_0 = (List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 *)il2cpp_codegen_object_new(List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91_il2cpp_TypeInfo_var);
		List_1__ctor_m06D4213D813A14DE380DD5156140CC121094F165(L_0, /*hidden argument*/List_1__ctor_m06D4213D813A14DE380DD5156140CC121094F165_RuntimeMethod_var);
		__this->set_U3CParametersU3Ek__BackingField_3(L_0);
		// public List<string> Aliases { get; set; } = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_1, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_U3CAliasesU3Ek__BackingField_4(L_1);
		// public ManifestAction() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public ManifestAction() { }
		return;
	}
}
// System.String Meta.Conduit.ManifestAction::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestAction_get_ID_mA8C0AA2B8E0AD6997D82E9CD729C5ECED0029FE9 (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, const RuntimeMethod* method)
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->get_U3CIDU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_ID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_ID_m6CADD5DB2F7D43E2F31C683F47B1FC215654520D (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string ID { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CIDU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestAction::get_Assembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Assembly_m5C563ECB155985C292593A42FE94B9146EAFDF0C (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, const RuntimeMethod* method)
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = __this->get_U3CAssemblyU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_Assembly(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_Assembly_mB8033D761C97E13B956AE81BD6662FD4F4FD3249 (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAssemblyU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestAction::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Name_mA0A17B5F92AD9040023F72D3FF8FA976E7194E33 (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_Name_m7FFF6562E6F6DC655F1DF3593682D4D75968289A (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> Meta.Conduit.ManifestAction::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * ManifestAction_get_Parameters_m20870BE54DBD68586A57573B431585871B05B7AE (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, const RuntimeMethod* method)
{
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * L_0 = __this->get_U3CParametersU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_Parameters(System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_Parameters_m47332CA890C1793F21E8215057A26518822C070D (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * ___value0, const RuntimeMethod* method)
{
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * L_0 = ___value0;
		__this->set_U3CParametersU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestAction::get_DeclaringTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestAction_get_DeclaringTypeName_m0357AB06F7A0B23268D3D8658F993A32FA8C8A42 (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, const RuntimeMethod* method)
{
	{
		// public string DeclaringTypeName => ID.Substring(0, ID.LastIndexOf('.'));
		String_t* L_0;
		L_0 = ManifestAction_get_ID_mA8C0AA2B8E0AD6997D82E9CD729C5ECED0029FE9_inline(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = ManifestAction_get_ID_mA8C0AA2B8E0AD6997D82E9CD729C5ECED0029FE9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826(L_1, ((int32_t)46), /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_0, 0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestAction::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ManifestAction_get_Aliases_m09A1420BDCF18F4E0B7DE5E14EE8B94DC682488B (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, const RuntimeMethod* method)
{
	{
		// public List<string> Aliases { get; set; } = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CAliasesU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_Aliases(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_Aliases_m07C567DA991B205A2F31415A1B6B33816028ADAB (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method)
{
	{
		// public List<string> Aliases { get; set; } = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ___value0;
		__this->set_U3CAliasesU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Boolean Meta.Conduit.ManifestAction::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestAction_Equals_m5125DCAD8F70A3F8E36C69F0C64AF5EF5331F0E9 (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * V_0 = NULL;
	{
		// return obj is ManifestAction other && this.Equals(other);
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 *)IsInstClass((RuntimeObject*)L_0, ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130_il2cpp_TypeInfo_var));
		ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * L_2 = V_0;
		bool L_3;
		L_3 = ManifestAction_Equals_m8099A8FA2624F0E99C5F6DCF85D3043CD760FF3B(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int32 Meta.Conduit.ManifestAction::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManifestAction_GetHashCode_m54BBE3647F5E823125433874258B1EBF87DCAD81 (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, const RuntimeMethod* method)
{
	{
		// var hash = 17;
		// hash = hash * 31 + ID.GetHashCode();
		String_t* L_0;
		L_0 = ManifestAction_get_ID_mA8C0AA2B8E0AD6997D82E9CD729C5ECED0029FE9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// hash = hash * 31 + Assembly.GetHashCode();
		String_t* L_2;
		L_2 = ManifestAction_get_Assembly_m5C563ECB155985C292593A42FE94B9146EAFDF0C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		// hash = hash * 31 + Name.GetHashCode();
		String_t* L_4;
		L_4 = ManifestAction_get_Name_mA0A17B5F92AD9040023F72D3FF8FA976E7194E33_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		// hash = hash * 31 + Parameters.GetHashCode();
		List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * L_6;
		L_6 = ManifestAction_get_Parameters_m20870BE54DBD68586A57573B431585871B05B7AE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		// hash = hash * 31 + Aliases.GetHashCode();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_8;
		L_8 = ManifestAction_get_Aliases_m09A1420BDCF18F4E0B7DE5E14EE8B94DC682488B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_8);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)31))), (int32_t)L_1)), (int32_t)((int32_t)31))), (int32_t)L_3)), (int32_t)((int32_t)31))), (int32_t)L_5)), (int32_t)((int32_t)31))), (int32_t)L_7)), (int32_t)((int32_t)31))), (int32_t)L_9));
	}
}
// System.Boolean Meta.Conduit.ManifestAction::Equals(Meta.Conduit.ManifestAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestAction_Equals_m8099A8FA2624F0E99C5F6DCF85D3043CD760FF3B (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D_mE3B5E7FEB795EC6B7F5072019340030374D9FBC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisString_t_m6725D76BF34DF9B9C48E007FEAD6C122CE4AEC17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.ID == other.ID && this.Assembly == other.Assembly && this.Name == other.Name && this.Parameters.SequenceEqual(other.Parameters) && this.Aliases.SequenceEqual(other.Aliases);
		String_t* L_0;
		L_0 = ManifestAction_get_ID_mA8C0AA2B8E0AD6997D82E9CD729C5ECED0029FE9_inline(__this, /*hidden argument*/NULL);
		ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * L_1 = ___other0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ManifestAction_get_ID_mA8C0AA2B8E0AD6997D82E9CD729C5ECED0029FE9_inline(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_4;
		L_4 = ManifestAction_get_Assembly_m5C563ECB155985C292593A42FE94B9146EAFDF0C_inline(__this, /*hidden argument*/NULL);
		ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = ManifestAction_get_Assembly_m5C563ECB155985C292593A42FE94B9146EAFDF0C_inline(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_8;
		L_8 = ManifestAction_get_Name_mA0A17B5F92AD9040023F72D3FF8FA976E7194E33_inline(__this, /*hidden argument*/NULL);
		ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * L_9 = ___other0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = ManifestAction_get_Name_mA0A17B5F92AD9040023F72D3FF8FA976E7194E33_inline(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * L_12;
		L_12 = ManifestAction_get_Parameters_m20870BE54DBD68586A57573B431585871B05B7AE_inline(__this, /*hidden argument*/NULL);
		ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * L_13 = ___other0;
		NullCheck(L_13);
		List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * L_14;
		L_14 = ManifestAction_get_Parameters_m20870BE54DBD68586A57573B431585871B05B7AE_inline(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = Enumerable_SequenceEqual_TisManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D_mE3B5E7FEB795EC6B7F5072019340030374D9FBC4(L_12, L_14, /*hidden argument*/Enumerable_SequenceEqual_TisManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D_mE3B5E7FEB795EC6B7F5072019340030374D9FBC4_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_005e;
		}
	}
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_16;
		L_16 = ManifestAction_get_Aliases_m09A1420BDCF18F4E0B7DE5E14EE8B94DC682488B_inline(__this, /*hidden argument*/NULL);
		ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * L_17 = ___other0;
		NullCheck(L_17);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_18;
		L_18 = ManifestAction_get_Aliases_m09A1420BDCF18F4E0B7DE5E14EE8B94DC682488B_inline(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = Enumerable_SequenceEqual_TisString_t_m6725D76BF34DF9B9C48E007FEAD6C122CE4AEC17(L_16, L_18, /*hidden argument*/Enumerable_SequenceEqual_TisString_t_m6725D76BF34DF9B9C48E007FEAD6C122CE4AEC17_RuntimeMethod_var);
		return L_19;
	}

IL_005e:
	{
		return (bool)0;
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
// System.Void Meta.Conduit.ManifestEntity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity__ctor_m66F53E41520C28C673C7E92361DFC32D9E4CE928 (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE151EBAE39F9F93BB13D350B3A8D9F960F25E9B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<WitKeyword> Values { get; set; } = new List<WitKeyword>();
		List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 * L_0 = (List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 *)il2cpp_codegen_object_new(List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415_il2cpp_TypeInfo_var);
		List_1__ctor_mE151EBAE39F9F93BB13D350B3A8D9F960F25E9B3(L_0, /*hidden argument*/List_1__ctor_mE151EBAE39F9F93BB13D350B3A8D9F960F25E9B3_RuntimeMethod_var);
		__this->set_U3CValuesU3Ek__BackingField_4(L_0);
		// public ManifestEntity() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public ManifestEntity() { }
		return;
	}
}
// System.String Meta.Conduit.ManifestEntity::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_ID_m3B9958F8C96A39013CBC45DE69AC6CD8978A44EA (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, const RuntimeMethod* method)
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->get_U3CIDU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_ID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_ID_mD81F45837BBEC591E922D15E64B666D29FC3B934 (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string ID { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CIDU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestEntity::get_Namespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Namespace_m9F470413C55992958A2C08F80963486BA8567172 (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, const RuntimeMethod* method)
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = __this->get_U3CNamespaceU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_Namespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_Namespace_m53308E6C2BB0F64A7C7CD84371760A2A20754619 (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNamespaceU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestEntity::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Type_mF29EDA2CAB1D4CA52EEEF9698033233BBE42057A (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, const RuntimeMethod* method)
{
	{
		// public string Type { get; set; }
		String_t* L_0 = __this->get_U3CTypeU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_Type(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_Type_mC2B60CEDD86AA42AA505EBC5C3C8459AA62D3CFD (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Type { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestEntity::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Name_mB4D88A1CDB8DED1F4E5976249A7B50D81B119B5E (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_Name_m70662A558EC71DB2EB79BEAEFDF0E54CE334669A (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.WitKeyword> Meta.Conduit.ManifestEntity::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 * ManifestEntity_get_Values_mF1AA90A3B30EAD99ACB8827089305AE2DB2092C7 (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, const RuntimeMethod* method)
{
	{
		// public List<WitKeyword> Values { get; set; } = new List<WitKeyword>();
		List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 * L_0 = __this->get_U3CValuesU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_Values(System.Collections.Generic.List`1<Meta.Conduit.WitKeyword>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_Values_m23816C58376B0ED48271F055462A15E1384461C5 (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 * ___value0, const RuntimeMethod* method)
{
	{
		// public List<WitKeyword> Values { get; set; } = new List<WitKeyword>();
		List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 * L_0 = ___value0;
		__this->set_U3CValuesU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestEntity::get_Assembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Assembly_m2E977627A6E8FE674FB8A354989EAC3F14EAEB06 (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, const RuntimeMethod* method)
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = __this->get_U3CAssemblyU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_Assembly(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_Assembly_mD6261D660050EE1365EEA2319609D86294A7CADC (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAssemblyU3Ek__BackingField_5(L_0);
		return;
	}
}
// Meta.WitAi.Data.Info.WitEntityInfo Meta.Conduit.ManifestEntity::GetAsInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1  ManifestEntity_GetAsInfo_mE742C19AA49C3BA12B3CC860DB8E1DD7A1FDEB6C (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4CC9C4E23941AFFE5744F9F7E2BFAF5CA74593CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9ED8474217B5B87FA7A5585EB65D5DD05C07BCB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityKeywordInfoU5BU5D_tD857B15DB3BB229C42383A8F639660F8898A61C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitEntityKeywordInfoU5BU5D_tD857B15DB3BB229C42383A8F639660F8898A61C8* V_0 = NULL;
	int32_t V_1 = 0;
	WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var keywords = new WitEntityKeywordInfo [Values.Count];
		List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 * L_0;
		L_0 = ManifestEntity_get_Values_mF1AA90A3B30EAD99ACB8827089305AE2DB2092C7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4CC9C4E23941AFFE5744F9F7E2BFAF5CA74593CA_inline(L_0, /*hidden argument*/List_1_get_Count_m4CC9C4E23941AFFE5744F9F7E2BFAF5CA74593CA_RuntimeMethod_var);
		WitEntityKeywordInfoU5BU5D_tD857B15DB3BB229C42383A8F639660F8898A61C8* L_2 = (WitEntityKeywordInfoU5BU5D_tD857B15DB3BB229C42383A8F639660F8898A61C8*)(WitEntityKeywordInfoU5BU5D_tD857B15DB3BB229C42383A8F639660F8898A61C8*)SZArrayNew(WitEntityKeywordInfoU5BU5D_tD857B15DB3BB229C42383A8F639660F8898A61C8_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// for (var i = 0; i < Values.Count; ++i)
		V_1 = 0;
		goto IL_0031;
	}

IL_0015:
	{
		// keywords[i] = Values[i].GetAsInfo();
		WitEntityKeywordInfoU5BU5D_tD857B15DB3BB229C42383A8F639660F8898A61C8* L_3 = V_0;
		int32_t L_4 = V_1;
		List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 * L_5;
		L_5 = ManifestEntity_get_Values_mF1AA90A3B30EAD99ACB8827089305AE2DB2092C7_inline(__this, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0 * L_7;
		L_7 = List_1_get_Item_m9ED8474217B5B87FA7A5585EB65D5DD05C07BCB2_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m9ED8474217B5B87FA7A5585EB65D5DD05C07BCB2_RuntimeMethod_var);
		NullCheck(L_7);
		WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12  L_8;
		L_8 = WitKeyword_GetAsInfo_mD3F1F9FF0538EDD39B731CDF48761C09CAB37894(L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12 )L_8);
		// for (var i = 0; i < Values.Count; ++i)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0031:
	{
		// for (var i = 0; i < Values.Count; ++i)
		int32_t L_10 = V_1;
		List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 * L_11;
		L_11 = ManifestEntity_get_Values_mF1AA90A3B30EAD99ACB8827089305AE2DB2092C7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m4CC9C4E23941AFFE5744F9F7E2BFAF5CA74593CA_inline(L_11, /*hidden argument*/List_1_get_Count_m4CC9C4E23941AFFE5744F9F7E2BFAF5CA74593CA_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0015;
		}
	}
	{
		// return new WitEntityInfo()
		// {
		//     name = Name,
		//     keywords = keywords
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1 ));
		String_t* L_13;
		L_13 = ManifestEntity_get_Name_mB4D88A1CDB8DED1F4E5976249A7B50D81B119B5E_inline(__this, /*hidden argument*/NULL);
		(&V_2)->set_name_0(L_13);
		WitEntityKeywordInfoU5BU5D_tD857B15DB3BB229C42383A8F639660F8898A61C8* L_14 = V_0;
		(&V_2)->set_keywords_4(L_14);
		WitEntityInfo_t9325B84063E8641BD8010B391C5C94F1C61BBBF1  L_15 = V_2;
		return L_15;
	}
}
// System.String Meta.Conduit.ManifestEntity::GetQualifiedTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestEntity_GetQualifiedTypeName_m83ED3BECAA79056CD9E30C434EAD3234ABC4E6EF (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B4_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// return string.IsNullOrEmpty(Namespace)
		//     ? $"{ID}"
		//     : $"{Namespace}.{ID}";
		String_t* L_0;
		L_0 = ManifestEntity_get_Namespace_m9F470413C55992958A2C08F80963486BA8567172_inline(__this, /*hidden argument*/NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_2;
		L_2 = ManifestEntity_get_Namespace_m9F470413C55992958A2C08F80963486BA8567172_inline(__this, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = ManifestEntity_get_ID_m3B9958F8C96A39013CBC45DE69AC6CD8978A44EA_inline(__this, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0024:
	{
		String_t* L_5;
		L_5 = ManifestEntity_get_ID_m3B9958F8C96A39013CBC45DE69AC6CD8978A44EA_inline(__this, /*hidden argument*/NULL);
		String_t* L_6 = L_5;
		G_B3_0 = L_6;
		if (L_6)
		{
			G_B4_0 = L_6;
			goto IL_0033;
		}
	}
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0033:
	{
		return G_B4_0;
	}
}
// System.Boolean Meta.Conduit.ManifestEntity::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestEntity_Equals_mCCFECE96B4AFAE31FDA38E16532D1979C15885E5 (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * V_0 = NULL;
	{
		// return obj is ManifestEntity other && this.Equals(other);
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 *)IsInstClass((RuntimeObject*)L_0, ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4_il2cpp_TypeInfo_var));
		ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * L_2 = V_0;
		bool L_3;
		L_3 = ManifestEntity_Equals_mE390697D4BC7FDEE97F71AD95C032B828D682EB7(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int32 Meta.Conduit.ManifestEntity::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManifestEntity_GetHashCode_m39C3F2CCD83F369642D89A156406E015CBC057F1 (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, const RuntimeMethod* method)
{
	{
		// var hash = 17;
		// hash = hash * 31 + ID.GetHashCode();
		String_t* L_0;
		L_0 = ManifestEntity_get_ID_m3B9958F8C96A39013CBC45DE69AC6CD8978A44EA_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// hash = hash * 31 + Type.GetHashCode();
		String_t* L_2;
		L_2 = ManifestEntity_get_Type_mF29EDA2CAB1D4CA52EEEF9698033233BBE42057A_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		// hash = hash * 31 + Name.GetHashCode();
		String_t* L_4;
		L_4 = ManifestEntity_get_Name_mB4D88A1CDB8DED1F4E5976249A7B50D81B119B5E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		// hash = hash * 31 + Values.GetHashCode();
		List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 * L_6;
		L_6 = ManifestEntity_get_Values_mF1AA90A3B30EAD99ACB8827089305AE2DB2092C7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		// hash = hash * 31 + Namespace.GetHashCode();
		String_t* L_8;
		L_8 = ManifestEntity_get_Namespace_m9F470413C55992958A2C08F80963486BA8567172_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_8);
		// hash = hash * 31 + Assembly.GetHashCode();
		String_t* L_10;
		L_10 = ManifestEntity_get_Assembly_m2E977627A6E8FE674FB8A354989EAC3F14EAEB06_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)31))), (int32_t)L_1)), (int32_t)((int32_t)31))), (int32_t)L_3)), (int32_t)((int32_t)31))), (int32_t)L_5)), (int32_t)((int32_t)31))), (int32_t)L_7)), (int32_t)((int32_t)31))), (int32_t)L_9)), (int32_t)((int32_t)31))), (int32_t)L_11));
	}
}
// System.Boolean Meta.Conduit.ManifestEntity::Equals(Meta.Conduit.ManifestEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestEntity_Equals_mE390697D4BC7FDEE97F71AD95C032B828D682EB7 (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisWitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0_mC6B6D969A583547F3999D1ACCB1D9B050E29D55B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ID == other.ID && Type == other.Type && Name == other.Name && Namespace == other.Namespace
		//        && Assembly == other.Assembly && this.Values.SequenceEqual(other.Values);
		String_t* L_0;
		L_0 = ManifestEntity_get_ID_m3B9958F8C96A39013CBC45DE69AC6CD8978A44EA_inline(__this, /*hidden argument*/NULL);
		ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * L_1 = ___other0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ManifestEntity_get_ID_m3B9958F8C96A39013CBC45DE69AC6CD8978A44EA_inline(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_4;
		L_4 = ManifestEntity_get_Type_mF29EDA2CAB1D4CA52EEEF9698033233BBE42057A_inline(__this, /*hidden argument*/NULL);
		ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = ManifestEntity_get_Type_mF29EDA2CAB1D4CA52EEEF9698033233BBE42057A_inline(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_8;
		L_8 = ManifestEntity_get_Name_mB4D88A1CDB8DED1F4E5976249A7B50D81B119B5E_inline(__this, /*hidden argument*/NULL);
		ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * L_9 = ___other0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = ManifestEntity_get_Name_mB4D88A1CDB8DED1F4E5976249A7B50D81B119B5E_inline(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_12;
		L_12 = ManifestEntity_get_Namespace_m9F470413C55992958A2C08F80963486BA8567172_inline(__this, /*hidden argument*/NULL);
		ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * L_13 = ___other0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = ManifestEntity_get_Namespace_m9F470413C55992958A2C08F80963486BA8567172_inline(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_12, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_16;
		L_16 = ManifestEntity_get_Assembly_m2E977627A6E8FE674FB8A354989EAC3F14EAEB06_inline(__this, /*hidden argument*/NULL);
		ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * L_17 = ___other0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = ManifestEntity_get_Assembly_m2E977627A6E8FE674FB8A354989EAC3F14EAEB06_inline(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_16, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0071;
		}
	}
	{
		List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 * L_20;
		L_20 = ManifestEntity_get_Values_mF1AA90A3B30EAD99ACB8827089305AE2DB2092C7_inline(__this, /*hidden argument*/NULL);
		ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * L_21 = ___other0;
		NullCheck(L_21);
		List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 * L_22;
		L_22 = ManifestEntity_get_Values_mF1AA90A3B30EAD99ACB8827089305AE2DB2092C7_inline(L_21, /*hidden argument*/NULL);
		bool L_23;
		L_23 = Enumerable_SequenceEqual_TisWitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0_mC6B6D969A583547F3999D1ACCB1D9B050E29D55B(L_20, L_22, /*hidden argument*/Enumerable_SequenceEqual_TisWitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0_mC6B6D969A583547F3999D1ACCB1D9B050E29D55B_RuntimeMethod_var);
		return L_23;
	}

IL_0071:
	{
		return (bool)0;
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
// Meta.Conduit.Manifest Meta.Conduit.ManifestLoader::LoadManifest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * ManifestLoader_LoadManifest_m5BA61228731F9D4B47051315A0D3A0F76728857E (ManifestLoader_t685F0D1722130EE51F7064DCF379C08ED1DC64EF * __this, String_t* ___manifestLocalPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_mCC9DF0627043A941E7E781AF7E452E8382475F67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F3800A3E48CBEF8728378A99950F313348E3F83);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// int extIndex = manifestLocalPath.LastIndexOf('.');
		String_t* L_0 = ___manifestLocalPath0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826(L_0, ((int32_t)46), /*hidden argument*/NULL);
		V_0 = L_1;
		// string ignoreEnd = extIndex == -1 ? manifestLocalPath : manifestLocalPath.Substring(0, extIndex);
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_3 = ___manifestLocalPath0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_3, 0, L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		goto IL_0018;
	}

IL_0017:
	{
		String_t* L_6 = ___manifestLocalPath0;
		G_B3_0 = L_6;
	}

IL_0018:
	{
		// TextAsset jsonFile = Resources.Load<TextAsset>(ignoreEnd);
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_7;
		L_7 = Resources_Load_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_mCC9DF0627043A941E7E781AF7E452E8382475F67(G_B3_0, /*hidden argument*/Resources_Load_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_mCC9DF0627043A941E7E781AF7E452E8382475F67_RuntimeMethod_var);
		V_1 = L_7;
		// if (jsonFile == null)
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		// VLog.E($"Conduit Error - No Manifest found at Resources/{manifestLocalPath}");
		String_t* L_10 = ___manifestLocalPath0;
		String_t* L_11;
		L_11 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral6F3800A3E48CBEF8728378A99950F313348E3F83, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_E_m933DD49354CCDE1DA69ACB4991F68B7003B2BD09(L_11, /*hidden argument*/NULL);
		// return null;
		return (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 *)NULL;
	}

IL_0039:
	{
		// string rawJson = jsonFile.text;
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		// return LoadManifestFromString(rawJson);
		String_t* L_14 = V_2;
		Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * L_15;
		L_15 = ManifestLoader_LoadManifestFromString_m5BB338371F64DB1629DE4FB06F4B4931594CD06F(__this, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// Meta.Conduit.Manifest Meta.Conduit.ManifestLoader::LoadManifestFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * ManifestLoader_LoadManifestFromString_m5BB338371F64DB1629DE4FB06F4B4931594CD06F (ManifestLoader_t685F0D1722130EE51F7064DCF379C08ED1DC64EF * __this, String_t* ___manifestText0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisManifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10_m3E6717CB761093A2EBEB63FA9F64D74DE6DD4C35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t3E03C6491535D0515C23DC9BCF3B620DB0063098_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45E8B3D3BF0062B76362F9E784FE3235D4B4DFEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1A3CD913FA259DB8A074AE7BB483A85777F004B);
		s_Il2CppMethodInitialized = true;
	}
	Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * G_B2_0 = NULL;
	Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * G_B1_0 = NULL;
	{
		// var manifest = JsonConvert.DeserializeObject<Manifest>(manifestText);
		String_t* L_0 = ___manifestText0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t3E03C6491535D0515C23DC9BCF3B620DB0063098_il2cpp_TypeInfo_var);
		Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * L_1;
		L_1 = JsonConvert_DeserializeObject_TisManifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10_m3E6717CB761093A2EBEB63FA9F64D74DE6DD4C35(L_0, (JsonConverterU5BU5D_t8327F3FEA5C837FBE4A4A8503B5C0B1AD46A5154*)(JsonConverterU5BU5D_t8327F3FEA5C837FBE4A4A8503B5C0B1AD46A5154*)NULL, /*hidden argument*/JsonConvert_DeserializeObject_TisManifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10_m3E6717CB761093A2EBEB63FA9F64D74DE6DD4C35_RuntimeMethod_var);
		// if (manifest.ResolveActions())
		Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * L_2 = L_1;
		NullCheck(L_2);
		bool L_3;
		L_3 = Manifest_ResolveActions_m8F30EE572C6406B267DC6317B54426F2FA110E45(L_2, /*hidden argument*/NULL);
		G_B1_0 = L_2;
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_001a;
		}
	}
	{
		// VLog.D($"Successfully Loaded Conduit manifest");
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_D_mB8DFC679557449B0F18DC36EB5CE5F9A35B8D67C(_stringLiteral45E8B3D3BF0062B76362F9E784FE3235D4B4DFEF, /*hidden argument*/NULL);
		// }
		return G_B1_0;
	}

IL_001a:
	{
		// VLog.E($"Fail to resolve actions from Conduit manifest");
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_E_m933DD49354CCDE1DA69ACB4991F68B7003B2BD09(_stringLiteralE1A3CD913FA259DB8A074AE7BB483A85777F004B, /*hidden argument*/NULL);
		// return manifest;
		return G_B2_0;
	}
}
// System.Void Meta.Conduit.ManifestLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestLoader__ctor_mFA981E01FDE27FA33200E2471DE9E5EC9F0C4241 (ManifestLoader_t685F0D1722130EE51F7064DCF379C08ED1DC64EF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Meta.Conduit.ManifestParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter__ctor_mBCDAE5DD90205CC64CBDC70AE9AC9449B7B47F8B (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, const RuntimeMethod* method)
{
	{
		// public ManifestParameter() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public ManifestParameter() { }
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_Name_mD4158A3289CED1ACB68454747F3C1EA871ED9AC3 (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, const RuntimeMethod* method)
{
	{
		// get => name;
		String_t* L_0 = __this->get_name_0();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_Name_mCD30D8B54F62D1C910492F8931A2A2F0022AD5F3 (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => name = ConduitUtilities.DelimitWithUnderscores(value);
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = ConduitUtilities_DelimitWithUnderscores_m7947C6CCF6F9D7695E1784C057200667EFE72F5A(L_0, /*hidden argument*/NULL);
		__this->set_name_0(L_1);
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_InternalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_InternalName_m6A6ED9811F9520A02CE5D944BC6B50622DB0E7E1 (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, const RuntimeMethod* method)
{
	{
		// public string InternalName { get; set; }
		String_t* L_0 = __this->get_U3CInternalNameU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_InternalName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_InternalName_m0E0549A6F5DB2FBD37C320E7EC9E69A506E921C8 (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string InternalName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CInternalNameU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_QualifiedName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedName_m69BDD38050AC8A6478C08E6119EC84294764FB1A (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, const RuntimeMethod* method)
{
	{
		// public string QualifiedName { get; set; }
		String_t* L_0 = __this->get_U3CQualifiedNameU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_QualifiedName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_QualifiedName_m24E6E99E9FD8949B08C954758DA8011C6CB5DFBF (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string QualifiedName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CQualifiedNameU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_EntityType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_EntityType_mC1B6C48D44C1B7D526CFDF20E3DB58C557C0DE9D (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var lastPeriod = QualifiedTypeName.LastIndexOf('.');
		String_t* L_0;
		L_0 = ManifestParameter_get_QualifiedTypeName_mB9D2527C2D0820F22F46AE03A82AFC75584B8D64_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826(L_0, ((int32_t)46), /*hidden argument*/NULL);
		V_0 = L_1;
		// if (lastPeriod < 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		// return QualifiedTypeName;
		String_t* L_3;
		L_3 = ManifestParameter_get_QualifiedTypeName_mB9D2527C2D0820F22F46AE03A82AFC75584B8D64_inline(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_0019:
	{
		// var entityName = QualifiedTypeName.Substring(lastPeriod + 1);
		String_t* L_4;
		L_4 = ManifestParameter_get_QualifiedTypeName_mB9D2527C2D0820F22F46AE03A82AFC75584B8D64_inline(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_4, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_6;
		// var lastPlus = entityName.LastIndexOf('+');
		String_t* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826(L_7, ((int32_t)43), /*hidden argument*/NULL);
		V_2 = L_8;
		// if (lastPlus < 0)
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		// return entityName;
		String_t* L_10 = V_1;
		return L_10;
	}

IL_0037:
	{
		// return entityName.Substring(lastPlus + 1);
		String_t* L_11 = V_1;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		String_t* L_13;
		L_13 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)), /*hidden argument*/NULL);
		return L_13;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_TypeAssembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_TypeAssembly_mB8CCA15F9B2593A3AEF8A242950D4F097E3CFB18 (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, const RuntimeMethod* method)
{
	{
		// public string TypeAssembly { get; set; }
		String_t* L_0 = __this->get_U3CTypeAssemblyU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_TypeAssembly(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_TypeAssembly_m94F527762251ECACB0C978E0CEA2F7C8513BBA59 (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string TypeAssembly { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTypeAssemblyU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_QualifiedTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedTypeName_mB9D2527C2D0820F22F46AE03A82AFC75584B8D64 (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, const RuntimeMethod* method)
{
	{
		// public string QualifiedTypeName { get; set; }
		String_t* L_0 = __this->get_U3CQualifiedTypeNameU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_QualifiedTypeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_QualifiedTypeName_m0DF238D95D264D39661907411ABED38E3309E6D9 (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string QualifiedTypeName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CQualifiedTypeNameU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestParameter::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ManifestParameter_get_Aliases_mEFC955CEBE01F9F22EE08C426C3CC8CC793B06CB (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, const RuntimeMethod* method)
{
	{
		// public List<string> Aliases { get; set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CAliasesU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_Aliases(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_Aliases_mA25C7F207BEDBB83F06577D88260CB9BC7D37E47 (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method)
{
	{
		// public List<string> Aliases { get; set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ___value0;
		__this->set_U3CAliasesU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestParameter::get_Examples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ManifestParameter_get_Examples_m335253557ACF245D37D72EC1E6395D2115A7DA9F (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, const RuntimeMethod* method)
{
	{
		// public List<string> Examples { get; set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CExamplesU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_Examples(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_Examples_mC3BEE6E90FF521172E06B5252455171327326DD9 (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method)
{
	{
		// public List<string> Examples { get; set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ___value0;
		__this->set_U3CExamplesU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Boolean Meta.Conduit.ManifestParameter::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestParameter_Equals_m02F081B9B9F331CA19B3A45D4B0A1DEB648A087F (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * V_0 = NULL;
	{
		// return obj is ManifestParameter other && this.Equals(other);
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D *)IsInstClass((RuntimeObject*)L_0, ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D_il2cpp_TypeInfo_var));
		ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * L_2 = V_0;
		bool L_3;
		L_3 = ManifestParameter_Equals_mE8A904569240E6322DF3D963402C68F9FFEA6C5E(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int32 Meta.Conduit.ManifestParameter::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManifestParameter_GetHashCode_m2F6EC55132F3744937BF5D4C8CF6766380E682D7 (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, const RuntimeMethod* method)
{
	{
		// var hash = 17;
		// hash = hash * 31 + name.GetHashCode();
		String_t* L_0 = __this->get_name_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// hash = hash * 31 + InternalName.GetHashCode();
		String_t* L_2;
		L_2 = ManifestParameter_get_InternalName_m6A6ED9811F9520A02CE5D944BC6B50622DB0E7E1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		// hash = hash * 31 + QualifiedName.GetHashCode();
		String_t* L_4;
		L_4 = ManifestParameter_get_QualifiedName_m69BDD38050AC8A6478C08E6119EC84294764FB1A_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		// hash = hash * 31 + TypeAssembly.GetHashCode();
		String_t* L_6;
		L_6 = ManifestParameter_get_TypeAssembly_mB8CCA15F9B2593A3AEF8A242950D4F097E3CFB18_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		// hash = hash * 31 + QualifiedTypeName.GetHashCode();
		String_t* L_8;
		L_8 = ManifestParameter_get_QualifiedTypeName_mB9D2527C2D0820F22F46AE03A82AFC75584B8D64_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_8);
		// hash = hash * 31 + Aliases.GetHashCode();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10;
		L_10 = ManifestParameter_get_Aliases_mEFC955CEBE01F9F22EE08C426C3CC8CC793B06CB_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)31))), (int32_t)L_1)), (int32_t)((int32_t)31))), (int32_t)L_3)), (int32_t)((int32_t)31))), (int32_t)L_5)), (int32_t)((int32_t)31))), (int32_t)L_7)), (int32_t)((int32_t)31))), (int32_t)L_9)), (int32_t)((int32_t)31))), (int32_t)L_11));
	}
}
// System.Boolean Meta.Conduit.ManifestParameter::Equals(Meta.Conduit.ManifestParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestParameter_Equals_mE8A904569240E6322DF3D963402C68F9FFEA6C5E (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisString_t_m6725D76BF34DF9B9C48E007FEAD6C122CE4AEC17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Equals(this.InternalName, other.InternalName) && Equals(this.QualifiedName, other.QualifiedName) &&
		//        Equals(this.EntityType, other.EntityType) && this.Aliases.SequenceEqual(other.Aliases) &&
		//        Equals(this.TypeAssembly, other.TypeAssembly) &&
		//        Equals(this.QualifiedTypeName, other.QualifiedTypeName);
		String_t* L_0;
		L_0 = ManifestParameter_get_InternalName_m6A6ED9811F9520A02CE5D944BC6B50622DB0E7E1_inline(__this, /*hidden argument*/NULL);
		ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * L_1 = ___other0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ManifestParameter_get_InternalName_m6A6ED9811F9520A02CE5D944BC6B50622DB0E7E1_inline(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Object_Equals_m7312E425C1DAD2C95188319D860160AD2BD53857(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_4;
		L_4 = ManifestParameter_get_QualifiedName_m69BDD38050AC8A6478C08E6119EC84294764FB1A_inline(__this, /*hidden argument*/NULL);
		ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = ManifestParameter_get_QualifiedName_m69BDD38050AC8A6478C08E6119EC84294764FB1A_inline(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = Object_Equals_m7312E425C1DAD2C95188319D860160AD2BD53857(L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_8;
		L_8 = ManifestParameter_get_EntityType_mC1B6C48D44C1B7D526CFDF20E3DB58C557C0DE9D(__this, /*hidden argument*/NULL);
		ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * L_9 = ___other0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = ManifestParameter_get_EntityType_mC1B6C48D44C1B7D526CFDF20E3DB58C557C0DE9D(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = Object_Equals_m7312E425C1DAD2C95188319D860160AD2BD53857(L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_12;
		L_12 = ManifestParameter_get_Aliases_mEFC955CEBE01F9F22EE08C426C3CC8CC793B06CB_inline(__this, /*hidden argument*/NULL);
		ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * L_13 = ___other0;
		NullCheck(L_13);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_14;
		L_14 = ManifestParameter_get_Aliases_mEFC955CEBE01F9F22EE08C426C3CC8CC793B06CB_inline(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = Enumerable_SequenceEqual_TisString_t_m6725D76BF34DF9B9C48E007FEAD6C122CE4AEC17(L_12, L_14, /*hidden argument*/Enumerable_SequenceEqual_TisString_t_m6725D76BF34DF9B9C48E007FEAD6C122CE4AEC17_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_16;
		L_16 = ManifestParameter_get_TypeAssembly_mB8CCA15F9B2593A3AEF8A242950D4F097E3CFB18_inline(__this, /*hidden argument*/NULL);
		ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * L_17 = ___other0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = ManifestParameter_get_TypeAssembly_mB8CCA15F9B2593A3AEF8A242950D4F097E3CFB18_inline(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = Object_Equals_m7312E425C1DAD2C95188319D860160AD2BD53857(L_16, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_20;
		L_20 = ManifestParameter_get_QualifiedTypeName_mB9D2527C2D0820F22F46AE03A82AFC75584B8D64_inline(__this, /*hidden argument*/NULL);
		ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * L_21 = ___other0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = ManifestParameter_get_QualifiedTypeName_mB9D2527C2D0820F22F46AE03A82AFC75584B8D64_inline(L_21, /*hidden argument*/NULL);
		bool L_23;
		L_23 = Object_Equals_m7312E425C1DAD2C95188319D860160AD2BD53857(L_20, L_22, /*hidden argument*/NULL);
		return L_23;
	}

IL_0071:
	{
		return (bool)0;
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
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ParameterProvider::get_AllParameterNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ParameterProvider_get_AllParameterNames_m5F1D9A6D13A47E9BD2057A11DDEC7F6111E25855 (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> AllParameterNames => this.ActualParameters.Keys.ToList();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = __this->get_ActualParameters_2();
		NullCheck(L_0);
		KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * L_1;
		L_1 = Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B(L_0, /*hidden argument*/Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2;
		L_2 = Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28(L_1, /*hidden argument*/Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Meta.Conduit.ParameterProvider::AddCustomType(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider_AddCustomType_mF46DE21E8F714AAB99BAD294F3A8972098D9E2D4 (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, String_t* ___name0, Type_t * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m54DA5467085BB6B286991F5B164EB4B1F57082D3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _customTypes[name] = type;
		Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_0 = __this->get__customTypes_7();
		String_t* L_1 = ___name0;
		Type_t * L_2 = ___type1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m54DA5467085BB6B286991F5B164EB4B1F57082D3(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m54DA5467085BB6B286991F5B164EB4B1F57082D3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.Conduit.ParameterProvider::AddParameter(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider_AddParameter_m09B57D1DB2E4B27BE234B1E61DDE7EBC7AE757A1 (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, String_t* ___parameterName0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ActualParameters[parameterName] = value;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = __this->get_ActualParameters_2();
		String_t* L_1 = ___parameterName0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.Conduit.ParameterProvider::PopulateParametersFromNode(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider_PopulateParametersFromNode_m3F4D5476ED94BE829C10356EC84C2AA7DBF4D49A (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * ___responseNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F370D06B42A39DE8D4CC4ECA25591BBB195B0E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m68080B54B36C06329C1EFF46DE3C4F9CBCCF5986_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m561A89CC21043683561EDCB2D33A0B85B27DA71C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mCE3DC4CE93CB0306474D93FE078A433EF2270DCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1B2E51BDF1C42CA5212FD2B19B8F24952DB654CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m0588E9512D07E941A36F7C1E6674EB62D56048DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisType_t_mED4F94DAE69D76F9F487EAF7E730ECF9CC02E056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t83DEA208B85D141AB524FBF062D6CEF098F561E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5C4FADAE1CD0985640B2EDB887FE74A475EDEEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t6D1BB5477B24E0F0D91C2BACC317A80E121064AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BC1949680B79EF335143D2614303F45C2BD5433);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A13904391B9244725CDA479F017C96337B784A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8AC6DCC7EE1605CE92D392470CBAE42DAC5BD4A);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Type_t * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// _parametersOfType.Clear();
		Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E * L_0 = __this->get__parametersOfType_4();
		NullCheck(L_0);
		Dictionary_2_Clear_m561A89CC21043683561EDCB2D33A0B85B27DA71C(L_0, /*hidden argument*/Dictionary_2_Clear_m561A89CC21043683561EDCB2D33A0B85B27DA71C_RuntimeMethod_var);
		// var parameters = new Dictionary<string, ConduitParameterValue>();
		Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869 * L_1 = (Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869 *)il2cpp_codegen_object_new(Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1B2E51BDF1C42CA5212FD2B19B8F24952DB654CC(L_1, /*hidden argument*/Dictionary_2__ctor_m1B2E51BDF1C42CA5212FD2B19B8F24952DB654CC_RuntimeMethod_var);
		V_0 = L_1;
		// foreach (var entity in responseNode.AsObject["entities"].Childs)
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_2 = ___responseNode0;
		NullCheck(L_2);
		WitResponseClass_t92850FD6953F4E6C1C2F7847D204A202ABAC1234 * L_3;
		L_3 = VirtFuncInvoker0< WitResponseClass_t92850FD6953F4E6C1C2F7847D204A202ABAC1234 * >::Invoke(28 /* Meta.WitAi.Json.WitResponseClass Meta.WitAi.Json.WitResponseNode::get_AsObject() */, L_2);
		NullCheck(L_3);
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_4;
		L_4 = VirtFuncInvoker1< WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 *, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_3, _stringLiteral6A13904391B9244725CDA479F017C96337B784A1);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VirtFuncInvoker0< RuntimeObject* >::Invoke(16 /* System.Collections.Generic.IEnumerable`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseNode::get_Childs() */, L_4);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Meta.WitAi.Json.WitResponseNode>::GetEnumerator() */, IEnumerable_1_t83DEA208B85D141AB524FBF062D6CEF098F561E4_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
	}

IL_002c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00fb;
		}

IL_0031:
		{
			// foreach (var entity in responseNode.AsObject["entities"].Childs)
			RuntimeObject* L_7 = V_1;
			NullCheck(L_7);
			WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_8;
			L_8 = InterfaceFuncInvoker0< WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Meta.WitAi.Json.WitResponseNode>::get_Current() */, IEnumerator_1_t6D1BB5477B24E0F0D91C2BACC317A80E121064AE_il2cpp_TypeInfo_var, L_7);
			V_2 = L_8;
			// var parameterName = entity[0]["role"].Value;
			WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_9 = V_2;
			NullCheck(L_9);
			WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_10;
			L_10 = VirtFuncInvoker1< WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 *, int32_t >::Invoke(5 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.Int32) */, L_9, 0);
			NullCheck(L_10);
			WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_11;
			L_11 = VirtFuncInvoker1< WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 *, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_10, _stringLiteral2BC1949680B79EF335143D2614303F45C2BD5433);
			NullCheck(L_11);
			String_t* L_12;
			L_12 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String Meta.WitAi.Json.WitResponseNode::get_Value() */, L_11);
			V_3 = L_12;
			// var parameterValue = entity[0]["value"].Value;
			WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_13 = V_2;
			NullCheck(L_13);
			WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_14;
			L_14 = VirtFuncInvoker1< WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 *, int32_t >::Invoke(5 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.Int32) */, L_13, 0);
			NullCheck(L_14);
			WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_15;
			L_15 = VirtFuncInvoker1< WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 *, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_14, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
			NullCheck(L_15);
			String_t* L_16;
			L_16 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String Meta.WitAi.Json.WitResponseNode::get_Value() */, L_15);
			V_4 = L_16;
			// var parameterTypes = GetParameterTypes(entity[0]["name"].Value, parameterValue);
			WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_17 = V_2;
			NullCheck(L_17);
			WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_18;
			L_18 = VirtFuncInvoker1< WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 *, int32_t >::Invoke(5 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.Int32) */, L_17, 0);
			NullCheck(L_18);
			WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_19;
			L_19 = VirtFuncInvoker1< WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 *, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_18, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
			NullCheck(L_19);
			String_t* L_20;
			L_20 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String Meta.WitAi.Json.WitResponseNode::get_Value() */, L_19);
			String_t* L_21 = V_4;
			RuntimeObject* L_22;
			L_22 = ParameterProvider_GetParameterTypes_mA670F705F61A8C169B965F9AAA0DD6D41335ACD2(__this, L_20, L_21, /*hidden argument*/NULL);
			V_5 = L_22;
			// foreach (var parameterType in parameterTypes)
			RuntimeObject* L_23 = V_5;
			NullCheck(L_23);
			RuntimeObject* L_24;
			L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator() */, IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428_il2cpp_TypeInfo_var, L_23);
			V_6 = L_24;
		}

IL_0090:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00cf;
			}

IL_0092:
			{
				// foreach (var parameterType in parameterTypes)
				RuntimeObject* L_25 = V_6;
				NullCheck(L_25);
				Type_t * L_26;
				L_26 = InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Type>::get_Current() */, IEnumerator_1_t5C4FADAE1CD0985640B2EDB887FE74A475EDEEDB_il2cpp_TypeInfo_var, L_25);
				V_7 = L_26;
				// if (!_parametersOfType.ContainsKey(parameterType))
				Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E * L_27 = __this->get__parametersOfType_4();
				Type_t * L_28 = V_7;
				NullCheck(L_27);
				bool L_29;
				L_29 = Dictionary_2_ContainsKey_mCE3DC4CE93CB0306474D93FE078A433EF2270DCF(L_27, L_28, /*hidden argument*/Dictionary_2_ContainsKey_mCE3DC4CE93CB0306474D93FE078A433EF2270DCF_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_00bc;
				}
			}

IL_00aa:
			{
				// _parametersOfType.Add(parameterType, new List<string>());
				Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E * L_30 = __this->get__parametersOfType_4();
				Type_t * L_31 = V_7;
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_32 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
				List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_32, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
				NullCheck(L_30);
				Dictionary_2_Add_m68080B54B36C06329C1EFF46DE3C4F9CBCCF5986(L_30, L_31, L_32, /*hidden argument*/Dictionary_2_Add_m68080B54B36C06329C1EFF46DE3C4F9CBCCF5986_RuntimeMethod_var);
			}

IL_00bc:
			{
				// _parametersOfType[parameterType].Add(parameterName);
				Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E * L_33 = __this->get__parametersOfType_4();
				Type_t * L_34 = V_7;
				NullCheck(L_33);
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_35;
				L_35 = Dictionary_2_get_Item_m0588E9512D07E941A36F7C1E6674EB62D56048DE(L_33, L_34, /*hidden argument*/Dictionary_2_get_Item_m0588E9512D07E941A36F7C1E6674EB62D56048DE_RuntimeMethod_var);
				String_t* L_36 = V_3;
				NullCheck(L_35);
				List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_35, L_36, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
			}

IL_00cf:
			{
				// foreach (var parameterType in parameterTypes)
				RuntimeObject* L_37 = V_6;
				NullCheck(L_37);
				bool L_38;
				L_38 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_37);
				if (L_38)
				{
					goto IL_0092;
				}
			}

IL_00d8:
			{
				IL2CPP_LEAVE(0xE6, FINALLY_00da);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00da;
		}

FINALLY_00da:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_39 = V_6;
				if (!L_39)
				{
					goto IL_00e5;
				}
			}

IL_00de:
			{
				RuntimeObject* L_40 = V_6;
				NullCheck(L_40);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_40);
			}

IL_00e5:
			{
				IL2CPP_END_FINALLY(218)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(218)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xE6, IL_00e6)
		}

IL_00e6:
		{
			// parameters.Add(parameterName, new ConduitParameterValue(parameterValue, parameterTypes.First()));
			Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869 * L_41 = V_0;
			String_t* L_42 = V_3;
			String_t* L_43 = V_4;
			RuntimeObject* L_44 = V_5;
			Type_t * L_45;
			L_45 = Enumerable_First_TisType_t_mED4F94DAE69D76F9F487EAF7E730ECF9CC02E056(L_44, /*hidden argument*/Enumerable_First_TisType_t_mED4F94DAE69D76F9F487EAF7E730ECF9CC02E056_RuntimeMethod_var);
			ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA  L_46;
			memset((&L_46), 0, sizeof(L_46));
			ConduitParameterValue__ctor_m15B8609296722DD3D4446C6E077B90D877DDB08D((&L_46), L_43, L_45, /*hidden argument*/NULL);
			NullCheck(L_41);
			Dictionary_2_Add_m4F370D06B42A39DE8D4CC4ECA25591BBB195B0E6(L_41, L_42, L_46, /*hidden argument*/Dictionary_2_Add_m4F370D06B42A39DE8D4CC4ECA25591BBB195B0E6_RuntimeMethod_var);
		}

IL_00fb:
		{
			// foreach (var entity in responseNode.AsObject["entities"].Childs)
			RuntimeObject* L_47 = V_1;
			NullCheck(L_47);
			bool L_48;
			L_48 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_47);
			if (L_48)
			{
				goto IL_0031;
			}
		}

IL_0106:
		{
			IL2CPP_LEAVE(0x112, FINALLY_0108);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0108;
	}

FINALLY_0108:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_49 = V_1;
			if (!L_49)
			{
				goto IL_0111;
			}
		}

IL_010b:
		{
			RuntimeObject* L_50 = V_1;
			NullCheck(L_50);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_50);
		}

IL_0111:
		{
			IL2CPP_END_FINALLY(264)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(264)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x112, IL_0112)
	}

IL_0112:
	{
		// parameters.Add(WitResponseNodeReservedName, new ConduitParameterValue(responseNode, typeof(WitResponseNode)));
		Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869 * L_51 = V_0;
		WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537 * L_52 = ___responseNode0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_53 = { reinterpret_cast<intptr_t> (WitResponseNode_t2B7283524E11C5C916811576FFFAEBF7FEF27537_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_54;
		L_54 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_53, /*hidden argument*/NULL);
		ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA  L_55;
		memset((&L_55), 0, sizeof(L_55));
		ConduitParameterValue__ctor_m15B8609296722DD3D4446C6E077B90D877DDB08D((&L_55), L_52, L_54, /*hidden argument*/NULL);
		NullCheck(L_51);
		Dictionary_2_Add_m4F370D06B42A39DE8D4CC4ECA25591BBB195B0E6(L_51, _stringLiteralE8AC6DCC7EE1605CE92D392470CBAE42DAC5BD4A, L_55, /*hidden argument*/Dictionary_2_Add_m4F370D06B42A39DE8D4CC4ECA25591BBB195B0E6_RuntimeMethod_var);
		// PopulateParameters(parameters);
		Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869 * L_56 = V_0;
		ParameterProvider_PopulateParameters_m6181395A0CED8A88D5791791B4FF44672508CEE5(__this, L_56, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.Conduit.ParameterProvider::SetSpecializedParameter(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider_SetSpecializedParameter_m520A883CA501AD26559FD8D9F2C780E486B72A8A (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, String_t* ___reservedParameterName0, Type_t * ___parameterType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9A0B3D61D5BB899BE4186A29CC8314CF2B546345_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _specializedParameters[parameterType] = reservedParameterName.ToLower();
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_0 = __this->get__specializedParameters_5();
		Type_t * L_1 = ___parameterType1;
		String_t* L_2 = ___reservedParameterName0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_set_Item_m9A0B3D61D5BB899BE4186A29CC8314CF2B546345(L_0, L_1, L_3, /*hidden argument*/Dictionary_2_set_Item_m9A0B3D61D5BB899BE4186A29CC8314CF2B546345_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.Conduit.ParameterProvider::PopulateParameters(System.Collections.Generic.Dictionary`2<System.String,Meta.Conduit.ConduitParameterValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider_PopulateParameters_m6181395A0CED8A88D5791791B4FF44672508CEE5 (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869 * ___actualParameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m0999E28E34F97E04A673BFF5FFD3AAA7EBA1AB92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mBC160C6C503CBBE8C1192D6800255B0930F5DFFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m32246B37DADF3CB4FD163A464051ACA9CC43F658_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m66B5AC836B99AB9EEF77796B217E18E1AEB99F58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m165F8ED4B5B749E6EA45C3254BAE647DD035F819_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mE3FC8BDC999C0448B8CADE7BF2A72F332783526C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7A57A7B3B30CA021D78890684D5B338E39A55F63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t185B41F12B8E86468B067CF0095A2AEE51AC178B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t93E81114395271F14B1553A39149B212EAFCDC8E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// ActualParameters.Clear();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = __this->get_ActualParameters_2();
		NullCheck(L_0);
		Dictionary_2_Clear_m0999E28E34F97E04A673BFF5FFD3AAA7EBA1AB92(L_0, /*hidden argument*/Dictionary_2_Clear_m0999E28E34F97E04A673BFF5FFD3AAA7EBA1AB92_RuntimeMethod_var);
		// foreach (var actualParameter in actualParameters)
		Dictionary_2_t143827BD27F6A54E2F81CA715B0F380CF0284869 * L_1 = ___actualParameters0;
		NullCheck(L_1);
		Enumerator_t185B41F12B8E86468B067CF0095A2AEE51AC178B  L_2;
		L_2 = Dictionary_2_GetEnumerator_mBC160C6C503CBBE8C1192D6800255B0930F5DFFA(L_1, /*hidden argument*/Dictionary_2_GetEnumerator_mBC160C6C503CBBE8C1192D6800255B0930F5DFFA_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_0014:
		{
			// foreach (var actualParameter in actualParameters)
			KeyValuePair_2_t93E81114395271F14B1553A39149B212EAFCDC8E  L_3;
			L_3 = Enumerator_get_Current_m165F8ED4B5B749E6EA45C3254BAE647DD035F819_inline((Enumerator_t185B41F12B8E86468B067CF0095A2AEE51AC178B *)(&V_0), /*hidden argument*/Enumerator_get_Current_m165F8ED4B5B749E6EA45C3254BAE647DD035F819_RuntimeMethod_var);
			V_1 = L_3;
			// ActualParameters[actualParameter.Key] = actualParameter.Value.Value;
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4 = __this->get_ActualParameters_2();
			String_t* L_5;
			L_5 = KeyValuePair_2_get_Key_mE3FC8BDC999C0448B8CADE7BF2A72F332783526C_inline((KeyValuePair_2_t93E81114395271F14B1553A39149B212EAFCDC8E *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_mE3FC8BDC999C0448B8CADE7BF2A72F332783526C_RuntimeMethod_var);
			ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA  L_6;
			L_6 = KeyValuePair_2_get_Value_m7A57A7B3B30CA021D78890684D5B338E39A55F63_inline((KeyValuePair_2_t93E81114395271F14B1553A39149B212EAFCDC8E *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m7A57A7B3B30CA021D78890684D5B338E39A55F63_RuntimeMethod_var);
			RuntimeObject * L_7 = L_6.get_Value_0();
			NullCheck(L_4);
			Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_4, L_5, L_7, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		}

IL_003a:
		{
			// foreach (var actualParameter in actualParameters)
			bool L_8;
			L_8 = Enumerator_MoveNext_m66B5AC836B99AB9EEF77796B217E18E1AEB99F58((Enumerator_t185B41F12B8E86468B067CF0095A2AEE51AC178B *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m66B5AC836B99AB9EEF77796B217E18E1AEB99F58_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0014;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x53, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m32246B37DADF3CB4FD163A464051ACA9CC43F658((Enumerator_t185B41F12B8E86468B067CF0095A2AEE51AC178B *)(&V_0), /*hidden argument*/Enumerator_Dispose_m32246B37DADF3CB4FD163A464051ACA9CC43F658_RuntimeMethod_var);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void Meta.Conduit.ParameterProvider::PopulateRoles(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider_PopulateRoles_mE513D8C068850F0C8DF8D761BC4C33144E9C128A (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___parameterToRoleMap0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// _parameterToRoleMap.Clear();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get__parameterToRoleMap_3();
		NullCheck(L_0);
		Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A(L_0, /*hidden argument*/Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A_RuntimeMethod_var);
		// foreach (var entry in parameterToRoleMap)
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = ___parameterToRoleMap0;
		NullCheck(L_1);
		Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  L_2;
		L_2 = Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5(L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_0014:
		{
			// foreach (var entry in parameterToRoleMap)
			KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_3;
			L_3 = Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_0), /*hidden argument*/Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
			V_1 = L_3;
			// _parameterToRoleMap[entry.Key.ToLower()] = entry.Value;
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_4 = __this->get__parameterToRoleMap_3();
			String_t* L_5;
			L_5 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
			NullCheck(L_5);
			String_t* L_6;
			L_6 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_5, /*hidden argument*/NULL);
			String_t* L_7;
			L_7 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
			NullCheck(L_4);
			Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_4, L_6, L_7, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		}

IL_003a:
		{
			// foreach (var entry in parameterToRoleMap)
			bool L_8;
			L_8 = Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0014;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x53, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_0), /*hidden argument*/Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Boolean Meta.Conduit.ParameterProvider::ContainsParameter(System.Reflection.ParameterInfo,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterProvider_ContainsParameter_mC31F9ADDCA19471BF378D8F6670D8B32A621F3A8 (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___parameter0, StringBuilder_t * ___log1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14DB4DEA8365D5E4F9AB6DB94C4130AA74ECB588);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD449635E5B56DA36239C3DDA1F4523177DA5157C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF072CEDCFB53DF9A7858641FFC5B592474D304);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SupportedSpecializedParameter(parameter))
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_0 = ___parameter0;
		bool L_1;
		L_1 = VirtFuncInvoker1< bool, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * >::Invoke(13 /* System.Boolean Meta.Conduit.ParameterProvider::SupportedSpecializedParameter(System.Reflection.ParameterInfo) */, __this, L_0);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (!ActualParameters.ContainsKey(parameter.Name))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2 = __this->get_ActualParameters_2();
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_3 = ___parameter0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_3);
		NullCheck(L_2);
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_2, L_4, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_003c;
		}
	}
	{
		// log.AppendLine($"\tParameter '{parameter.Name}' not sent in invoke");
		StringBuilder_t * L_6 = ___log1;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_7 = ___parameter0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_7);
		String_t* L_9;
		L_9 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(_stringLiteralD449635E5B56DA36239C3DDA1F4523177DA5157C, L_8, _stringLiteral14DB4DEA8365D5E4F9AB6DB94C4130AA74ECB588, /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_t * L_10;
		L_10 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_6, L_9, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_003c:
	{
		// if (!_parameterToRoleMap.ContainsKey(parameter.Name))
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_11 = __this->get__parameterToRoleMap_3();
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_12 = ___parameter0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_12);
		NullCheck(L_11);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027(L_11, L_13, /*hidden argument*/Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_006d;
		}
	}
	{
		// log.AppendLine($"\tParameter '{parameter.Name}' not found in role map");
		StringBuilder_t * L_15 = ___log1;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_16 = ___parameter0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_16);
		String_t* L_18;
		L_18 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(_stringLiteralD449635E5B56DA36239C3DDA1F4523177DA5157C, L_17, _stringLiteralDAF072CEDCFB53DF9A7858641FFC5B592474D304, /*hidden argument*/NULL);
		NullCheck(L_15);
		StringBuilder_t * L_19;
		L_19 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_15, L_18, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_006d:
	{
		// return true;
		return (bool)1;
	}
}
// System.Object Meta.Conduit.ParameterProvider::GetParameterValue(System.Reflection.ParameterInfo,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ParameterProvider_GetParameterValue_mFABCE5B6080C2149BEA38908A5D82F0FCE51FE3F (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___formalParameter0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___parameterMap1, bool ___relaxed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mAD5155E7BDF9B0B146468C59E19A3190C07D1D06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Exception_t * V_3 = NULL;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		// if (SupportedSpecializedParameter(formalParameter))
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_0 = ___formalParameter0;
		bool L_1;
		L_1 = VirtFuncInvoker1< bool, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * >::Invoke(13 /* System.Boolean Meta.Conduit.ParameterProvider::SupportedSpecializedParameter(System.Reflection.ParameterInfo) */, __this, L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return this.GetSpecializedParameter(formalParameter);
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_2 = ___formalParameter0;
		RuntimeObject * L_3;
		L_3 = VirtFuncInvoker1< RuntimeObject *, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * >::Invoke(14 /* System.Object Meta.Conduit.ParameterProvider::GetSpecializedParameter(System.Reflection.ParameterInfo) */, __this, L_2);
		return L_3;
	}

IL_0011:
	{
		// var actualParameterName = GetActualParameterName(formalParameter, parameterMap, relaxed);
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_4 = ___formalParameter0;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_5 = ___parameterMap1;
		bool L_6 = ___relaxed2;
		String_t* L_7;
		L_7 = ParameterProvider_GetActualParameterName_m2021633F3F3C46CE0AD7B5723DC03CE7D9853426(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// if (string.IsNullOrEmpty(actualParameterName))
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0025;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_0025:
	{
		// if (ActualParameters.TryGetValue(actualParameterName, out var parameterValue))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_10 = __this->get_ActualParameters_2();
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_TryGetValue_mAD5155E7BDF9B0B146468C59E19A3190C07D1D06(L_10, L_11, (RuntimeObject **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_mAD5155E7BDF9B0B146468C59E19A3190C07D1D06_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_00d1;
		}
	}
	{
		// if (formalParameter.ParameterType == typeof(string))
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_13 = ___formalParameter0;
		NullCheck(L_13);
		Type_t * L_14;
		L_14 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_13);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16;
		L_16 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_15, /*hidden argument*/NULL);
		bool L_17;
		L_17 = Type_op_Equality_m01CE523ADAD8D6348C8247353F7C1E5FA3031732(L_14, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0056;
		}
	}
	{
		// return parameterValue.ToString();
		RuntimeObject * L_18 = V_1;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		return L_19;
	}

IL_0056:
	{
		// else if (formalParameter.ParameterType.IsEnum)
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_20 = ___formalParameter0;
		NullCheck(L_20);
		Type_t * L_21;
		L_21 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_20);
		NullCheck(L_21);
		bool L_22;
		L_22 = VirtFuncInvoker0< bool >::Invoke(70 /* System.Boolean System.Type::get_IsEnum() */, L_21);
		if (!L_22)
		{
			goto IL_009e;
		}
	}

IL_0063:
	try
	{ // begin try (depth: 1)
		// return Enum.Parse(formalParameter.ParameterType, ConduitUtilities.SanitizeString(parameterValue.ToString()), true);
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_23 = ___formalParameter0;
		NullCheck(L_23);
		Type_t * L_24;
		L_24 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_23);
		RuntimeObject * L_25 = V_1;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		IL2CPP_RUNTIME_CLASS_INIT(ConduitUtilities_t691C21928D11D8EE3DEB74A05047703CE8DE9964_il2cpp_TypeInfo_var);
		String_t* L_27;
		L_27 = ConduitUtilities_SanitizeString_m3F1A9EFF4AFDBEEBECE8171FA807BA76A82A8528(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_28;
		L_28 = Enum_Parse_mBF078678C6B2C5116261811AFBBFAE524D4D4BB4(L_24, L_27, (bool)1, /*hidden argument*/NULL);
		V_2 = L_28;
		goto IL_00d3;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007d;
		}
		throw e;
	}

CATCH_007d:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// VLog.E($"Parameter Provider - Parameter '{parameterValue}' could not be cast to enum\nEnum Type: {formalParameter.ParameterType.FullName}\n{e}");
		RuntimeObject * L_29 = V_1;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_30 = ___formalParameter0;
		NullCheck(L_30);
		Type_t * L_31;
		L_31 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_30);
		NullCheck(L_31);
		String_t* L_32;
		L_32 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_31);
		Exception_t * L_33 = V_3;
		String_t* L_34;
		L_34 = String_Format_mD0D523A440845BA7F58E68187E029DC9AB821CED(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A7170386A08A61D5E84BC34FFF9B2C3419758FB)), L_29, L_32, L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var)));
		VLog_E_m933DD49354CCDE1DA69ACB4991F68B7003B2BD09(L_34, /*hidden argument*/NULL);
		// return null;
		V_2 = NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d3;
	} // end catch (depth: 1)

IL_009e:
	{
	}

IL_009f:
	try
	{ // begin try (depth: 1)
		// return Convert.ChangeType(parameterValue, formalParameter.ParameterType);
		RuntimeObject * L_35 = V_1;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_36 = ___formalParameter0;
		NullCheck(L_36);
		Type_t * L_37;
		L_37 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_36);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		RuntimeObject * L_38;
		L_38 = Convert_ChangeType_m39FC73F25D46B8B5D60E8F59B3BFCDD891E29669(L_35, L_37, /*hidden argument*/NULL);
		V_2 = L_38;
		goto IL_00d3;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ae;
		}
		throw e;
	}

CATCH_00ae:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// VLog.E($"Parameter Provider - Parameter '{parameterValue}' could not be cast\nType: {formalParameter.ParameterType.FullName}\n{e}");
		RuntimeObject * L_39 = V_1;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_40 = ___formalParameter0;
		NullCheck(L_40);
		Type_t * L_41;
		L_41 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_40);
		NullCheck(L_41);
		String_t* L_42;
		L_42 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_41);
		Exception_t * L_43 = V_4;
		String_t* L_44;
		L_44 = String_Format_mD0D523A440845BA7F58E68187E029DC9AB821CED(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral86E87BFFE44DF63E1177A08463C331A3BF1DED67)), L_39, L_42, L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var)));
		VLog_E_m933DD49354CCDE1DA69ACB4991F68B7003B2BD09(L_44, /*hidden argument*/NULL);
		// return null;
		V_2 = NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d3;
	} // end catch (depth: 1)

IL_00d1:
	{
		// return null;
		return NULL;
	}

IL_00d3:
	{
		// }
		RuntimeObject * L_45 = V_2;
		return L_45;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ParameterProvider::GetParameterNamesOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ParameterProvider_GetParameterNamesOfType_m86CAEB85D54015496B46522D75193864885E4377 (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, Type_t * ___targetType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mCE3DC4CE93CB0306474D93FE078A433EF2270DCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m2081C22E67B979AFF0710DA64B3BFE895BAE1635_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m0588E9512D07E941A36F7C1E6674EB62D56048DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m28B212A1EECEDE5DE08D65B4E93D7EB10ACE9C98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7D3C5AB9967DFDFE269DC54DF367D0B21C59E356_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m27DDAE22558733AB59D955136A7EF5AF05B1F4CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5D01A6607C2199E7A7B5856E49119C26FE5327BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (_parametersOfType.ContainsKey(targetType))
		Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E * L_0 = __this->get__parametersOfType_4();
		Type_t * L_1 = ___targetType0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mCE3DC4CE93CB0306474D93FE078A433EF2270DCF(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mCE3DC4CE93CB0306474D93FE078A433EF2270DCF_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return _parametersOfType[targetType];
		Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E * L_3 = __this->get__parametersOfType_4();
		Type_t * L_4 = ___targetType0;
		NullCheck(L_3);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5;
		L_5 = Dictionary_2_get_Item_m0588E9512D07E941A36F7C1E6674EB62D56048DE(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m0588E9512D07E941A36F7C1E6674EB62D56048DE_RuntimeMethod_var);
		return L_5;
	}

IL_001b:
	{
		// var parameters = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_6, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_0 = L_6;
		// foreach (var parameter in ActualParameters)
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_7 = __this->get_ActualParameters_2();
		NullCheck(L_7);
		Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15  L_8;
		L_8 = Dictionary_2_GetEnumerator_m2081C22E67B979AFF0710DA64B3BFE895BAE1635(L_7, /*hidden argument*/Dictionary_2_GetEnumerator_m2081C22E67B979AFF0710DA64B3BFE895BAE1635_RuntimeMethod_var);
		V_1 = L_8;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0058;
		}

IL_002f:
		{
			// foreach (var parameter in ActualParameters)
			KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_9;
			L_9 = Enumerator_get_Current_m5D01A6607C2199E7A7B5856E49119C26FE5327BB_inline((Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m5D01A6607C2199E7A7B5856E49119C26FE5327BB_RuntimeMethod_var);
			V_2 = L_9;
			// if (parameter.Value.GetType() == targetType)
			RuntimeObject * L_10;
			L_10 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
			NullCheck(L_10);
			Type_t * L_11;
			L_11 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_10, /*hidden argument*/NULL);
			Type_t * L_12 = ___targetType0;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			bool L_13;
			L_13 = Type_op_Equality_m01CE523ADAD8D6348C8247353F7C1E5FA3031732(L_11, L_12, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_0058;
			}
		}

IL_004b:
		{
			// parameters.Add(parameter.Key);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_14 = V_0;
			String_t* L_15;
			L_15 = KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
			NullCheck(L_14);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_14, L_15, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		}

IL_0058:
		{
			// foreach (var parameter in ActualParameters)
			bool L_16;
			L_16 = Enumerator_MoveNext_m27DDAE22558733AB59D955136A7EF5AF05B1F4CE((Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m27DDAE22558733AB59D955136A7EF5AF05B1F4CE_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_002f;
			}
		}

IL_0061:
		{
			IL2CPP_LEAVE(0x71, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7D3C5AB9967DFDFE269DC54DF367D0B21C59E356((Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m7D3C5AB9967DFDFE269DC54DF367D0B21C59E356_RuntimeMethod_var);
		IL2CPP_END_FINALLY(99)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x71, IL_0071)
	}

IL_0071:
	{
		// return _parametersOfType[targetType] = parameters;
		Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E * L_17 = __this->get__parametersOfType_4();
		Type_t * L_18 = ___targetType0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_19 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_20 = L_19;
		V_3 = L_20;
		NullCheck(L_17);
		Dictionary_2_set_Item_m28B212A1EECEDE5DE08D65B4E93D7EB10ACE9C98(L_17, L_18, L_20, /*hidden argument*/Dictionary_2_set_Item_m28B212A1EECEDE5DE08D65B4E93D7EB10ACE9C98_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_21 = V_3;
		return L_21;
	}
}
// System.Boolean Meta.Conduit.ParameterProvider::SupportedSpecializedParameter(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterProvider_SupportedSpecializedParameter_m94193795A128972521C9F17F7A21247E799D047E (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___formalParameter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC063FA870A55FA56E013AB91DAD7C7BE87C42C0F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _specializedParameters.ContainsKey(formalParameter.ParameterType);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_0 = __this->get__specializedParameters_5();
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_1 = ___formalParameter0;
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_1);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mC063FA870A55FA56E013AB91DAD7C7BE87C42C0F(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_mC063FA870A55FA56E013AB91DAD7C7BE87C42C0F_RuntimeMethod_var);
		return L_3;
	}
}
// System.Object Meta.Conduit.ParameterProvider::GetSpecializedParameter(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ParameterProvider_GetSpecializedParameter_mC2FF6D746B56338F63B550A00B81336BB0A9529A (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___formalParameter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC063FA870A55FA56E013AB91DAD7C7BE87C42C0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m79FCB5C0537CAA6EA8D745C5ED168F5F2D9BC6A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m794A8065F96A52A636116CD7475B246BD39574CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4D8899097FFAE4593AA535D2A9311C7884F75492_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m557855CD7AB5535158BEBB5F773B80036E88369E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_mA7A3EDE79F7F742613170703D44941D7EBE09E7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_get_Count_m177354EC38675B4C9D014E7A800B83C21847C690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral421ADF95C1916B0441998BC8F11F62C26D09310F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E38BE81D2CAEC365D5A2348FB759622EB3AD325);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D2B0EE79B75C11DB007298C5EA80A923AA7E4AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6B1DD48E50A830EA9A74DD5B2A89599D6F01C5A);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	String_t* V_1 = NULL;
	Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	String_t* G_B8_0 = NULL;
	{
		// if (_specializedParameters.ContainsKey(formalParameter.ParameterType))
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_0 = __this->get__specializedParameters_5();
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_1 = ___formalParameter0;
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_1);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mC063FA870A55FA56E013AB91DAD7C7BE87C42C0F(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_mC063FA870A55FA56E013AB91DAD7C7BE87C42C0F_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		// var parameterName = _specializedParameters[formalParameter.ParameterType];
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_4 = __this->get__specializedParameters_5();
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_5 = ___formalParameter0;
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_5);
		NullCheck(L_4);
		String_t* L_7;
		L_7 = Dictionary_2_get_Item_m79FCB5C0537CAA6EA8D745C5ED168F5F2D9BC6A0(L_4, L_6, /*hidden argument*/Dictionary_2_get_Item_m79FCB5C0537CAA6EA8D745C5ED168F5F2D9BC6A0_RuntimeMethod_var);
		V_1 = L_7;
		// if (ActualParameters.ContainsKey(parameterName))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_8 = __this->get_ActualParameters_2();
		String_t* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_8, L_9, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0040;
		}
	}
	{
		// return ActualParameters[parameterName];
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_11 = __this->get_ActualParameters_2();
		String_t* L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject * L_13;
		L_13 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_11, L_12, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		return L_13;
	}

IL_0040:
	{
		// StringBuilder error = new StringBuilder();
		StringBuilder_t * L_14 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_14, /*hidden argument*/NULL);
		V_0 = L_14;
		// error.AppendLine("Specialized parameter not found");
		StringBuilder_t * L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_15, _stringLiteral8D2B0EE79B75C11DB007298C5EA80A923AA7E4AE, /*hidden argument*/NULL);
		// error.AppendLine($"Parameter Type: {formalParameter.ParameterType}");
		StringBuilder_t * L_17 = V_0;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_18 = ___formalParameter0;
		NullCheck(L_18);
		Type_t * L_19;
		L_19 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_18);
		String_t* L_20;
		L_20 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(_stringLiteral421ADF95C1916B0441998BC8F11F62C26D09310F, L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_17, L_20, /*hidden argument*/NULL);
		// error.AppendLine($"Parameter Name: {formalParameter.Name}");
		StringBuilder_t * L_22 = V_0;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_23 = ___formalParameter0;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_23);
		String_t* L_25;
		L_25 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralE6B1DD48E50A830EA9A74DD5B2A89599D6F01C5A, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		StringBuilder_t * L_26;
		L_26 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_22, L_25, /*hidden argument*/NULL);
		// error.AppendLine($"Actual Parameters: {ActualParameters.Keys.Count}");
		StringBuilder_t * L_27 = V_0;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_28 = __this->get_ActualParameters_2();
		NullCheck(L_28);
		KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * L_29;
		L_29 = Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B(L_28, /*hidden argument*/Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B_RuntimeMethod_var);
		NullCheck(L_29);
		int32_t L_30;
		L_30 = KeyCollection_get_Count_m177354EC38675B4C9D014E7A800B83C21847C690(L_29, /*hidden argument*/KeyCollection_get_Count_m177354EC38675B4C9D014E7A800B83C21847C690_RuntimeMethod_var);
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_31);
		String_t* L_33;
		L_33 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(_stringLiteral7E38BE81D2CAEC365D5A2348FB759622EB3AD325, L_32, /*hidden argument*/NULL);
		NullCheck(L_27);
		StringBuilder_t * L_34;
		L_34 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_27, L_33, /*hidden argument*/NULL);
		// foreach (var key in ActualParameters.Keys)
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_35 = __this->get_ActualParameters_2();
		NullCheck(L_35);
		KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * L_36;
		L_36 = Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B(L_35, /*hidden argument*/Dictionary_2_get_Keys_mE3B6496D9EE741F44C34E12F543B7DC7065BD84B_RuntimeMethod_var);
		NullCheck(L_36);
		Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF  L_37;
		L_37 = KeyCollection_GetEnumerator_mA7A3EDE79F7F742613170703D44941D7EBE09E7D(L_36, /*hidden argument*/KeyCollection_GetEnumerator_mA7A3EDE79F7F742613170703D44941D7EBE09E7D_RuntimeMethod_var);
		V_2 = L_37;
	}

IL_00b7:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0107;
		}

IL_00b9:
		{
			// foreach (var key in ActualParameters.Keys)
			String_t* L_38;
			L_38 = Enumerator_get_Current_m557855CD7AB5535158BEBB5F773B80036E88369E_inline((Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF *)(&V_2), /*hidden argument*/Enumerator_get_Current_m557855CD7AB5535158BEBB5F773B80036E88369E_RuntimeMethod_var);
			V_3 = L_38;
			// string val = ActualParameters[key] == null ? "NULL" : ActualParameters[key].GetType().ToString();
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_39 = __this->get_ActualParameters_2();
			String_t* L_40 = V_3;
			NullCheck(L_39);
			RuntimeObject * L_41;
			L_41 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_39, L_40, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
			if (!L_41)
			{
				goto IL_00e7;
			}
		}

IL_00cf:
		{
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_42 = __this->get_ActualParameters_2();
			String_t* L_43 = V_3;
			NullCheck(L_42);
			RuntimeObject * L_44;
			L_44 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_42, L_43, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
			NullCheck(L_44);
			Type_t * L_45;
			L_45 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_44, /*hidden argument*/NULL);
			NullCheck(L_45);
			String_t* L_46;
			L_46 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_45);
			G_B8_0 = L_46;
			goto IL_00ec;
		}

IL_00e7:
		{
			G_B8_0 = _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
		}

IL_00ec:
		{
			V_4 = G_B8_0;
			// error.AppendLine($"\t{key}: {val}");
			StringBuilder_t * L_47 = V_0;
			String_t* L_48 = V_3;
			String_t* L_49 = V_4;
			String_t* L_50;
			L_50 = String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749(_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, L_48, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, L_49, /*hidden argument*/NULL);
			NullCheck(L_47);
			StringBuilder_t * L_51;
			L_51 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_47, L_50, /*hidden argument*/NULL);
		}

IL_0107:
		{
			// foreach (var key in ActualParameters.Keys)
			bool L_52;
			L_52 = Enumerator_MoveNext_m4D8899097FFAE4593AA535D2A9311C7884F75492((Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m4D8899097FFAE4593AA535D2A9311C7884F75492_RuntimeMethod_var);
			if (L_52)
			{
				goto IL_00b9;
			}
		}

IL_0110:
		{
			IL2CPP_LEAVE(0x120, FINALLY_0112);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0112;
	}

FINALLY_0112:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m794A8065F96A52A636116CD7475B246BD39574CA((Enumerator_t6A7D904BD0F3BE4232CD582245697A79DBF254EF *)(&V_2), /*hidden argument*/Enumerator_Dispose_m794A8065F96A52A636116CD7475B246BD39574CA_RuntimeMethod_var);
		IL2CPP_END_FINALLY(274)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(274)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x120, IL_0120)
	}

IL_0120:
	{
		// VLog.W(error.ToString());
		StringBuilder_t * L_53 = V_0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_53);
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_W_m5F51329123EA2255E208EEA9BBC8480126413706(L_54, /*hidden argument*/NULL);
		// return null;
		return NULL;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Type> Meta.Conduit.ParameterProvider::GetParameterTypes(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParameterProvider_GetParameterTypes_mA670F705F61A8C169B965F9AAA0DD6D41335ACD2 (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, String_t* ___typeString0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m99949C67DA6DC570336F1CCED45ADF8287252128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m9A6E5C2A0932D66C3D38B64E417811BBD0DEE219_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5EE5B257E761957633252673F7CE743880A8E17C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC42867F2E8D1AB134501007C7AD3AFF220D75BF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisType_t_m0097E5DDAD2068C1D084460E5324F7BA957309C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisType_t_m98A76BE80710D7FA14000B0C39096DFA6092DFEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B765A1E8C1E378192FF47343E7F963528EC0C68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CGetParameterTypesU3Eb__0_m2CB81C73623339FA04EC215ABCBC3D2D743632A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_tD992F214B82EB3D359157B4A57D1FD567534695B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass21_0_tD992F214B82EB3D359157B4A57D1FD567534695B * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass21_0_tD992F214B82EB3D359157B4A57D1FD567534695B * L_0 = (U3CU3Ec__DisplayClass21_0_tD992F214B82EB3D359157B4A57D1FD567534695B *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_tD992F214B82EB3D359157B4A57D1FD567534695B_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass21_0__ctor_mFC316B2DEACA1E0C1F7DB9EF79398484C2870F33(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass21_0_tD992F214B82EB3D359157B4A57D1FD567534695B * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass21_0_tD992F214B82EB3D359157B4A57D1FD567534695B * L_2 = V_0;
		String_t* L_3 = ___value1;
		NullCheck(L_2);
		L_2->set_value_1(L_3);
		// if (_customTypes.ContainsKey(typeString))
		Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_4 = __this->get__customTypes_7();
		String_t* L_5 = ___typeString0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_m9A6E5C2A0932D66C3D38B64E417811BBD0DEE219(L_4, L_5, /*hidden argument*/Dictionary_2_ContainsKey_m9A6E5C2A0932D66C3D38B64E417811BBD0DEE219_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		// return new List<Type>() { _customTypes[typeString] };
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_7 = (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *)il2cpp_codegen_object_new(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_il2cpp_TypeInfo_var);
		List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED(L_7, /*hidden argument*/List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_8 = L_7;
		Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_9 = __this->get__customTypes_7();
		String_t* L_10 = ___typeString0;
		NullCheck(L_9);
		Type_t * L_11;
		L_11 = Dictionary_2_get_Item_m5EE5B257E761957633252673F7CE743880A8E17C(L_9, L_10, /*hidden argument*/Dictionary_2_get_Item_m5EE5B257E761957633252673F7CE743880A8E17C_RuntimeMethod_var);
		NullCheck(L_8);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_8, L_11, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		return L_8;
	}

IL_003a:
	{
		// if (!_builtInTypes.ContainsKey(typeString) || _builtInTypes[typeString].Count == 0)
		IL2CPP_RUNTIME_CLASS_INIT(ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26_il2cpp_TypeInfo_var);
		Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 * L_12 = ((ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26_StaticFields*)il2cpp_codegen_static_fields_for(ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26_il2cpp_TypeInfo_var))->get__builtInTypes_6();
		String_t* L_13 = ___typeString0;
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_m99949C67DA6DC570336F1CCED45ADF8287252128(L_12, L_13, /*hidden argument*/Dictionary_2_ContainsKey_m99949C67DA6DC570336F1CCED45ADF8287252128_RuntimeMethod_var);
		if (!L_14)
		{
			goto IL_0059;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26_il2cpp_TypeInfo_var);
		Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 * L_15 = ((ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26_StaticFields*)il2cpp_codegen_static_fields_for(ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26_il2cpp_TypeInfo_var))->get__builtInTypes_6();
		String_t* L_16 = ___typeString0;
		NullCheck(L_15);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_17;
		L_17 = Dictionary_2_get_Item_mC42867F2E8D1AB134501007C7AD3AFF220D75BF4(L_15, L_16, /*hidden argument*/Dictionary_2_get_Item_mC42867F2E8D1AB134501007C7AD3AFF220D75BF4_RuntimeMethod_var);
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m1B765A1E8C1E378192FF47343E7F963528EC0C68_inline(L_17, /*hidden argument*/List_1_get_Count_m1B765A1E8C1E378192FF47343E7F963528EC0C68_RuntimeMethod_var);
		if (L_18)
		{
			goto IL_006f;
		}
	}

IL_0059:
	{
		// return new List<Type>() { typeof(string) };
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_19 = (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *)il2cpp_codegen_object_new(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_il2cpp_TypeInfo_var);
		List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED(L_19, /*hidden argument*/List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_20 = L_19;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_21 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22;
		L_22 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_20, L_22, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		return L_20;
	}

IL_006f:
	{
		// return _builtInTypes[typeString].Where(type => PerfectTypeMatch(type, value)).ToList();
		IL2CPP_RUNTIME_CLASS_INIT(ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26_il2cpp_TypeInfo_var);
		Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 * L_23 = ((ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26_StaticFields*)il2cpp_codegen_static_fields_for(ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26_il2cpp_TypeInfo_var))->get__builtInTypes_6();
		String_t* L_24 = ___typeString0;
		NullCheck(L_23);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_25;
		L_25 = Dictionary_2_get_Item_mC42867F2E8D1AB134501007C7AD3AFF220D75BF4(L_23, L_24, /*hidden argument*/Dictionary_2_get_Item_mC42867F2E8D1AB134501007C7AD3AFF220D75BF4_RuntimeMethod_var);
		U3CU3Ec__DisplayClass21_0_tD992F214B82EB3D359157B4A57D1FD567534695B * L_26 = V_0;
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_27 = (Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 *)il2cpp_codegen_object_new(Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5_il2cpp_TypeInfo_var);
		Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D(L_27, L_26, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass21_0_U3CGetParameterTypesU3Eb__0_m2CB81C73623339FA04EC215ABCBC3D2D743632A0_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D_RuntimeMethod_var);
		RuntimeObject* L_28;
		L_28 = Enumerable_Where_TisType_t_m98A76BE80710D7FA14000B0C39096DFA6092DFEA(L_25, L_27, /*hidden argument*/Enumerable_Where_TisType_t_m98A76BE80710D7FA14000B0C39096DFA6092DFEA_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_29;
		L_29 = Enumerable_ToList_TisType_t_m0097E5DDAD2068C1D084460E5324F7BA957309C7(L_28, /*hidden argument*/Enumerable_ToList_TisType_t_m0097E5DDAD2068C1D084460E5324F7BA957309C7_RuntimeMethod_var);
		return L_29;
	}
}
// System.Boolean Meta.Conduit.ParameterProvider::PerfectTypeMatch(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterProvider_PerfectTypeMatch_m4509B6BAC3CE6FF02EA643022C822060384F39AA (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, Type_t * ___targetType0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// var valueAsTarget = Convert.ChangeType(value, targetType);
			String_t* L_0 = ___value1;
			Type_t * L_1 = ___targetType0;
			IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
			RuntimeObject * L_2;
			L_2 = Convert_ChangeType_m39FC73F25D46B8B5D60E8F59B3BFCDD891E29669(L_0, L_1, /*hidden argument*/NULL);
			V_0 = L_2;
			// if (valueAsTarget == null)
			RuntimeObject * L_3 = V_0;
			if (L_3)
			{
				goto IL_000f;
			}
		}

IL_000b:
		{
			// return false;
			V_1 = (bool)0;
			goto IL_002f;
		}

IL_000f:
		{
			// if (!targetType.IsPrimitive)
			Type_t * L_4 = ___targetType0;
			NullCheck(L_4);
			bool L_5;
			L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3(L_4, /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_001b;
			}
		}

IL_0017:
		{
			// return true;
			V_1 = (bool)1;
			goto IL_002f;
		}

IL_001b:
		{
			// return value.Equals(valueAsTarget.ToString());
			String_t* L_6 = ___value1;
			RuntimeObject * L_7 = V_0;
			NullCheck(L_7);
			String_t* L_8;
			L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
			NullCheck(L_6);
			bool L_9;
			L_9 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_6, L_8, /*hidden argument*/NULL);
			V_1 = L_9;
			goto IL_002f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002a;
		}
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.Exception)
		// catch (Exception)
		// return false;
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002f;
	} // end catch (depth: 1)

IL_002f:
	{
		// }
		bool L_10 = V_1;
		return L_10;
	}
}
// System.String Meta.Conduit.ParameterProvider::GetActualParameterName(System.Reflection.ParameterInfo,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParameterProvider_GetActualParameterName_m2021633F3F3C46CE0AD7B5723DC03CE7D9853426 (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___formalParameter0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___parameterMap1, bool ___relaxed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FD210F72F823B7D5F53048538C393F3BEE13397);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C572534613C66044C38AE3EBE85C27908D6FF28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FDF9180296CDD3BFAEA23DC87830C15E2F3F69A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// var formalParameterName = formalParameter.Name;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_0 = ___formalParameter0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (parameterMap.ContainsKey(formalParameterName))
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_2 = ___parameterMap1;
		String_t* L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		// targetActualParameterName = parameterMap[formalParameterName];
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_5 = ___parameterMap1;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var);
		V_1 = L_7;
		// }
		goto IL_001c;
	}

IL_001a:
	{
		// targetActualParameterName = formalParameterName;
		String_t* L_8 = V_0;
		V_1 = L_8;
	}

IL_001c:
	{
		// if (ActualParameters.ContainsKey(targetActualParameterName))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_9 = __this->get_ActualParameters_2();
		String_t* L_10 = V_1;
		NullCheck(L_9);
		bool L_11;
		L_11 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_9, L_10, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_002c;
		}
	}
	{
		// return targetActualParameterName;
		String_t* L_12 = V_1;
		return L_12;
	}

IL_002c:
	{
		// if (_parameterToRoleMap.ContainsKey(targetActualParameterName))
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_13 = __this->get__parameterToRoleMap_3();
		String_t* L_14 = V_1;
		NullCheck(L_13);
		bool L_15;
		L_15 = Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027(L_13, L_14, /*hidden argument*/Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_005f;
		}
	}
	{
		// var roleName = _parameterToRoleMap[targetActualParameterName];
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_16 = __this->get__parameterToRoleMap_3();
		String_t* L_17 = V_1;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141(L_16, L_17, /*hidden argument*/Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var);
		V_3 = L_18;
		// if (!string.IsNullOrEmpty(roleName) && this.ActualParameters.ContainsKey(roleName))
		String_t* L_19 = V_3;
		bool L_20;
		L_20 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_005f;
		}
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_21 = __this->get_ActualParameters_2();
		String_t* L_22 = V_3;
		NullCheck(L_21);
		bool L_23;
		L_23 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_21, L_22, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		if (!L_23)
		{
			goto IL_005f;
		}
	}
	{
		// return roleName;
		String_t* L_24 = V_3;
		return L_24;
	}

IL_005f:
	{
		// if (!relaxed)
		bool L_25 = ___relaxed2;
		if (L_25)
		{
			goto IL_0079;
		}
	}
	{
		// VLog.E($"Parameter '{formalParameterName}' is missing");
		String_t* L_26 = V_0;
		String_t* L_27;
		L_27 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(_stringLiteral4C572534613C66044C38AE3EBE85C27908D6FF28, L_26, _stringLiteral2FD210F72F823B7D5F53048538C393F3BEE13397, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_E_m933DD49354CCDE1DA69ACB4991F68B7003B2BD09(L_27, /*hidden argument*/NULL);
		// return null;
		return (String_t*)NULL;
	}

IL_0079:
	{
		// var possibleNames = GetParameterNamesOfType(formalParameter.ParameterType);
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_28 = ___formalParameter0;
		NullCheck(L_28);
		Type_t * L_29;
		L_29 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_28);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_30;
		L_30 = ParameterProvider_GetParameterNamesOfType_m86CAEB85D54015496B46522D75193864885E4377(__this, L_29, /*hidden argument*/NULL);
		V_2 = L_30;
		// if (possibleNames.Count != 1)
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_31, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		if ((((int32_t)L_32) == ((int32_t)1)))
		{
			goto IL_00a6;
		}
	}
	{
		// VLog.E(
		//     $"Got multiple parameters of type {formalParameter.ParameterType} but none with the correct name");
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_33 = ___formalParameter0;
		NullCheck(L_33);
		Type_t * L_34;
		L_34 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_33);
		String_t* L_35;
		L_35 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(_stringLiteral9FDF9180296CDD3BFAEA23DC87830C15E2F3F69A, L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_E_m933DD49354CCDE1DA69ACB4991F68B7003B2BD09(L_35, /*hidden argument*/NULL);
		// return null;
		return (String_t*)NULL;
	}

IL_00a6:
	{
		// targetActualParameterName = possibleNames[0];
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_36 = V_2;
		NullCheck(L_36);
		String_t* L_37;
		L_37 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_36, 0, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		V_1 = L_37;
		// return targetActualParameterName;
		String_t* L_38 = V_1;
		return L_38;
	}
}
// System.String Meta.Conduit.ParameterProvider::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParameterProvider_ToString_m52A80FB9326F93C51592DF28138B8533ADD49FFC (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AA220E0FCE5E917D823E177B898237A503A6AF9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Join("',", AllParameterNames);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0;
		L_0 = ParameterProvider_get_AllParameterNames_m5F1D9A6D13A47E9BD2057A11DDEC7F6111E25855(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Join_m0522A013F5616F75C1A52BC224B50B35FA3DDA5E(_stringLiteral9AA220E0FCE5E917D823E177B898237A503A6AF9, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Meta.Conduit.ParameterProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider__ctor_mF151418D3C103A98058D3E8F7DE16C7A92B614A8 (ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m079AE1790DB8218117772D466378DF3BF739FF56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4757015DBB2285304C7222BE41A89FCB05BE5BC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m98D1D89FA627EFF725A6112AFFBD3CBF6CB8CE27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA90F246C9CCA3C9E6B7A0D461973B8E3C27A96E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAB54DC9EA2E016E35B204E9E26F3CF9F978B1234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected readonly Dictionary<string, object> ActualParameters = new Dictionary<string, object>(StringComparer.OrdinalIgnoreCase);
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_0;
		L_0 = StringComparer_get_OrdinalIgnoreCase_m29F9466A219FDF7A4D61CB85C122A9B70579B2E2_inline(/*hidden argument*/NULL);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m079AE1790DB8218117772D466378DF3BF739FF56(L_1, L_0, /*hidden argument*/Dictionary_2__ctor_m079AE1790DB8218117772D466378DF3BF739FF56_RuntimeMethod_var);
		__this->set_ActualParameters_2(L_1);
		// private readonly Dictionary<string, string> _parameterToRoleMap = new Dictionary<string, string>(StringComparer.OrdinalIgnoreCase);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_2;
		L_2 = StringComparer_get_OrdinalIgnoreCase_m29F9466A219FDF7A4D61CB85C122A9B70579B2E2_inline(/*hidden argument*/NULL);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4757015DBB2285304C7222BE41A89FCB05BE5BC0(L_3, L_2, /*hidden argument*/Dictionary_2__ctor_m4757015DBB2285304C7222BE41A89FCB05BE5BC0_RuntimeMethod_var);
		__this->set__parameterToRoleMap_3(L_3);
		// private readonly Dictionary<Type, List<string>> _parametersOfType = new Dictionary<Type, List<string>>();
		Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E * L_4 = (Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E *)il2cpp_codegen_object_new(Dictionary_2_t9DD9EA69AF99EA1BBE49C409321AA91BA249F87E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA90F246C9CCA3C9E6B7A0D461973B8E3C27A96E3(L_4, /*hidden argument*/Dictionary_2__ctor_mA90F246C9CCA3C9E6B7A0D461973B8E3C27A96E3_RuntimeMethod_var);
		__this->set__parametersOfType_4(L_4);
		// private readonly Dictionary<Type, string> _specializedParameters = new Dictionary<Type, string>();
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_5 = (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 *)il2cpp_codegen_object_new(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m98D1D89FA627EFF725A6112AFFBD3CBF6CB8CE27(L_5, /*hidden argument*/Dictionary_2__ctor_m98D1D89FA627EFF725A6112AFFBD3CBF6CB8CE27_RuntimeMethod_var);
		__this->set__specializedParameters_5(L_5);
		// private readonly Dictionary<string, Type> _customTypes = new Dictionary<string, Type>();
		Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_6 = (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 *)il2cpp_codegen_object_new(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mAB54DC9EA2E016E35B204E9E26F3CF9F978B1234(L_6, /*hidden argument*/Dictionary_2__ctor_mAB54DC9EA2E016E35B204E9E26F3CF9F978B1234_RuntimeMethod_var);
		__this->set__customTypes_7(L_6);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Meta.Conduit.ParameterProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider__cctor_m0B578C497EBC953D8F4FC7C34AF3DC6155CECF77 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD9C98FB1F414E695E642E6EAA4D2B66B3A03F295_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02CC0B39116ABD35C7079A163B63FCBD3A7A28DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12E2DF8D29931D0A7F6BAD259D3D8344D460ABA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54DED7E6C4142C7A4B393F38A26EA7563C817E66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral723AD9D4A305C071CE5BA68F3BE119C1321AEE08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D7471446741543FC8F6CF76ED088D1071EFDEE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93E063665B9B0BA4704D4E2337AEFCE11D860473);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA504012C0A73DA581CCE241EE6A92AF955E01C66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6567631BB9A28800CA018833DBF7581A00BC16C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBDF8AFC94D560BD88EEA635CD05D9017B97E990);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDFD7C73EDC4C382BFC197F2D672F32B3A524150);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Dictionary<string, List<Type>> _builtInTypes = new Dictionary<string, List<Type>>()
		// {
		//     { "wit$age_of_person", new List<Type>{typeof(int), typeof(short), typeof(long), typeof(float), typeof(double), typeof(decimal) }},
		//     { "wit$amount_of_money", new List<Type>{typeof(decimal), typeof(float), typeof(double), typeof(int)}},
		//     { "wit$datetime", new List<Type>{typeof(DateTime)}},
		//     { "wit$distance", new List<Type>{typeof(decimal), typeof(float), typeof(double), typeof(int)}},
		//     { "wit$duration", new List<Type>{typeof(TimeSpan), typeof(float), typeof(double), typeof(int), typeof(decimal)}},
		//     { "wit$number", new List<Type>{typeof(int), typeof(long), typeof(short), typeof(float), typeof(double), typeof(decimal) }},
		//     { "wit$ordinal", new List<Type>{typeof(int), typeof(long), typeof(short) }},
		//     { "wit$quantity", new List<Type>{typeof(int), typeof(long), typeof(short), typeof(float), typeof(double), typeof(decimal) }},
		//     { "wit$temperature", new List<Type>{typeof(decimal), typeof(float), typeof(double), typeof(int), typeof(short), typeof(long)}},
		//     { "wit$volume", new List<Type>{typeof(int), typeof(long), typeof(short), typeof(float), typeof(double), typeof(decimal) }}
		// };
		Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 * L_0 = (Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 *)il2cpp_codegen_object_new(Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD9C98FB1F414E695E642E6EAA4D2B66B3A03F295(L_0, /*hidden argument*/Dictionary_2__ctor_mD9C98FB1F414E695E642E6EAA4D2B66B3A03F295_RuntimeMethod_var);
		Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 * L_1 = L_0;
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_2 = (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *)il2cpp_codegen_object_new(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_il2cpp_TypeInfo_var);
		List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED(L_2, /*hidden argument*/List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_3 = L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_3, L_5, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_6 = L_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_6, L_8, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_9 = L_6;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_9, L_11, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_12 = L_9;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_12, L_14, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_15 = L_12;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_16 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		Type_t * L_17;
		L_17 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_15, L_17, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_18 = L_15;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var) };
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_18, L_20, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		NullCheck(L_1);
		Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668(L_1, _stringLiteral7D7471446741543FC8F6CF76ED088D1071EFDEE3, L_18, /*hidden argument*/Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668_RuntimeMethod_var);
		Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 * L_21 = L_1;
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_22 = (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *)il2cpp_codegen_object_new(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_il2cpp_TypeInfo_var);
		List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED(L_22, /*hidden argument*/List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_23 = L_22;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_24 = { reinterpret_cast<intptr_t> (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var) };
		Type_t * L_25;
		L_25 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_23, L_25, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_26 = L_23;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_27 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_28;
		L_28 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_26, L_28, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_29 = L_26;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_30 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		Type_t * L_31;
		L_31 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_29, L_31, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_32 = L_29;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_33 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_34;
		L_34 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_33, /*hidden argument*/NULL);
		NullCheck(L_32);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_32, L_34, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		NullCheck(L_21);
		Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668(L_21, _stringLiteral723AD9D4A305C071CE5BA68F3BE119C1321AEE08, L_32, /*hidden argument*/Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668_RuntimeMethod_var);
		Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 * L_35 = L_21;
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_36 = (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *)il2cpp_codegen_object_new(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_il2cpp_TypeInfo_var);
		List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED(L_36, /*hidden argument*/List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_37 = L_36;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_38 = { reinterpret_cast<intptr_t> (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var) };
		Type_t * L_39;
		L_39 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_37, L_39, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		NullCheck(L_35);
		Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668(L_35, _stringLiteralFBDF8AFC94D560BD88EEA635CD05D9017B97E990, L_37, /*hidden argument*/Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668_RuntimeMethod_var);
		Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 * L_40 = L_35;
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_41 = (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *)il2cpp_codegen_object_new(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_il2cpp_TypeInfo_var);
		List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED(L_41, /*hidden argument*/List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_42 = L_41;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var) };
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_43, /*hidden argument*/NULL);
		NullCheck(L_42);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_42, L_44, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_45 = L_42;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_46 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_47;
		L_47 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_46, /*hidden argument*/NULL);
		NullCheck(L_45);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_45, L_47, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_48 = L_45;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_49, /*hidden argument*/NULL);
		NullCheck(L_48);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_48, L_50, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_51 = L_48;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_52 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_53;
		L_53 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_52, /*hidden argument*/NULL);
		NullCheck(L_51);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_51, L_53, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		NullCheck(L_40);
		Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668(L_40, _stringLiteralFDFD7C73EDC4C382BFC197F2D672F32B3A524150, L_51, /*hidden argument*/Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668_RuntimeMethod_var);
		Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 * L_54 = L_40;
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_55 = (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *)il2cpp_codegen_object_new(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_il2cpp_TypeInfo_var);
		List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED(L_55, /*hidden argument*/List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_56 = L_55;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_57 = { reinterpret_cast<intptr_t> (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_0_0_0_var) };
		Type_t * L_58;
		L_58 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_57, /*hidden argument*/NULL);
		NullCheck(L_56);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_56, L_58, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_59 = L_56;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_60 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_61;
		L_61 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_60, /*hidden argument*/NULL);
		NullCheck(L_59);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_59, L_61, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_62 = L_59;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_63 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		Type_t * L_64;
		L_64 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_63, /*hidden argument*/NULL);
		NullCheck(L_62);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_62, L_64, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_65 = L_62;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_66 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_67;
		L_67 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_66, /*hidden argument*/NULL);
		NullCheck(L_65);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_65, L_67, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_68 = L_65;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_69 = { reinterpret_cast<intptr_t> (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var) };
		Type_t * L_70;
		L_70 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_69, /*hidden argument*/NULL);
		NullCheck(L_68);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_68, L_70, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		NullCheck(L_54);
		Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668(L_54, _stringLiteralA504012C0A73DA581CCE241EE6A92AF955E01C66, L_68, /*hidden argument*/Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668_RuntimeMethod_var);
		Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 * L_71 = L_54;
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_72 = (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *)il2cpp_codegen_object_new(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_il2cpp_TypeInfo_var);
		List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED(L_72, /*hidden argument*/List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_73 = L_72;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_74 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_75;
		L_75 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_74, /*hidden argument*/NULL);
		NullCheck(L_73);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_73, L_75, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_76 = L_73;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_77 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		Type_t * L_78;
		L_78 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_77, /*hidden argument*/NULL);
		NullCheck(L_76);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_76, L_78, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_79 = L_76;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_80 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		Type_t * L_81;
		L_81 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_80, /*hidden argument*/NULL);
		NullCheck(L_79);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_79, L_81, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_82 = L_79;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_83 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_84;
		L_84 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_83, /*hidden argument*/NULL);
		NullCheck(L_82);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_82, L_84, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_85 = L_82;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_86 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		Type_t * L_87;
		L_87 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_86, /*hidden argument*/NULL);
		NullCheck(L_85);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_85, L_87, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_88 = L_85;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_89 = { reinterpret_cast<intptr_t> (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var) };
		Type_t * L_90;
		L_90 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_89, /*hidden argument*/NULL);
		NullCheck(L_88);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_88, L_90, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		NullCheck(L_71);
		Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668(L_71, _stringLiteral93E063665B9B0BA4704D4E2337AEFCE11D860473, L_88, /*hidden argument*/Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668_RuntimeMethod_var);
		Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 * L_91 = L_71;
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_92 = (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *)il2cpp_codegen_object_new(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_il2cpp_TypeInfo_var);
		List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED(L_92, /*hidden argument*/List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_93 = L_92;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_94 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_95;
		L_95 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_94, /*hidden argument*/NULL);
		NullCheck(L_93);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_93, L_95, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_96 = L_93;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_97 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		Type_t * L_98;
		L_98 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_97, /*hidden argument*/NULL);
		NullCheck(L_96);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_96, L_98, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_99 = L_96;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_100 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		Type_t * L_101;
		L_101 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_100, /*hidden argument*/NULL);
		NullCheck(L_99);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_99, L_101, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		NullCheck(L_91);
		Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668(L_91, _stringLiteralD6567631BB9A28800CA018833DBF7581A00BC16C, L_99, /*hidden argument*/Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668_RuntimeMethod_var);
		Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 * L_102 = L_91;
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_103 = (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *)il2cpp_codegen_object_new(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_il2cpp_TypeInfo_var);
		List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED(L_103, /*hidden argument*/List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_104 = L_103;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_105 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_106;
		L_106 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_105, /*hidden argument*/NULL);
		NullCheck(L_104);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_104, L_106, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_107 = L_104;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_108 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		Type_t * L_109;
		L_109 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_108, /*hidden argument*/NULL);
		NullCheck(L_107);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_107, L_109, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_110 = L_107;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_111 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		Type_t * L_112;
		L_112 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_111, /*hidden argument*/NULL);
		NullCheck(L_110);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_110, L_112, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_113 = L_110;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_114 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_115;
		L_115 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_114, /*hidden argument*/NULL);
		NullCheck(L_113);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_113, L_115, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_116 = L_113;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_117 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		Type_t * L_118;
		L_118 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_117, /*hidden argument*/NULL);
		NullCheck(L_116);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_116, L_118, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_119 = L_116;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_120 = { reinterpret_cast<intptr_t> (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var) };
		Type_t * L_121;
		L_121 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_120, /*hidden argument*/NULL);
		NullCheck(L_119);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_119, L_121, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		NullCheck(L_102);
		Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668(L_102, _stringLiteral12E2DF8D29931D0A7F6BAD259D3D8344D460ABA8, L_119, /*hidden argument*/Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668_RuntimeMethod_var);
		Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 * L_122 = L_102;
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_123 = (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *)il2cpp_codegen_object_new(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_il2cpp_TypeInfo_var);
		List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED(L_123, /*hidden argument*/List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_124 = L_123;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_125 = { reinterpret_cast<intptr_t> (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var) };
		Type_t * L_126;
		L_126 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_125, /*hidden argument*/NULL);
		NullCheck(L_124);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_124, L_126, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_127 = L_124;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_128 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_129;
		L_129 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_128, /*hidden argument*/NULL);
		NullCheck(L_127);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_127, L_129, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_130 = L_127;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_131 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		Type_t * L_132;
		L_132 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_131, /*hidden argument*/NULL);
		NullCheck(L_130);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_130, L_132, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_133 = L_130;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_134 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_135;
		L_135 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_134, /*hidden argument*/NULL);
		NullCheck(L_133);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_133, L_135, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_136 = L_133;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_137 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		Type_t * L_138;
		L_138 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_137, /*hidden argument*/NULL);
		NullCheck(L_136);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_136, L_138, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_139 = L_136;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_140 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		Type_t * L_141;
		L_141 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_140, /*hidden argument*/NULL);
		NullCheck(L_139);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_139, L_141, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		NullCheck(L_122);
		Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668(L_122, _stringLiteral54DED7E6C4142C7A4B393F38A26EA7563C817E66, L_139, /*hidden argument*/Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668_RuntimeMethod_var);
		Dictionary_2_tE34D44D54EF265EDEC9A2B22E98224E78225DC12 * L_142 = L_122;
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_143 = (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *)il2cpp_codegen_object_new(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_il2cpp_TypeInfo_var);
		List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED(L_143, /*hidden argument*/List_1__ctor_m2664E772BEC27840867512EC2E339FF01F648AED_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_144 = L_143;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_145 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_146;
		L_146 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_145, /*hidden argument*/NULL);
		NullCheck(L_144);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_144, L_146, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_147 = L_144;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_148 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		Type_t * L_149;
		L_149 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_148, /*hidden argument*/NULL);
		NullCheck(L_147);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_147, L_149, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_150 = L_147;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_151 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		Type_t * L_152;
		L_152 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_151, /*hidden argument*/NULL);
		NullCheck(L_150);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_150, L_152, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_153 = L_150;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_154 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_155;
		L_155 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_154, /*hidden argument*/NULL);
		NullCheck(L_153);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_153, L_155, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_156 = L_153;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_157 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		Type_t * L_158;
		L_158 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_157, /*hidden argument*/NULL);
		NullCheck(L_156);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_156, L_158, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_159 = L_156;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_160 = { reinterpret_cast<intptr_t> (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var) };
		Type_t * L_161;
		L_161 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_160, /*hidden argument*/NULL);
		NullCheck(L_159);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_159, L_161, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		NullCheck(L_142);
		Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668(L_142, _stringLiteral02CC0B39116ABD35C7079A163B63FCBD3A7A28DC, L_159, /*hidden argument*/Dictionary_2_Add_m1864226BC6FC838588CC3AC848AF9D5A2419C668_RuntimeMethod_var);
		((ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26_StaticFields*)il2cpp_codegen_static_fields_for(ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26_il2cpp_TypeInfo_var))->set__builtInTypes_6(L_142);
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
// System.Void Meta.Conduit.WitKeyword::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitKeyword__ctor_m13351C55E289FC80144D9FCD977D609B3DFAB4B9 (WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitKeyword():this("", null)
		WitKeyword__ctor_mA24856B88B54C49C4ED1B11D89714F8EF5C643B8(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Meta.Conduit.WitKeyword::.ctor(System.String,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitKeyword__ctor_mA24856B88B54C49C4ED1B11D89714F8EF5C643B8 (WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0 * __this, String_t* ___keyword0, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___synonyms1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m2D141B160C366DB0A2B24DA4A97CC8653C77800E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// public WitKeyword(string keyword, List<string> synonyms = null)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.keyword = keyword;
		String_t* L_0 = ___keyword0;
		__this->set_keyword_0(L_0);
		// this.synonyms = new HashSet<string>(StringComparer.OrdinalIgnoreCase);
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_1;
		L_1 = StringComparer_get_OrdinalIgnoreCase_m29F9466A219FDF7A4D61CB85C122A9B70579B2E2_inline(/*hidden argument*/NULL);
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_2 = (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *)il2cpp_codegen_object_new(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m2D141B160C366DB0A2B24DA4A97CC8653C77800E(L_2, L_1, /*hidden argument*/HashSet_1__ctor_m2D141B160C366DB0A2B24DA4A97CC8653C77800E_RuntimeMethod_var);
		__this->set_synonyms_1(L_2);
		// if (synonyms == null)
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = ___synonyms1;
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		// return;
		return;
	}

IL_0021:
	{
		// foreach (var synonym in synonyms)
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = ___synonyms1;
		NullCheck(L_4);
		Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_5;
		L_5 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_4, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_002a:
		{
			// foreach (var synonym in synonyms)
			String_t* L_6;
			L_6 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_0), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
			V_1 = L_6;
			// if (!this.synonyms.Contains(synonym))
			HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_7 = __this->get_synonyms_1();
			String_t* L_8 = V_1;
			NullCheck(L_7);
			bool L_9;
			L_9 = HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF(L_7, L_8, /*hidden argument*/HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_004d;
			}
		}

IL_0040:
		{
			// this.synonyms.Add(synonym);
			HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_10 = __this->get_synonyms_1();
			String_t* L_11 = V_1;
			NullCheck(L_10);
			bool L_12;
			L_12 = HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370(L_10, L_11, /*hidden argument*/HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		}

IL_004d:
		{
			// foreach (var synonym in synonyms)
			bool L_13;
			L_13 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_002a;
			}
		}

IL_0056:
		{
			IL2CPP_LEAVE(0x66, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_0), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(88)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x66, IL_0066)
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void Meta.Conduit.WitKeyword::.ctor(Meta.WitAi.Data.Info.WitEntityKeywordInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitKeyword__ctor_mE7A636FB824A679BB9C5CA7C538F80965000EA36 (WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0 * __this, WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12  ___witEntityKeywordInfo0, const RuntimeMethod* method)
{
	{
		// public WitKeyword(WitEntityKeywordInfo witEntityKeywordInfo): this(witEntityKeywordInfo.keyword, witEntityKeywordInfo.synonyms)
		WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12  L_0 = ___witEntityKeywordInfo0;
		String_t* L_1 = L_0.get_keyword_0();
		WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12  L_2 = ___witEntityKeywordInfo0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = L_2.get_synonyms_1();
		WitKeyword__ctor_mA24856B88B54C49C4ED1B11D89714F8EF5C643B8(__this, L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Meta.WitAi.Data.Info.WitEntityKeywordInfo Meta.Conduit.WitKeyword::GetAsInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12  WitKeyword_GetAsInfo_mD3F1F9FF0538EDD39B731CDF48761C09CAB37894 (WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// new WitEntityKeywordInfo()
		// {
		//     keyword = this.keyword,
		//     synonyms = this.synonyms.ToList()
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12 ));
		String_t* L_0 = __this->get_keyword_0();
		(&V_0)->set_keyword_0(L_0);
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_1 = __this->get_synonyms_1();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2;
		L_2 = Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28(L_1, /*hidden argument*/Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28_RuntimeMethod_var);
		(&V_0)->set_synonyms_1(L_2);
		WitEntityKeywordInfo_t03DC254BAADFED193C47BB2FE46E7B42B1D4CF12  L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Meta.Conduit.WitKeyword::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitKeyword_Equals_mF8DC72966E4C19E90951E59197675AD5F13A2E54 (WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0 * V_0 = NULL;
	{
		// if (obj is WitKeyword other)
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0 *)IsInstClass((RuntimeObject*)L_0, WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0_il2cpp_TypeInfo_var));
		WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return Equals(other);
		WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0 * L_2 = V_0;
		bool L_3;
		L_3 = WitKeyword_Equals_m340843728FA629787497D02B62E6707CE88FA2B3(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0012:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Meta.Conduit.WitKeyword::Equals(Meta.Conduit.WitKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitKeyword_Equals_m340843728FA629787497D02B62E6707CE88FA2B3 (WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0 * __this, WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisString_t_m6725D76BF34DF9B9C48E007FEAD6C122CE4AEC17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.keyword.Equals(other.keyword) && this.synonyms.SequenceEqual(other.synonyms);
		String_t* L_0 = __this->get_keyword_0();
		WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0 * L_1 = ___other0;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_keyword_0();
		NullCheck(L_0);
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_4 = __this->get_synonyms_1();
		WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0 * L_5 = ___other0;
		NullCheck(L_5);
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_6 = L_5->get_synonyms_1();
		bool L_7;
		L_7 = Enumerable_SequenceEqual_TisString_t_m6725D76BF34DF9B9C48E007FEAD6C122CE4AEC17(L_4, L_6, /*hidden argument*/Enumerable_SequenceEqual_TisString_t_m6725D76BF34DF9B9C48E007FEAD6C122CE4AEC17_RuntimeMethod_var);
		return L_7;
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Int32 Meta.Conduit.WitKeyword::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WitKeyword_GetHashCode_m5D2AFE1A89CC3C25092A6F59554A58452C753BAC (WitKeyword_tCFF810959FD6A54C39B1EB7B4B1273C12AEE79D0 * __this, const RuntimeMethod* method)
{
	{
		// var hash = 17;
		// hash = hash * 31 + keyword.GetHashCode();
		String_t* L_0 = __this->get_keyword_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// hash = hash * 31 + synonyms.GetHashCode();
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_2 = __this->get_synonyms_1();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)31))), (int32_t)L_1)), (int32_t)((int32_t)31))), (int32_t)L_3));
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
// System.Void Meta.Conduit.ConduitDispatcher/InvocationContextFilter::.ctor(Meta.Conduit.IParameterProvider,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContextFilter__ctor_mC917E85FD10A560AAEEBFA7B590EB1535ABAC603 (InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653 * __this, RuntimeObject* ___parameterProvider0, List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * ___actionContexts1, bool ___relaxed2, const RuntimeMethod* method)
{
	{
		// public InvocationContextFilter(IParameterProvider parameterProvider, List<InvocationContext> actionContexts, bool relaxed = false)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _parameterProvider = parameterProvider;
		RuntimeObject* L_0 = ___parameterProvider0;
		__this->set__parameterProvider_1(L_0);
		// _actionContexts = actionContexts;
		List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * L_1 = ___actionContexts1;
		__this->set__actionContexts_0(L_1);
		// _relaxed = relaxed;
		bool L_2 = ___relaxed2;
		__this->set__relaxed_2(L_2);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.ConduitDispatcher/InvocationContextFilter::ResolveInvocationContexts(System.String,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * InvocationContextFilter_ResolveInvocationContexts_mD6C245435EAD0BDD5C1D31249A9B01445538770C (InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653 * __this, String_t* ___actionId0, float ___confidence1, bool ___partial2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971_mCAE33F58DF534893BEDD8E6816DC4C2FFD6250D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisInvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971_m25314D09EB244234C63A11E5F58208A53F541C27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mDEB78D6F07C536567157D880423F4AE2B9EEBF7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tFCFE0C2B4CE4D6590B6FCE89CC6F1F45496AF49F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CResolveInvocationContextsU3Eb__0_m96F611DBFE8780A1716D6DFC5F3C638B34B14F7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t251974C43BC9D4A07E86E1FF7970519EB83921E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t251974C43BC9D4A07E86E1FF7970519EB83921E0 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t251974C43BC9D4A07E86E1FF7970519EB83921E0 * L_0 = (U3CU3Ec__DisplayClass4_0_t251974C43BC9D4A07E86E1FF7970519EB83921E0 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t251974C43BC9D4A07E86E1FF7970519EB83921E0_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_m33595A50E6FC00C90517ABF2D0B3B90DB8215912(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t251974C43BC9D4A07E86E1FF7970519EB83921E0 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass4_0_t251974C43BC9D4A07E86E1FF7970519EB83921E0 * L_2 = V_0;
		float L_3 = ___confidence1;
		NullCheck(L_2);
		L_2->set_confidence_1(L_3);
		U3CU3Ec__DisplayClass4_0_t251974C43BC9D4A07E86E1FF7970519EB83921E0 * L_4 = V_0;
		bool L_5 = ___partial2;
		NullCheck(L_4);
		L_4->set_partial_2(L_5);
		// return _actionContexts.Where(context => CompatibleInvocationContext(context, confidence, partial))
		//     .ToList();
		List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * L_6 = __this->get__actionContexts_0();
		U3CU3Ec__DisplayClass4_0_t251974C43BC9D4A07E86E1FF7970519EB83921E0 * L_7 = V_0;
		Func_2_tFCFE0C2B4CE4D6590B6FCE89CC6F1F45496AF49F * L_8 = (Func_2_tFCFE0C2B4CE4D6590B6FCE89CC6F1F45496AF49F *)il2cpp_codegen_object_new(Func_2_tFCFE0C2B4CE4D6590B6FCE89CC6F1F45496AF49F_il2cpp_TypeInfo_var);
		Func_2__ctor_mDEB78D6F07C536567157D880423F4AE2B9EEBF7C(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3CResolveInvocationContextsU3Eb__0_m96F611DBFE8780A1716D6DFC5F3C638B34B14F7E_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mDEB78D6F07C536567157D880423F4AE2B9EEBF7C_RuntimeMethod_var);
		RuntimeObject* L_9;
		L_9 = Enumerable_Where_TisInvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971_m25314D09EB244234C63A11E5F58208A53F541C27(L_6, L_8, /*hidden argument*/Enumerable_Where_TisInvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971_m25314D09EB244234C63A11E5F58208A53F541C27_RuntimeMethod_var);
		List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * L_10;
		L_10 = Enumerable_ToList_TisInvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971_mCAE33F58DF534893BEDD8E6816DC4C2FFD6250D9(L_9, /*hidden argument*/Enumerable_ToList_TisInvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971_mCAE33F58DF534893BEDD8E6816DC4C2FFD6250D9_RuntimeMethod_var);
		return L_10;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher/InvocationContextFilter::CompatibleInvocationContext(Meta.Conduit.InvocationContext,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvocationContextFilter_CompatibleInvocationContext_m112AA82195F134A0D8EF91C2F8086A645700E1C4 (InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653 * __this, InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * ___invocationContext0, float ___confidence1, bool ___partial2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisString_t_m271D41E8381DE1CDAC5C54BDCDD26B76A63D7E02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m6397C103AFDCE68F75EDF44FB493A9B6651F7AFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParameterProvider_t24DAEC91D61D987886A2207BDB533BC16D57A4AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CCompatibleInvocationContextU3Eb__0_m725BC37BE8AA0ADB4B5DDF8557D15011B75A06CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t0A464F4B91F35D8667CDC0F09A9E1C7C842EF246_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AA7858C328063B10F93180DAA4F8CECEAAABBA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C7CEFA994B6C7CAB324A6AC0F37639A23E691A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7386C7C44A61AE887AD9CFD7CF0DA932BBA457ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A3606EC2448DF9CCD84DF499ED72C8D6704E46E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1611699FEF45A8574406A8E197A1B4C0494643A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF77B7EB56FFCA00EA027593FFC88A4FD633A891);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t0A464F4B91F35D8667CDC0F09A9E1C7C842EF246 * V_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_1 = NULL;
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* V_2 = NULL;
	StringBuilder_t * V_3 = NULL;
	bool V_4 = false;
	HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * V_5 = NULL;
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* V_6 = NULL;
	int32_t V_7 = 0;
	ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * V_8 = NULL;
	ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * V_9 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_10 = NULL;
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * V_11 = NULL;
	String_t* G_B11_0 = NULL;
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * G_B24_0 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * G_B24_1 = NULL;
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * G_B23_0 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * G_B23_1 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_t0A464F4B91F35D8667CDC0F09A9E1C7C842EF246 * L_0 = (U3CU3Ec__DisplayClass5_0_t0A464F4B91F35D8667CDC0F09A9E1C7C842EF246 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t0A464F4B91F35D8667CDC0F09A9E1C7C842EF246_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass5_0__ctor_mE8982F313BC5320E3B925DC65090E440EB1F955D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// Dictionary<string, string> parameterMap = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_1, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		V_1 = L_1;
		// var parameters = invocationContext.MethodInfo.GetParameters();
		InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_2 = ___invocationContext0;
		NullCheck(L_2);
		MethodInfo_t * L_3;
		L_3 = InvocationContext_get_MethodInfo_m2D90A4508D1FF72455B08A101724A2B400999C83_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_4;
		L_4 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_3);
		V_2 = L_4;
		// if (invocationContext.ValidatePartial != partial)
		InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_5 = ___invocationContext0;
		NullCheck(L_5);
		bool L_6;
		L_6 = InvocationContext_get_ValidatePartial_m28E929E67B00C21745F3A352C1C3DBC37191FEF7_inline(L_5, /*hidden argument*/NULL);
		bool L_7 = ___partial2;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0023;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0023:
	{
		// if (invocationContext.MinConfidence > confidence || confidence > invocationContext.MaxConfidence)
		InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_8 = ___invocationContext0;
		NullCheck(L_8);
		float L_9;
		L_9 = InvocationContext_get_MinConfidence_m51849B1141BEC4FE9A78A91ECC79C7A887F2FE6F_inline(L_8, /*hidden argument*/NULL);
		float L_10 = ___confidence1;
		if ((((float)L_9) > ((float)L_10)))
		{
			goto IL_0035;
		}
	}
	{
		float L_11 = ___confidence1;
		InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_12 = ___invocationContext0;
		NullCheck(L_12);
		float L_13;
		L_13 = InvocationContext_get_MaxConfidence_m744A5CA4356E4636030A1785C0D93D1CF1A52215_inline(L_12, /*hidden argument*/NULL);
		if ((!(((float)L_11) > ((float)L_13))))
		{
			goto IL_0037;
		}
	}

IL_0035:
	{
		// return false;
		return (bool)0;
	}

IL_0037:
	{
		// var exactMatches = new HashSet<string>();
		U3CU3Ec__DisplayClass5_0_t0A464F4B91F35D8667CDC0F09A9E1C7C842EF246 * L_14 = V_0;
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_15 = (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *)il2cpp_codegen_object_new(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818(L_15, /*hidden argument*/HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var);
		NullCheck(L_14);
		L_14->set_exactMatches_0(L_15);
		// var log = new StringBuilder();
		StringBuilder_t * L_16 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_16, /*hidden argument*/NULL);
		V_3 = L_16;
		// var allParametersMatched = true;
		V_4 = (bool)1;
		// foreach (var parameter in parameters)
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_17 = V_2;
		V_6 = L_17;
		V_7 = 0;
		goto IL_00be;
	}

IL_0053:
	{
		// foreach (var parameter in parameters)
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_18 = V_6;
		int32_t L_19 = V_7;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_8 = L_21;
		// if (_parameterProvider.ContainsParameter(parameter, log))
		RuntimeObject* L_22 = __this->get__parameterProvider_1();
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_23 = V_8;
		StringBuilder_t * L_24 = V_3;
		NullCheck(L_22);
		bool L_25;
		L_25 = InterfaceFuncInvoker2< bool, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 *, StringBuilder_t * >::Invoke(4 /* System.Boolean Meta.Conduit.IParameterProvider::ContainsParameter(System.Reflection.ParameterInfo,System.Text.StringBuilder) */, IParameterProvider_t24DAEC91D61D987886A2207BDB533BC16D57A4AC_il2cpp_TypeInfo_var, L_22, L_23, L_24);
		if (!L_25)
		{
			goto IL_007f;
		}
	}
	{
		// exactMatches.Add(parameter.Name);
		U3CU3Ec__DisplayClass5_0_t0A464F4B91F35D8667CDC0F09A9E1C7C842EF246 * L_26 = V_0;
		NullCheck(L_26);
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_27 = L_26->get_exactMatches_0();
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_28 = V_8;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_28);
		NullCheck(L_27);
		bool L_30;
		L_30 = HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370(L_27, L_29, /*hidden argument*/HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		// continue;
		goto IL_00b8;
	}

IL_007f:
	{
		// VLog.D(!_relaxed
		//     ? $"Could not find value for parameter: {parameter.Name}"
		//     : $"Could not find exact value for parameter: {parameter.Name}. Will attempt resolving by type.");
		bool L_31 = __this->get__relaxed_2();
		if (!L_31)
		{
			goto IL_009f;
		}
	}
	{
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_32 = V_8;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_32);
		String_t* L_34;
		L_34 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(_stringLiteralCF77B7EB56FFCA00EA027593FFC88A4FD633A891, L_33, _stringLiteral7386C7C44A61AE887AD9CFD7CF0DA932BBA457ED, /*hidden argument*/NULL);
		G_B11_0 = L_34;
		goto IL_00b0;
	}

IL_009f:
	{
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_35 = V_8;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_35);
		String_t* L_37;
		L_37 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral1AA7858C328063B10F93180DAA4F8CECEAAABBA4, L_36, /*hidden argument*/NULL);
		G_B11_0 = L_37;
	}

IL_00b0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_D_mB8DFC679557449B0F18DC36EB5CE5F9A35B8D67C(G_B11_0, /*hidden argument*/NULL);
		// allParametersMatched = false;
		V_4 = (bool)0;
	}

IL_00b8:
	{
		int32_t L_38 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00be:
	{
		// foreach (var parameter in parameters)
		int32_t L_39 = V_7;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_40 = V_6;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0053;
		}
	}
	{
		// if (allParametersMatched)
		bool L_41 = V_4;
		if (!L_41)
		{
			goto IL_00cc;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_00cc:
	{
		// if (!_relaxed)
		bool L_42 = __this->get__relaxed_2();
		if (L_42)
		{
			goto IL_00fc;
		}
	}
	{
		// VLog.D(
		//     $"Failed to resolve parameters. \nType: {invocationContext.Type.FullName}\nMethod: {invocationContext.MethodInfo.Name}\n{log}");
		InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_43 = ___invocationContext0;
		NullCheck(L_43);
		Type_t * L_44;
		L_44 = InvocationContext_get_Type_m94663BEC59E45CCA072A6F895FF56EE1FEBB793B_inline(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		String_t* L_45;
		L_45 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_44);
		InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_46 = ___invocationContext0;
		NullCheck(L_46);
		MethodInfo_t * L_47;
		L_47 = InvocationContext_get_MethodInfo_m2D90A4508D1FF72455B08A101724A2B400999C83_inline(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_47);
		StringBuilder_t * L_49 = V_3;
		String_t* L_50;
		L_50 = String_Format_mD0D523A440845BA7F58E68187E029DC9AB821CED(_stringLiteral7A3606EC2448DF9CCD84DF499ED72C8D6704E46E, L_45, L_48, L_49, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_D_mB8DFC679557449B0F18DC36EB5CE5F9A35B8D67C(L_50, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_00fc:
	{
		// var actualTypes = new HashSet<Type>();
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_51 = (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 *)il2cpp_codegen_object_new(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D(L_51, /*hidden argument*/HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D_RuntimeMethod_var);
		V_5 = L_51;
		// foreach (var parameter in parameters)
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_52 = V_2;
		V_6 = L_52;
		V_7 = 0;
		goto IL_01df;
	}

IL_010e:
	{
		// foreach (var parameter in parameters)
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_53 = V_6;
		int32_t L_54 = V_7;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_9 = L_56;
		// if (exactMatches.Contains(parameter.Name))
		U3CU3Ec__DisplayClass5_0_t0A464F4B91F35D8667CDC0F09A9E1C7C842EF246 * L_57 = V_0;
		NullCheck(L_57);
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_58 = L_57->get_exactMatches_0();
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_59 = V_9;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_59);
		NullCheck(L_58);
		bool L_61;
		L_61 = HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF(L_58, L_60, /*hidden argument*/HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var);
		if (L_61)
		{
			goto IL_01d9;
		}
	}
	{
		// if (actualTypes.Contains(parameter.ParameterType))
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_62 = V_5;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_63 = V_9;
		NullCheck(L_63);
		Type_t * L_64;
		L_64 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_63);
		NullCheck(L_62);
		bool L_65;
		L_65 = HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3(L_62, L_64, /*hidden argument*/HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3_RuntimeMethod_var);
		if (!L_65)
		{
			goto IL_0154;
		}
	}
	{
		// VLog.D($"Failed to resolve parameters by type. More than one value of type {parameter.ParameterType} were provided.");
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_66 = V_9;
		NullCheck(L_66);
		Type_t * L_67;
		L_67 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_66);
		String_t* L_68;
		L_68 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(_stringLiteral1C7CEFA994B6C7CAB324A6AC0F37639A23E691A0, L_67, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_D_mB8DFC679557449B0F18DC36EB5CE5F9A35B8D67C(L_68, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0154:
	{
		// actualTypes.Add(parameter.ParameterType);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_69 = V_5;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_70 = V_9;
		NullCheck(L_70);
		Type_t * L_71;
		L_71 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_70);
		NullCheck(L_69);
		bool L_72;
		L_72 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_69, L_71, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		// var actualParameterNames = _parameterProvider.GetParameterNamesOfType(parameter.ParameterType).Where(parameterName => !exactMatches.Contains(parameterName)).ToList();
		RuntimeObject* L_73 = __this->get__parameterProvider_1();
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_74 = V_9;
		NullCheck(L_74);
		Type_t * L_75;
		L_75 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_74);
		NullCheck(L_73);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_76;
		L_76 = InterfaceFuncInvoker1< List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, Type_t * >::Invoke(7 /* System.Collections.Generic.List`1<System.String> Meta.Conduit.IParameterProvider::GetParameterNamesOfType(System.Type) */, IParameterProvider_t24DAEC91D61D987886A2207BDB533BC16D57A4AC_il2cpp_TypeInfo_var, L_73, L_75);
		U3CU3Ec__DisplayClass5_0_t0A464F4B91F35D8667CDC0F09A9E1C7C842EF246 * L_77 = V_0;
		NullCheck(L_77);
		Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * L_78 = L_77->get_U3CU3E9__0_1();
		Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * L_79 = L_78;
		G_B23_0 = L_79;
		G_B23_1 = L_76;
		if (L_79)
		{
			G_B24_0 = L_79;
			G_B24_1 = L_76;
			goto IL_0196;
		}
	}
	{
		U3CU3Ec__DisplayClass5_0_t0A464F4B91F35D8667CDC0F09A9E1C7C842EF246 * L_80 = V_0;
		U3CU3Ec__DisplayClass5_0_t0A464F4B91F35D8667CDC0F09A9E1C7C842EF246 * L_81 = V_0;
		Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * L_82 = (Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D *)il2cpp_codegen_object_new(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D_il2cpp_TypeInfo_var);
		Func_2__ctor_m6397C103AFDCE68F75EDF44FB493A9B6651F7AFE(L_82, L_81, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3CCompatibleInvocationContextU3Eb__0_m725BC37BE8AA0ADB4B5DDF8557D15011B75A06CC_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m6397C103AFDCE68F75EDF44FB493A9B6651F7AFE_RuntimeMethod_var);
		Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * L_83 = L_82;
		V_11 = L_83;
		NullCheck(L_80);
		L_80->set_U3CU3E9__0_1(L_83);
		Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * L_84 = V_11;
		G_B24_0 = L_84;
		G_B24_1 = G_B23_1;
	}

IL_0196:
	{
		RuntimeObject* L_85;
		L_85 = Enumerable_Where_TisString_t_m271D41E8381DE1CDAC5C54BDCDD26B76A63D7E02(G_B24_1, G_B24_0, /*hidden argument*/Enumerable_Where_TisString_t_m271D41E8381DE1CDAC5C54BDCDD26B76A63D7E02_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_86;
		L_86 = Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28(L_85, /*hidden argument*/Enumerable_ToList_TisString_t_m924526A9A8535A19BE1B4645AB35CA0D3DD71D28_RuntimeMethod_var);
		V_10 = L_86;
		// if (actualParameterNames.Count != 1)
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_87 = V_10;
		NullCheck(L_87);
		int32_t L_88;
		L_88 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_87, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		if ((((int32_t)L_88) == ((int32_t)1)))
		{
			goto IL_01c4;
		}
	}
	{
		// VLog.D($"Failed to find compatible value for {parameter.Name}");
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_89 = V_9;
		NullCheck(L_89);
		String_t* L_90;
		L_90 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_89);
		String_t* L_91;
		L_91 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralC1611699FEF45A8574406A8E197A1B4C0494643A, L_90, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VLog_tED2D2BED27A8D88743B4A24BBFF3930069EE3452_il2cpp_TypeInfo_var);
		VLog_D_mB8DFC679557449B0F18DC36EB5CE5F9A35B8D67C(L_91, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_01c4:
	{
		// parameterMap[parameter.Name] = actualParameterNames[0];
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_92 = V_1;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_93 = V_9;
		NullCheck(L_93);
		String_t* L_94;
		L_94 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_93);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_95 = V_10;
		NullCheck(L_95);
		String_t* L_96;
		L_96 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_95, 0, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(L_92);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_92, L_94, L_96, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
	}

IL_01d9:
	{
		int32_t L_97 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_01df:
	{
		// foreach (var parameter in parameters)
		int32_t L_98 = V_7;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_99 = V_6;
		NullCheck(L_99);
		if ((((int32_t)L_98) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_99)->max_length))))))
		{
			goto IL_010e;
		}
	}
	{
		// invocationContext.ParameterMap = parameterMap;
		InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_100 = ___invocationContext0;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_101 = V_1;
		NullCheck(L_100);
		InvocationContext_set_ParameterMap_m1233C14215E6880AEF535DCAEC63FC3E3333ADDF_inline(L_100, L_101, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ProgressDelegate_t30218000FBF83D444E47FA55B9F780505C0E3BF9 (ProgressDelegate_t30218000FBF83D444E47FA55B9F780505C0E3BF9 * __this, String_t* ___status0, float ___progress1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___status0' to native representation
	char* ____status0_marshaled = NULL;
	____status0_marshaled = il2cpp_codegen_marshal_string(___status0);

	// Native function invocation
	il2cppPInvokeFunc(____status0_marshaled, ___progress1);

	// Marshaling cleanup of parameter '___status0' native representation
	il2cpp_codegen_marshal_free(____status0_marshaled);
	____status0_marshaled = NULL;

}
// System.Void Meta.Conduit.ConduitUtilities/ProgressDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressDelegate__ctor_mDE85BBB85E3B47FD3F45B8EECBF636CE0CBB4CF5 (ProgressDelegate_t30218000FBF83D444E47FA55B9F780505C0E3BF9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Meta.Conduit.ConduitUtilities/ProgressDelegate::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressDelegate_Invoke_mD904245282FDA0CF965F8C557112FA942525A8A3 (ProgressDelegate_t30218000FBF83D444E47FA55B9F780505C0E3BF9 * __this, String_t* ___status0, float ___progress1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___status0, ___progress1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___progress1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, ___status0, ___progress1);
					else
						GenericVirtActionInvoker1< float >::Invoke(targetMethod, ___status0, ___progress1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___status0, ___progress1);
					else
						VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___status0, ___progress1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___status0, ___progress1, targetMethod);
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
						GenericInterfaceActionInvoker2< String_t*, float >::Invoke(targetMethod, targetThis, ___status0, ___progress1);
					else
						GenericVirtActionInvoker2< String_t*, float >::Invoke(targetMethod, targetThis, ___status0, ___progress1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___status0, ___progress1);
					else
						VirtActionInvoker2< String_t*, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___status0, ___progress1);
				}
			}
			else
			{
				if (___parameterCount == 1)
				{
					typedef void (*FunctionPointerType) (String_t*, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___status0, ___progress1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___progress1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Meta.Conduit.ConduitUtilities/ProgressDelegate::BeginInvoke(System.String,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProgressDelegate_BeginInvoke_m1C23F1EE76D7F9169A64018AFD0CF93E4F311229 (ProgressDelegate_t30218000FBF83D444E47FA55B9F780505C0E3BF9 * __this, String_t* ___status0, float ___progress1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___status0;
	__d_args[1] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___progress1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Meta.Conduit.ConduitUtilities/ProgressDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressDelegate_EndInvoke_mB26A27584E0DDE132C34026197900EA3242DCE4C (ProgressDelegate_t30218000FBF83D444E47FA55B9F780505C0E3BF9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Meta.Conduit.Manifest/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA8A57E286D93E6D5B2CCA1E4DC3086665B522C9C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3 * L_0 = (U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3 *)il2cpp_codegen_object_new(U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m06DE2518A2516E8CDC24C942D734FB372A4BCAFD(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Meta.Conduit.Manifest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m06DE2518A2516E8CDC24C942D734FB372A4BCAFD (U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Meta.Conduit.Manifest/<>c::<ResolveActions>b__26_0(System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CResolveActionsU3Eb__26_0_m68023485CC5863B64C4819A66E209376AFAB6E6E (U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3 * __this, List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * ___invocationContext0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA2472BBDF2F508EF1BB7D360B28CB9FCD636255D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// invocationContext.Count > 1))
		List_1_t79F736795335714ABC337199FBF6AAA73558A6E1 * L_0 = ___invocationContext0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mA2472BBDF2F508EF1BB7D360B28CB9FCD636255D_inline(L_0, /*hidden argument*/List_1_get_Count_mA2472BBDF2F508EF1BB7D360B28CB9FCD636255D_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) > ((int32_t)1))? 1 : 0);
	}
}
// System.Int32 Meta.Conduit.Manifest/<>c::<ResolveActions>b__26_1(Meta.Conduit.InvocationContext,Meta.Conduit.InvocationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CResolveActionsU3Eb__26_1_m641846455F8965CF4E6081EC0AF9D2325F05303A (U3CU3Ec_tD2C1027F638EAD5D31F2993121C0CD3403A5BAC3 * __this, InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * ___one0, InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * ___two1, const RuntimeMethod* method)
{
	{
		// two.MethodInfo.GetParameters().Length - one.MethodInfo.GetParameters().Length);
		InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_0 = ___two1;
		NullCheck(L_0);
		MethodInfo_t * L_1;
		L_1 = InvocationContext_get_MethodInfo_m2D90A4508D1FF72455B08A101724A2B400999C83_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_2;
		L_2 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_1);
		NullCheck(L_2);
		InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_3 = ___one0;
		NullCheck(L_3);
		MethodInfo_t * L_4;
		L_4 = InvocationContext_get_MethodInfo_m2D90A4508D1FF72455B08A101724A2B400999C83_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_5;
		L_5 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_4);
		NullCheck(L_5);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))));
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
// System.Void Meta.Conduit.ParameterProvider/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mFC316B2DEACA1E0C1F7DB9EF79398484C2870F33 (U3CU3Ec__DisplayClass21_0_tD992F214B82EB3D359157B4A57D1FD567534695B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Meta.Conduit.ParameterProvider/<>c__DisplayClass21_0::<GetParameterTypes>b__0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass21_0_U3CGetParameterTypesU3Eb__0_m2CB81C73623339FA04EC215ABCBC3D2D743632A0 (U3CU3Ec__DisplayClass21_0_tD992F214B82EB3D359157B4A57D1FD567534695B * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		// return _builtInTypes[typeString].Where(type => PerfectTypeMatch(type, value)).ToList();
		ParameterProvider_tC0A00D5F867651BD5772EB2D8796A4103C0ACB26 * L_0 = __this->get_U3CU3E4__this_0();
		Type_t * L_1 = ___type0;
		String_t* L_2 = __this->get_value_1();
		NullCheck(L_0);
		bool L_3;
		L_3 = ParameterProvider_PerfectTypeMatch_m4509B6BAC3CE6FF02EA643022C822060384F39AA(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m33595A50E6FC00C90517ABF2D0B3B90DB8215912 (U3CU3Ec__DisplayClass4_0_t251974C43BC9D4A07E86E1FF7970519EB83921E0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass4_0::<ResolveInvocationContexts>b__0(Meta.Conduit.InvocationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3CResolveInvocationContextsU3Eb__0_m96F611DBFE8780A1716D6DFC5F3C638B34B14F7E (U3CU3Ec__DisplayClass4_0_t251974C43BC9D4A07E86E1FF7970519EB83921E0 * __this, InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * ___context0, const RuntimeMethod* method)
{
	{
		// return _actionContexts.Where(context => CompatibleInvocationContext(context, confidence, partial))
		InvocationContextFilter_t56405036321856ABA1DFC21C1137E6AC3F271653 * L_0 = __this->get_U3CU3E4__this_0();
		InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * L_1 = ___context0;
		float L_2 = __this->get_confidence_1();
		bool L_3 = __this->get_partial_2();
		NullCheck(L_0);
		bool L_4;
		L_4 = InvocationContextFilter_CompatibleInvocationContext_m112AA82195F134A0D8EF91C2F8086A645700E1C4(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mE8982F313BC5320E3B925DC65090E440EB1F955D (U3CU3Ec__DisplayClass5_0_t0A464F4B91F35D8667CDC0F09A9E1C7C842EF246 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass5_0::<CompatibleInvocationContext>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CCompatibleInvocationContextU3Eb__0_m725BC37BE8AA0ADB4B5DDF8557D15011B75A06CC (U3CU3Ec__DisplayClass5_0_t0A464F4B91F35D8667CDC0F09A9E1C7C842EF246 * __this, String_t* ___parameterName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var actualParameterNames = _parameterProvider.GetParameterNamesOfType(parameter.ParameterType).Where(parameterName => !exactMatches.Contains(parameterName)).ToList();
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_0 = __this->get_exactMatches_0();
		String_t* L_1 = ___parameterName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF(L_0, L_1, /*hidden argument*/HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Intent_m263CF9EFFE775B902A5FF7B333D11625C5962CFA_inline (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Intent { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CIntentU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Aliases_m9937DAF4FEFE0EC7FEFCC7A982229111E9033816_inline (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method)
{
	{
		// public List<string> Aliases { get; private set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ___value0;
		__this->set_U3CAliasesU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MinConfidence_m04C5C6D94AEE7AFB00EA4B8D794AE5ED126CE136_inline (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MinConfidence { get; protected set; }
		float L_0 = ___value0;
		__this->set_U3CMinConfidenceU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MaxConfidence_mB79851401D1D596F9F136D5E3AABC368B45F9CA3_inline (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MaxConfidence { get; protected set; }
		float L_0 = ___value0;
		__this->set_U3CMaxConfidenceU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_ValidatePartial_m33404154DB6082F0BF07F46DE3D431B7F39B3E60_inline (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ValidatePartial { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CValidatePartialU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * ConduitDispatcher_get_Manifest_m9AF54C493CDCF4B8784916D8766A4B08767217E7_inline (ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77 * __this, const RuntimeMethod* method)
{
	{
		// public Manifest Manifest { get; private set; }
		Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * L_0 = __this->get_U3CManifestU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitDispatcher_set_Manifest_m547F188C6EDA82E43B3992257AFBBCCCE60B6048_inline (ConduitDispatcher_t9EEFCA6B332ACA494812F00FF073C202D9C1EA77 * __this, Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * ___value0, const RuntimeMethod* method)
{
	{
		// public Manifest Manifest { get; private set; }
		Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * L_0 = ___value0;
		__this->set_U3CManifestU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A * Manifest_get_Actions_mD8705A97A545D14BEFA977C6EC90F0135D4F8AC1_inline (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, const RuntimeMethod* method)
{
	{
		// public List<ManifestAction> Actions { get; set; } = new List<ManifestAction>();
		List_1_t8C8A2CC58CD630583F734DB16DA44F149E26371A * L_0 = __this->get_U3CActionsU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * ManifestAction_get_Parameters_m20870BE54DBD68586A57573B431585871B05B7AE_inline (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, const RuntimeMethod* method)
{
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_t2F1309ACE580490F2F4B00987DB2E86251C09E91 * L_0 = __this->get_U3CParametersU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_InternalName_m6A6ED9811F9520A02CE5D944BC6B50622DB0E7E1_inline (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, const RuntimeMethod* method)
{
	{
		// public string InternalName { get; set; }
		String_t* L_0 = __this->get_U3CInternalNameU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedName_m69BDD38050AC8A6478C08E6119EC84294764FB1A_inline (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, const RuntimeMethod* method)
{
	{
		// public string QualifiedName { get; set; }
		String_t* L_0 = __this->get_U3CQualifiedNameU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t * InvocationContext_get_MethodInfo_m2D90A4508D1FF72455B08A101724A2B400999C83_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, const RuntimeMethod* method)
{
	{
		// public MethodInfo MethodInfo { get; set; }
		MethodInfo_t * L_0 = __this->get_U3CMethodInfoU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * InvocationContext_get_ParameterMap_m39659277E2C1CBF5CDBCAA1525E60026C1A3869C_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, string> ParameterMap { get; set; } = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_U3CParameterMapU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * InvocationContext_get_Type_m94663BEC59E45CCA072A6F895FF56EE1FEBB793B_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, const RuntimeMethod* method)
{
	{
		// public Type Type { get; set; }
		Type_t * L_0 = __this->get_U3CTypeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_OrdinalIgnoreCase_m29F9466A219FDF7A4D61CB85C122A9B70579B2E2_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_0 = ((StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var))->get__ordinalIgnoreCase_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855 * Manifest_get_Entities_mF45F3CF715A5EC40BE253EC1397FC058CD387D65_inline (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, const RuntimeMethod* method)
{
	{
		// public List<ManifestEntity> Entities { get; set; } = new List<ManifestEntity>();
		List_1_t752E0C9AC8A2821282D026AEF75FEE48F47E7855 * L_0 = __this->get_U3CEntitiesU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Namespace_m9F470413C55992958A2C08F80963486BA8567172_inline (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, const RuntimeMethod* method)
{
	{
		// public string Namespace { get; set; }
		String_t* L_0 = __this->get_U3CNamespaceU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_ID_m3B9958F8C96A39013CBC45DE69AC6CD8978A44EA_inline (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, const RuntimeMethod* method)
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->get_U3CIDU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Assembly_m2E977627A6E8FE674FB8A354989EAC3F14EAEB06_inline (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, const RuntimeMethod* method)
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = __this->get_U3CAssemblyU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * Manifest_get_CustomEntityTypes_m9724BE86C733F32F09E3E093D5F9CB7E3F0B4AAE_inline (Manifest_t4FFD28FCF52948357E5DB7242A27E004CF982F10 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, Type> CustomEntityTypes { get; } = new Dictionary<string, Type>();
		Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_0 = __this->get_U3CCustomEntityTypesU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Name_mB4D88A1CDB8DED1F4E5976249A7B50D81B119B5E_inline (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_ID_mA8C0AA2B8E0AD6997D82E9CD729C5ECED0029FE9_inline (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, const RuntimeMethod* method)
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->get_U3CIDU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Assembly_m5C563ECB155985C292593A42FE94B9146EAFDF0C_inline (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, const RuntimeMethod* method)
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = __this->get_U3CAssemblyU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedTypeName_mB9D2527C2D0820F22F46AE03A82AFC75584B8D64_inline (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, const RuntimeMethod* method)
{
	{
		// public string QualifiedTypeName { get; set; }
		String_t* L_0 = __this->get_U3CQualifiedTypeNameU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_TypeAssembly_mB8CCA15F9B2593A3AEF8A242950D4F097E3CFB18_inline (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, const RuntimeMethod* method)
{
	{
		// public string TypeAssembly { get; set; }
		String_t* L_0 = __this->get_U3CTypeAssemblyU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_Type_m91583D68A2D990F3A048E11204058D1BC98220A2_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type Type { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MethodInfo_m6BB1EE81B39EB5123E85B883D08CED3CB227ADCD_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, MethodInfo_t * ___value0, const RuntimeMethod* method)
{
	{
		// public MethodInfo MethodInfo { get; set; }
		MethodInfo_t * L_0 = ___value0;
		__this->set_U3CMethodInfoU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MinConfidence_mB80E03D4881A88E8F5BB25FB621C9AC73897228A_inline (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, const RuntimeMethod* method)
{
	{
		// public float MinConfidence { get; protected set; }
		float L_0 = __this->get_U3CMinConfidenceU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MinConfidence_m1A8927D1523786E08BE1CBEC9EE0826968DE6AB7_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MinConfidence { get; set; } = 0;
		float L_0 = ___value0;
		__this->set_U3CMinConfidenceU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MaxConfidence_mB20819CD2B5B00EA7893A91326C4ED774FC9CCBC_inline (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, const RuntimeMethod* method)
{
	{
		// public float MaxConfidence { get; protected set; }
		float L_0 = __this->get_U3CMaxConfidenceU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MaxConfidence_m1FA275B7FCBDE491E03DAC59BC99C230F1D7F0A0_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MaxConfidence { get; set; } = 1;
		float L_0 = ___value0;
		__this->set_U3CMaxConfidenceU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConduitActionAttribute_get_ValidatePartial_mEC2E91582DF23F6016B4B14D6560CC501C8BAA6C_inline (ConduitActionAttribute_tA872DF12974CC52AB1568C9CBE49E383B77E307B * __this, const RuntimeMethod* method)
{
	{
		// public bool ValidatePartial { get; private set; }
		bool L_0 = __this->get_U3CValidatePartialU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_ValidatePartial_m3C83D984891A67A8E2661C5BB0BA021EE78B7964_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ValidatePartial { get; set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CValidatePartialU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Name_mA0A17B5F92AD9040023F72D3FF8FA976E7194E33_inline (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ManifestAction_get_Aliases_m09A1420BDCF18F4E0B7DE5E14EE8B94DC682488B_inline (ManifestAction_tF803FA44F8E2243E69C804CE3A266275AE34A130 * __this, const RuntimeMethod* method)
{
	{
		// public List<string> Aliases { get; set; } = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CAliasesU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 * ManifestEntity_get_Values_mF1AA90A3B30EAD99ACB8827089305AE2DB2092C7_inline (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, const RuntimeMethod* method)
{
	{
		// public List<WitKeyword> Values { get; set; } = new List<WitKeyword>();
		List_1_tD9499B499CBF1D92965B276A9B25BA453E5F7415 * L_0 = __this->get_U3CValuesU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Type_mF29EDA2CAB1D4CA52EEEF9698033233BBE42057A_inline (ManifestEntity_tCE9104B15DED3369133DF125955AAE0DECCFC3F4 * __this, const RuntimeMethod* method)
{
	{
		// public string Type { get; set; }
		String_t* L_0 = __this->get_U3CTypeU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ManifestParameter_get_Aliases_mEFC955CEBE01F9F22EE08C426C3CC8CC793B06CB_inline (ManifestParameter_tDC5AE0C558F76CE1717B37E6C521AEC98D42A11D * __this, const RuntimeMethod* method)
{
	{
		// public List<string> Aliases { get; set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CAliasesU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InvocationContext_get_ValidatePartial_m28E929E67B00C21745F3A352C1C3DBC37191FEF7_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, const RuntimeMethod* method)
{
	{
		// public bool ValidatePartial { get; set; } = false;
		bool L_0 = __this->get_U3CValidatePartialU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InvocationContext_get_MinConfidence_m51849B1141BEC4FE9A78A91ECC79C7A887F2FE6F_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, const RuntimeMethod* method)
{
	{
		// public float MinConfidence { get; set; } = 0;
		float L_0 = __this->get_U3CMinConfidenceU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InvocationContext_get_MaxConfidence_m744A5CA4356E4636030A1785C0D93D1CF1A52215_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, const RuntimeMethod* method)
{
	{
		// public float MaxConfidence { get; set; } = 1;
		float L_0 = __this->get_U3CMaxConfidenceU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_ParameterMap_m1233C14215E6880AEF535DCAEC63FC3E3333ADDF_inline (InvocationContext_t89858BB1535DC590C1DBC8324495799163BF2971 * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___value0, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, string> ParameterMap { get; set; } = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = ___value0;
		__this->set_U3CParameterMapU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t5965AA04DD9F00515A43502CCF9D43CF3B0D4359  Enumerator_get_Current_m440B5511FA222C4515E15D86DAB85DAFB1470A95_gshared_inline (Enumerator_t0C51EEB32B082AE195B7DF2761D5E6CE2D401B96 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t5965AA04DD9F00515A43502CCF9D43CF3B0D4359  L_0 = (KeyValuePair_2_t5965AA04DD9F00515A43502CCF9D43CF3B0D4359 )__this->get_current_3();
		return (KeyValuePair_2_t5965AA04DD9F00515A43502CCF9D43CF3B0D4359 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m91073CF62C4B1563AED4656DEB550AFAE7A83899_gshared_inline (KeyValuePair_2_t5965AA04DD9F00515A43502CCF9D43CF3B0D4359 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA  KeyValuePair_2_get_Value_mB85394DB1C1FD3095EA2C4D3189065FE8D130DC3_gshared_inline (KeyValuePair_2_t5965AA04DD9F00515A43502CCF9D43CF3B0D4359 * __this, const RuntimeMethod* method)
{
	{
		ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA  L_0 = (ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA )__this->get_value_1();
		return (ConduitParameterValue_t9027A67CFF26DC3610E94BF929C7665A6799C3DA )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mF254C3BDEA9F0829958522BF88C75DE8BEC4961F_gshared_inline (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentKey_3();
		return (RuntimeObject *)L_0;
	}
}

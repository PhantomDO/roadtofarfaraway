#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416;
// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t8B53B4CEDFCAA2901ADED4D0797304CC695D21E0;
// System.Comparison`1<RandomizeGameObject/RandomizingRule>
struct Comparison_1_t7096BF0E166402933FFA37F516D92EE511DAA944;
// Gameplay.Components.CurrencyComponent`1<Gameplay.Components.MoneyComponent>
struct CurrencyComponent_1_t66994DE0154F4226B3F3EB58E12A6FFF62D26AB4;
// Gameplay.Components.CurrencyComponent`1<System.Object>
struct CurrencyComponent_1_t8E9271605EC7CC45BBAEC59FC45D6502B2045473;
// Gameplay.Components.CurrencyComponent`1/DCurrencyUpdate<Gameplay.Components.HealthComponent>
struct DCurrencyUpdate_tD3B11A5F9B6E4E73A8E5FC71678DA46019EE5D92;
// Gameplay.Components.CurrencyComponent`1/DCurrencyUpdate<Gameplay.Components.MoneyComponent>
struct DCurrencyUpdate_t763B53A110F24C5A7728A96DE102E09129B78463;
// Gameplay.Components.CurrencyComponent`1/DCurrencyUpdate<System.Object>
struct DCurrencyUpdate_tE06F8B5F2AF5C17B8DF4CDB6ABC9F640610B2470;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Collections.Generic.Dictionary`2<System.Int32,Gameplay.UnitType>
struct Dictionary_2_tC769EDEDAA9DFE4AF4718712B15DF886CB84B9EB;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.GameObject>,System.Boolean>
struct Func_2_tF7D9974F87F771CEA58CA1AC2578EE0961720761;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.GameObject>,UnityEngine.Vector3>
struct Func_2_t7239D6919B5A66FB23BC087D7A58E2F43093A6A8;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>,UnityEngine.Vector3>
struct Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72;
// System.Func`2<System.Boolean,System.Boolean>
struct Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B;
// System.Func`2<UnityEngine.Vector3,System.Boolean>
struct Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269;
// System.Func`2<RandomizeGameObject/RandomizingRule,System.Single>
struct Func_2_t1158CE797C08DD5DA84CC8D4760A02D3389CA6D0;
// System.Func`3<UnityEngine.Vector3,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>>
struct Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F;
// GenericDictionary`2<System.Int32,UnityEngine.Animator>
struct GenericDictionary_2_tCFEF7DAA822BD7F8140BD45B93F56B268FBA1AB5;
// GenericDictionary`2<System.Int32,System.Int32Enum>
struct GenericDictionary_2_tE591A7C139F491CE23F05A5C853C7AB866AAF538;
// GenericDictionary`2<System.Int32,Gameplay.UnitType>
struct GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32Enum>>
struct IEnumerator_1_tD506C39068F698E896A0DB9E51468CD71ABAD752;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Gameplay.UnitType>>
struct IEnumerator_1_tBFED1107BED0293A2AD95C0CBEC0DBB336CE0F85;
// System.Collections.Generic.List`1<GenericDictionary`2/KeyValuePair<System.Int32,Gameplay.UnitType>>
struct List_1_tA081306E8BB5F2D84385ADDCAC0EEB8B6B0E5C2B;
// System.Collections.Generic.List`1<CandidateMap>
struct List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<KnightPiece>
struct List_1_t52BC4B0B14FCE3CADF231C72BA646D622E039BC7;
// System.Collections.Generic.List`1<UnityEngine.AI.NavMeshSurface>
struct List_1_t46EE4F62A085C0E594ADF6EDB0141972F6A03499;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA;
// System.Collections.Generic.List`1<Gameplay.Unit>
struct List_1_t41CBE32D41509BEA9E592CD06974AA64518FB4FE;
// System.Collections.Generic.List`1<UI.UnitTypeSelector>
struct List_1_tAE0E97B7D7F60185ED34A90D91810DFC7FDBA586;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.Queue`1<Gameplay.Unit>
struct Queue_1_t23C06D28DB019E8543EF1CACB2BA62B07527222C;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// CandidateMap[]
struct CandidateMapU5BU5D_t91DC7EF7AAA7DE299BB72470DE9E072CC6CA8818;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Cell[0...,0...]
struct CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Controls.BaseUIControls
struct BaseUIControls_t45DB53AA923879B80D03C145A046280C67C1225B;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// Controls.CameraControls
struct CameraControls_tEDA4EF38E586C8A1DC6B93F001F386A7BDD735ED;
// CameraMovement
struct CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35;
// CandidateMap
struct CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635;
// Cell
struct Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Gameplay.Components.DamageComponent
struct DamageComponent_tFEA533A214C2052990A29DB739F2ADEC2C0FD37E;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DropTween
struct DropTween_t2F1DA2E2AFC0F76F7DC4CFEEA07D5D893E5D6635;
// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96;
// UI.EndGameUI
struct EndGameUI_tA075D6CD03451CFEE161DAAF9E74D600A5B5A6AD;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameState.GameStateManager
struct GameStateManager_tF7AEC3D17EAEB0E30CBADF2F67F129F582EF3505;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6;
// Gameplay.Components.HealthComponent
struct HealthComponent_t51D2DE6F27167E6E785C8ABE16E758B8145C270C;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.InputSystem.InputAction
struct InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C;
// MapBrain
struct MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE;
// MapGrid
struct MapGrid_t236B663A22892CFD736FA4F8C43A59C44CF4F62A;
// MapVisualizer
struct MapVisualizer_t1EC632AB821D06F8B308C73F55990FC8CC4517EA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Gameplay.Components.MoneyComponent
struct MoneyComponent_t228EEF2620FCABEA0792C76C2698AFA39588683B;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Gameplay.Components.MovementComponent
struct MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B;
// UnityEngine.AI.NavMeshData
struct NavMeshData_t4A718E7F2CF47C3E1190DCAADCA989CBA91BDDF6;
// UnityEngine.AI.NavMeshSurface
struct NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Outline
struct Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C;
// Gameplay.Player
struct Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014;
// Controls.PlayerControls
struct PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A;
// UI.PlayerUI
struct PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// Gameplay.Components.RadarComponent
struct RadarComponent_t8F7233E55A9418045B14DD533DFC48686F6B3158;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.ScrollRect
struct ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA;
// UnityEngine.UI.Scrollbar
struct Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// Gameplay.Components.SpawnerComponent
struct SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// TMPro.TMP_Text
struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1;
// Controls.TouchControls
struct TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21;
// Gameplay.Tower
struct Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UIController
struct UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182;
// Managers.UiManager
struct UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F;
// Gameplay.Unit
struct Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D;
// Gameplay.UnitParameters
struct UnitParameters_t43E307D7F896416EB4DF9695B8CB74A9AB80E041;
// UI.UnitTypeSelector
struct UnitTypeSelector_tCE4315BDF2C562074885EE4F2EA7232B69A359C5;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Controls.CameraControls/ICameraActions
struct ICameraActions_tF80E3ADF1AD29198B5C3BDD73B91B11F1FE977E7;
// CameraMovement/<ZoomDetection>d__26
struct U3CZoomDetectionU3Ed__26_t411FAB335549F9E9960A87D9EDDFF5452659E998;
// CandidateMap/<>c
struct U3CU3Ec_t5A5947883458A78FB78DB005C350DEA924B5FA55;
// DropTween/<Grow>d__4
struct U3CGrowU3Ed__4_t3769F20A3FC9616EE97D394AFF0C7A3C5F86BCA8;
// Managers.GameManager/DDefeat
struct DDefeat_tFE73F7724C21B235D30257FDD83600D45DCBF549;
// Managers.GameManager/DWin
struct DWin_t27AEF6F901F3E8F569F78C37FF03308C57EE2D37;
// GameState.GameStateManager/GameStateChangeHandler
struct GameStateChangeHandler_tAD426F7A2DBB4222FA6503DDBE98341005D5B395;
// Gameplay.Components.HealthComponent/DDestroyUnit
struct DDestroyUnit_t5D4EC02605F1AB7D99B9CEAF00B2459599908E93;
// MapBrain/<>c
struct U3CU3Ec_t1A143AFC59360CD7E27C34736D3488A694DDD541;
// MapBrain/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_tFF3EE653C316E214065CE03767BDBDC809FEF65B;
// MapBrain/<GeneticAlgorithm>d__44
struct U3CGeneticAlgorithmU3Ed__44_t19064C60D68C0148305535C3A644C2E1BD2AE343;
// MapVisualizer/<>c
struct U3CU3Ec_t2D532FC10FA382DB658EF3AEA702C72902863E54;
// MapVisualizer/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t92159B18C93CBA1CD1B6B5671168711BECFF9F94;
// MapVisualizer/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t7B785AEC943168F0630C4382B8D17760638CE3CB;
// MapVisualizer/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_tE0C216A9EA33CDC5636CE25ADC57D9A5CDFF833E;
// Gameplay.Components.MovementComponent/DLandedComplete
struct DLandedComplete_tF35A9505355FD60AC2CD2CD58C8B302D5C1C2FE8;
// NewCustomRuleTile/Neighbor
struct Neighbor_tBFA27989DCA34FF377661D8D840E9A21C1C9FDE3;
// Outline/<>c
struct U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E;
// Outline/ListVector3
struct ListVector3_t54AB46ECA91F943A5FE7817CA662D0D5B78617B9;
// Gameplay.Player/<>c
struct U3CU3Ec_t535C18E424A6566A1193D6404FD769DE6680ECB6;
// Gameplay.Player/<MoveCrosshair>d__43
struct U3CMoveCrosshairU3Ed__43_t760AAA5F036C63AB0E8A79C493FF4E6B893D65C7;
// Gameplay.Player/DUnitHover
struct DUnitHover_tE4632E3CA979D212145A6551FA0D6072C68A2873;
// Gameplay.Player/DUnitSelected
struct DUnitSelected_t95F61357E6EB3EA355F745D67D35705638B9E0DC;
// Controls.PlayerControls/IPlayerActions
struct IPlayerActions_t3F62B9A240B9C683165F9E5781E66FEE3CDDCB0A;
// UI.PlayerUI/<LerpHealthValue>d__28
struct U3CLerpHealthValueU3Ed__28_tFA9A3940A3048EA51BFD4E31741883AD3D045E1D;
// RandomizeGameObject/<>c
struct U3CU3Ec_tBC51EABF39D5A7F72B1FD79E036C065FAA7975DD;
// RandomizeGameObject/RandomizingRule
struct RandomizingRule_t6E572B8080AFE6989D0BF5D365E917616FF95869;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED;
// Gameplay.Components.SpawnerComponent/DRegisterSpawner
struct DRegisterSpawner_t16093AA77CA07FF10F53ED12A10BF829DB733343;
// Controls.TouchControls/ITouchActions
struct ITouchActions_tB99260C763D8AB251A09F164BDBED4F37EF61344;
// Gameplay.Tower/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t6D6C3347E71A72CF0A4C5FC140F5E3B312BCEEFA;
// Gameplay.Tower/<SpawnAfterTime>d__19
struct U3CSpawnAfterTimeU3Ed__19_t5C81BC747ADF6D129809F5F3A35B754D3099BF5E;
// Gameplay.Tower/<TestAnimationEnded>d__21
struct U3CTestAnimationEndedU3Ed__21_t1C01CBE1DD38C489468F1DE1FE3CFD55145BF123;
// Managers.UiManager/DSelectRadarSearchingType
struct DSelectRadarSearchingType_t43F4DE272DC752F851CE93CA78CC62B6D06708ED;
// Managers.UiManager/DSelectSpawnableUnit
struct DSelectSpawnableUnit_t33D8A41BDE468CBC0E39E32A4B0367E8BD490C78;
// Gameplay.Unit/DRegisterUnit
struct DRegisterUnit_t22944849DF6EAF14CAF9EC9225CA3AC3EB10704F;
// Gameplay.Unit/DUnregisterUnit
struct DUnregisterUnit_tB7A585B9C96839E9EB8A2264FD3CD35CE06CBFCC;
// UI.UnitTypeSelector/DUnitButtonClicked
struct DUnitButtonClicked_tBE8676E1E0DBC2F05FE50B73CD273E49F95EC9FE;
// UnityEngine.RuleTile/TilingRuleOutput/Neighbor
struct Neighbor_tF976C08FE4E0F2143DADE610274231167405D77B;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameState_t0675C50881EA81C1735B4053426B5A0FA3FEF2DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tBFED1107BED0293A2AD95C0CBEC0DBB336CE0F85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayerActions_t3F62B9A240B9C683165F9E5781E66FEE3CDDCB0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITouchActions_tB99260C763D8AB251A09F164BDBED4F37EF61344_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SearchingMethod_t615DC655A0FA03617C5D596979D3D8D2DD2DA28A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_t6D6C3347E71A72CF0A4C5FC140F5E3B312BCEEFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1A143AFC59360CD7E27C34736D3488A694DDD541_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2D532FC10FA382DB658EF3AEA702C72902863E54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t535C18E424A6566A1193D6404FD769DE6680ECB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5A5947883458A78FB78DB005C350DEA924B5FA55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBC51EABF39D5A7F72B1FD79E036C065FAA7975DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnitType_t6DAE1F7924C09474B126957F76961771B832D282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisNavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A_mA3DB542D600F84046863E065A99F50A0DBEB395F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurrencyComponent_1_get_Current_m6459AE4C8551194AF604C2411F405DF4DCD1F49C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD7A8ED267E8DB3120D7F8D91493890613845A6E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF064953A7828971045DA03225B8BD06113C4B7B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD2FBE59C7113EC1BC94930B07794BC4CBDDCEA86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisTower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908_mA149B72CF274333FFB2DF13126B03244895BA8B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GenericDictionary_2_GetEnumerator_m64DA8E4F1643598B75314D72CA28D25B53027E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GenericDictionary_2_get_Count_mE4A833AAB126B8A55EE3EFFC30546AF7EBE9F778_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GenericDictionary_2_get_Item_m23E39C5E970445F88B162575DD5118FCCD60D21B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m868F41761382778B94845B27E2B6D041FE814E88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m7612B49A0C4765AB069FF3F0754E7B61C1A1F7C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m417C4D56013CA4EBCDD1D47879AAC85957FCC4A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mCEBD8B221F899AD9CFABF37864C2FF812DBCF562_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mFF8D9FEFDF56EC6F38DA016CFEB6BD045AB7424B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m84A358475EC8EEAC60A8D722A040615FD1E702D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0C1CF4D3DBB67BE8CD6C4A504DC19754C874A717_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB42E239E8F6236DEE9D0A234FB149B80243A0669_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1742EB5CB09CD424413E0CBFEC1849F4963E7C52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFAFE1697FE69956771C0F10056006C6261D4E4DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3A81C1ED01765116A1AD8A8636BC4281F6586E68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoSingleton_1_get_Instance_m88D8C59FFBCEF4E4C45F66E606B7B12840700054_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGeneticAlgorithmU3Ed__44_System_Collections_IEnumerator_Reset_mC9AF57B09EE85ABDB11DFF3FF36CFAA4CC68DD1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGrowU3Ed__4_System_Collections_IEnumerator_Reset_m9A34B48D3026138239AF3AC5E6BB59DCCDA3E2D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLerpHealthValueU3Ed__28_System_Collections_IEnumerator_Reset_m915395D5FC69E608AF9A1285C6BEDE0FB25E9342_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveCrosshairU3Ed__43_System_Collections_IEnumerator_Reset_m9849EFEB79723D356B26B4BB840C4CFA1A652FC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnAfterTimeU3Ed__19_System_Collections_IEnumerator_Reset_m08C60D1DE0E5C3EE25C10467468311DAB97FBA13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTestAnimationEndedU3Ed__21_System_Collections_IEnumerator_Reset_m0A4C25357AF76711DD01E08C95860BA1DE5E2361_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CTestAnimationEndedU3Eb__0_m0F27D144353DE2303D43C4B76CC6D880FAD1475D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CZoomDetectionU3Ed__26_MoveNext_m14265B6D65D50A15D7259DB5275F1B77FAB243FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CZoomDetectionU3Ed__26_System_Collections_IEnumerator_Reset_mF5D959BA1EC27D3E72184D10E923BC11CC606B8C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// GenericDictionary`2<System.Int32,Gameplay.UnitType>
struct GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<GenericDictionary`2/KeyValuePair<TKey,TValue>> GenericDictionary`2::list
	List_1_tA081306E8BB5F2D84385ADDCAC0EEB8B6B0E5C2B * ___list_0;
	// System.Collections.Generic.Dictionary`2<TKey,System.Int32> GenericDictionary`2::indexByKey
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___indexByKey_1;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> GenericDictionary`2::dict
	Dictionary_2_tC769EDEDAA9DFE4AF4718712B15DF886CB84B9EB * ___dict_2;
	// System.Boolean GenericDictionary`2::keyCollision
	bool ___keyCollision_3;
	// System.Boolean GenericDictionary`2::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93, ___list_0)); }
	inline List_1_tA081306E8BB5F2D84385ADDCAC0EEB8B6B0E5C2B * get_list_0() const { return ___list_0; }
	inline List_1_tA081306E8BB5F2D84385ADDCAC0EEB8B6B0E5C2B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tA081306E8BB5F2D84385ADDCAC0EEB8B6B0E5C2B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_indexByKey_1() { return static_cast<int32_t>(offsetof(GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93, ___indexByKey_1)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_indexByKey_1() const { return ___indexByKey_1; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_indexByKey_1() { return &___indexByKey_1; }
	inline void set_indexByKey_1(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___indexByKey_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexByKey_1), (void*)value);
	}

	inline static int32_t get_offset_of_dict_2() { return static_cast<int32_t>(offsetof(GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93, ___dict_2)); }
	inline Dictionary_2_tC769EDEDAA9DFE4AF4718712B15DF886CB84B9EB * get_dict_2() const { return ___dict_2; }
	inline Dictionary_2_tC769EDEDAA9DFE4AF4718712B15DF886CB84B9EB ** get_address_of_dict_2() { return &___dict_2; }
	inline void set_dict_2(Dictionary_2_tC769EDEDAA9DFE4AF4718712B15DF886CB84B9EB * value)
	{
		___dict_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dict_2), (void*)value);
	}

	inline static int32_t get_offset_of_keyCollision_3() { return static_cast<int32_t>(offsetof(GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93, ___keyCollision_3)); }
	inline bool get_keyCollision_3() const { return ___keyCollision_3; }
	inline bool* get_address_of_keyCollision_3() { return &___keyCollision_3; }
	inline void set_keyCollision_3(bool value)
	{
		___keyCollision_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsReadOnlyU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93, ___U3CIsReadOnlyU3Ek__BackingField_4)); }
	inline bool get_U3CIsReadOnlyU3Ek__BackingField_4() const { return ___U3CIsReadOnlyU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsReadOnlyU3Ek__BackingField_4() { return &___U3CIsReadOnlyU3Ek__BackingField_4; }
	inline void set_U3CIsReadOnlyU3Ek__BackingField_4(bool value)
	{
		___U3CIsReadOnlyU3Ek__BackingField_4 = value;
	}
};


// System.Collections.Generic.List`1<CandidateMap>
struct List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CandidateMapU5BU5D_t91DC7EF7AAA7DE299BB72470DE9E072CC6CA8818* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9, ____items_1)); }
	inline CandidateMapU5BU5D_t91DC7EF7AAA7DE299BB72470DE9E072CC6CA8818* get__items_1() const { return ____items_1; }
	inline CandidateMapU5BU5D_t91DC7EF7AAA7DE299BB72470DE9E072CC6CA8818** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CandidateMapU5BU5D_t91DC7EF7AAA7DE299BB72470DE9E072CC6CA8818* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CandidateMapU5BU5D_t91DC7EF7AAA7DE299BB72470DE9E072CC6CA8818* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9_StaticFields, ____emptyArray_5)); }
	inline CandidateMapU5BU5D_t91DC7EF7AAA7DE299BB72470DE9E072CC6CA8818* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CandidateMapU5BU5D_t91DC7EF7AAA7DE299BB72470DE9E072CC6CA8818** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CandidateMapU5BU5D_t91DC7EF7AAA7DE299BB72470DE9E072CC6CA8818* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Controls.CameraControls
struct CameraControls_tEDA4EF38E586C8A1DC6B93F001F386A7BDD735ED  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputActionAsset Controls.CameraControls::<asset>k__BackingField
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___U3CassetU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputActionMap Controls.CameraControls::m_Camera
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * ___m_Camera_1;
	// Controls.CameraControls/ICameraActions Controls.CameraControls::m_CameraActionsCallbackInterface
	RuntimeObject* ___m_CameraActionsCallbackInterface_2;
	// UnityEngine.InputSystem.InputAction Controls.CameraControls::m_Camera_Movement
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Camera_Movement_3;
	// UnityEngine.InputSystem.InputAction Controls.CameraControls::m_Camera_Zoom
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Camera_Zoom_4;

public:
	inline static int32_t get_offset_of_U3CassetU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CameraControls_tEDA4EF38E586C8A1DC6B93F001F386A7BDD735ED, ___U3CassetU3Ek__BackingField_0)); }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * get_U3CassetU3Ek__BackingField_0() const { return ___U3CassetU3Ek__BackingField_0; }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E ** get_address_of_U3CassetU3Ek__BackingField_0() { return &___U3CassetU3Ek__BackingField_0; }
	inline void set_U3CassetU3Ek__BackingField_0(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * value)
	{
		___U3CassetU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CassetU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Camera_1() { return static_cast<int32_t>(offsetof(CameraControls_tEDA4EF38E586C8A1DC6B93F001F386A7BDD735ED, ___m_Camera_1)); }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * get_m_Camera_1() const { return ___m_Camera_1; }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 ** get_address_of_m_Camera_1() { return &___m_Camera_1; }
	inline void set_m_Camera_1(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * value)
	{
		___m_Camera_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CameraActionsCallbackInterface_2() { return static_cast<int32_t>(offsetof(CameraControls_tEDA4EF38E586C8A1DC6B93F001F386A7BDD735ED, ___m_CameraActionsCallbackInterface_2)); }
	inline RuntimeObject* get_m_CameraActionsCallbackInterface_2() const { return ___m_CameraActionsCallbackInterface_2; }
	inline RuntimeObject** get_address_of_m_CameraActionsCallbackInterface_2() { return &___m_CameraActionsCallbackInterface_2; }
	inline void set_m_CameraActionsCallbackInterface_2(RuntimeObject* value)
	{
		___m_CameraActionsCallbackInterface_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraActionsCallbackInterface_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Camera_Movement_3() { return static_cast<int32_t>(offsetof(CameraControls_tEDA4EF38E586C8A1DC6B93F001F386A7BDD735ED, ___m_Camera_Movement_3)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_Camera_Movement_3() const { return ___m_Camera_Movement_3; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_Camera_Movement_3() { return &___m_Camera_Movement_3; }
	inline void set_m_Camera_Movement_3(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_Camera_Movement_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_Movement_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Camera_Zoom_4() { return static_cast<int32_t>(offsetof(CameraControls_tEDA4EF38E586C8A1DC6B93F001F386A7BDD735ED, ___m_Camera_Zoom_4)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_Camera_Zoom_4() const { return ___m_Camera_Zoom_4; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_Camera_Zoom_4() { return &___m_Camera_Zoom_4; }
	inline void set_m_Camera_Zoom_4(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_Camera_Zoom_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_Zoom_4), (void*)value);
	}
};


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// MapGrid
struct MapGrid_t236B663A22892CFD736FA4F8C43A59C44CF4F62A  : public RuntimeObject
{
public:
	// Cell[0...,0...] MapGrid::_cellGrid
	CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C* ____cellGrid_0;
	// System.Int32 MapGrid::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.Int32 MapGrid::<Width>k__BackingField
	int32_t ___U3CWidthU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of__cellGrid_0() { return static_cast<int32_t>(offsetof(MapGrid_t236B663A22892CFD736FA4F8C43A59C44CF4F62A, ____cellGrid_0)); }
	inline CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C* get__cellGrid_0() const { return ____cellGrid_0; }
	inline CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C** get_address_of__cellGrid_0() { return &____cellGrid_0; }
	inline void set__cellGrid_0(CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C* value)
	{
		____cellGrid_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cellGrid_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MapGrid_t236B663A22892CFD736FA4F8C43A59C44CF4F62A, ___U3CLengthU3Ek__BackingField_1)); }
	inline int32_t get_U3CLengthU3Ek__BackingField_1() const { return ___U3CLengthU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CLengthU3Ek__BackingField_1() { return &___U3CLengthU3Ek__BackingField_1; }
	inline void set_U3CLengthU3Ek__BackingField_1(int32_t value)
	{
		___U3CLengthU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MapGrid_t236B663A22892CFD736FA4F8C43A59C44CF4F62A, ___U3CWidthU3Ek__BackingField_2)); }
	inline int32_t get_U3CWidthU3Ek__BackingField_2() const { return ___U3CWidthU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CWidthU3Ek__BackingField_2() { return &___U3CWidthU3Ek__BackingField_2; }
	inline void set_U3CWidthU3Ek__BackingField_2(int32_t value)
	{
		___U3CWidthU3Ek__BackingField_2 = value;
	}
};


// Controls.PlayerControls
struct PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputActionAsset Controls.PlayerControls::<asset>k__BackingField
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___U3CassetU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputActionMap Controls.PlayerControls::m_Player
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * ___m_Player_1;
	// Controls.PlayerControls/IPlayerActions Controls.PlayerControls::m_PlayerActionsCallbackInterface
	RuntimeObject* ___m_PlayerActionsCallbackInterface_2;
	// UnityEngine.InputSystem.InputAction Controls.PlayerControls::m_Player_SelectAndSpawnUnit
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Player_SelectAndSpawnUnit_3;
	// System.Int32 Controls.PlayerControls::m_KeyboardMouseSchemeIndex
	int32_t ___m_KeyboardMouseSchemeIndex_4;
	// System.Int32 Controls.PlayerControls::m_GamepadSchemeIndex
	int32_t ___m_GamepadSchemeIndex_5;
	// System.Int32 Controls.PlayerControls::m_TouchSchemeIndex
	int32_t ___m_TouchSchemeIndex_6;
	// System.Int32 Controls.PlayerControls::m_JoystickSchemeIndex
	int32_t ___m_JoystickSchemeIndex_7;
	// System.Int32 Controls.PlayerControls::m_XRSchemeIndex
	int32_t ___m_XRSchemeIndex_8;

public:
	inline static int32_t get_offset_of_U3CassetU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A, ___U3CassetU3Ek__BackingField_0)); }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * get_U3CassetU3Ek__BackingField_0() const { return ___U3CassetU3Ek__BackingField_0; }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E ** get_address_of_U3CassetU3Ek__BackingField_0() { return &___U3CassetU3Ek__BackingField_0; }
	inline void set_U3CassetU3Ek__BackingField_0(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * value)
	{
		___U3CassetU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CassetU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Player_1() { return static_cast<int32_t>(offsetof(PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A, ___m_Player_1)); }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * get_m_Player_1() const { return ___m_Player_1; }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 ** get_address_of_m_Player_1() { return &___m_Player_1; }
	inline void set_m_Player_1(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * value)
	{
		___m_Player_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Player_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_PlayerActionsCallbackInterface_2() { return static_cast<int32_t>(offsetof(PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A, ___m_PlayerActionsCallbackInterface_2)); }
	inline RuntimeObject* get_m_PlayerActionsCallbackInterface_2() const { return ___m_PlayerActionsCallbackInterface_2; }
	inline RuntimeObject** get_address_of_m_PlayerActionsCallbackInterface_2() { return &___m_PlayerActionsCallbackInterface_2; }
	inline void set_m_PlayerActionsCallbackInterface_2(RuntimeObject* value)
	{
		___m_PlayerActionsCallbackInterface_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PlayerActionsCallbackInterface_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Player_SelectAndSpawnUnit_3() { return static_cast<int32_t>(offsetof(PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A, ___m_Player_SelectAndSpawnUnit_3)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_Player_SelectAndSpawnUnit_3() const { return ___m_Player_SelectAndSpawnUnit_3; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_Player_SelectAndSpawnUnit_3() { return &___m_Player_SelectAndSpawnUnit_3; }
	inline void set_m_Player_SelectAndSpawnUnit_3(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_Player_SelectAndSpawnUnit_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Player_SelectAndSpawnUnit_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_KeyboardMouseSchemeIndex_4() { return static_cast<int32_t>(offsetof(PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A, ___m_KeyboardMouseSchemeIndex_4)); }
	inline int32_t get_m_KeyboardMouseSchemeIndex_4() const { return ___m_KeyboardMouseSchemeIndex_4; }
	inline int32_t* get_address_of_m_KeyboardMouseSchemeIndex_4() { return &___m_KeyboardMouseSchemeIndex_4; }
	inline void set_m_KeyboardMouseSchemeIndex_4(int32_t value)
	{
		___m_KeyboardMouseSchemeIndex_4 = value;
	}

	inline static int32_t get_offset_of_m_GamepadSchemeIndex_5() { return static_cast<int32_t>(offsetof(PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A, ___m_GamepadSchemeIndex_5)); }
	inline int32_t get_m_GamepadSchemeIndex_5() const { return ___m_GamepadSchemeIndex_5; }
	inline int32_t* get_address_of_m_GamepadSchemeIndex_5() { return &___m_GamepadSchemeIndex_5; }
	inline void set_m_GamepadSchemeIndex_5(int32_t value)
	{
		___m_GamepadSchemeIndex_5 = value;
	}

	inline static int32_t get_offset_of_m_TouchSchemeIndex_6() { return static_cast<int32_t>(offsetof(PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A, ___m_TouchSchemeIndex_6)); }
	inline int32_t get_m_TouchSchemeIndex_6() const { return ___m_TouchSchemeIndex_6; }
	inline int32_t* get_address_of_m_TouchSchemeIndex_6() { return &___m_TouchSchemeIndex_6; }
	inline void set_m_TouchSchemeIndex_6(int32_t value)
	{
		___m_TouchSchemeIndex_6 = value;
	}

	inline static int32_t get_offset_of_m_JoystickSchemeIndex_7() { return static_cast<int32_t>(offsetof(PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A, ___m_JoystickSchemeIndex_7)); }
	inline int32_t get_m_JoystickSchemeIndex_7() const { return ___m_JoystickSchemeIndex_7; }
	inline int32_t* get_address_of_m_JoystickSchemeIndex_7() { return &___m_JoystickSchemeIndex_7; }
	inline void set_m_JoystickSchemeIndex_7(int32_t value)
	{
		___m_JoystickSchemeIndex_7 = value;
	}

	inline static int32_t get_offset_of_m_XRSchemeIndex_8() { return static_cast<int32_t>(offsetof(PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A, ___m_XRSchemeIndex_8)); }
	inline int32_t get_m_XRSchemeIndex_8() const { return ___m_XRSchemeIndex_8; }
	inline int32_t* get_address_of_m_XRSchemeIndex_8() { return &___m_XRSchemeIndex_8; }
	inline void set_m_XRSchemeIndex_8(int32_t value)
	{
		___m_XRSchemeIndex_8 = value;
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


// Controls.TouchControls
struct TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputActionAsset Controls.TouchControls::<asset>k__BackingField
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___U3CassetU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputActionMap Controls.TouchControls::m_Touch
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * ___m_Touch_1;
	// Controls.TouchControls/ITouchActions Controls.TouchControls::m_TouchActionsCallbackInterface
	RuntimeObject* ___m_TouchActionsCallbackInterface_2;
	// UnityEngine.InputSystem.InputAction Controls.TouchControls::m_Touch_PrimaryFingerPosition
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Touch_PrimaryFingerPosition_3;
	// UnityEngine.InputSystem.InputAction Controls.TouchControls::m_Touch_SecondaryFingerPosition
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Touch_SecondaryFingerPosition_4;
	// UnityEngine.InputSystem.InputAction Controls.TouchControls::m_Touch_SecondaryTouchContact
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Touch_SecondaryTouchContact_5;

public:
	inline static int32_t get_offset_of_U3CassetU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21, ___U3CassetU3Ek__BackingField_0)); }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * get_U3CassetU3Ek__BackingField_0() const { return ___U3CassetU3Ek__BackingField_0; }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E ** get_address_of_U3CassetU3Ek__BackingField_0() { return &___U3CassetU3Ek__BackingField_0; }
	inline void set_U3CassetU3Ek__BackingField_0(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * value)
	{
		___U3CassetU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CassetU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Touch_1() { return static_cast<int32_t>(offsetof(TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21, ___m_Touch_1)); }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * get_m_Touch_1() const { return ___m_Touch_1; }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 ** get_address_of_m_Touch_1() { return &___m_Touch_1; }
	inline void set_m_Touch_1(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * value)
	{
		___m_Touch_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Touch_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchActionsCallbackInterface_2() { return static_cast<int32_t>(offsetof(TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21, ___m_TouchActionsCallbackInterface_2)); }
	inline RuntimeObject* get_m_TouchActionsCallbackInterface_2() const { return ___m_TouchActionsCallbackInterface_2; }
	inline RuntimeObject** get_address_of_m_TouchActionsCallbackInterface_2() { return &___m_TouchActionsCallbackInterface_2; }
	inline void set_m_TouchActionsCallbackInterface_2(RuntimeObject* value)
	{
		___m_TouchActionsCallbackInterface_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TouchActionsCallbackInterface_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Touch_PrimaryFingerPosition_3() { return static_cast<int32_t>(offsetof(TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21, ___m_Touch_PrimaryFingerPosition_3)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_Touch_PrimaryFingerPosition_3() const { return ___m_Touch_PrimaryFingerPosition_3; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_Touch_PrimaryFingerPosition_3() { return &___m_Touch_PrimaryFingerPosition_3; }
	inline void set_m_Touch_PrimaryFingerPosition_3(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_Touch_PrimaryFingerPosition_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Touch_PrimaryFingerPosition_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Touch_SecondaryFingerPosition_4() { return static_cast<int32_t>(offsetof(TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21, ___m_Touch_SecondaryFingerPosition_4)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_Touch_SecondaryFingerPosition_4() const { return ___m_Touch_SecondaryFingerPosition_4; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_Touch_SecondaryFingerPosition_4() { return &___m_Touch_SecondaryFingerPosition_4; }
	inline void set_m_Touch_SecondaryFingerPosition_4(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_Touch_SecondaryFingerPosition_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Touch_SecondaryFingerPosition_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Touch_SecondaryTouchContact_5() { return static_cast<int32_t>(offsetof(TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21, ___m_Touch_SecondaryTouchContact_5)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_Touch_SecondaryTouchContact_5() const { return ___m_Touch_SecondaryTouchContact_5; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_Touch_SecondaryTouchContact_5() { return &___m_Touch_SecondaryTouchContact_5; }
	inline void set_m_Touch_SecondaryTouchContact_5(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_Touch_SecondaryTouchContact_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Touch_SecondaryTouchContact_5), (void*)value);
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

// CameraMovement/<ZoomDetection>d__26
struct U3CZoomDetectionU3Ed__26_t411FAB335549F9E9960A87D9EDDFF5452659E998  : public RuntimeObject
{
public:
	// System.Int32 CameraMovement/<ZoomDetection>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CameraMovement/<ZoomDetection>d__26::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// CameraMovement CameraMovement/<ZoomDetection>d__26::<>4__this
	CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * ___U3CU3E4__this_2;
	// System.Single CameraMovement/<ZoomDetection>d__26::<previousDistance>5__2
	float ___U3CpreviousDistanceU3E5__2_3;
	// UnityEngine.RaycastHit[] CameraMovement/<ZoomDetection>d__26::<raycastHits>5__3
	RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* ___U3CraycastHitsU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CZoomDetectionU3Ed__26_t411FAB335549F9E9960A87D9EDDFF5452659E998, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CZoomDetectionU3Ed__26_t411FAB335549F9E9960A87D9EDDFF5452659E998, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CZoomDetectionU3Ed__26_t411FAB335549F9E9960A87D9EDDFF5452659E998, ___U3CU3E4__this_2)); }
	inline CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpreviousDistanceU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CZoomDetectionU3Ed__26_t411FAB335549F9E9960A87D9EDDFF5452659E998, ___U3CpreviousDistanceU3E5__2_3)); }
	inline float get_U3CpreviousDistanceU3E5__2_3() const { return ___U3CpreviousDistanceU3E5__2_3; }
	inline float* get_address_of_U3CpreviousDistanceU3E5__2_3() { return &___U3CpreviousDistanceU3E5__2_3; }
	inline void set_U3CpreviousDistanceU3E5__2_3(float value)
	{
		___U3CpreviousDistanceU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CraycastHitsU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CZoomDetectionU3Ed__26_t411FAB335549F9E9960A87D9EDDFF5452659E998, ___U3CraycastHitsU3E5__3_4)); }
	inline RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* get_U3CraycastHitsU3E5__3_4() const { return ___U3CraycastHitsU3E5__3_4; }
	inline RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09** get_address_of_U3CraycastHitsU3E5__3_4() { return &___U3CraycastHitsU3E5__3_4; }
	inline void set_U3CraycastHitsU3E5__3_4(RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* value)
	{
		___U3CraycastHitsU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CraycastHitsU3E5__3_4), (void*)value);
	}
};


// CandidateMap/<>c
struct U3CU3Ec_t5A5947883458A78FB78DB005C350DEA924B5FA55  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5A5947883458A78FB78DB005C350DEA924B5FA55_StaticFields
{
public:
	// CandidateMap/<>c CandidateMap/<>c::<>9
	U3CU3Ec_t5A5947883458A78FB78DB005C350DEA924B5FA55 * ___U3CU3E9_0;
	// System.Func`2<System.Boolean,System.Boolean> CandidateMap/<>c::<>9__29_0
	Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___U3CU3E9__29_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5A5947883458A78FB78DB005C350DEA924B5FA55_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5A5947883458A78FB78DB005C350DEA924B5FA55 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5A5947883458A78FB78DB005C350DEA924B5FA55 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5A5947883458A78FB78DB005C350DEA924B5FA55 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5A5947883458A78FB78DB005C350DEA924B5FA55_StaticFields, ___U3CU3E9__29_0_1)); }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * get_U3CU3E9__29_0_1() const { return ___U3CU3E9__29_0_1; }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B ** get_address_of_U3CU3E9__29_0_1() { return &___U3CU3E9__29_0_1; }
	inline void set_U3CU3E9__29_0_1(Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * value)
	{
		___U3CU3E9__29_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_0_1), (void*)value);
	}
};


// MapBrain/<>c
struct U3CU3Ec_t1A143AFC59360CD7E27C34736D3488A694DDD541  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1A143AFC59360CD7E27C34736D3488A694DDD541_StaticFields
{
public:
	// MapBrain/<>c MapBrain/<>c::<>9
	U3CU3Ec_t1A143AFC59360CD7E27C34736D3488A694DDD541 * ___U3CU3E9_0;
	// System.Func`2<System.Boolean,System.Boolean> MapBrain/<>c::<>9__45_0
	Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___U3CU3E9__45_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1A143AFC59360CD7E27C34736D3488A694DDD541_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1A143AFC59360CD7E27C34736D3488A694DDD541 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1A143AFC59360CD7E27C34736D3488A694DDD541 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1A143AFC59360CD7E27C34736D3488A694DDD541 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__45_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1A143AFC59360CD7E27C34736D3488A694DDD541_StaticFields, ___U3CU3E9__45_0_1)); }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * get_U3CU3E9__45_0_1() const { return ___U3CU3E9__45_0_1; }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B ** get_address_of_U3CU3E9__45_0_1() { return &___U3CU3E9__45_0_1; }
	inline void set_U3CU3E9__45_0_1(Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * value)
	{
		___U3CU3E9__45_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__45_0_1), (void*)value);
	}
};


// MapBrain/<GeneticAlgorithm>d__44
struct U3CGeneticAlgorithmU3Ed__44_t19064C60D68C0148305535C3A644C2E1BD2AE343  : public RuntimeObject
{
public:
	// System.Int32 MapBrain/<GeneticAlgorithm>d__44::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MapBrain/<GeneticAlgorithm>d__44::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MapBrain MapBrain/<GeneticAlgorithm>d__44::<>4__this
	MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGeneticAlgorithmU3Ed__44_t19064C60D68C0148305535C3A644C2E1BD2AE343, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGeneticAlgorithmU3Ed__44_t19064C60D68C0148305535C3A644C2E1BD2AE343, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGeneticAlgorithmU3Ed__44_t19064C60D68C0148305535C3A644C2E1BD2AE343, ___U3CU3E4__this_2)); }
	inline MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// MapVisualizer/<>c
struct U3CU3Ec_t2D532FC10FA382DB658EF3AEA702C72902863E54  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2D532FC10FA382DB658EF3AEA702C72902863E54_StaticFields
{
public:
	// MapVisualizer/<>c MapVisualizer/<>c::<>9
	U3CU3Ec_t2D532FC10FA382DB658EF3AEA702C72902863E54 * ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.GameObject>,System.Boolean> MapVisualizer/<>c::<>9__22_0
	Func_2_tF7D9974F87F771CEA58CA1AC2578EE0961720761 * ___U3CU3E9__22_0_1;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.GameObject>,UnityEngine.Vector3> MapVisualizer/<>c::<>9__22_1
	Func_2_t7239D6919B5A66FB23BC087D7A58E2F43093A6A8 * ___U3CU3E9__22_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2D532FC10FA382DB658EF3AEA702C72902863E54_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2D532FC10FA382DB658EF3AEA702C72902863E54 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2D532FC10FA382DB658EF3AEA702C72902863E54 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2D532FC10FA382DB658EF3AEA702C72902863E54 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__22_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2D532FC10FA382DB658EF3AEA702C72902863E54_StaticFields, ___U3CU3E9__22_0_1)); }
	inline Func_2_tF7D9974F87F771CEA58CA1AC2578EE0961720761 * get_U3CU3E9__22_0_1() const { return ___U3CU3E9__22_0_1; }
	inline Func_2_tF7D9974F87F771CEA58CA1AC2578EE0961720761 ** get_address_of_U3CU3E9__22_0_1() { return &___U3CU3E9__22_0_1; }
	inline void set_U3CU3E9__22_0_1(Func_2_tF7D9974F87F771CEA58CA1AC2578EE0961720761 * value)
	{
		___U3CU3E9__22_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__22_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__22_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2D532FC10FA382DB658EF3AEA702C72902863E54_StaticFields, ___U3CU3E9__22_1_2)); }
	inline Func_2_t7239D6919B5A66FB23BC087D7A58E2F43093A6A8 * get_U3CU3E9__22_1_2() const { return ___U3CU3E9__22_1_2; }
	inline Func_2_t7239D6919B5A66FB23BC087D7A58E2F43093A6A8 ** get_address_of_U3CU3E9__22_1_2() { return &___U3CU3E9__22_1_2; }
	inline void set_U3CU3E9__22_1_2(Func_2_t7239D6919B5A66FB23BC087D7A58E2F43093A6A8 * value)
	{
		___U3CU3E9__22_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__22_1_2), (void*)value);
	}
};


// Outline/<>c
struct U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_StaticFields
{
public:
	// Outline/<>c Outline/<>c::<>9
	U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E * ___U3CU3E9_0;
	// System.Func`3<UnityEngine.Vector3,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>> Outline/<>c::<>9__30_0
	Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F * ___U3CU3E9__30_0_1;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>,UnityEngine.Vector3> Outline/<>c::<>9__30_1
	Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72 * ___U3CU3E9__30_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__30_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_StaticFields, ___U3CU3E9__30_0_1)); }
	inline Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F * get_U3CU3E9__30_0_1() const { return ___U3CU3E9__30_0_1; }
	inline Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F ** get_address_of_U3CU3E9__30_0_1() { return &___U3CU3E9__30_0_1; }
	inline void set_U3CU3E9__30_0_1(Func_3_t42C2490DD9CE7DA0CE4FB2C849431C03440FC25F * value)
	{
		___U3CU3E9__30_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__30_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__30_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_StaticFields, ___U3CU3E9__30_1_2)); }
	inline Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72 * get_U3CU3E9__30_1_2() const { return ___U3CU3E9__30_1_2; }
	inline Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72 ** get_address_of_U3CU3E9__30_1_2() { return &___U3CU3E9__30_1_2; }
	inline void set_U3CU3E9__30_1_2(Func_2_tC59AB1CCC7AC92484D8826D38DD0FF2302A1AD72 * value)
	{
		___U3CU3E9__30_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__30_1_2), (void*)value);
	}
};


// Outline/ListVector3
struct ListVector3_t54AB46ECA91F943A5FE7817CA662D0D5B78617B9  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Outline/ListVector3::data
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ListVector3_t54AB46ECA91F943A5FE7817CA662D0D5B78617B9, ___data_0)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_data_0() const { return ___data_0; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}
};


// Gameplay.Player/<>c
struct U3CU3Ec_t535C18E424A6566A1193D6404FD769DE6680ECB6  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t535C18E424A6566A1193D6404FD769DE6680ECB6_StaticFields
{
public:
	// Gameplay.Player/<>c Gameplay.Player/<>c::<>9
	U3CU3Ec_t535C18E424A6566A1193D6404FD769DE6680ECB6 * ___U3CU3E9_0;
	// System.Comparison`1<UnityEngine.RaycastHit> Gameplay.Player/<>c::<>9__37_0
	Comparison_1_t8B53B4CEDFCAA2901ADED4D0797304CC695D21E0 * ___U3CU3E9__37_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t535C18E424A6566A1193D6404FD769DE6680ECB6_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t535C18E424A6566A1193D6404FD769DE6680ECB6 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t535C18E424A6566A1193D6404FD769DE6680ECB6 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t535C18E424A6566A1193D6404FD769DE6680ECB6 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__37_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t535C18E424A6566A1193D6404FD769DE6680ECB6_StaticFields, ___U3CU3E9__37_0_1)); }
	inline Comparison_1_t8B53B4CEDFCAA2901ADED4D0797304CC695D21E0 * get_U3CU3E9__37_0_1() const { return ___U3CU3E9__37_0_1; }
	inline Comparison_1_t8B53B4CEDFCAA2901ADED4D0797304CC695D21E0 ** get_address_of_U3CU3E9__37_0_1() { return &___U3CU3E9__37_0_1; }
	inline void set_U3CU3E9__37_0_1(Comparison_1_t8B53B4CEDFCAA2901ADED4D0797304CC695D21E0 * value)
	{
		___U3CU3E9__37_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__37_0_1), (void*)value);
	}
};


// Gameplay.Player/<MoveCrosshair>d__43
struct U3CMoveCrosshairU3Ed__43_t760AAA5F036C63AB0E8A79C493FF4E6B893D65C7  : public RuntimeObject
{
public:
	// System.Int32 Gameplay.Player/<MoveCrosshair>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Gameplay.Player/<MoveCrosshair>d__43::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Gameplay.Player Gameplay.Player/<MoveCrosshair>d__43::<>4__this
	Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMoveCrosshairU3Ed__43_t760AAA5F036C63AB0E8A79C493FF4E6B893D65C7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMoveCrosshairU3Ed__43_t760AAA5F036C63AB0E8A79C493FF4E6B893D65C7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMoveCrosshairU3Ed__43_t760AAA5F036C63AB0E8A79C493FF4E6B893D65C7, ___U3CU3E4__this_2)); }
	inline Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UI.PlayerUI/<LerpHealthValue>d__28
struct U3CLerpHealthValueU3Ed__28_tFA9A3940A3048EA51BFD4E31741883AD3D045E1D  : public RuntimeObject
{
public:
	// System.Int32 UI.PlayerUI/<LerpHealthValue>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UI.PlayerUI/<LerpHealthValue>d__28::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Gameplay.Components.HealthComponent UI.PlayerUI/<LerpHealthValue>d__28::healthComponent
	HealthComponent_t51D2DE6F27167E6E785C8ABE16E758B8145C270C * ___healthComponent_2;
	// UI.PlayerUI UI.PlayerUI/<LerpHealthValue>d__28::<>4__this
	PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC * ___U3CU3E4__this_3;
	// System.Single UI.PlayerUI/<LerpHealthValue>d__28::<newHealth>5__2
	float ___U3CnewHealthU3E5__2_4;
	// System.Single UI.PlayerUI/<LerpHealthValue>d__28::<healthValueInProgress>5__3
	float ___U3ChealthValueInProgressU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLerpHealthValueU3Ed__28_tFA9A3940A3048EA51BFD4E31741883AD3D045E1D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLerpHealthValueU3Ed__28_tFA9A3940A3048EA51BFD4E31741883AD3D045E1D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_healthComponent_2() { return static_cast<int32_t>(offsetof(U3CLerpHealthValueU3Ed__28_tFA9A3940A3048EA51BFD4E31741883AD3D045E1D, ___healthComponent_2)); }
	inline HealthComponent_t51D2DE6F27167E6E785C8ABE16E758B8145C270C * get_healthComponent_2() const { return ___healthComponent_2; }
	inline HealthComponent_t51D2DE6F27167E6E785C8ABE16E758B8145C270C ** get_address_of_healthComponent_2() { return &___healthComponent_2; }
	inline void set_healthComponent_2(HealthComponent_t51D2DE6F27167E6E785C8ABE16E758B8145C270C * value)
	{
		___healthComponent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthComponent_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CLerpHealthValueU3Ed__28_tFA9A3940A3048EA51BFD4E31741883AD3D045E1D, ___U3CU3E4__this_3)); }
	inline PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnewHealthU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CLerpHealthValueU3Ed__28_tFA9A3940A3048EA51BFD4E31741883AD3D045E1D, ___U3CnewHealthU3E5__2_4)); }
	inline float get_U3CnewHealthU3E5__2_4() const { return ___U3CnewHealthU3E5__2_4; }
	inline float* get_address_of_U3CnewHealthU3E5__2_4() { return &___U3CnewHealthU3E5__2_4; }
	inline void set_U3CnewHealthU3E5__2_4(float value)
	{
		___U3CnewHealthU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3ChealthValueInProgressU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CLerpHealthValueU3Ed__28_tFA9A3940A3048EA51BFD4E31741883AD3D045E1D, ___U3ChealthValueInProgressU3E5__3_5)); }
	inline float get_U3ChealthValueInProgressU3E5__3_5() const { return ___U3ChealthValueInProgressU3E5__3_5; }
	inline float* get_address_of_U3ChealthValueInProgressU3E5__3_5() { return &___U3ChealthValueInProgressU3E5__3_5; }
	inline void set_U3ChealthValueInProgressU3E5__3_5(float value)
	{
		___U3ChealthValueInProgressU3E5__3_5 = value;
	}
};


// RandomizeGameObject/<>c
struct U3CU3Ec_tBC51EABF39D5A7F72B1FD79E036C065FAA7975DD  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tBC51EABF39D5A7F72B1FD79E036C065FAA7975DD_StaticFields
{
public:
	// RandomizeGameObject/<>c RandomizeGameObject/<>c::<>9
	U3CU3Ec_tBC51EABF39D5A7F72B1FD79E036C065FAA7975DD * ___U3CU3E9_0;
	// System.Comparison`1<RandomizeGameObject/RandomizingRule> RandomizeGameObject/<>c::<>9__3_0
	Comparison_1_t7096BF0E166402933FFA37F516D92EE511DAA944 * ___U3CU3E9__3_0_1;
	// System.Func`2<RandomizeGameObject/RandomizingRule,System.Single> RandomizeGameObject/<>c::<>9__3_1
	Func_2_t1158CE797C08DD5DA84CC8D4760A02D3389CA6D0 * ___U3CU3E9__3_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC51EABF39D5A7F72B1FD79E036C065FAA7975DD_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tBC51EABF39D5A7F72B1FD79E036C065FAA7975DD * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tBC51EABF39D5A7F72B1FD79E036C065FAA7975DD ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tBC51EABF39D5A7F72B1FD79E036C065FAA7975DD * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC51EABF39D5A7F72B1FD79E036C065FAA7975DD_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Comparison_1_t7096BF0E166402933FFA37F516D92EE511DAA944 * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Comparison_1_t7096BF0E166402933FFA37F516D92EE511DAA944 ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Comparison_1_t7096BF0E166402933FFA37F516D92EE511DAA944 * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC51EABF39D5A7F72B1FD79E036C065FAA7975DD_StaticFields, ___U3CU3E9__3_1_2)); }
	inline Func_2_t1158CE797C08DD5DA84CC8D4760A02D3389CA6D0 * get_U3CU3E9__3_1_2() const { return ___U3CU3E9__3_1_2; }
	inline Func_2_t1158CE797C08DD5DA84CC8D4760A02D3389CA6D0 ** get_address_of_U3CU3E9__3_1_2() { return &___U3CU3E9__3_1_2; }
	inline void set_U3CU3E9__3_1_2(Func_2_t1158CE797C08DD5DA84CC8D4760A02D3389CA6D0 * value)
	{
		___U3CU3E9__3_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_1_2), (void*)value);
	}
};


// RandomizeGameObject/RandomizingRule
struct RandomizingRule_t6E572B8080AFE6989D0BF5D365E917616FF95869  : public RuntimeObject
{
public:
	// UnityEngine.GameObject RandomizeGameObject/RandomizingRule::GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameObject_0;
	// System.Single RandomizeGameObject/RandomizingRule::Probability
	float ___Probability_1;

public:
	inline static int32_t get_offset_of_GameObject_0() { return static_cast<int32_t>(offsetof(RandomizingRule_t6E572B8080AFE6989D0BF5D365E917616FF95869, ___GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameObject_0() const { return ___GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameObject_0() { return &___GameObject_0; }
	inline void set_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_Probability_1() { return static_cast<int32_t>(offsetof(RandomizingRule_t6E572B8080AFE6989D0BF5D365E917616FF95869, ___Probability_1)); }
	inline float get_Probability_1() const { return ___Probability_1; }
	inline float* get_address_of_Probability_1() { return &___Probability_1; }
	inline void set_Probability_1(float value)
	{
		___Probability_1 = value;
	}
};


// Gameplay.Tower/<SpawnAfterTime>d__19
struct U3CSpawnAfterTimeU3Ed__19_t5C81BC747ADF6D129809F5F3A35B754D3099BF5E  : public RuntimeObject
{
public:
	// System.Int32 Gameplay.Tower/<SpawnAfterTime>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Gameplay.Tower/<SpawnAfterTime>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Gameplay.Tower Gameplay.Tower/<SpawnAfterTime>d__19::<>4__this
	Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * ___U3CU3E4__this_2;
	// System.Int32 Gameplay.Tower/<SpawnAfterTime>d__19::<minInclusive>5__2
	int32_t ___U3CminInclusiveU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSpawnAfterTimeU3Ed__19_t5C81BC747ADF6D129809F5F3A35B754D3099BF5E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSpawnAfterTimeU3Ed__19_t5C81BC747ADF6D129809F5F3A35B754D3099BF5E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSpawnAfterTimeU3Ed__19_t5C81BC747ADF6D129809F5F3A35B754D3099BF5E, ___U3CU3E4__this_2)); }
	inline Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CminInclusiveU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CSpawnAfterTimeU3Ed__19_t5C81BC747ADF6D129809F5F3A35B754D3099BF5E, ___U3CminInclusiveU3E5__2_3)); }
	inline int32_t get_U3CminInclusiveU3E5__2_3() const { return ___U3CminInclusiveU3E5__2_3; }
	inline int32_t* get_address_of_U3CminInclusiveU3E5__2_3() { return &___U3CminInclusiveU3E5__2_3; }
	inline void set_U3CminInclusiveU3E5__2_3(int32_t value)
	{
		___U3CminInclusiveU3E5__2_3 = value;
	}
};


// Gameplay.Tower/<TestAnimationEnded>d__21
struct U3CTestAnimationEndedU3Ed__21_t1C01CBE1DD38C489468F1DE1FE3CFD55145BF123  : public RuntimeObject
{
public:
	// System.Int32 Gameplay.Tower/<TestAnimationEnded>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Gameplay.Tower/<TestAnimationEnded>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Gameplay.Tower/<>c__DisplayClass21_0 Gameplay.Tower/<TestAnimationEnded>d__21::<>8__1
	U3CU3Ec__DisplayClass21_0_t6D6C3347E71A72CF0A4C5FC140F5E3B312BCEEFA * ___U3CU3E8__1_2;
	// UnityEngine.Animator Gameplay.Tower/<TestAnimationEnded>d__21::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_3;
	// Gameplay.Tower Gameplay.Tower/<TestAnimationEnded>d__21::<>4__this
	Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * ___U3CU3E4__this_4;
	// UnityEngine.AI.NavMeshSurface Gameplay.Tower/<TestAnimationEnded>d__21::<surface>5__2
	NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A * ___U3CsurfaceU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTestAnimationEndedU3Ed__21_t1C01CBE1DD38C489468F1DE1FE3CFD55145BF123, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTestAnimationEndedU3Ed__21_t1C01CBE1DD38C489468F1DE1FE3CFD55145BF123, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E8__1_2() { return static_cast<int32_t>(offsetof(U3CTestAnimationEndedU3Ed__21_t1C01CBE1DD38C489468F1DE1FE3CFD55145BF123, ___U3CU3E8__1_2)); }
	inline U3CU3Ec__DisplayClass21_0_t6D6C3347E71A72CF0A4C5FC140F5E3B312BCEEFA * get_U3CU3E8__1_2() const { return ___U3CU3E8__1_2; }
	inline U3CU3Ec__DisplayClass21_0_t6D6C3347E71A72CF0A4C5FC140F5E3B312BCEEFA ** get_address_of_U3CU3E8__1_2() { return &___U3CU3E8__1_2; }
	inline void set_U3CU3E8__1_2(U3CU3Ec__DisplayClass21_0_t6D6C3347E71A72CF0A4C5FC140F5E3B312BCEEFA * value)
	{
		___U3CU3E8__1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_2), (void*)value);
	}

	inline static int32_t get_offset_of_animator_3() { return static_cast<int32_t>(offsetof(U3CTestAnimationEndedU3Ed__21_t1C01CBE1DD38C489468F1DE1FE3CFD55145BF123, ___animator_3)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_3() const { return ___animator_3; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_3() { return &___animator_3; }
	inline void set_animator_3(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CTestAnimationEndedU3Ed__21_t1C01CBE1DD38C489468F1DE1FE3CFD55145BF123, ___U3CU3E4__this_4)); }
	inline Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsurfaceU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CTestAnimationEndedU3Ed__21_t1C01CBE1DD38C489468F1DE1FE3CFD55145BF123, ___U3CsurfaceU3E5__2_5)); }
	inline NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A * get_U3CsurfaceU3E5__2_5() const { return ___U3CsurfaceU3E5__2_5; }
	inline NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A ** get_address_of_U3CsurfaceU3E5__2_5() { return &___U3CsurfaceU3E5__2_5; }
	inline void set_U3CsurfaceU3E5__2_5(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A * value)
	{
		___U3CsurfaceU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsurfaceU3E5__2_5), (void*)value);
	}
};


// UnityEngine.RuleTile/TilingRuleOutput/Neighbor
struct Neighbor_tF976C08FE4E0F2143DADE610274231167405D77B  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1/Enumerator<CandidateMap>
struct Enumerator_t01E2365B866BF22173D7F428BD227FC7BD86BC7A 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t01E2365B866BF22173D7F428BD227FC7BD86BC7A, ___list_0)); }
	inline List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 * get_list_0() const { return ___list_0; }
	inline List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t01E2365B866BF22173D7F428BD227FC7BD86BC7A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t01E2365B866BF22173D7F428BD227FC7BD86BC7A, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t01E2365B866BF22173D7F428BD227FC7BD86BC7A, ___current_3)); }
	inline CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * get_current_3() const { return ___current_3; }
	inline CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * value)
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


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___firstValue_1)); }
	inline Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___additionalValues_2)); }
	inline Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.AI.NavMeshDataInstance
struct NavMeshDataInstance_t52251080FADE7D8432D8DF780817EDFBF8F16E78 
{
public:
	// System.Int32 UnityEngine.AI.NavMeshDataInstance::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NavMeshDataInstance_t52251080FADE7D8432D8DF780817EDFBF8F16E78, ___U3CidU3Ek__BackingField_0)); }
	inline int32_t get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(int32_t value)
	{
		___U3CidU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
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


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

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

// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21, ___m_Predicate_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// Controls.CameraControls/CameraActions
struct CameraActions_t9335BF1B850A87C0A8FD253B06949F6A64580FAE 
{
public:
	// Controls.CameraControls Controls.CameraControls/CameraActions::m_Wrapper
	CameraControls_tEDA4EF38E586C8A1DC6B93F001F386A7BDD735ED * ___m_Wrapper_0;

public:
	inline static int32_t get_offset_of_m_Wrapper_0() { return static_cast<int32_t>(offsetof(CameraActions_t9335BF1B850A87C0A8FD253B06949F6A64580FAE, ___m_Wrapper_0)); }
	inline CameraControls_tEDA4EF38E586C8A1DC6B93F001F386A7BDD735ED * get_m_Wrapper_0() const { return ___m_Wrapper_0; }
	inline CameraControls_tEDA4EF38E586C8A1DC6B93F001F386A7BDD735ED ** get_address_of_m_Wrapper_0() { return &___m_Wrapper_0; }
	inline void set_m_Wrapper_0(CameraControls_tEDA4EF38E586C8A1DC6B93F001F386A7BDD735ED * value)
	{
		___m_Wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Wrapper_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Controls.CameraControls/CameraActions
struct CameraActions_t9335BF1B850A87C0A8FD253B06949F6A64580FAE_marshaled_pinvoke
{
	CameraControls_tEDA4EF38E586C8A1DC6B93F001F386A7BDD735ED * ___m_Wrapper_0;
};
// Native definition for COM marshalling of Controls.CameraControls/CameraActions
struct CameraActions_t9335BF1B850A87C0A8FD253B06949F6A64580FAE_marshaled_com
{
	CameraControls_tEDA4EF38E586C8A1DC6B93F001F386A7BDD735ED * ___m_Wrapper_0;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B 
{
public:
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B, ___m_State_0)); }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionIndex_1() { return static_cast<int32_t>(offsetof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B, ___m_ActionIndex_1)); }
	inline int32_t get_m_ActionIndex_1() const { return ___m_ActionIndex_1; }
	inline int32_t* get_address_of_m_ActionIndex_1() { return &___m_ActionIndex_1; }
	inline void set_m_ActionIndex_1(int32_t value)
	{
		___m_ActionIndex_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B_marshaled_pinvoke
{
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B_marshaled_com
{
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// NewCustomRuleTile/Neighbor
struct Neighbor_tBFA27989DCA34FF377661D8D840E9A21C1C9FDE3  : public Neighbor_tF976C08FE4E0F2143DADE610274231167405D77B
{
public:

public:
};


// Controls.PlayerControls/PlayerActions
struct PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 
{
public:
	// Controls.PlayerControls Controls.PlayerControls/PlayerActions::m_Wrapper
	PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A * ___m_Wrapper_0;

public:
	inline static int32_t get_offset_of_m_Wrapper_0() { return static_cast<int32_t>(offsetof(PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506, ___m_Wrapper_0)); }
	inline PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A * get_m_Wrapper_0() const { return ___m_Wrapper_0; }
	inline PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A ** get_address_of_m_Wrapper_0() { return &___m_Wrapper_0; }
	inline void set_m_Wrapper_0(PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A * value)
	{
		___m_Wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Wrapper_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Controls.PlayerControls/PlayerActions
struct PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506_marshaled_pinvoke
{
	PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A * ___m_Wrapper_0;
};
// Native definition for COM marshalling of Controls.PlayerControls/PlayerActions
struct PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506_marshaled_com
{
	PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A * ___m_Wrapper_0;
};

// Controls.TouchControls/TouchActions
struct TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 
{
public:
	// Controls.TouchControls Controls.TouchControls/TouchActions::m_Wrapper
	TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * ___m_Wrapper_0;

public:
	inline static int32_t get_offset_of_m_Wrapper_0() { return static_cast<int32_t>(offsetof(TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7, ___m_Wrapper_0)); }
	inline TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * get_m_Wrapper_0() const { return ___m_Wrapper_0; }
	inline TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 ** get_address_of_m_Wrapper_0() { return &___m_Wrapper_0; }
	inline void set_m_Wrapper_0(TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * value)
	{
		___m_Wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Wrapper_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Controls.TouchControls/TouchActions
struct TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7_marshaled_pinvoke
{
	TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * ___m_Wrapper_0;
};
// Native definition for COM marshalling of Controls.TouchControls/TouchActions
struct TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7_marshaled_com
{
	TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * ___m_Wrapper_0;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.GameObject>
struct KeyValuePair_2_tE11B93BE2B17569E0E9CCED689C2035649330F07 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE11B93BE2B17569E0E9CCED689C2035649330F07, ___key_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_key_0() const { return ___key_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE11B93BE2B17569E0E9CCED689C2035649330F07, ___value_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_value_1() const { return ___value_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>
struct KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4, ___key_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_key_0() const { return ___key_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Object>
struct KeyValuePair_2_t7C40DFD3E4598A1814263BCC6543EBD170B7664D 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t7C40DFD3E4598A1814263BCC6543EBD170B7664D, ___key_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_key_0() const { return ___key_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t7C40DFD3E4598A1814263BCC6543EBD170B7664D, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// CandidateMap
struct CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED  : public RuntimeObject
{
public:
	// MapGrid CandidateMap::_grid
	MapGrid_t236B663A22892CFD736FA4F8C43A59C44CF4F62A * ____grid_0;
	// System.Int32 CandidateMap::_numberOfPieces
	int32_t ____numberOfPieces_1;
	// System.Int32 CandidateMap::_numberOfTowers
	int32_t ____numberOfTowers_2;
	// System.Boolean[] CandidateMap::_obstaclesArray
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____obstaclesArray_3;
	// UnityEngine.Vector3 CandidateMap::_startPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____startPosition_4;
	// UnityEngine.Vector3 CandidateMap::_endPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____endPosition_5;
	// System.Collections.Generic.List`1<KnightPiece> CandidateMap::_knightPieces
	List_1_t52BC4B0B14FCE3CADF231C72BA646D622E039BC7 * ____knightPieces_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> CandidateMap::_path
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ____path_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> CandidateMap::<Towers>k__BackingField
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___U3CTowersU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> CandidateMap::_cornersPosition
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ____cornersPosition_9;
	// System.Int32 CandidateMap::_repetitiveCornersCount
	int32_t ____repetitiveCornersCount_10;

public:
	inline static int32_t get_offset_of__grid_0() { return static_cast<int32_t>(offsetof(CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED, ____grid_0)); }
	inline MapGrid_t236B663A22892CFD736FA4F8C43A59C44CF4F62A * get__grid_0() const { return ____grid_0; }
	inline MapGrid_t236B663A22892CFD736FA4F8C43A59C44CF4F62A ** get_address_of__grid_0() { return &____grid_0; }
	inline void set__grid_0(MapGrid_t236B663A22892CFD736FA4F8C43A59C44CF4F62A * value)
	{
		____grid_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____grid_0), (void*)value);
	}

	inline static int32_t get_offset_of__numberOfPieces_1() { return static_cast<int32_t>(offsetof(CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED, ____numberOfPieces_1)); }
	inline int32_t get__numberOfPieces_1() const { return ____numberOfPieces_1; }
	inline int32_t* get_address_of__numberOfPieces_1() { return &____numberOfPieces_1; }
	inline void set__numberOfPieces_1(int32_t value)
	{
		____numberOfPieces_1 = value;
	}

	inline static int32_t get_offset_of__numberOfTowers_2() { return static_cast<int32_t>(offsetof(CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED, ____numberOfTowers_2)); }
	inline int32_t get__numberOfTowers_2() const { return ____numberOfTowers_2; }
	inline int32_t* get_address_of__numberOfTowers_2() { return &____numberOfTowers_2; }
	inline void set__numberOfTowers_2(int32_t value)
	{
		____numberOfTowers_2 = value;
	}

	inline static int32_t get_offset_of__obstaclesArray_3() { return static_cast<int32_t>(offsetof(CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED, ____obstaclesArray_3)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__obstaclesArray_3() const { return ____obstaclesArray_3; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__obstaclesArray_3() { return &____obstaclesArray_3; }
	inline void set__obstaclesArray_3(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		____obstaclesArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obstaclesArray_3), (void*)value);
	}

	inline static int32_t get_offset_of__startPosition_4() { return static_cast<int32_t>(offsetof(CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED, ____startPosition_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__startPosition_4() const { return ____startPosition_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__startPosition_4() { return &____startPosition_4; }
	inline void set__startPosition_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____startPosition_4 = value;
	}

	inline static int32_t get_offset_of__endPosition_5() { return static_cast<int32_t>(offsetof(CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED, ____endPosition_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__endPosition_5() const { return ____endPosition_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__endPosition_5() { return &____endPosition_5; }
	inline void set__endPosition_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____endPosition_5 = value;
	}

	inline static int32_t get_offset_of__knightPieces_6() { return static_cast<int32_t>(offsetof(CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED, ____knightPieces_6)); }
	inline List_1_t52BC4B0B14FCE3CADF231C72BA646D622E039BC7 * get__knightPieces_6() const { return ____knightPieces_6; }
	inline List_1_t52BC4B0B14FCE3CADF231C72BA646D622E039BC7 ** get_address_of__knightPieces_6() { return &____knightPieces_6; }
	inline void set__knightPieces_6(List_1_t52BC4B0B14FCE3CADF231C72BA646D622E039BC7 * value)
	{
		____knightPieces_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____knightPieces_6), (void*)value);
	}

	inline static int32_t get_offset_of__path_7() { return static_cast<int32_t>(offsetof(CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED, ____path_7)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get__path_7() const { return ____path_7; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of__path_7() { return &____path_7; }
	inline void set__path_7(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		____path_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____path_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTowersU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED, ___U3CTowersU3Ek__BackingField_8)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_U3CTowersU3Ek__BackingField_8() const { return ___U3CTowersU3Ek__BackingField_8; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_U3CTowersU3Ek__BackingField_8() { return &___U3CTowersU3Ek__BackingField_8; }
	inline void set_U3CTowersU3Ek__BackingField_8(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___U3CTowersU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTowersU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of__cornersPosition_9() { return static_cast<int32_t>(offsetof(CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED, ____cornersPosition_9)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get__cornersPosition_9() const { return ____cornersPosition_9; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of__cornersPosition_9() { return &____cornersPosition_9; }
	inline void set__cornersPosition_9(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		____cornersPosition_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cornersPosition_9), (void*)value);
	}

	inline static int32_t get_offset_of__repetitiveCornersCount_10() { return static_cast<int32_t>(offsetof(CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED, ____repetitiveCornersCount_10)); }
	inline int32_t get__repetitiveCornersCount_10() const { return ____repetitiveCornersCount_10; }
	inline int32_t* get_address_of__repetitiveCornersCount_10() { return &____repetitiveCornersCount_10; }
	inline void set__repetitiveCornersCount_10(int32_t value)
	{
		____repetitiveCornersCount_10 = value;
	}
};


// CellObjectType
struct CellObjectType_tAA6CBBBE6214A73494433A06BE7118ABB9CA4431 
{
public:
	// System.Int32 CellObjectType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CellObjectType_tAA6CBBBE6214A73494433A06BE7118ABB9CA4431, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AI.CollectObjects
struct CollectObjects_tAAF0B45BCD3A5C4ADCEB191AD1AB0157F1EBC24C 
{
public:
	// System.Int32 UnityEngine.AI.CollectObjects::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CollectObjects_tAAF0B45BCD3A5C4ADCEB191AD1AB0157F1EBC24C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
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

// UnityEngine.DeviceType
struct DeviceType_tBE460E2D86295964F19F6708DBDC3568ECCBE9DF 
{
public:
	// System.Int32 UnityEngine.DeviceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceType_tBE460E2D86295964F19F6708DBDC3568ECCBE9DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Direction
struct Direction_tCEF39FDEFD63F8D9A915DB77CECE987CE371677E 
{
public:
	// System.Int32 Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tCEF39FDEFD63F8D9A915DB77CECE987CE371677E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// GameState.GameState
struct GameState_t0675C50881EA81C1735B4053426B5A0FA3FEF2DB 
{
public:
	// System.Int32 GameState.GameState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GameState_t0675C50881EA81C1735B4053426B5A0FA3FEF2DB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionType
struct InputActionType_t913CC58784CA34E9791C18B15436C791CD465901 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionType_t913CC58784CA34E9791C18B15436C791CD465901, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MapData
struct MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8 
{
public:
	// System.Boolean[] MapData::obstacleArray
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___obstacleArray_0;
	// System.Collections.Generic.List`1<KnightPiece> MapData::knightPieces
	List_1_t52BC4B0B14FCE3CADF231C72BA646D622E039BC7 * ___knightPieces_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> MapData::towers
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___towers_2;
	// System.Int32 MapData::numberOfTowers
	int32_t ___numberOfTowers_3;
	// UnityEngine.Vector3 MapData::startPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPosition_4;
	// UnityEngine.Vector3 MapData::endPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endPosition_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> MapData::path
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___path_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> MapData::cornersPosition
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___cornersPosition_7;
	// System.Int32 MapData::repetitiveCornersCount
	int32_t ___repetitiveCornersCount_8;

public:
	inline static int32_t get_offset_of_obstacleArray_0() { return static_cast<int32_t>(offsetof(MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8, ___obstacleArray_0)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_obstacleArray_0() const { return ___obstacleArray_0; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_obstacleArray_0() { return &___obstacleArray_0; }
	inline void set_obstacleArray_0(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___obstacleArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obstacleArray_0), (void*)value);
	}

	inline static int32_t get_offset_of_knightPieces_1() { return static_cast<int32_t>(offsetof(MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8, ___knightPieces_1)); }
	inline List_1_t52BC4B0B14FCE3CADF231C72BA646D622E039BC7 * get_knightPieces_1() const { return ___knightPieces_1; }
	inline List_1_t52BC4B0B14FCE3CADF231C72BA646D622E039BC7 ** get_address_of_knightPieces_1() { return &___knightPieces_1; }
	inline void set_knightPieces_1(List_1_t52BC4B0B14FCE3CADF231C72BA646D622E039BC7 * value)
	{
		___knightPieces_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___knightPieces_1), (void*)value);
	}

	inline static int32_t get_offset_of_towers_2() { return static_cast<int32_t>(offsetof(MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8, ___towers_2)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_towers_2() const { return ___towers_2; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_towers_2() { return &___towers_2; }
	inline void set_towers_2(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___towers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___towers_2), (void*)value);
	}

	inline static int32_t get_offset_of_numberOfTowers_3() { return static_cast<int32_t>(offsetof(MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8, ___numberOfTowers_3)); }
	inline int32_t get_numberOfTowers_3() const { return ___numberOfTowers_3; }
	inline int32_t* get_address_of_numberOfTowers_3() { return &___numberOfTowers_3; }
	inline void set_numberOfTowers_3(int32_t value)
	{
		___numberOfTowers_3 = value;
	}

	inline static int32_t get_offset_of_startPosition_4() { return static_cast<int32_t>(offsetof(MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8, ___startPosition_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startPosition_4() const { return ___startPosition_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startPosition_4() { return &___startPosition_4; }
	inline void set_startPosition_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startPosition_4 = value;
	}

	inline static int32_t get_offset_of_endPosition_5() { return static_cast<int32_t>(offsetof(MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8, ___endPosition_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_endPosition_5() const { return ___endPosition_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_endPosition_5() { return &___endPosition_5; }
	inline void set_endPosition_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___endPosition_5 = value;
	}

	inline static int32_t get_offset_of_path_6() { return static_cast<int32_t>(offsetof(MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8, ___path_6)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_path_6() const { return ___path_6; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_path_6() { return &___path_6; }
	inline void set_path_6(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___path_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_6), (void*)value);
	}

	inline static int32_t get_offset_of_cornersPosition_7() { return static_cast<int32_t>(offsetof(MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8, ___cornersPosition_7)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_cornersPosition_7() const { return ___cornersPosition_7; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_cornersPosition_7() { return &___cornersPosition_7; }
	inline void set_cornersPosition_7(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___cornersPosition_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cornersPosition_7), (void*)value);
	}

	inline static int32_t get_offset_of_repetitiveCornersCount_8() { return static_cast<int32_t>(offsetof(MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8, ___repetitiveCornersCount_8)); }
	inline int32_t get_repetitiveCornersCount_8() const { return ___repetitiveCornersCount_8; }
	inline int32_t* get_address_of_repetitiveCornersCount_8() { return &___repetitiveCornersCount_8; }
	inline void set_repetitiveCornersCount_8(int32_t value)
	{
		___repetitiveCornersCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of MapData
struct MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8_marshaled_pinvoke
{
	int32_t* ___obstacleArray_0;
	List_1_t52BC4B0B14FCE3CADF231C72BA646D622E039BC7 * ___knightPieces_1;
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___towers_2;
	int32_t ___numberOfTowers_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPosition_4;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endPosition_5;
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___path_6;
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___cornersPosition_7;
	int32_t ___repetitiveCornersCount_8;
};
// Native definition for COM marshalling of MapData
struct MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8_marshaled_com
{
	int32_t* ___obstacleArray_0;
	List_1_t52BC4B0B14FCE3CADF231C72BA646D622E039BC7 * ___knightPieces_1;
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___towers_2;
	int32_t ___numberOfTowers_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPosition_4;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endPosition_5;
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___path_6;
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___cornersPosition_7;
	int32_t ___repetitiveCornersCount_8;
};

// UnityEngine.AI.NavMeshCollectGeometry
struct NavMeshCollectGeometry_t228065EE99BAA25413A8819074B0222CF4AECA27 
{
public:
	// System.Int32 UnityEngine.AI.NavMeshCollectGeometry::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NavMeshCollectGeometry_t228065EE99BAA25413A8819074B0222CF4AECA27, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// Gameplay.Components.SearchingMethod
struct SearchingMethod_t615DC655A0FA03617C5D596979D3D8D2DD2DA28A 
{
public:
	// System.Int32 Gameplay.Components.SearchingMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SearchingMethod_t615DC655A0FA03617C5D596979D3D8D2DD2DA28A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Gameplay.UnitType
struct UnitType_t6DAE1F7924C09474B126957F76961771B832D282 
{
public:
	// System.Int32 Gameplay.UnitType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnitType_t6DAE1F7924C09474B126957F76961771B832D282, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DropTween/<Grow>d__4
struct U3CGrowU3Ed__4_t3769F20A3FC9616EE97D394AFF0C7A3C5F86BCA8  : public RuntimeObject
{
public:
	// System.Int32 DropTween/<Grow>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DropTween/<Grow>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DropTween DropTween/<Grow>d__4::<>4__this
	DropTween_t2F1DA2E2AFC0F76F7DC4CFEEA07D5D893E5D6635 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 DropTween/<Grow>d__4::<position>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CpositionU3E5__2_3;
	// System.Single DropTween/<Grow>d__4::<currentTime>5__3
	float ___U3CcurrentTimeU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGrowU3Ed__4_t3769F20A3FC9616EE97D394AFF0C7A3C5F86BCA8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGrowU3Ed__4_t3769F20A3FC9616EE97D394AFF0C7A3C5F86BCA8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGrowU3Ed__4_t3769F20A3FC9616EE97D394AFF0C7A3C5F86BCA8, ___U3CU3E4__this_2)); }
	inline DropTween_t2F1DA2E2AFC0F76F7DC4CFEEA07D5D893E5D6635 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DropTween_t2F1DA2E2AFC0F76F7DC4CFEEA07D5D893E5D6635 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DropTween_t2F1DA2E2AFC0F76F7DC4CFEEA07D5D893E5D6635 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpositionU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGrowU3Ed__4_t3769F20A3FC9616EE97D394AFF0C7A3C5F86BCA8, ___U3CpositionU3E5__2_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CpositionU3E5__2_3() const { return ___U3CpositionU3E5__2_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CpositionU3E5__2_3() { return &___U3CpositionU3E5__2_3; }
	inline void set_U3CpositionU3E5__2_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CpositionU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentTimeU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CGrowU3Ed__4_t3769F20A3FC9616EE97D394AFF0C7A3C5F86BCA8, ___U3CcurrentTimeU3E5__3_4)); }
	inline float get_U3CcurrentTimeU3E5__3_4() const { return ___U3CcurrentTimeU3E5__3_4; }
	inline float* get_address_of_U3CcurrentTimeU3E5__3_4() { return &___U3CcurrentTimeU3E5__3_4; }
	inline void set_U3CcurrentTimeU3E5__3_4(float value)
	{
		___U3CcurrentTimeU3E5__3_4 = value;
	}
};


// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_t96BD9B15406A59FB60DE4A1F11DF96FB70426BF5 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t96BD9B15406A59FB60DE4A1F11DF96FB70426BF5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LevelGeneration/TileType
struct TileType_t47086BF641B9A2488AC8871328CF837CAC7F31DC 
{
public:
	// System.Int32 LevelGeneration/TileType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TileType_t47086BF641B9A2488AC8871328CF837CAC7F31DC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MapBrain/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_tFF3EE653C316E214065CE03767BDBDC809FEF65B  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 MapBrain/<>c__DisplayClass48_0::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass48_0_tFF3EE653C316E214065CE03767BDBDC809FEF65B, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}
};


// MapVisualizer/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t7B785AEC943168F0630C4382B8D17760638CE3CB  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 MapVisualizer/<>c__DisplayClass17_0::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t7B785AEC943168F0630C4382B8D17760638CE3CB, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}
};


// MapVisualizer/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_tE0C216A9EA33CDC5636CE25ADC57D9A5CDFF833E  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 MapVisualizer/<>c__DisplayClass19_0::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_tE0C216A9EA33CDC5636CE25ADC57D9A5CDFF833E, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Outline/Mode
struct Mode_tE6A33F0970CFB7CB31A9C324E3A5E57744A55E0C 
{
public:
	// System.Int32 Outline/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_tE6A33F0970CFB7CB31A9C324E3A5E57744A55E0C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Scrollbar/Direction
struct Direction_tCE7C4B78403A18007E901268411DB754E7B784B7 
{
public:
	// System.Int32 UnityEngine.UI.Scrollbar/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tCE7C4B78403A18007E901268411DB754E7B784B7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Gameplay.Components.SpawnerComponent/LaunchData
struct LaunchData_tAE068343C79E1B868764B659F0CCFC16C44D2686 
{
public:
	// UnityEngine.Vector3 Gameplay.Components.SpawnerComponent/LaunchData::initialVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialVelocity_0;
	// System.Single Gameplay.Components.SpawnerComponent/LaunchData::timeToTarget
	float ___timeToTarget_1;

public:
	inline static int32_t get_offset_of_initialVelocity_0() { return static_cast<int32_t>(offsetof(LaunchData_tAE068343C79E1B868764B659F0CCFC16C44D2686, ___initialVelocity_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialVelocity_0() const { return ___initialVelocity_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialVelocity_0() { return &___initialVelocity_0; }
	inline void set_initialVelocity_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialVelocity_0 = value;
	}

	inline static int32_t get_offset_of_timeToTarget_1() { return static_cast<int32_t>(offsetof(LaunchData_tAE068343C79E1B868764B659F0CCFC16C44D2686, ___timeToTarget_1)); }
	inline float get_timeToTarget_1() const { return ___timeToTarget_1; }
	inline float* get_address_of_timeToTarget_1() { return &___timeToTarget_1; }
	inline void set_timeToTarget_1(float value)
	{
		___timeToTarget_1 = value;
	}
};


// Gameplay.Tower/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t6D6C3347E71A72CF0A4C5FC140F5E3B312BCEEFA  : public RuntimeObject
{
public:
	// UnityEngine.AnimatorStateInfo Gameplay.Tower/<>c__DisplayClass21_0::stateInfo
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo_0;

public:
	inline static int32_t get_offset_of_stateInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t6D6C3347E71A72CF0A4C5FC140F5E3B312BCEEFA, ___stateInfo_0)); }
	inline AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  get_stateInfo_0() const { return ___stateInfo_0; }
	inline AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * get_address_of_stateInfo_0() { return &___stateInfo_0; }
	inline void set_stateInfo_0(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  value)
	{
		___stateInfo_0 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32Enum>
struct KeyValuePair_2_t3C23DAE4FC2A4966AC3BF6D463387F740C0139A5 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3C23DAE4FC2A4966AC3BF6D463387F740C0139A5, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3C23DAE4FC2A4966AC3BF6D463387F740C0139A5, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,Gameplay.UnitType>
struct KeyValuePair_2_tD7776FAD45E0399E85A6820F450F712AC48B28F4 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD7776FAD45E0399E85A6820F450F712AC48B28F4, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD7776FAD45E0399E85A6820F450F712AC48B28F4, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// Cell
struct Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149  : public RuntimeObject
{
public:
	// System.Int32 Cell::<X>k__BackingField
	int32_t ___U3CXU3Ek__BackingField_0;
	// System.Int32 Cell::<Z>k__BackingField
	int32_t ___U3CZU3Ek__BackingField_1;
	// System.Boolean Cell::<IsTaken>k__BackingField
	bool ___U3CIsTakenU3Ek__BackingField_2;
	// CellObjectType Cell::<ObjectType>k__BackingField
	int32_t ___U3CObjectTypeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CXU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149, ___U3CXU3Ek__BackingField_0)); }
	inline int32_t get_U3CXU3Ek__BackingField_0() const { return ___U3CXU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CXU3Ek__BackingField_0() { return &___U3CXU3Ek__BackingField_0; }
	inline void set_U3CXU3Ek__BackingField_0(int32_t value)
	{
		___U3CXU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CZU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149, ___U3CZU3Ek__BackingField_1)); }
	inline int32_t get_U3CZU3Ek__BackingField_1() const { return ___U3CZU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CZU3Ek__BackingField_1() { return &___U3CZU3Ek__BackingField_1; }
	inline void set_U3CZU3Ek__BackingField_1(int32_t value)
	{
		___U3CZU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CIsTakenU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149, ___U3CIsTakenU3Ek__BackingField_2)); }
	inline bool get_U3CIsTakenU3Ek__BackingField_2() const { return ___U3CIsTakenU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsTakenU3Ek__BackingField_2() { return &___U3CIsTakenU3Ek__BackingField_2; }
	inline void set_U3CIsTakenU3Ek__BackingField_2(bool value)
	{
		___U3CIsTakenU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CObjectTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149, ___U3CObjectTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CObjectTypeU3Ek__BackingField_3() const { return ___U3CObjectTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CObjectTypeU3Ek__BackingField_3() { return &___U3CObjectTypeU3Ek__BackingField_3; }
	inline void set_U3CObjectTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CObjectTypeU3Ek__BackingField_3 = value;
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


// GameState.GameStateManager
struct GameStateManager_tF7AEC3D17EAEB0E30CBADF2F67F129F582EF3505  : public RuntimeObject
{
public:
	// UIController GameState.GameStateManager::_uiController
	UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * ____uiController_1;
	// GameState.GameState GameState.GameStateManager::_currentGameState
	int32_t ____currentGameState_2;

public:
	inline static int32_t get_offset_of__uiController_1() { return static_cast<int32_t>(offsetof(GameStateManager_tF7AEC3D17EAEB0E30CBADF2F67F129F582EF3505, ____uiController_1)); }
	inline UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * get__uiController_1() const { return ____uiController_1; }
	inline UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 ** get_address_of__uiController_1() { return &____uiController_1; }
	inline void set__uiController_1(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * value)
	{
		____uiController_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uiController_1), (void*)value);
	}

	inline static int32_t get_offset_of__currentGameState_2() { return static_cast<int32_t>(offsetof(GameStateManager_tF7AEC3D17EAEB0E30CBADF2F67F129F582EF3505, ____currentGameState_2)); }
	inline int32_t get__currentGameState_2() const { return ____currentGameState_2; }
	inline int32_t* get_address_of__currentGameState_2() { return &____currentGameState_2; }
	inline void set__currentGameState_2(int32_t value)
	{
		____currentGameState_2 = value;
	}
};

struct GameStateManager_tF7AEC3D17EAEB0E30CBADF2F67F129F582EF3505_StaticFields
{
public:
	// GameState.GameStateManager GameState.GameStateManager::_instance
	GameStateManager_tF7AEC3D17EAEB0E30CBADF2F67F129F582EF3505 * ____instance_0;
	// GameState.GameStateManager/GameStateChangeHandler GameState.GameStateManager::OnGameStateChanged
	GameStateChangeHandler_tAD426F7A2DBB4222FA6503DDBE98341005D5B395 * ___OnGameStateChanged_3;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(GameStateManager_tF7AEC3D17EAEB0E30CBADF2F67F129F582EF3505_StaticFields, ____instance_0)); }
	inline GameStateManager_tF7AEC3D17EAEB0E30CBADF2F67F129F582EF3505 * get__instance_0() const { return ____instance_0; }
	inline GameStateManager_tF7AEC3D17EAEB0E30CBADF2F67F129F582EF3505 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(GameStateManager_tF7AEC3D17EAEB0E30CBADF2F67F129F582EF3505 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnGameStateChanged_3() { return static_cast<int32_t>(offsetof(GameStateManager_tF7AEC3D17EAEB0E30CBADF2F67F129F582EF3505_StaticFields, ___OnGameStateChanged_3)); }
	inline GameStateChangeHandler_tAD426F7A2DBB4222FA6503DDBE98341005D5B395 * get_OnGameStateChanged_3() const { return ___OnGameStateChanged_3; }
	inline GameStateChangeHandler_tAD426F7A2DBB4222FA6503DDBE98341005D5B395 ** get_address_of_OnGameStateChanged_3() { return &___OnGameStateChanged_3; }
	inline void set_OnGameStateChanged_3(GameStateChangeHandler_tAD426F7A2DBB4222FA6503DDBE98341005D5B395 * value)
	{
		___OnGameStateChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGameStateChanged_3), (void*)value);
	}
};


// UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD 
{
public:
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// MapVisualizer/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t92159B18C93CBA1CD1B6B5671168711BECFF9F94  : public RuntimeObject
{
public:
	// MapData MapVisualizer/<>c__DisplayClass15_0::data
	MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8  ___data_0;
	// MapGrid MapVisualizer/<>c__DisplayClass15_0::grid
	MapGrid_t236B663A22892CFD736FA4F8C43A59C44CF4F62A * ___grid_1;
	// System.Func`2<UnityEngine.Vector3,System.Boolean> MapVisualizer/<>c__DisplayClass15_0::<>9__0
	Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___U3CU3E9__0_2;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_t92159B18C93CBA1CD1B6B5671168711BECFF9F94, ___data_0)); }
	inline MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8  get_data_0() const { return ___data_0; }
	inline MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8 * get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8  value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___obstacleArray_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___knightPieces_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___towers_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___path_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___cornersPosition_7), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_grid_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_t92159B18C93CBA1CD1B6B5671168711BECFF9F94, ___grid_1)); }
	inline MapGrid_t236B663A22892CFD736FA4F8C43A59C44CF4F62A * get_grid_1() const { return ___grid_1; }
	inline MapGrid_t236B663A22892CFD736FA4F8C43A59C44CF4F62A ** get_address_of_grid_1() { return &___grid_1; }
	inline void set_grid_1(MapGrid_t236B663A22892CFD736FA4F8C43A59C44CF4F62A * value)
	{
		___grid_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grid_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_t92159B18C93CBA1CD1B6B5671168711BECFF9F94, ___U3CU3E9__0_2)); }
	inline Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * get_U3CU3E9__0_2() const { return ___U3CU3E9__0_2; }
	inline Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 ** get_address_of_U3CU3E9__0_2() { return &___U3CU3E9__0_2; }
	inline void set_U3CU3E9__0_2(Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * value)
	{
		___U3CU3E9__0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_2), (void*)value);
	}
};


// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 
{
public:
	// T System.Nullable`1::value
	InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104, ___value_0)); }
	inline InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  get_value_0() const { return ___value_0; }
	inline InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
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


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Managers.GameManager/DDefeat
struct DDefeat_tFE73F7724C21B235D30257FDD83600D45DCBF549  : public MulticastDelegate_t
{
public:

public:
};


// Managers.GameManager/DWin
struct DWin_t27AEF6F901F3E8F569F78C37FF03308C57EE2D37  : public MulticastDelegate_t
{
public:

public:
};


// GameState.GameStateManager/GameStateChangeHandler
struct GameStateChangeHandler_tAD426F7A2DBB4222FA6503DDBE98341005D5B395  : public MulticastDelegate_t
{
public:

public:
};


// Gameplay.Components.HealthComponent/DDestroyUnit
struct DDestroyUnit_t5D4EC02605F1AB7D99B9CEAF00B2459599908E93  : public MulticastDelegate_t
{
public:

public:
};


// Gameplay.Components.MovementComponent/DLandedComplete
struct DLandedComplete_tF35A9505355FD60AC2CD2CD58C8B302D5C1C2FE8  : public MulticastDelegate_t
{
public:

public:
};


// Gameplay.Player/DUnitHover
struct DUnitHover_tE4632E3CA979D212145A6551FA0D6072C68A2873  : public MulticastDelegate_t
{
public:

public:
};


// Gameplay.Player/DUnitSelected
struct DUnitSelected_t95F61357E6EB3EA355F745D67D35705638B9E0DC  : public MulticastDelegate_t
{
public:

public:
};


// Gameplay.Components.SpawnerComponent/DRegisterSpawner
struct DRegisterSpawner_t16093AA77CA07FF10F53ED12A10BF829DB733343  : public MulticastDelegate_t
{
public:

public:
};


// Managers.UiManager/DSelectRadarSearchingType
struct DSelectRadarSearchingType_t43F4DE272DC752F851CE93CA78CC62B6D06708ED  : public MulticastDelegate_t
{
public:

public:
};


// Managers.UiManager/DSelectSpawnableUnit
struct DSelectSpawnableUnit_t33D8A41BDE468CBC0E39E32A4B0367E8BD490C78  : public MulticastDelegate_t
{
public:

public:
};


// Gameplay.Unit/DRegisterUnit
struct DRegisterUnit_t22944849DF6EAF14CAF9EC9225CA3AC3EB10704F  : public MulticastDelegate_t
{
public:

public:
};


// Gameplay.Unit/DUnregisterUnit
struct DUnregisterUnit_tB7A585B9C96839E9EB8A2264FD3CD35CE06CBFCC  : public MulticastDelegate_t
{
public:

public:
};


// UI.UnitTypeSelector/DUnitButtonClicked
struct DUnitButtonClicked_tBE8676E1E0DBC2F05FE50B73CD273E49F95EC9FE  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.InputSystem.InputAction
struct InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* ___m_SingletonActionBindings_6;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___m_BindingMask_7;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_12;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * ___m_ActionMap_13;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnStarted_14;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnCanceled_15;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnPerformed_16;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_ExpectedControlType_2() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ExpectedControlType_2)); }
	inline String_t* get_m_ExpectedControlType_2() const { return ___m_ExpectedControlType_2; }
	inline String_t** get_address_of_m_ExpectedControlType_2() { return &___m_ExpectedControlType_2; }
	inline void set_m_ExpectedControlType_2(String_t* value)
	{
		___m_ExpectedControlType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExpectedControlType_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_4() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Processors_4)); }
	inline String_t* get_m_Processors_4() const { return ___m_Processors_4; }
	inline String_t** get_address_of_m_Processors_4() { return &___m_Processors_4; }
	inline void set_m_Processors_4(String_t* value)
	{
		___m_Processors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SingletonActionBindings_6() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_SingletonActionBindings_6)); }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* get_m_SingletonActionBindings_6() const { return ___m_SingletonActionBindings_6; }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E** get_address_of_m_SingletonActionBindings_6() { return &___m_SingletonActionBindings_6; }
	inline void set_m_SingletonActionBindings_6(InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* value)
	{
		___m_SingletonActionBindings_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingletonActionBindings_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_7() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingMask_7)); }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  get_m_BindingMask_7() const { return ___m_BindingMask_7; }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 * get_address_of_m_BindingMask_7() { return &___m_BindingMask_7; }
	inline void set_m_BindingMask_7(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  value)
	{
		___m_BindingMask_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_BindingsStartIndex_8() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingsStartIndex_8)); }
	inline int32_t get_m_BindingsStartIndex_8() const { return ___m_BindingsStartIndex_8; }
	inline int32_t* get_address_of_m_BindingsStartIndex_8() { return &___m_BindingsStartIndex_8; }
	inline void set_m_BindingsStartIndex_8(int32_t value)
	{
		___m_BindingsStartIndex_8 = value;
	}

	inline static int32_t get_offset_of_m_BindingsCount_9() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingsCount_9)); }
	inline int32_t get_m_BindingsCount_9() const { return ___m_BindingsCount_9; }
	inline int32_t* get_address_of_m_BindingsCount_9() { return &___m_BindingsCount_9; }
	inline void set_m_BindingsCount_9(int32_t value)
	{
		___m_BindingsCount_9 = value;
	}

	inline static int32_t get_offset_of_m_ControlStartIndex_10() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ControlStartIndex_10)); }
	inline int32_t get_m_ControlStartIndex_10() const { return ___m_ControlStartIndex_10; }
	inline int32_t* get_address_of_m_ControlStartIndex_10() { return &___m_ControlStartIndex_10; }
	inline void set_m_ControlStartIndex_10(int32_t value)
	{
		___m_ControlStartIndex_10 = value;
	}

	inline static int32_t get_offset_of_m_ControlCount_11() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ControlCount_11)); }
	inline int32_t get_m_ControlCount_11() const { return ___m_ControlCount_11; }
	inline int32_t* get_address_of_m_ControlCount_11() { return &___m_ControlCount_11; }
	inline void set_m_ControlCount_11(int32_t value)
	{
		___m_ControlCount_11 = value;
	}

	inline static int32_t get_offset_of_m_ActionIndexInState_12() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ActionIndexInState_12)); }
	inline int32_t get_m_ActionIndexInState_12() const { return ___m_ActionIndexInState_12; }
	inline int32_t* get_address_of_m_ActionIndexInState_12() { return &___m_ActionIndexInState_12; }
	inline void set_m_ActionIndexInState_12(int32_t value)
	{
		___m_ActionIndexInState_12 = value;
	}

	inline static int32_t get_offset_of_m_ActionMap_13() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ActionMap_13)); }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * get_m_ActionMap_13() const { return ___m_ActionMap_13; }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 ** get_address_of_m_ActionMap_13() { return &___m_ActionMap_13; }
	inline void set_m_ActionMap_13(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * value)
	{
		___m_ActionMap_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMap_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnStarted_14() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnStarted_14)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnStarted_14() const { return ___m_OnStarted_14; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnStarted_14() { return &___m_OnStarted_14; }
	inline void set_m_OnStarted_14(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnStarted_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnStarted_14))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnStarted_14))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnCanceled_15() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnCanceled_15)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnCanceled_15() const { return ___m_OnCanceled_15; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnCanceled_15() { return &___m_OnCanceled_15; }
	inline void set_m_OnCanceled_15(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnCanceled_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnCanceled_15))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnCanceled_15))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnPerformed_16() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnPerformed_16)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnPerformed_16() const { return ___m_OnPerformed_16; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnPerformed_16() { return &___m_OnPerformed_16; }
	inline void set_m_OnPerformed_16(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnPerformed_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnPerformed_16))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnPerformed_16))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.InputActionMap::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputActionMap::m_Id
	String_t* ___m_Id_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionMap::m_Asset
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___m_Asset_2;
	// UnityEngine.InputSystem.InputAction[] UnityEngine.InputSystem.InputActionMap::m_Actions
	InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* ___m_Actions_3;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_Bindings
	InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* ___m_Bindings_4;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_BindingsForEachAction
	InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* ___m_BindingsForEachAction_5;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionMap::m_ControlsForEachAction
	InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* ___m_ControlsForEachAction_6;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_EnabledActionsCount
	int32_t ___m_EnabledActionsCount_7;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::m_SingletonAction
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_SingletonAction_8;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_MapIndexInState
	int32_t ___m_MapIndexInState_9;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionMap::m_State
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_10;
	// System.Boolean UnityEngine.InputSystem.InputActionMap::m_NeedToResolveBindings
	bool ___m_NeedToResolveBindings_11;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionMap::m_BindingMask
	Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___m_BindingMask_12;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_DevicesCount
	int32_t ___m_DevicesCount_13;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionMap::m_DevicesArray
	InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* ___m_DevicesArray_14;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputActionMap::m_ActionCallbacks
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_ActionCallbacks_15;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Id_1)); }
	inline String_t* get_m_Id_1() const { return ___m_Id_1; }
	inline String_t** get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(String_t* value)
	{
		___m_Id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Asset_2() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Asset_2)); }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * get_m_Asset_2() const { return ___m_Asset_2; }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E ** get_address_of_m_Asset_2() { return &___m_Asset_2; }
	inline void set_m_Asset_2(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * value)
	{
		___m_Asset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Actions_3() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Actions_3)); }
	inline InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* get_m_Actions_3() const { return ___m_Actions_3; }
	inline InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73** get_address_of_m_Actions_3() { return &___m_Actions_3; }
	inline void set_m_Actions_3(InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* value)
	{
		___m_Actions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Actions_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Bindings_4() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Bindings_4)); }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* get_m_Bindings_4() const { return ___m_Bindings_4; }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E** get_address_of_m_Bindings_4() { return &___m_Bindings_4; }
	inline void set_m_Bindings_4(InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* value)
	{
		___m_Bindings_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Bindings_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingsForEachAction_5() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_BindingsForEachAction_5)); }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* get_m_BindingsForEachAction_5() const { return ___m_BindingsForEachAction_5; }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E** get_address_of_m_BindingsForEachAction_5() { return &___m_BindingsForEachAction_5; }
	inline void set_m_BindingsForEachAction_5(InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* value)
	{
		___m_BindingsForEachAction_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingsForEachAction_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlsForEachAction_6() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_ControlsForEachAction_6)); }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* get_m_ControlsForEachAction_6() const { return ___m_ControlsForEachAction_6; }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67** get_address_of_m_ControlsForEachAction_6() { return &___m_ControlsForEachAction_6; }
	inline void set_m_ControlsForEachAction_6(InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* value)
	{
		___m_ControlsForEachAction_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlsForEachAction_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_EnabledActionsCount_7() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_EnabledActionsCount_7)); }
	inline int32_t get_m_EnabledActionsCount_7() const { return ___m_EnabledActionsCount_7; }
	inline int32_t* get_address_of_m_EnabledActionsCount_7() { return &___m_EnabledActionsCount_7; }
	inline void set_m_EnabledActionsCount_7(int32_t value)
	{
		___m_EnabledActionsCount_7 = value;
	}

	inline static int32_t get_offset_of_m_SingletonAction_8() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_SingletonAction_8)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_SingletonAction_8() const { return ___m_SingletonAction_8; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_SingletonAction_8() { return &___m_SingletonAction_8; }
	inline void set_m_SingletonAction_8(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_SingletonAction_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingletonAction_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_MapIndexInState_9() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_MapIndexInState_9)); }
	inline int32_t get_m_MapIndexInState_9() const { return ___m_MapIndexInState_9; }
	inline int32_t* get_address_of_m_MapIndexInState_9() { return &___m_MapIndexInState_9; }
	inline void set_m_MapIndexInState_9(int32_t value)
	{
		___m_MapIndexInState_9 = value;
	}

	inline static int32_t get_offset_of_m_State_10() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_State_10)); }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * get_m_State_10() const { return ___m_State_10; }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C ** get_address_of_m_State_10() { return &___m_State_10; }
	inline void set_m_State_10(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * value)
	{
		___m_State_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_NeedToResolveBindings_11() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_NeedToResolveBindings_11)); }
	inline bool get_m_NeedToResolveBindings_11() const { return ___m_NeedToResolveBindings_11; }
	inline bool* get_address_of_m_NeedToResolveBindings_11() { return &___m_NeedToResolveBindings_11; }
	inline void set_m_NeedToResolveBindings_11(bool value)
	{
		___m_NeedToResolveBindings_11 = value;
	}

	inline static int32_t get_offset_of_m_BindingMask_12() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_BindingMask_12)); }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  get_m_BindingMask_12() const { return ___m_BindingMask_12; }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 * get_address_of_m_BindingMask_12() { return &___m_BindingMask_12; }
	inline void set_m_BindingMask_12(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  value)
	{
		___m_BindingMask_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_DevicesCount_13() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_DevicesCount_13)); }
	inline int32_t get_m_DevicesCount_13() const { return ___m_DevicesCount_13; }
	inline int32_t* get_address_of_m_DevicesCount_13() { return &___m_DevicesCount_13; }
	inline void set_m_DevicesCount_13(int32_t value)
	{
		___m_DevicesCount_13 = value;
	}

	inline static int32_t get_offset_of_m_DevicesArray_14() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_DevicesArray_14)); }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* get_m_DevicesArray_14() const { return ___m_DevicesArray_14; }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2** get_address_of_m_DevicesArray_14() { return &___m_DevicesArray_14; }
	inline void set_m_DevicesArray_14(InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* value)
	{
		___m_DevicesArray_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DevicesArray_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionCallbacks_15() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_ActionCallbacks_15)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_ActionCallbacks_15() const { return ___m_ActionCallbacks_15; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_ActionCallbacks_15() { return &___m_ActionCallbacks_15; }
	inline void set_m_ActionCallbacks_15(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_ActionCallbacks_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ActionCallbacks_15))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ActionCallbacks_15))->___additionalValues_2), (void*)NULL);
		#endif
	}
};

struct InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226_StaticFields
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionMap::s_DeferBindingResolution
	int32_t ___s_DeferBindingResolution_16;

public:
	inline static int32_t get_offset_of_s_DeferBindingResolution_16() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226_StaticFields, ___s_DeferBindingResolution_16)); }
	inline int32_t get_s_DeferBindingResolution_16() const { return ___s_DeferBindingResolution_16; }
	inline int32_t* get_address_of_s_DeferBindingResolution_16() { return &___s_DeferBindingResolution_16; }
	inline void set_s_DeferBindingResolution_16(int32_t value)
	{
		___s_DeferBindingResolution_16 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Gameplay.Components.CurrencyComponent`1<Gameplay.Components.HealthComponent>
struct CurrencyComponent_1_t59512180D04C6D46EE3A62E82D6076DE10FB349D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Gameplay.Components.CurrencyComponent`1::<Max>k__BackingField
	float ___U3CMaxU3Ek__BackingField_5;
	// System.Single Gameplay.Components.CurrencyComponent`1::_current
	float ____current_6;

public:
	inline static int32_t get_offset_of_U3CMaxU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CurrencyComponent_1_t59512180D04C6D46EE3A62E82D6076DE10FB349D, ___U3CMaxU3Ek__BackingField_5)); }
	inline float get_U3CMaxU3Ek__BackingField_5() const { return ___U3CMaxU3Ek__BackingField_5; }
	inline float* get_address_of_U3CMaxU3Ek__BackingField_5() { return &___U3CMaxU3Ek__BackingField_5; }
	inline void set_U3CMaxU3Ek__BackingField_5(float value)
	{
		___U3CMaxU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of__current_6() { return static_cast<int32_t>(offsetof(CurrencyComponent_1_t59512180D04C6D46EE3A62E82D6076DE10FB349D, ____current_6)); }
	inline float get__current_6() const { return ____current_6; }
	inline float* get_address_of__current_6() { return &____current_6; }
	inline void set__current_6(float value)
	{
		____current_6 = value;
	}
};

struct CurrencyComponent_1_t59512180D04C6D46EE3A62E82D6076DE10FB349D_StaticFields
{
public:
	// Gameplay.Components.CurrencyComponent`1/DCurrencyUpdate<T> Gameplay.Components.CurrencyComponent`1::OnCurrencyUpdate
	DCurrencyUpdate_tD3B11A5F9B6E4E73A8E5FC71678DA46019EE5D92 * ___OnCurrencyUpdate_4;

public:
	inline static int32_t get_offset_of_OnCurrencyUpdate_4() { return static_cast<int32_t>(offsetof(CurrencyComponent_1_t59512180D04C6D46EE3A62E82D6076DE10FB349D_StaticFields, ___OnCurrencyUpdate_4)); }
	inline DCurrencyUpdate_tD3B11A5F9B6E4E73A8E5FC71678DA46019EE5D92 * get_OnCurrencyUpdate_4() const { return ___OnCurrencyUpdate_4; }
	inline DCurrencyUpdate_tD3B11A5F9B6E4E73A8E5FC71678DA46019EE5D92 ** get_address_of_OnCurrencyUpdate_4() { return &___OnCurrencyUpdate_4; }
	inline void set_OnCurrencyUpdate_4(DCurrencyUpdate_tD3B11A5F9B6E4E73A8E5FC71678DA46019EE5D92 * value)
	{
		___OnCurrencyUpdate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCurrencyUpdate_4), (void*)value);
	}
};


// Gameplay.Components.CurrencyComponent`1<Gameplay.Components.MoneyComponent>
struct CurrencyComponent_1_t66994DE0154F4226B3F3EB58E12A6FFF62D26AB4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Gameplay.Components.CurrencyComponent`1::<Max>k__BackingField
	float ___U3CMaxU3Ek__BackingField_5;
	// System.Single Gameplay.Components.CurrencyComponent`1::_current
	float ____current_6;

public:
	inline static int32_t get_offset_of_U3CMaxU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CurrencyComponent_1_t66994DE0154F4226B3F3EB58E12A6FFF62D26AB4, ___U3CMaxU3Ek__BackingField_5)); }
	inline float get_U3CMaxU3Ek__BackingField_5() const { return ___U3CMaxU3Ek__BackingField_5; }
	inline float* get_address_of_U3CMaxU3Ek__BackingField_5() { return &___U3CMaxU3Ek__BackingField_5; }
	inline void set_U3CMaxU3Ek__BackingField_5(float value)
	{
		___U3CMaxU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of__current_6() { return static_cast<int32_t>(offsetof(CurrencyComponent_1_t66994DE0154F4226B3F3EB58E12A6FFF62D26AB4, ____current_6)); }
	inline float get__current_6() const { return ____current_6; }
	inline float* get_address_of__current_6() { return &____current_6; }
	inline void set__current_6(float value)
	{
		____current_6 = value;
	}
};

struct CurrencyComponent_1_t66994DE0154F4226B3F3EB58E12A6FFF62D26AB4_StaticFields
{
public:
	// Gameplay.Components.CurrencyComponent`1/DCurrencyUpdate<T> Gameplay.Components.CurrencyComponent`1::OnCurrencyUpdate
	DCurrencyUpdate_t763B53A110F24C5A7728A96DE102E09129B78463 * ___OnCurrencyUpdate_4;

public:
	inline static int32_t get_offset_of_OnCurrencyUpdate_4() { return static_cast<int32_t>(offsetof(CurrencyComponent_1_t66994DE0154F4226B3F3EB58E12A6FFF62D26AB4_StaticFields, ___OnCurrencyUpdate_4)); }
	inline DCurrencyUpdate_t763B53A110F24C5A7728A96DE102E09129B78463 * get_OnCurrencyUpdate_4() const { return ___OnCurrencyUpdate_4; }
	inline DCurrencyUpdate_t763B53A110F24C5A7728A96DE102E09129B78463 ** get_address_of_OnCurrencyUpdate_4() { return &___OnCurrencyUpdate_4; }
	inline void set_OnCurrencyUpdate_4(DCurrencyUpdate_t763B53A110F24C5A7728A96DE102E09129B78463 * value)
	{
		___OnCurrencyUpdate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCurrencyUpdate_4), (void*)value);
	}
};


// Gameplay.Components.CurrencyComponent`1<System.Object>
struct CurrencyComponent_1_t8E9271605EC7CC45BBAEC59FC45D6502B2045473  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Gameplay.Components.CurrencyComponent`1::<Max>k__BackingField
	float ___U3CMaxU3Ek__BackingField_5;
	// System.Single Gameplay.Components.CurrencyComponent`1::_current
	float ____current_6;

public:
	inline static int32_t get_offset_of_U3CMaxU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CurrencyComponent_1_t8E9271605EC7CC45BBAEC59FC45D6502B2045473, ___U3CMaxU3Ek__BackingField_5)); }
	inline float get_U3CMaxU3Ek__BackingField_5() const { return ___U3CMaxU3Ek__BackingField_5; }
	inline float* get_address_of_U3CMaxU3Ek__BackingField_5() { return &___U3CMaxU3Ek__BackingField_5; }
	inline void set_U3CMaxU3Ek__BackingField_5(float value)
	{
		___U3CMaxU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of__current_6() { return static_cast<int32_t>(offsetof(CurrencyComponent_1_t8E9271605EC7CC45BBAEC59FC45D6502B2045473, ____current_6)); }
	inline float get__current_6() const { return ____current_6; }
	inline float* get_address_of__current_6() { return &____current_6; }
	inline void set__current_6(float value)
	{
		____current_6 = value;
	}
};

struct CurrencyComponent_1_t8E9271605EC7CC45BBAEC59FC45D6502B2045473_StaticFields
{
public:
	// Gameplay.Components.CurrencyComponent`1/DCurrencyUpdate<T> Gameplay.Components.CurrencyComponent`1::OnCurrencyUpdate
	DCurrencyUpdate_tE06F8B5F2AF5C17B8DF4CDB6ABC9F640610B2470 * ___OnCurrencyUpdate_4;

public:
	inline static int32_t get_offset_of_OnCurrencyUpdate_4() { return static_cast<int32_t>(offsetof(CurrencyComponent_1_t8E9271605EC7CC45BBAEC59FC45D6502B2045473_StaticFields, ___OnCurrencyUpdate_4)); }
	inline DCurrencyUpdate_tE06F8B5F2AF5C17B8DF4CDB6ABC9F640610B2470 * get_OnCurrencyUpdate_4() const { return ___OnCurrencyUpdate_4; }
	inline DCurrencyUpdate_tE06F8B5F2AF5C17B8DF4CDB6ABC9F640610B2470 ** get_address_of_OnCurrencyUpdate_4() { return &___OnCurrencyUpdate_4; }
	inline void set_OnCurrencyUpdate_4(DCurrencyUpdate_tE06F8B5F2AF5C17B8DF4CDB6ABC9F640610B2470 * value)
	{
		___OnCurrencyUpdate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCurrencyUpdate_4), (void*)value);
	}
};


// Tools.MonoSingleton`1<System.Object>
struct MonoSingleton_1_tC8801AEDB57A1E78FF94100497CB7E98F87A0F5F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Tools.MonoSingleton`1::dontDestroyOnLoad
	bool ___dontDestroyOnLoad_4;

public:
	inline static int32_t get_offset_of_dontDestroyOnLoad_4() { return static_cast<int32_t>(offsetof(MonoSingleton_1_tC8801AEDB57A1E78FF94100497CB7E98F87A0F5F, ___dontDestroyOnLoad_4)); }
	inline bool get_dontDestroyOnLoad_4() const { return ___dontDestroyOnLoad_4; }
	inline bool* get_address_of_dontDestroyOnLoad_4() { return &___dontDestroyOnLoad_4; }
	inline void set_dontDestroyOnLoad_4(bool value)
	{
		___dontDestroyOnLoad_4 = value;
	}
};

struct MonoSingleton_1_tC8801AEDB57A1E78FF94100497CB7E98F87A0F5F_StaticFields
{
public:
	// T Tools.MonoSingleton`1::<Instance>k__BackingField
	RuntimeObject * ___U3CInstanceU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MonoSingleton_1_tC8801AEDB57A1E78FF94100497CB7E98F87A0F5F_StaticFields, ___U3CInstanceU3Ek__BackingField_5)); }
	inline RuntimeObject * get_U3CInstanceU3Ek__BackingField_5() const { return ___U3CInstanceU3Ek__BackingField_5; }
	inline RuntimeObject ** get_address_of_U3CInstanceU3Ek__BackingField_5() { return &___U3CInstanceU3Ek__BackingField_5; }
	inline void set_U3CInstanceU3Ek__BackingField_5(RuntimeObject * value)
	{
		___U3CInstanceU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_5), (void*)value);
	}
};


// Tools.MonoSingleton`1<Managers.UiManager>
struct MonoSingleton_1_tB2F1044A7C0E9239B3F215BD80C4AEC145C1BAFB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Tools.MonoSingleton`1::dontDestroyOnLoad
	bool ___dontDestroyOnLoad_4;

public:
	inline static int32_t get_offset_of_dontDestroyOnLoad_4() { return static_cast<int32_t>(offsetof(MonoSingleton_1_tB2F1044A7C0E9239B3F215BD80C4AEC145C1BAFB, ___dontDestroyOnLoad_4)); }
	inline bool get_dontDestroyOnLoad_4() const { return ___dontDestroyOnLoad_4; }
	inline bool* get_address_of_dontDestroyOnLoad_4() { return &___dontDestroyOnLoad_4; }
	inline void set_dontDestroyOnLoad_4(bool value)
	{
		___dontDestroyOnLoad_4 = value;
	}
};

struct MonoSingleton_1_tB2F1044A7C0E9239B3F215BD80C4AEC145C1BAFB_StaticFields
{
public:
	// T Tools.MonoSingleton`1::<Instance>k__BackingField
	UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F * ___U3CInstanceU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MonoSingleton_1_tB2F1044A7C0E9239B3F215BD80C4AEC145C1BAFB_StaticFields, ___U3CInstanceU3Ek__BackingField_5)); }
	inline UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F * get_U3CInstanceU3Ek__BackingField_5() const { return ___U3CInstanceU3Ek__BackingField_5; }
	inline UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F ** get_address_of_U3CInstanceU3Ek__BackingField_5() { return &___U3CInstanceU3Ek__BackingField_5; }
	inline void set_U3CInstanceU3Ek__BackingField_5(UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F * value)
	{
		___U3CInstanceU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_5), (void*)value);
	}
};


// CameraMovement
struct CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Controls.CameraControls CameraMovement::<CameraControls>k__BackingField
	CameraControls_tEDA4EF38E586C8A1DC6B93F001F386A7BDD735ED * ___U3CCameraControlsU3Ek__BackingField_4;
	// Controls.TouchControls CameraMovement::<TouchControls>k__BackingField
	TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * ___U3CTouchControlsU3Ek__BackingField_5;
	// UnityEngine.Camera CameraMovement::_camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ____camera_6;
	// UnityEngine.AnimationCurve CameraMovement::moveCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___moveCurve_7;
	// System.Single CameraMovement::moveSpeed
	float ___moveSpeed_8;
	// System.Single CameraMovement::zoomSpeed
	float ___zoomSpeed_9;
	// System.Single CameraMovement::minZoomDistance
	float ___minZoomDistance_10;
	// System.Single CameraMovement::maxZoomDistance
	float ___maxZoomDistance_11;
	// UnityEngine.Vector2 CameraMovement::_movementAxis
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____movementAxis_12;
	// UnityEngine.Vector2 CameraMovement::_currentMovementAxis
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____currentMovementAxis_13;
	// UnityEngine.Coroutine CameraMovement::_zoomCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____zoomCoroutine_14;

public:
	inline static int32_t get_offset_of_U3CCameraControlsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35, ___U3CCameraControlsU3Ek__BackingField_4)); }
	inline CameraControls_tEDA4EF38E586C8A1DC6B93F001F386A7BDD735ED * get_U3CCameraControlsU3Ek__BackingField_4() const { return ___U3CCameraControlsU3Ek__BackingField_4; }
	inline CameraControls_tEDA4EF38E586C8A1DC6B93F001F386A7BDD735ED ** get_address_of_U3CCameraControlsU3Ek__BackingField_4() { return &___U3CCameraControlsU3Ek__BackingField_4; }
	inline void set_U3CCameraControlsU3Ek__BackingField_4(CameraControls_tEDA4EF38E586C8A1DC6B93F001F386A7BDD735ED * value)
	{
		___U3CCameraControlsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCameraControlsU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTouchControlsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35, ___U3CTouchControlsU3Ek__BackingField_5)); }
	inline TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * get_U3CTouchControlsU3Ek__BackingField_5() const { return ___U3CTouchControlsU3Ek__BackingField_5; }
	inline TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 ** get_address_of_U3CTouchControlsU3Ek__BackingField_5() { return &___U3CTouchControlsU3Ek__BackingField_5; }
	inline void set_U3CTouchControlsU3Ek__BackingField_5(TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * value)
	{
		___U3CTouchControlsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTouchControlsU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of__camera_6() { return static_cast<int32_t>(offsetof(CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35, ____camera_6)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get__camera_6() const { return ____camera_6; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of__camera_6() { return &____camera_6; }
	inline void set__camera_6(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		____camera_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____camera_6), (void*)value);
	}

	inline static int32_t get_offset_of_moveCurve_7() { return static_cast<int32_t>(offsetof(CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35, ___moveCurve_7)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_moveCurve_7() const { return ___moveCurve_7; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_moveCurve_7() { return &___moveCurve_7; }
	inline void set_moveCurve_7(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___moveCurve_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveCurve_7), (void*)value);
	}

	inline static int32_t get_offset_of_moveSpeed_8() { return static_cast<int32_t>(offsetof(CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35, ___moveSpeed_8)); }
	inline float get_moveSpeed_8() const { return ___moveSpeed_8; }
	inline float* get_address_of_moveSpeed_8() { return &___moveSpeed_8; }
	inline void set_moveSpeed_8(float value)
	{
		___moveSpeed_8 = value;
	}

	inline static int32_t get_offset_of_zoomSpeed_9() { return static_cast<int32_t>(offsetof(CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35, ___zoomSpeed_9)); }
	inline float get_zoomSpeed_9() const { return ___zoomSpeed_9; }
	inline float* get_address_of_zoomSpeed_9() { return &___zoomSpeed_9; }
	inline void set_zoomSpeed_9(float value)
	{
		___zoomSpeed_9 = value;
	}

	inline static int32_t get_offset_of_minZoomDistance_10() { return static_cast<int32_t>(offsetof(CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35, ___minZoomDistance_10)); }
	inline float get_minZoomDistance_10() const { return ___minZoomDistance_10; }
	inline float* get_address_of_minZoomDistance_10() { return &___minZoomDistance_10; }
	inline void set_minZoomDistance_10(float value)
	{
		___minZoomDistance_10 = value;
	}

	inline static int32_t get_offset_of_maxZoomDistance_11() { return static_cast<int32_t>(offsetof(CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35, ___maxZoomDistance_11)); }
	inline float get_maxZoomDistance_11() const { return ___maxZoomDistance_11; }
	inline float* get_address_of_maxZoomDistance_11() { return &___maxZoomDistance_11; }
	inline void set_maxZoomDistance_11(float value)
	{
		___maxZoomDistance_11 = value;
	}

	inline static int32_t get_offset_of__movementAxis_12() { return static_cast<int32_t>(offsetof(CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35, ____movementAxis_12)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__movementAxis_12() const { return ____movementAxis_12; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__movementAxis_12() { return &____movementAxis_12; }
	inline void set__movementAxis_12(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____movementAxis_12 = value;
	}

	inline static int32_t get_offset_of__currentMovementAxis_13() { return static_cast<int32_t>(offsetof(CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35, ____currentMovementAxis_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__currentMovementAxis_13() const { return ____currentMovementAxis_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__currentMovementAxis_13() { return &____currentMovementAxis_13; }
	inline void set__currentMovementAxis_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____currentMovementAxis_13 = value;
	}

	inline static int32_t get_offset_of__zoomCoroutine_14() { return static_cast<int32_t>(offsetof(CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35, ____zoomCoroutine_14)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__zoomCoroutine_14() const { return ____zoomCoroutine_14; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__zoomCoroutine_14() { return &____zoomCoroutine_14; }
	inline void set__zoomCoroutine_14(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____zoomCoroutine_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____zoomCoroutine_14), (void*)value);
	}
};


// DropTween
struct DropTween_t2F1DA2E2AFC0F76F7DC4CFEEA07D5D893E5D6635  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single DropTween::scaleTime
	float ___scaleTime_5;
	// UnityEngine.Vector3 DropTween::_destination
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____destination_6;

public:
	inline static int32_t get_offset_of_scaleTime_5() { return static_cast<int32_t>(offsetof(DropTween_t2F1DA2E2AFC0F76F7DC4CFEEA07D5D893E5D6635, ___scaleTime_5)); }
	inline float get_scaleTime_5() const { return ___scaleTime_5; }
	inline float* get_address_of_scaleTime_5() { return &___scaleTime_5; }
	inline void set_scaleTime_5(float value)
	{
		___scaleTime_5 = value;
	}

	inline static int32_t get_offset_of__destination_6() { return static_cast<int32_t>(offsetof(DropTween_t2F1DA2E2AFC0F76F7DC4CFEEA07D5D893E5D6635, ____destination_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__destination_6() const { return ____destination_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__destination_6() { return &____destination_6; }
	inline void set__destination_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____destination_6 = value;
	}
};

struct DropTween_t2F1DA2E2AFC0F76F7DC4CFEEA07D5D893E5D6635_StaticFields
{
public:
	// System.Single DropTween::_timeOffset
	float ____timeOffset_4;

public:
	inline static int32_t get_offset_of__timeOffset_4() { return static_cast<int32_t>(offsetof(DropTween_t2F1DA2E2AFC0F76F7DC4CFEEA07D5D893E5D6635_StaticFields, ____timeOffset_4)); }
	inline float get__timeOffset_4() const { return ____timeOffset_4; }
	inline float* get_address_of__timeOffset_4() { return &____timeOffset_4; }
	inline void set__timeOffset_4(float value)
	{
		____timeOffset_4 = value;
	}
};


// MapBrain
struct MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 MapBrain::populationSize
	int32_t ___populationSize_4;
	// System.Int32 MapBrain::crossoverRate
	int32_t ___crossoverRate_5;
	// System.Double MapBrain::_crossoverRatePercent
	double ____crossoverRatePercent_6;
	// System.Int32 MapBrain::mutationRate
	int32_t ___mutationRate_7;
	// System.Double MapBrain::_mutationRatePercent
	double ____mutationRatePercent_8;
	// System.Int32 MapBrain::generationLimit
	int32_t ___generationLimit_9;
	// System.Collections.Generic.List`1<CandidateMap> MapBrain::_currentGeneration
	List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 * ____currentGeneration_10;
	// System.Int32 MapBrain::_totalFitnessCurrentGeneration
	int32_t ____totalFitnessCurrentGeneration_11;
	// System.Int32 MapBrain::_bestFitnessAllTime
	int32_t ____bestFitnessAllTime_12;
	// CandidateMap MapBrain::<BestMap>k__BackingField
	CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * ___U3CBestMapU3Ek__BackingField_13;
	// System.Int32 MapBrain::_bestMapGenerationNumber
	int32_t ____bestMapGenerationNumber_14;
	// System.Int32 MapBrain::_generationNumber
	int32_t ____generationNumber_15;
	// System.Int32 MapBrain::minCorners
	int32_t ___minCorners_16;
	// System.Int32 MapBrain::maxCorners
	int32_t ___maxCorners_17;
	// System.Int32 MapBrain::cornersWeight
	int32_t ___cornersWeight_18;
	// System.Int32 MapBrain::repetitiveCornersWeight
	int32_t ___repetitiveCornersWeight_19;
	// System.Single MapBrain::obstaclesWeight
	float ___obstaclesWeight_20;
	// System.Int32 MapBrain::pathWeight
	int32_t ___pathWeight_21;
	// System.Int32 MapBrain::mapWidth
	int32_t ___mapWidth_22;
	// System.Int32 MapBrain::mapLength
	int32_t ___mapLength_23;
	// UnityEngine.Vector3 MapBrain::_startPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____startPosition_24;
	// UnityEngine.Vector3 MapBrain::_endPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____endPosition_25;
	// MapGrid MapBrain::_grid
	MapGrid_t236B663A22892CFD736FA4F8C43A59C44CF4F62A * ____grid_26;
	// Direction MapBrain::startEdge
	int32_t ___startEdge_27;
	// Direction MapBrain::endEdge
	int32_t ___endEdge_28;
	// System.Boolean MapBrain::randomStartAndEnd
	bool ___randomStartAndEnd_29;
	// System.Int32 MapBrain::knightPiecesNumber
	int32_t ___knightPiecesNumber_30;
	// System.Int32 MapBrain::numberOfTowers
	int32_t ___numberOfTowers_31;
	// MapVisualizer MapBrain::mapVisualizer
	MapVisualizer_t1EC632AB821D06F8B308C73F55990FC8CC4517EA * ___mapVisualizer_32;
	// System.DateTime MapBrain::_startDate
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____startDate_33;
	// System.DateTime MapBrain::_endDate
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____endDate_34;
	// System.Boolean MapBrain::<IsAlgorithmRunning>k__BackingField
	bool ___U3CIsAlgorithmRunningU3Ek__BackingField_35;

public:
	inline static int32_t get_offset_of_populationSize_4() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ___populationSize_4)); }
	inline int32_t get_populationSize_4() const { return ___populationSize_4; }
	inline int32_t* get_address_of_populationSize_4() { return &___populationSize_4; }
	inline void set_populationSize_4(int32_t value)
	{
		___populationSize_4 = value;
	}

	inline static int32_t get_offset_of_crossoverRate_5() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ___crossoverRate_5)); }
	inline int32_t get_crossoverRate_5() const { return ___crossoverRate_5; }
	inline int32_t* get_address_of_crossoverRate_5() { return &___crossoverRate_5; }
	inline void set_crossoverRate_5(int32_t value)
	{
		___crossoverRate_5 = value;
	}

	inline static int32_t get_offset_of__crossoverRatePercent_6() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ____crossoverRatePercent_6)); }
	inline double get__crossoverRatePercent_6() const { return ____crossoverRatePercent_6; }
	inline double* get_address_of__crossoverRatePercent_6() { return &____crossoverRatePercent_6; }
	inline void set__crossoverRatePercent_6(double value)
	{
		____crossoverRatePercent_6 = value;
	}

	inline static int32_t get_offset_of_mutationRate_7() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ___mutationRate_7)); }
	inline int32_t get_mutationRate_7() const { return ___mutationRate_7; }
	inline int32_t* get_address_of_mutationRate_7() { return &___mutationRate_7; }
	inline void set_mutationRate_7(int32_t value)
	{
		___mutationRate_7 = value;
	}

	inline static int32_t get_offset_of__mutationRatePercent_8() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ____mutationRatePercent_8)); }
	inline double get__mutationRatePercent_8() const { return ____mutationRatePercent_8; }
	inline double* get_address_of__mutationRatePercent_8() { return &____mutationRatePercent_8; }
	inline void set__mutationRatePercent_8(double value)
	{
		____mutationRatePercent_8 = value;
	}

	inline static int32_t get_offset_of_generationLimit_9() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ___generationLimit_9)); }
	inline int32_t get_generationLimit_9() const { return ___generationLimit_9; }
	inline int32_t* get_address_of_generationLimit_9() { return &___generationLimit_9; }
	inline void set_generationLimit_9(int32_t value)
	{
		___generationLimit_9 = value;
	}

	inline static int32_t get_offset_of__currentGeneration_10() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ____currentGeneration_10)); }
	inline List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 * get__currentGeneration_10() const { return ____currentGeneration_10; }
	inline List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 ** get_address_of__currentGeneration_10() { return &____currentGeneration_10; }
	inline void set__currentGeneration_10(List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 * value)
	{
		____currentGeneration_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentGeneration_10), (void*)value);
	}

	inline static int32_t get_offset_of__totalFitnessCurrentGeneration_11() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ____totalFitnessCurrentGeneration_11)); }
	inline int32_t get__totalFitnessCurrentGeneration_11() const { return ____totalFitnessCurrentGeneration_11; }
	inline int32_t* get_address_of__totalFitnessCurrentGeneration_11() { return &____totalFitnessCurrentGeneration_11; }
	inline void set__totalFitnessCurrentGeneration_11(int32_t value)
	{
		____totalFitnessCurrentGeneration_11 = value;
	}

	inline static int32_t get_offset_of__bestFitnessAllTime_12() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ____bestFitnessAllTime_12)); }
	inline int32_t get__bestFitnessAllTime_12() const { return ____bestFitnessAllTime_12; }
	inline int32_t* get_address_of__bestFitnessAllTime_12() { return &____bestFitnessAllTime_12; }
	inline void set__bestFitnessAllTime_12(int32_t value)
	{
		____bestFitnessAllTime_12 = value;
	}

	inline static int32_t get_offset_of_U3CBestMapU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ___U3CBestMapU3Ek__BackingField_13)); }
	inline CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * get_U3CBestMapU3Ek__BackingField_13() const { return ___U3CBestMapU3Ek__BackingField_13; }
	inline CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED ** get_address_of_U3CBestMapU3Ek__BackingField_13() { return &___U3CBestMapU3Ek__BackingField_13; }
	inline void set_U3CBestMapU3Ek__BackingField_13(CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * value)
	{
		___U3CBestMapU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBestMapU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of__bestMapGenerationNumber_14() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ____bestMapGenerationNumber_14)); }
	inline int32_t get__bestMapGenerationNumber_14() const { return ____bestMapGenerationNumber_14; }
	inline int32_t* get_address_of__bestMapGenerationNumber_14() { return &____bestMapGenerationNumber_14; }
	inline void set__bestMapGenerationNumber_14(int32_t value)
	{
		____bestMapGenerationNumber_14 = value;
	}

	inline static int32_t get_offset_of__generationNumber_15() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ____generationNumber_15)); }
	inline int32_t get__generationNumber_15() const { return ____generationNumber_15; }
	inline int32_t* get_address_of__generationNumber_15() { return &____generationNumber_15; }
	inline void set__generationNumber_15(int32_t value)
	{
		____generationNumber_15 = value;
	}

	inline static int32_t get_offset_of_minCorners_16() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ___minCorners_16)); }
	inline int32_t get_minCorners_16() const { return ___minCorners_16; }
	inline int32_t* get_address_of_minCorners_16() { return &___minCorners_16; }
	inline void set_minCorners_16(int32_t value)
	{
		___minCorners_16 = value;
	}

	inline static int32_t get_offset_of_maxCorners_17() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ___maxCorners_17)); }
	inline int32_t get_maxCorners_17() const { return ___maxCorners_17; }
	inline int32_t* get_address_of_maxCorners_17() { return &___maxCorners_17; }
	inline void set_maxCorners_17(int32_t value)
	{
		___maxCorners_17 = value;
	}

	inline static int32_t get_offset_of_cornersWeight_18() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ___cornersWeight_18)); }
	inline int32_t get_cornersWeight_18() const { return ___cornersWeight_18; }
	inline int32_t* get_address_of_cornersWeight_18() { return &___cornersWeight_18; }
	inline void set_cornersWeight_18(int32_t value)
	{
		___cornersWeight_18 = value;
	}

	inline static int32_t get_offset_of_repetitiveCornersWeight_19() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ___repetitiveCornersWeight_19)); }
	inline int32_t get_repetitiveCornersWeight_19() const { return ___repetitiveCornersWeight_19; }
	inline int32_t* get_address_of_repetitiveCornersWeight_19() { return &___repetitiveCornersWeight_19; }
	inline void set_repetitiveCornersWeight_19(int32_t value)
	{
		___repetitiveCornersWeight_19 = value;
	}

	inline static int32_t get_offset_of_obstaclesWeight_20() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ___obstaclesWeight_20)); }
	inline float get_obstaclesWeight_20() const { return ___obstaclesWeight_20; }
	inline float* get_address_of_obstaclesWeight_20() { return &___obstaclesWeight_20; }
	inline void set_obstaclesWeight_20(float value)
	{
		___obstaclesWeight_20 = value;
	}

	inline static int32_t get_offset_of_pathWeight_21() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ___pathWeight_21)); }
	inline int32_t get_pathWeight_21() const { return ___pathWeight_21; }
	inline int32_t* get_address_of_pathWeight_21() { return &___pathWeight_21; }
	inline void set_pathWeight_21(int32_t value)
	{
		___pathWeight_21 = value;
	}

	inline static int32_t get_offset_of_mapWidth_22() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ___mapWidth_22)); }
	inline int32_t get_mapWidth_22() const { return ___mapWidth_22; }
	inline int32_t* get_address_of_mapWidth_22() { return &___mapWidth_22; }
	inline void set_mapWidth_22(int32_t value)
	{
		___mapWidth_22 = value;
	}

	inline static int32_t get_offset_of_mapLength_23() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ___mapLength_23)); }
	inline int32_t get_mapLength_23() const { return ___mapLength_23; }
	inline int32_t* get_address_of_mapLength_23() { return &___mapLength_23; }
	inline void set_mapLength_23(int32_t value)
	{
		___mapLength_23 = value;
	}

	inline static int32_t get_offset_of__startPosition_24() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ____startPosition_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__startPosition_24() const { return ____startPosition_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__startPosition_24() { return &____startPosition_24; }
	inline void set__startPosition_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____startPosition_24 = value;
	}

	inline static int32_t get_offset_of__endPosition_25() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ____endPosition_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__endPosition_25() const { return ____endPosition_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__endPosition_25() { return &____endPosition_25; }
	inline void set__endPosition_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____endPosition_25 = value;
	}

	inline static int32_t get_offset_of__grid_26() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ____grid_26)); }
	inline MapGrid_t236B663A22892CFD736FA4F8C43A59C44CF4F62A * get__grid_26() const { return ____grid_26; }
	inline MapGrid_t236B663A22892CFD736FA4F8C43A59C44CF4F62A ** get_address_of__grid_26() { return &____grid_26; }
	inline void set__grid_26(MapGrid_t236B663A22892CFD736FA4F8C43A59C44CF4F62A * value)
	{
		____grid_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____grid_26), (void*)value);
	}

	inline static int32_t get_offset_of_startEdge_27() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ___startEdge_27)); }
	inline int32_t get_startEdge_27() const { return ___startEdge_27; }
	inline int32_t* get_address_of_startEdge_27() { return &___startEdge_27; }
	inline void set_startEdge_27(int32_t value)
	{
		___startEdge_27 = value;
	}

	inline static int32_t get_offset_of_endEdge_28() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ___endEdge_28)); }
	inline int32_t get_endEdge_28() const { return ___endEdge_28; }
	inline int32_t* get_address_of_endEdge_28() { return &___endEdge_28; }
	inline void set_endEdge_28(int32_t value)
	{
		___endEdge_28 = value;
	}

	inline static int32_t get_offset_of_randomStartAndEnd_29() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ___randomStartAndEnd_29)); }
	inline bool get_randomStartAndEnd_29() const { return ___randomStartAndEnd_29; }
	inline bool* get_address_of_randomStartAndEnd_29() { return &___randomStartAndEnd_29; }
	inline void set_randomStartAndEnd_29(bool value)
	{
		___randomStartAndEnd_29 = value;
	}

	inline static int32_t get_offset_of_knightPiecesNumber_30() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ___knightPiecesNumber_30)); }
	inline int32_t get_knightPiecesNumber_30() const { return ___knightPiecesNumber_30; }
	inline int32_t* get_address_of_knightPiecesNumber_30() { return &___knightPiecesNumber_30; }
	inline void set_knightPiecesNumber_30(int32_t value)
	{
		___knightPiecesNumber_30 = value;
	}

	inline static int32_t get_offset_of_numberOfTowers_31() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ___numberOfTowers_31)); }
	inline int32_t get_numberOfTowers_31() const { return ___numberOfTowers_31; }
	inline int32_t* get_address_of_numberOfTowers_31() { return &___numberOfTowers_31; }
	inline void set_numberOfTowers_31(int32_t value)
	{
		___numberOfTowers_31 = value;
	}

	inline static int32_t get_offset_of_mapVisualizer_32() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ___mapVisualizer_32)); }
	inline MapVisualizer_t1EC632AB821D06F8B308C73F55990FC8CC4517EA * get_mapVisualizer_32() const { return ___mapVisualizer_32; }
	inline MapVisualizer_t1EC632AB821D06F8B308C73F55990FC8CC4517EA ** get_address_of_mapVisualizer_32() { return &___mapVisualizer_32; }
	inline void set_mapVisualizer_32(MapVisualizer_t1EC632AB821D06F8B308C73F55990FC8CC4517EA * value)
	{
		___mapVisualizer_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mapVisualizer_32), (void*)value);
	}

	inline static int32_t get_offset_of__startDate_33() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ____startDate_33)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__startDate_33() const { return ____startDate_33; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__startDate_33() { return &____startDate_33; }
	inline void set__startDate_33(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____startDate_33 = value;
	}

	inline static int32_t get_offset_of__endDate_34() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ____endDate_34)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__endDate_34() const { return ____endDate_34; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__endDate_34() { return &____endDate_34; }
	inline void set__endDate_34(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____endDate_34 = value;
	}

	inline static int32_t get_offset_of_U3CIsAlgorithmRunningU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE, ___U3CIsAlgorithmRunningU3Ek__BackingField_35)); }
	inline bool get_U3CIsAlgorithmRunningU3Ek__BackingField_35() const { return ___U3CIsAlgorithmRunningU3Ek__BackingField_35; }
	inline bool* get_address_of_U3CIsAlgorithmRunningU3Ek__BackingField_35() { return &___U3CIsAlgorithmRunningU3Ek__BackingField_35; }
	inline void set_U3CIsAlgorithmRunningU3Ek__BackingField_35(bool value)
	{
		___U3CIsAlgorithmRunningU3Ek__BackingField_35 = value;
	}
};


// Gameplay.Components.MovementComponent
struct MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Gameplay.Components.MovementComponent::_canMove
	bool ____canMove_5;
	// System.Single Gameplay.Components.MovementComponent::_moveSpeed
	float ____moveSpeed_6;
	// System.Single Gameplay.Components.MovementComponent::_rotateDegreeSpeed
	float ____rotateDegreeSpeed_7;
	// System.Single Gameplay.Components.MovementComponent::_dragInAir
	float ____dragInAir_8;
	// UnityEngine.CapsuleCollider Gameplay.Components.MovementComponent::<MeshCollider>k__BackingField
	CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * ___U3CMeshColliderU3Ek__BackingField_9;
	// UnityEngine.Rigidbody Gameplay.Components.MovementComponent::<Rigidbody>k__BackingField
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___U3CRigidbodyU3Ek__BackingField_10;
	// UnityEngine.AI.NavMeshAgent Gameplay.Components.MovementComponent::<Agent>k__BackingField
	NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * ___U3CAgentU3Ek__BackingField_11;
	// Gameplay.Components.RadarComponent Gameplay.Components.MovementComponent::_radar
	RadarComponent_t8F7233E55A9418045B14DD533DFC48686F6B3158 * ____radar_12;
	// System.Boolean Gameplay.Components.MovementComponent::_isGrounded
	bool ____isGrounded_13;

public:
	inline static int32_t get_offset_of__canMove_5() { return static_cast<int32_t>(offsetof(MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20, ____canMove_5)); }
	inline bool get__canMove_5() const { return ____canMove_5; }
	inline bool* get_address_of__canMove_5() { return &____canMove_5; }
	inline void set__canMove_5(bool value)
	{
		____canMove_5 = value;
	}

	inline static int32_t get_offset_of__moveSpeed_6() { return static_cast<int32_t>(offsetof(MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20, ____moveSpeed_6)); }
	inline float get__moveSpeed_6() const { return ____moveSpeed_6; }
	inline float* get_address_of__moveSpeed_6() { return &____moveSpeed_6; }
	inline void set__moveSpeed_6(float value)
	{
		____moveSpeed_6 = value;
	}

	inline static int32_t get_offset_of__rotateDegreeSpeed_7() { return static_cast<int32_t>(offsetof(MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20, ____rotateDegreeSpeed_7)); }
	inline float get__rotateDegreeSpeed_7() const { return ____rotateDegreeSpeed_7; }
	inline float* get_address_of__rotateDegreeSpeed_7() { return &____rotateDegreeSpeed_7; }
	inline void set__rotateDegreeSpeed_7(float value)
	{
		____rotateDegreeSpeed_7 = value;
	}

	inline static int32_t get_offset_of__dragInAir_8() { return static_cast<int32_t>(offsetof(MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20, ____dragInAir_8)); }
	inline float get__dragInAir_8() const { return ____dragInAir_8; }
	inline float* get_address_of__dragInAir_8() { return &____dragInAir_8; }
	inline void set__dragInAir_8(float value)
	{
		____dragInAir_8 = value;
	}

	inline static int32_t get_offset_of_U3CMeshColliderU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20, ___U3CMeshColliderU3Ek__BackingField_9)); }
	inline CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * get_U3CMeshColliderU3Ek__BackingField_9() const { return ___U3CMeshColliderU3Ek__BackingField_9; }
	inline CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 ** get_address_of_U3CMeshColliderU3Ek__BackingField_9() { return &___U3CMeshColliderU3Ek__BackingField_9; }
	inline void set_U3CMeshColliderU3Ek__BackingField_9(CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * value)
	{
		___U3CMeshColliderU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMeshColliderU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRigidbodyU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20, ___U3CRigidbodyU3Ek__BackingField_10)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_U3CRigidbodyU3Ek__BackingField_10() const { return ___U3CRigidbodyU3Ek__BackingField_10; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_U3CRigidbodyU3Ek__BackingField_10() { return &___U3CRigidbodyU3Ek__BackingField_10; }
	inline void set_U3CRigidbodyU3Ek__BackingField_10(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___U3CRigidbodyU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRigidbodyU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAgentU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20, ___U3CAgentU3Ek__BackingField_11)); }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * get_U3CAgentU3Ek__BackingField_11() const { return ___U3CAgentU3Ek__BackingField_11; }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B ** get_address_of_U3CAgentU3Ek__BackingField_11() { return &___U3CAgentU3Ek__BackingField_11; }
	inline void set_U3CAgentU3Ek__BackingField_11(NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * value)
	{
		___U3CAgentU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAgentU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of__radar_12() { return static_cast<int32_t>(offsetof(MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20, ____radar_12)); }
	inline RadarComponent_t8F7233E55A9418045B14DD533DFC48686F6B3158 * get__radar_12() const { return ____radar_12; }
	inline RadarComponent_t8F7233E55A9418045B14DD533DFC48686F6B3158 ** get_address_of__radar_12() { return &____radar_12; }
	inline void set__radar_12(RadarComponent_t8F7233E55A9418045B14DD533DFC48686F6B3158 * value)
	{
		____radar_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____radar_12), (void*)value);
	}

	inline static int32_t get_offset_of__isGrounded_13() { return static_cast<int32_t>(offsetof(MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20, ____isGrounded_13)); }
	inline bool get__isGrounded_13() const { return ____isGrounded_13; }
	inline bool* get_address_of__isGrounded_13() { return &____isGrounded_13; }
	inline void set__isGrounded_13(bool value)
	{
		____isGrounded_13 = value;
	}
};

struct MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20_StaticFields
{
public:
	// Gameplay.Components.MovementComponent/DLandedComplete Gameplay.Components.MovementComponent::OnLandingComplete
	DLandedComplete_tF35A9505355FD60AC2CD2CD58C8B302D5C1C2FE8 * ___OnLandingComplete_4;

public:
	inline static int32_t get_offset_of_OnLandingComplete_4() { return static_cast<int32_t>(offsetof(MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20_StaticFields, ___OnLandingComplete_4)); }
	inline DLandedComplete_tF35A9505355FD60AC2CD2CD58C8B302D5C1C2FE8 * get_OnLandingComplete_4() const { return ___OnLandingComplete_4; }
	inline DLandedComplete_tF35A9505355FD60AC2CD2CD58C8B302D5C1C2FE8 ** get_address_of_OnLandingComplete_4() { return &___OnLandingComplete_4; }
	inline void set_OnLandingComplete_4(DLandedComplete_tF35A9505355FD60AC2CD2CD58C8B302D5C1C2FE8 * value)
	{
		___OnLandingComplete_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLandingComplete_4), (void*)value);
	}
};


// UnityEngine.AI.NavMeshSurface
struct NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 UnityEngine.AI.NavMeshSurface::m_AgentTypeID
	int32_t ___m_AgentTypeID_4;
	// UnityEngine.AI.CollectObjects UnityEngine.AI.NavMeshSurface::m_CollectObjects
	int32_t ___m_CollectObjects_5;
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshSurface::m_Size
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Size_6;
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshSurface::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_7;
	// UnityEngine.LayerMask UnityEngine.AI.NavMeshSurface::m_LayerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_LayerMask_8;
	// UnityEngine.AI.NavMeshCollectGeometry UnityEngine.AI.NavMeshSurface::m_UseGeometry
	int32_t ___m_UseGeometry_9;
	// System.Int32 UnityEngine.AI.NavMeshSurface::m_DefaultArea
	int32_t ___m_DefaultArea_10;
	// System.Boolean UnityEngine.AI.NavMeshSurface::m_IgnoreNavMeshAgent
	bool ___m_IgnoreNavMeshAgent_11;
	// System.Boolean UnityEngine.AI.NavMeshSurface::m_IgnoreNavMeshObstacle
	bool ___m_IgnoreNavMeshObstacle_12;
	// System.Boolean UnityEngine.AI.NavMeshSurface::m_OverrideTileSize
	bool ___m_OverrideTileSize_13;
	// System.Int32 UnityEngine.AI.NavMeshSurface::m_TileSize
	int32_t ___m_TileSize_14;
	// System.Boolean UnityEngine.AI.NavMeshSurface::m_OverrideVoxelSize
	bool ___m_OverrideVoxelSize_15;
	// System.Single UnityEngine.AI.NavMeshSurface::m_VoxelSize
	float ___m_VoxelSize_16;
	// System.Boolean UnityEngine.AI.NavMeshSurface::m_BuildHeightMesh
	bool ___m_BuildHeightMesh_17;
	// UnityEngine.AI.NavMeshData UnityEngine.AI.NavMeshSurface::m_NavMeshData
	NavMeshData_t4A718E7F2CF47C3E1190DCAADCA989CBA91BDDF6 * ___m_NavMeshData_18;
	// UnityEngine.AI.NavMeshDataInstance UnityEngine.AI.NavMeshSurface::m_NavMeshDataInstance
	NavMeshDataInstance_t52251080FADE7D8432D8DF780817EDFBF8F16E78  ___m_NavMeshDataInstance_19;
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshSurface::m_LastPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_LastPosition_20;
	// UnityEngine.Quaternion UnityEngine.AI.NavMeshSurface::m_LastRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_LastRotation_21;

public:
	inline static int32_t get_offset_of_m_AgentTypeID_4() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_AgentTypeID_4)); }
	inline int32_t get_m_AgentTypeID_4() const { return ___m_AgentTypeID_4; }
	inline int32_t* get_address_of_m_AgentTypeID_4() { return &___m_AgentTypeID_4; }
	inline void set_m_AgentTypeID_4(int32_t value)
	{
		___m_AgentTypeID_4 = value;
	}

	inline static int32_t get_offset_of_m_CollectObjects_5() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_CollectObjects_5)); }
	inline int32_t get_m_CollectObjects_5() const { return ___m_CollectObjects_5; }
	inline int32_t* get_address_of_m_CollectObjects_5() { return &___m_CollectObjects_5; }
	inline void set_m_CollectObjects_5(int32_t value)
	{
		___m_CollectObjects_5 = value;
	}

	inline static int32_t get_offset_of_m_Size_6() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_Size_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Size_6() const { return ___m_Size_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Size_6() { return &___m_Size_6; }
	inline void set_m_Size_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Size_6 = value;
	}

	inline static int32_t get_offset_of_m_Center_7() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_Center_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_7() const { return ___m_Center_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_7() { return &___m_Center_7; }
	inline void set_m_Center_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_7 = value;
	}

	inline static int32_t get_offset_of_m_LayerMask_8() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_LayerMask_8)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_LayerMask_8() const { return ___m_LayerMask_8; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_LayerMask_8() { return &___m_LayerMask_8; }
	inline void set_m_LayerMask_8(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_LayerMask_8 = value;
	}

	inline static int32_t get_offset_of_m_UseGeometry_9() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_UseGeometry_9)); }
	inline int32_t get_m_UseGeometry_9() const { return ___m_UseGeometry_9; }
	inline int32_t* get_address_of_m_UseGeometry_9() { return &___m_UseGeometry_9; }
	inline void set_m_UseGeometry_9(int32_t value)
	{
		___m_UseGeometry_9 = value;
	}

	inline static int32_t get_offset_of_m_DefaultArea_10() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_DefaultArea_10)); }
	inline int32_t get_m_DefaultArea_10() const { return ___m_DefaultArea_10; }
	inline int32_t* get_address_of_m_DefaultArea_10() { return &___m_DefaultArea_10; }
	inline void set_m_DefaultArea_10(int32_t value)
	{
		___m_DefaultArea_10 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreNavMeshAgent_11() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_IgnoreNavMeshAgent_11)); }
	inline bool get_m_IgnoreNavMeshAgent_11() const { return ___m_IgnoreNavMeshAgent_11; }
	inline bool* get_address_of_m_IgnoreNavMeshAgent_11() { return &___m_IgnoreNavMeshAgent_11; }
	inline void set_m_IgnoreNavMeshAgent_11(bool value)
	{
		___m_IgnoreNavMeshAgent_11 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreNavMeshObstacle_12() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_IgnoreNavMeshObstacle_12)); }
	inline bool get_m_IgnoreNavMeshObstacle_12() const { return ___m_IgnoreNavMeshObstacle_12; }
	inline bool* get_address_of_m_IgnoreNavMeshObstacle_12() { return &___m_IgnoreNavMeshObstacle_12; }
	inline void set_m_IgnoreNavMeshObstacle_12(bool value)
	{
		___m_IgnoreNavMeshObstacle_12 = value;
	}

	inline static int32_t get_offset_of_m_OverrideTileSize_13() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_OverrideTileSize_13)); }
	inline bool get_m_OverrideTileSize_13() const { return ___m_OverrideTileSize_13; }
	inline bool* get_address_of_m_OverrideTileSize_13() { return &___m_OverrideTileSize_13; }
	inline void set_m_OverrideTileSize_13(bool value)
	{
		___m_OverrideTileSize_13 = value;
	}

	inline static int32_t get_offset_of_m_TileSize_14() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_TileSize_14)); }
	inline int32_t get_m_TileSize_14() const { return ___m_TileSize_14; }
	inline int32_t* get_address_of_m_TileSize_14() { return &___m_TileSize_14; }
	inline void set_m_TileSize_14(int32_t value)
	{
		___m_TileSize_14 = value;
	}

	inline static int32_t get_offset_of_m_OverrideVoxelSize_15() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_OverrideVoxelSize_15)); }
	inline bool get_m_OverrideVoxelSize_15() const { return ___m_OverrideVoxelSize_15; }
	inline bool* get_address_of_m_OverrideVoxelSize_15() { return &___m_OverrideVoxelSize_15; }
	inline void set_m_OverrideVoxelSize_15(bool value)
	{
		___m_OverrideVoxelSize_15 = value;
	}

	inline static int32_t get_offset_of_m_VoxelSize_16() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_VoxelSize_16)); }
	inline float get_m_VoxelSize_16() const { return ___m_VoxelSize_16; }
	inline float* get_address_of_m_VoxelSize_16() { return &___m_VoxelSize_16; }
	inline void set_m_VoxelSize_16(float value)
	{
		___m_VoxelSize_16 = value;
	}

	inline static int32_t get_offset_of_m_BuildHeightMesh_17() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_BuildHeightMesh_17)); }
	inline bool get_m_BuildHeightMesh_17() const { return ___m_BuildHeightMesh_17; }
	inline bool* get_address_of_m_BuildHeightMesh_17() { return &___m_BuildHeightMesh_17; }
	inline void set_m_BuildHeightMesh_17(bool value)
	{
		___m_BuildHeightMesh_17 = value;
	}

	inline static int32_t get_offset_of_m_NavMeshData_18() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_NavMeshData_18)); }
	inline NavMeshData_t4A718E7F2CF47C3E1190DCAADCA989CBA91BDDF6 * get_m_NavMeshData_18() const { return ___m_NavMeshData_18; }
	inline NavMeshData_t4A718E7F2CF47C3E1190DCAADCA989CBA91BDDF6 ** get_address_of_m_NavMeshData_18() { return &___m_NavMeshData_18; }
	inline void set_m_NavMeshData_18(NavMeshData_t4A718E7F2CF47C3E1190DCAADCA989CBA91BDDF6 * value)
	{
		___m_NavMeshData_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NavMeshData_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_NavMeshDataInstance_19() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_NavMeshDataInstance_19)); }
	inline NavMeshDataInstance_t52251080FADE7D8432D8DF780817EDFBF8F16E78  get_m_NavMeshDataInstance_19() const { return ___m_NavMeshDataInstance_19; }
	inline NavMeshDataInstance_t52251080FADE7D8432D8DF780817EDFBF8F16E78 * get_address_of_m_NavMeshDataInstance_19() { return &___m_NavMeshDataInstance_19; }
	inline void set_m_NavMeshDataInstance_19(NavMeshDataInstance_t52251080FADE7D8432D8DF780817EDFBF8F16E78  value)
	{
		___m_NavMeshDataInstance_19 = value;
	}

	inline static int32_t get_offset_of_m_LastPosition_20() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_LastPosition_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_LastPosition_20() const { return ___m_LastPosition_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_LastPosition_20() { return &___m_LastPosition_20; }
	inline void set_m_LastPosition_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_LastPosition_20 = value;
	}

	inline static int32_t get_offset_of_m_LastRotation_21() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_LastRotation_21)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_LastRotation_21() const { return ___m_LastRotation_21; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_LastRotation_21() { return &___m_LastRotation_21; }
	inline void set_m_LastRotation_21(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_LastRotation_21 = value;
	}
};

struct NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.AI.NavMeshSurface> UnityEngine.AI.NavMeshSurface::s_NavMeshSurfaces
	List_1_t46EE4F62A085C0E594ADF6EDB0141972F6A03499 * ___s_NavMeshSurfaces_22;

public:
	inline static int32_t get_offset_of_s_NavMeshSurfaces_22() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A_StaticFields, ___s_NavMeshSurfaces_22)); }
	inline List_1_t46EE4F62A085C0E594ADF6EDB0141972F6A03499 * get_s_NavMeshSurfaces_22() const { return ___s_NavMeshSurfaces_22; }
	inline List_1_t46EE4F62A085C0E594ADF6EDB0141972F6A03499 ** get_address_of_s_NavMeshSurfaces_22() { return &___s_NavMeshSurfaces_22; }
	inline void set_s_NavMeshSurfaces_22(List_1_t46EE4F62A085C0E594ADF6EDB0141972F6A03499 * value)
	{
		___s_NavMeshSurfaces_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NavMeshSurfaces_22), (void*)value);
	}
};


// Gameplay.Player
struct Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.LayerMask Gameplay.Player::unitSelectableLayerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___unitSelectableLayerMask_6;
	// UnityEngine.Color Gameplay.Player::unitSelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___unitSelectedColor_7;
	// UnityEngine.Color Gameplay.Player::unitHoverColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___unitHoverColor_8;
	// System.Int32 Gameplay.Player::_hoverUnitId
	int32_t ____hoverUnitId_9;
	// System.Int32 Gameplay.Player::_selectedUnitId
	int32_t ____selectedUnitId_10;
	// UnityEngine.RaycastHit[] Gameplay.Player::_raycastHits
	RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* ____raycastHits_11;
	// System.Int32 Gameplay.Player::_raycastAllCount
	int32_t ____raycastAllCount_12;
	// System.Single Gameplay.Player::_dragSpeed
	float ____dragSpeed_13;
	// UnityEngine.GameObject Gameplay.Player::_crosshairPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____crosshairPrefab_14;
	// Gameplay.Components.SpawnerComponent Gameplay.Player::<Spawner>k__BackingField
	SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * ___U3CSpawnerU3Ek__BackingField_15;
	// Controls.PlayerControls Gameplay.Player::<PlayerControls>k__BackingField
	PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A * ___U3CPlayerControlsU3Ek__BackingField_16;
	// UnityEngine.Vector3 Gameplay.Player::_velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____velocity_17;
	// UnityEngine.WaitForFixedUpdate Gameplay.Player::_waitForFixedUpdate
	WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * ____waitForFixedUpdate_18;
	// Gameplay.UnitType Gameplay.Player::_spawningType
	int32_t ____spawningType_19;
	// UnityEngine.GameObject Gameplay.Player::_crosshairSpawn
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____crosshairSpawn_20;

public:
	inline static int32_t get_offset_of_unitSelectableLayerMask_6() { return static_cast<int32_t>(offsetof(Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014, ___unitSelectableLayerMask_6)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_unitSelectableLayerMask_6() const { return ___unitSelectableLayerMask_6; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_unitSelectableLayerMask_6() { return &___unitSelectableLayerMask_6; }
	inline void set_unitSelectableLayerMask_6(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___unitSelectableLayerMask_6 = value;
	}

	inline static int32_t get_offset_of_unitSelectedColor_7() { return static_cast<int32_t>(offsetof(Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014, ___unitSelectedColor_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_unitSelectedColor_7() const { return ___unitSelectedColor_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_unitSelectedColor_7() { return &___unitSelectedColor_7; }
	inline void set_unitSelectedColor_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___unitSelectedColor_7 = value;
	}

	inline static int32_t get_offset_of_unitHoverColor_8() { return static_cast<int32_t>(offsetof(Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014, ___unitHoverColor_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_unitHoverColor_8() const { return ___unitHoverColor_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_unitHoverColor_8() { return &___unitHoverColor_8; }
	inline void set_unitHoverColor_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___unitHoverColor_8 = value;
	}

	inline static int32_t get_offset_of__hoverUnitId_9() { return static_cast<int32_t>(offsetof(Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014, ____hoverUnitId_9)); }
	inline int32_t get__hoverUnitId_9() const { return ____hoverUnitId_9; }
	inline int32_t* get_address_of__hoverUnitId_9() { return &____hoverUnitId_9; }
	inline void set__hoverUnitId_9(int32_t value)
	{
		____hoverUnitId_9 = value;
	}

	inline static int32_t get_offset_of__selectedUnitId_10() { return static_cast<int32_t>(offsetof(Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014, ____selectedUnitId_10)); }
	inline int32_t get__selectedUnitId_10() const { return ____selectedUnitId_10; }
	inline int32_t* get_address_of__selectedUnitId_10() { return &____selectedUnitId_10; }
	inline void set__selectedUnitId_10(int32_t value)
	{
		____selectedUnitId_10 = value;
	}

	inline static int32_t get_offset_of__raycastHits_11() { return static_cast<int32_t>(offsetof(Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014, ____raycastHits_11)); }
	inline RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* get__raycastHits_11() const { return ____raycastHits_11; }
	inline RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09** get_address_of__raycastHits_11() { return &____raycastHits_11; }
	inline void set__raycastHits_11(RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* value)
	{
		____raycastHits_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____raycastHits_11), (void*)value);
	}

	inline static int32_t get_offset_of__raycastAllCount_12() { return static_cast<int32_t>(offsetof(Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014, ____raycastAllCount_12)); }
	inline int32_t get__raycastAllCount_12() const { return ____raycastAllCount_12; }
	inline int32_t* get_address_of__raycastAllCount_12() { return &____raycastAllCount_12; }
	inline void set__raycastAllCount_12(int32_t value)
	{
		____raycastAllCount_12 = value;
	}

	inline static int32_t get_offset_of__dragSpeed_13() { return static_cast<int32_t>(offsetof(Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014, ____dragSpeed_13)); }
	inline float get__dragSpeed_13() const { return ____dragSpeed_13; }
	inline float* get_address_of__dragSpeed_13() { return &____dragSpeed_13; }
	inline void set__dragSpeed_13(float value)
	{
		____dragSpeed_13 = value;
	}

	inline static int32_t get_offset_of__crosshairPrefab_14() { return static_cast<int32_t>(offsetof(Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014, ____crosshairPrefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__crosshairPrefab_14() const { return ____crosshairPrefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__crosshairPrefab_14() { return &____crosshairPrefab_14; }
	inline void set__crosshairPrefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____crosshairPrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____crosshairPrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSpawnerU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014, ___U3CSpawnerU3Ek__BackingField_15)); }
	inline SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * get_U3CSpawnerU3Ek__BackingField_15() const { return ___U3CSpawnerU3Ek__BackingField_15; }
	inline SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD ** get_address_of_U3CSpawnerU3Ek__BackingField_15() { return &___U3CSpawnerU3Ek__BackingField_15; }
	inline void set_U3CSpawnerU3Ek__BackingField_15(SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * value)
	{
		___U3CSpawnerU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpawnerU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayerControlsU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014, ___U3CPlayerControlsU3Ek__BackingField_16)); }
	inline PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A * get_U3CPlayerControlsU3Ek__BackingField_16() const { return ___U3CPlayerControlsU3Ek__BackingField_16; }
	inline PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A ** get_address_of_U3CPlayerControlsU3Ek__BackingField_16() { return &___U3CPlayerControlsU3Ek__BackingField_16; }
	inline void set_U3CPlayerControlsU3Ek__BackingField_16(PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A * value)
	{
		___U3CPlayerControlsU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPlayerControlsU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of__velocity_17() { return static_cast<int32_t>(offsetof(Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014, ____velocity_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__velocity_17() const { return ____velocity_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__velocity_17() { return &____velocity_17; }
	inline void set__velocity_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____velocity_17 = value;
	}

	inline static int32_t get_offset_of__waitForFixedUpdate_18() { return static_cast<int32_t>(offsetof(Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014, ____waitForFixedUpdate_18)); }
	inline WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * get__waitForFixedUpdate_18() const { return ____waitForFixedUpdate_18; }
	inline WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 ** get_address_of__waitForFixedUpdate_18() { return &____waitForFixedUpdate_18; }
	inline void set__waitForFixedUpdate_18(WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * value)
	{
		____waitForFixedUpdate_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____waitForFixedUpdate_18), (void*)value);
	}

	inline static int32_t get_offset_of__spawningType_19() { return static_cast<int32_t>(offsetof(Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014, ____spawningType_19)); }
	inline int32_t get__spawningType_19() const { return ____spawningType_19; }
	inline int32_t* get_address_of__spawningType_19() { return &____spawningType_19; }
	inline void set__spawningType_19(int32_t value)
	{
		____spawningType_19 = value;
	}

	inline static int32_t get_offset_of__crosshairSpawn_20() { return static_cast<int32_t>(offsetof(Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014, ____crosshairSpawn_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__crosshairSpawn_20() const { return ____crosshairSpawn_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__crosshairSpawn_20() { return &____crosshairSpawn_20; }
	inline void set__crosshairSpawn_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____crosshairSpawn_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____crosshairSpawn_20), (void*)value);
	}
};

struct Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014_StaticFields
{
public:
	// Gameplay.Player/DUnitSelected Gameplay.Player::OnSelectUnit
	DUnitSelected_t95F61357E6EB3EA355F745D67D35705638B9E0DC * ___OnSelectUnit_4;
	// Gameplay.Player/DUnitHover Gameplay.Player::OnHoverUnit
	DUnitHover_tE4632E3CA979D212145A6551FA0D6072C68A2873 * ___OnHoverUnit_5;

public:
	inline static int32_t get_offset_of_OnSelectUnit_4() { return static_cast<int32_t>(offsetof(Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014_StaticFields, ___OnSelectUnit_4)); }
	inline DUnitSelected_t95F61357E6EB3EA355F745D67D35705638B9E0DC * get_OnSelectUnit_4() const { return ___OnSelectUnit_4; }
	inline DUnitSelected_t95F61357E6EB3EA355F745D67D35705638B9E0DC ** get_address_of_OnSelectUnit_4() { return &___OnSelectUnit_4; }
	inline void set_OnSelectUnit_4(DUnitSelected_t95F61357E6EB3EA355F745D67D35705638B9E0DC * value)
	{
		___OnSelectUnit_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSelectUnit_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnHoverUnit_5() { return static_cast<int32_t>(offsetof(Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014_StaticFields, ___OnHoverUnit_5)); }
	inline DUnitHover_tE4632E3CA979D212145A6551FA0D6072C68A2873 * get_OnHoverUnit_5() const { return ___OnHoverUnit_5; }
	inline DUnitHover_tE4632E3CA979D212145A6551FA0D6072C68A2873 ** get_address_of_OnHoverUnit_5() { return &___OnHoverUnit_5; }
	inline void set_OnHoverUnit_5(DUnitHover_tE4632E3CA979D212145A6551FA0D6072C68A2873 * value)
	{
		___OnHoverUnit_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHoverUnit_5), (void*)value);
	}
};


// UI.PlayerUI
struct PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TMPro.TMP_Text UI.PlayerUI::<PlayerMoneyText>k__BackingField
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___U3CPlayerMoneyTextU3Ek__BackingField_4;
	// UnityEngine.UI.ScrollRect UI.PlayerUI::<UnitSelectionScrollView>k__BackingField
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * ___U3CUnitSelectionScrollViewU3Ek__BackingField_5;
	// UnityEngine.UI.Image UI.PlayerUI::<UnitInformationProfilePicture>k__BackingField
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___U3CUnitInformationProfilePictureU3Ek__BackingField_6;
	// UnityEngine.UI.Scrollbar UI.PlayerUI::<UnitInformationHealthBar>k__BackingField
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___U3CUnitInformationHealthBarU3Ek__BackingField_7;
	// UnityEngine.UI.Dropdown UI.PlayerUI::<UnitInformationRadarSearchType>k__BackingField
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___U3CUnitInformationRadarSearchTypeU3Ek__BackingField_8;
	// System.Single UI.PlayerUI::healthBarLerpSpeed
	float ___healthBarLerpSpeed_9;
	// System.Collections.Generic.List`1<UI.UnitTypeSelector> UI.PlayerUI::unitTypeSelectors
	List_1_tAE0E97B7D7F60185ED34A90D91810DFC7FDBA586 * ___unitTypeSelectors_10;

public:
	inline static int32_t get_offset_of_U3CPlayerMoneyTextU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC, ___U3CPlayerMoneyTextU3Ek__BackingField_4)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_U3CPlayerMoneyTextU3Ek__BackingField_4() const { return ___U3CPlayerMoneyTextU3Ek__BackingField_4; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_U3CPlayerMoneyTextU3Ek__BackingField_4() { return &___U3CPlayerMoneyTextU3Ek__BackingField_4; }
	inline void set_U3CPlayerMoneyTextU3Ek__BackingField_4(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___U3CPlayerMoneyTextU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPlayerMoneyTextU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUnitSelectionScrollViewU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC, ___U3CUnitSelectionScrollViewU3Ek__BackingField_5)); }
	inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * get_U3CUnitSelectionScrollViewU3Ek__BackingField_5() const { return ___U3CUnitSelectionScrollViewU3Ek__BackingField_5; }
	inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA ** get_address_of_U3CUnitSelectionScrollViewU3Ek__BackingField_5() { return &___U3CUnitSelectionScrollViewU3Ek__BackingField_5; }
	inline void set_U3CUnitSelectionScrollViewU3Ek__BackingField_5(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * value)
	{
		___U3CUnitSelectionScrollViewU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnitSelectionScrollViewU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUnitInformationProfilePictureU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC, ___U3CUnitInformationProfilePictureU3Ek__BackingField_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_U3CUnitInformationProfilePictureU3Ek__BackingField_6() const { return ___U3CUnitInformationProfilePictureU3Ek__BackingField_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_U3CUnitInformationProfilePictureU3Ek__BackingField_6() { return &___U3CUnitInformationProfilePictureU3Ek__BackingField_6; }
	inline void set_U3CUnitInformationProfilePictureU3Ek__BackingField_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___U3CUnitInformationProfilePictureU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnitInformationProfilePictureU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUnitInformationHealthBarU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC, ___U3CUnitInformationHealthBarU3Ek__BackingField_7)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_U3CUnitInformationHealthBarU3Ek__BackingField_7() const { return ___U3CUnitInformationHealthBarU3Ek__BackingField_7; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_U3CUnitInformationHealthBarU3Ek__BackingField_7() { return &___U3CUnitInformationHealthBarU3Ek__BackingField_7; }
	inline void set_U3CUnitInformationHealthBarU3Ek__BackingField_7(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___U3CUnitInformationHealthBarU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnitInformationHealthBarU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUnitInformationRadarSearchTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC, ___U3CUnitInformationRadarSearchTypeU3Ek__BackingField_8)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_U3CUnitInformationRadarSearchTypeU3Ek__BackingField_8() const { return ___U3CUnitInformationRadarSearchTypeU3Ek__BackingField_8; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_U3CUnitInformationRadarSearchTypeU3Ek__BackingField_8() { return &___U3CUnitInformationRadarSearchTypeU3Ek__BackingField_8; }
	inline void set_U3CUnitInformationRadarSearchTypeU3Ek__BackingField_8(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___U3CUnitInformationRadarSearchTypeU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnitInformationRadarSearchTypeU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_healthBarLerpSpeed_9() { return static_cast<int32_t>(offsetof(PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC, ___healthBarLerpSpeed_9)); }
	inline float get_healthBarLerpSpeed_9() const { return ___healthBarLerpSpeed_9; }
	inline float* get_address_of_healthBarLerpSpeed_9() { return &___healthBarLerpSpeed_9; }
	inline void set_healthBarLerpSpeed_9(float value)
	{
		___healthBarLerpSpeed_9 = value;
	}

	inline static int32_t get_offset_of_unitTypeSelectors_10() { return static_cast<int32_t>(offsetof(PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC, ___unitTypeSelectors_10)); }
	inline List_1_tAE0E97B7D7F60185ED34A90D91810DFC7FDBA586 * get_unitTypeSelectors_10() const { return ___unitTypeSelectors_10; }
	inline List_1_tAE0E97B7D7F60185ED34A90D91810DFC7FDBA586 ** get_address_of_unitTypeSelectors_10() { return &___unitTypeSelectors_10; }
	inline void set_unitTypeSelectors_10(List_1_tAE0E97B7D7F60185ED34A90D91810DFC7FDBA586 * value)
	{
		___unitTypeSelectors_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitTypeSelectors_10), (void*)value);
	}
};


// Gameplay.Components.SpawnerComponent
struct SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Gameplay.Components.SpawnerComponent::<LaunchTransform>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CLaunchTransformU3Ek__BackingField_5;
	// System.Single Gameplay.Components.SpawnerComponent::<Height>k__BackingField
	float ___U3CHeightU3Ek__BackingField_6;
	// System.Single Gameplay.Components.SpawnerComponent::_gravity
	float ____gravity_7;
	// System.Collections.Generic.List`1<Gameplay.Unit> Gameplay.Components.SpawnerComponent::<SpawnedUnits>k__BackingField
	List_1_t41CBE32D41509BEA9E592CD06974AA64518FB4FE * ___U3CSpawnedUnitsU3Ek__BackingField_8;
	// Gameplay.Components.MoneyComponent Gameplay.Components.SpawnerComponent::<Money>k__BackingField
	MoneyComponent_t228EEF2620FCABEA0792C76C2698AFA39588683B * ___U3CMoneyU3Ek__BackingField_9;
	// System.Collections.Generic.Queue`1<Gameplay.Unit> Gameplay.Components.SpawnerComponent::_launchedQueue
	Queue_1_t23C06D28DB019E8543EF1CACB2BA62B07527222C * ____launchedQueue_10;
	// Gameplay.Components.SpawnerComponent/LaunchData Gameplay.Components.SpawnerComponent::_latestLaunchData
	LaunchData_tAE068343C79E1B868764B659F0CCFC16C44D2686  ____latestLaunchData_11;
	// System.Int32 Gameplay.Components.SpawnerComponent::spawnCount
	int32_t ___spawnCount_12;

public:
	inline static int32_t get_offset_of_U3CLaunchTransformU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD, ___U3CLaunchTransformU3Ek__BackingField_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CLaunchTransformU3Ek__BackingField_5() const { return ___U3CLaunchTransformU3Ek__BackingField_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CLaunchTransformU3Ek__BackingField_5() { return &___U3CLaunchTransformU3Ek__BackingField_5; }
	inline void set_U3CLaunchTransformU3Ek__BackingField_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CLaunchTransformU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLaunchTransformU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD, ___U3CHeightU3Ek__BackingField_6)); }
	inline float get_U3CHeightU3Ek__BackingField_6() const { return ___U3CHeightU3Ek__BackingField_6; }
	inline float* get_address_of_U3CHeightU3Ek__BackingField_6() { return &___U3CHeightU3Ek__BackingField_6; }
	inline void set_U3CHeightU3Ek__BackingField_6(float value)
	{
		___U3CHeightU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of__gravity_7() { return static_cast<int32_t>(offsetof(SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD, ____gravity_7)); }
	inline float get__gravity_7() const { return ____gravity_7; }
	inline float* get_address_of__gravity_7() { return &____gravity_7; }
	inline void set__gravity_7(float value)
	{
		____gravity_7 = value;
	}

	inline static int32_t get_offset_of_U3CSpawnedUnitsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD, ___U3CSpawnedUnitsU3Ek__BackingField_8)); }
	inline List_1_t41CBE32D41509BEA9E592CD06974AA64518FB4FE * get_U3CSpawnedUnitsU3Ek__BackingField_8() const { return ___U3CSpawnedUnitsU3Ek__BackingField_8; }
	inline List_1_t41CBE32D41509BEA9E592CD06974AA64518FB4FE ** get_address_of_U3CSpawnedUnitsU3Ek__BackingField_8() { return &___U3CSpawnedUnitsU3Ek__BackingField_8; }
	inline void set_U3CSpawnedUnitsU3Ek__BackingField_8(List_1_t41CBE32D41509BEA9E592CD06974AA64518FB4FE * value)
	{
		___U3CSpawnedUnitsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpawnedUnitsU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMoneyU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD, ___U3CMoneyU3Ek__BackingField_9)); }
	inline MoneyComponent_t228EEF2620FCABEA0792C76C2698AFA39588683B * get_U3CMoneyU3Ek__BackingField_9() const { return ___U3CMoneyU3Ek__BackingField_9; }
	inline MoneyComponent_t228EEF2620FCABEA0792C76C2698AFA39588683B ** get_address_of_U3CMoneyU3Ek__BackingField_9() { return &___U3CMoneyU3Ek__BackingField_9; }
	inline void set_U3CMoneyU3Ek__BackingField_9(MoneyComponent_t228EEF2620FCABEA0792C76C2698AFA39588683B * value)
	{
		___U3CMoneyU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMoneyU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of__launchedQueue_10() { return static_cast<int32_t>(offsetof(SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD, ____launchedQueue_10)); }
	inline Queue_1_t23C06D28DB019E8543EF1CACB2BA62B07527222C * get__launchedQueue_10() const { return ____launchedQueue_10; }
	inline Queue_1_t23C06D28DB019E8543EF1CACB2BA62B07527222C ** get_address_of__launchedQueue_10() { return &____launchedQueue_10; }
	inline void set__launchedQueue_10(Queue_1_t23C06D28DB019E8543EF1CACB2BA62B07527222C * value)
	{
		____launchedQueue_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____launchedQueue_10), (void*)value);
	}

	inline static int32_t get_offset_of__latestLaunchData_11() { return static_cast<int32_t>(offsetof(SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD, ____latestLaunchData_11)); }
	inline LaunchData_tAE068343C79E1B868764B659F0CCFC16C44D2686  get__latestLaunchData_11() const { return ____latestLaunchData_11; }
	inline LaunchData_tAE068343C79E1B868764B659F0CCFC16C44D2686 * get_address_of__latestLaunchData_11() { return &____latestLaunchData_11; }
	inline void set__latestLaunchData_11(LaunchData_tAE068343C79E1B868764B659F0CCFC16C44D2686  value)
	{
		____latestLaunchData_11 = value;
	}

	inline static int32_t get_offset_of_spawnCount_12() { return static_cast<int32_t>(offsetof(SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD, ___spawnCount_12)); }
	inline int32_t get_spawnCount_12() const { return ___spawnCount_12; }
	inline int32_t* get_address_of_spawnCount_12() { return &___spawnCount_12; }
	inline void set_spawnCount_12(int32_t value)
	{
		___spawnCount_12 = value;
	}
};

struct SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD_StaticFields
{
public:
	// Gameplay.Components.SpawnerComponent/DRegisterSpawner Gameplay.Components.SpawnerComponent::OnRegisterSpawner
	DRegisterSpawner_t16093AA77CA07FF10F53ED12A10BF829DB733343 * ___OnRegisterSpawner_4;

public:
	inline static int32_t get_offset_of_OnRegisterSpawner_4() { return static_cast<int32_t>(offsetof(SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD_StaticFields, ___OnRegisterSpawner_4)); }
	inline DRegisterSpawner_t16093AA77CA07FF10F53ED12A10BF829DB733343 * get_OnRegisterSpawner_4() const { return ___OnRegisterSpawner_4; }
	inline DRegisterSpawner_t16093AA77CA07FF10F53ED12A10BF829DB733343 ** get_address_of_OnRegisterSpawner_4() { return &___OnRegisterSpawner_4; }
	inline void set_OnRegisterSpawner_4(DRegisterSpawner_t16093AA77CA07FF10F53ED12A10BF829DB733343 * value)
	{
		___OnRegisterSpawner_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRegisterSpawner_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UIController
struct UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Slider UIController::slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider_5;
	// TMPro.TextMeshProUGUI UIController::loadingText
	TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * ___loadingText_6;
	// UnityEngine.GameObject UIController::loadingPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___loadingPanel_7;
	// UnityEngine.GameObject UIController::pausePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pausePanel_8;
	// TMPro.TextMeshProUGUI UIController::pauseButtonText
	TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * ___pauseButtonText_9;

public:
	inline static int32_t get_offset_of_slider_5() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___slider_5)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_slider_5() const { return ___slider_5; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_slider_5() { return &___slider_5; }
	inline void set_slider_5(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___slider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slider_5), (void*)value);
	}

	inline static int32_t get_offset_of_loadingText_6() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___loadingText_6)); }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * get_loadingText_6() const { return ___loadingText_6; }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 ** get_address_of_loadingText_6() { return &___loadingText_6; }
	inline void set_loadingText_6(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * value)
	{
		___loadingText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadingText_6), (void*)value);
	}

	inline static int32_t get_offset_of_loadingPanel_7() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___loadingPanel_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_loadingPanel_7() const { return ___loadingPanel_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_loadingPanel_7() { return &___loadingPanel_7; }
	inline void set_loadingPanel_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___loadingPanel_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadingPanel_7), (void*)value);
	}

	inline static int32_t get_offset_of_pausePanel_8() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___pausePanel_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pausePanel_8() const { return ___pausePanel_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pausePanel_8() { return &___pausePanel_8; }
	inline void set_pausePanel_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pausePanel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pausePanel_8), (void*)value);
	}

	inline static int32_t get_offset_of_pauseButtonText_9() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___pauseButtonText_9)); }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * get_pauseButtonText_9() const { return ___pauseButtonText_9; }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 ** get_address_of_pauseButtonText_9() { return &___pauseButtonText_9; }
	inline void set_pauseButtonText_9(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * value)
	{
		___pauseButtonText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseButtonText_9), (void*)value);
	}
};

struct UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_StaticFields
{
public:
	// UIController UIController::instance
	UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_StaticFields, ___instance_4)); }
	inline UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * get_instance_4() const { return ___instance_4; }
	inline UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// Gameplay.Unit
struct Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Gameplay.UnitParameters Gameplay.Unit::<Parameters>k__BackingField
	UnitParameters_t43E307D7F896416EB4DF9695B8CB74A9AB80E041 * ___U3CParametersU3Ek__BackingField_6;
	// Outline Gameplay.Unit::<Outline>k__BackingField
	Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * ___U3COutlineU3Ek__BackingField_7;
	// Gameplay.Components.HealthComponent Gameplay.Unit::<Health>k__BackingField
	HealthComponent_t51D2DE6F27167E6E785C8ABE16E758B8145C270C * ___U3CHealthU3Ek__BackingField_8;
	// Gameplay.Components.DamageComponent Gameplay.Unit::<Damage>k__BackingField
	DamageComponent_tFEA533A214C2052990A29DB739F2ADEC2C0FD37E * ___U3CDamageU3Ek__BackingField_9;
	// Gameplay.Components.MovementComponent Gameplay.Unit::<Movement>k__BackingField
	MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20 * ___U3CMovementU3Ek__BackingField_10;
	// Gameplay.Components.RadarComponent Gameplay.Unit::<Radar>k__BackingField
	RadarComponent_t8F7233E55A9418045B14DD533DFC48686F6B3158 * ___U3CRadarU3Ek__BackingField_11;
	// System.Boolean Gameplay.Unit::_isCursorHover
	bool ____isCursorHover_12;
	// System.Boolean Gameplay.Unit::_isCurrentlySelected
	bool ____isCurrentlySelected_13;
	// UnityEngine.Vector3 Gameplay.Unit::_cachedVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____cachedVelocity_14;

public:
	inline static int32_t get_offset_of_U3CParametersU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D, ___U3CParametersU3Ek__BackingField_6)); }
	inline UnitParameters_t43E307D7F896416EB4DF9695B8CB74A9AB80E041 * get_U3CParametersU3Ek__BackingField_6() const { return ___U3CParametersU3Ek__BackingField_6; }
	inline UnitParameters_t43E307D7F896416EB4DF9695B8CB74A9AB80E041 ** get_address_of_U3CParametersU3Ek__BackingField_6() { return &___U3CParametersU3Ek__BackingField_6; }
	inline void set_U3CParametersU3Ek__BackingField_6(UnitParameters_t43E307D7F896416EB4DF9695B8CB74A9AB80E041 * value)
	{
		___U3CParametersU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParametersU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3COutlineU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D, ___U3COutlineU3Ek__BackingField_7)); }
	inline Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * get_U3COutlineU3Ek__BackingField_7() const { return ___U3COutlineU3Ek__BackingField_7; }
	inline Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C ** get_address_of_U3COutlineU3Ek__BackingField_7() { return &___U3COutlineU3Ek__BackingField_7; }
	inline void set_U3COutlineU3Ek__BackingField_7(Outline_tD23C5E288F8180E481B08FF3913D694E2CDF263C * value)
	{
		___U3COutlineU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COutlineU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHealthU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D, ___U3CHealthU3Ek__BackingField_8)); }
	inline HealthComponent_t51D2DE6F27167E6E785C8ABE16E758B8145C270C * get_U3CHealthU3Ek__BackingField_8() const { return ___U3CHealthU3Ek__BackingField_8; }
	inline HealthComponent_t51D2DE6F27167E6E785C8ABE16E758B8145C270C ** get_address_of_U3CHealthU3Ek__BackingField_8() { return &___U3CHealthU3Ek__BackingField_8; }
	inline void set_U3CHealthU3Ek__BackingField_8(HealthComponent_t51D2DE6F27167E6E785C8ABE16E758B8145C270C * value)
	{
		___U3CHealthU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHealthU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDamageU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D, ___U3CDamageU3Ek__BackingField_9)); }
	inline DamageComponent_tFEA533A214C2052990A29DB739F2ADEC2C0FD37E * get_U3CDamageU3Ek__BackingField_9() const { return ___U3CDamageU3Ek__BackingField_9; }
	inline DamageComponent_tFEA533A214C2052990A29DB739F2ADEC2C0FD37E ** get_address_of_U3CDamageU3Ek__BackingField_9() { return &___U3CDamageU3Ek__BackingField_9; }
	inline void set_U3CDamageU3Ek__BackingField_9(DamageComponent_tFEA533A214C2052990A29DB739F2ADEC2C0FD37E * value)
	{
		___U3CDamageU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDamageU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMovementU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D, ___U3CMovementU3Ek__BackingField_10)); }
	inline MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20 * get_U3CMovementU3Ek__BackingField_10() const { return ___U3CMovementU3Ek__BackingField_10; }
	inline MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20 ** get_address_of_U3CMovementU3Ek__BackingField_10() { return &___U3CMovementU3Ek__BackingField_10; }
	inline void set_U3CMovementU3Ek__BackingField_10(MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20 * value)
	{
		___U3CMovementU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMovementU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRadarU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D, ___U3CRadarU3Ek__BackingField_11)); }
	inline RadarComponent_t8F7233E55A9418045B14DD533DFC48686F6B3158 * get_U3CRadarU3Ek__BackingField_11() const { return ___U3CRadarU3Ek__BackingField_11; }
	inline RadarComponent_t8F7233E55A9418045B14DD533DFC48686F6B3158 ** get_address_of_U3CRadarU3Ek__BackingField_11() { return &___U3CRadarU3Ek__BackingField_11; }
	inline void set_U3CRadarU3Ek__BackingField_11(RadarComponent_t8F7233E55A9418045B14DD533DFC48686F6B3158 * value)
	{
		___U3CRadarU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRadarU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of__isCursorHover_12() { return static_cast<int32_t>(offsetof(Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D, ____isCursorHover_12)); }
	inline bool get__isCursorHover_12() const { return ____isCursorHover_12; }
	inline bool* get_address_of__isCursorHover_12() { return &____isCursorHover_12; }
	inline void set__isCursorHover_12(bool value)
	{
		____isCursorHover_12 = value;
	}

	inline static int32_t get_offset_of__isCurrentlySelected_13() { return static_cast<int32_t>(offsetof(Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D, ____isCurrentlySelected_13)); }
	inline bool get__isCurrentlySelected_13() const { return ____isCurrentlySelected_13; }
	inline bool* get_address_of__isCurrentlySelected_13() { return &____isCurrentlySelected_13; }
	inline void set__isCurrentlySelected_13(bool value)
	{
		____isCurrentlySelected_13 = value;
	}

	inline static int32_t get_offset_of__cachedVelocity_14() { return static_cast<int32_t>(offsetof(Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D, ____cachedVelocity_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__cachedVelocity_14() const { return ____cachedVelocity_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__cachedVelocity_14() { return &____cachedVelocity_14; }
	inline void set__cachedVelocity_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____cachedVelocity_14 = value;
	}
};

struct Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D_StaticFields
{
public:
	// Gameplay.Unit/DRegisterUnit Gameplay.Unit::OnRegisterUnit
	DRegisterUnit_t22944849DF6EAF14CAF9EC9225CA3AC3EB10704F * ___OnRegisterUnit_4;
	// Gameplay.Unit/DUnregisterUnit Gameplay.Unit::OnUnregisterUnit
	DUnregisterUnit_tB7A585B9C96839E9EB8A2264FD3CD35CE06CBFCC * ___OnUnregisterUnit_5;

public:
	inline static int32_t get_offset_of_OnRegisterUnit_4() { return static_cast<int32_t>(offsetof(Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D_StaticFields, ___OnRegisterUnit_4)); }
	inline DRegisterUnit_t22944849DF6EAF14CAF9EC9225CA3AC3EB10704F * get_OnRegisterUnit_4() const { return ___OnRegisterUnit_4; }
	inline DRegisterUnit_t22944849DF6EAF14CAF9EC9225CA3AC3EB10704F ** get_address_of_OnRegisterUnit_4() { return &___OnRegisterUnit_4; }
	inline void set_OnRegisterUnit_4(DRegisterUnit_t22944849DF6EAF14CAF9EC9225CA3AC3EB10704F * value)
	{
		___OnRegisterUnit_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRegisterUnit_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnUnregisterUnit_5() { return static_cast<int32_t>(offsetof(Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D_StaticFields, ___OnUnregisterUnit_5)); }
	inline DUnregisterUnit_tB7A585B9C96839E9EB8A2264FD3CD35CE06CBFCC * get_OnUnregisterUnit_5() const { return ___OnUnregisterUnit_5; }
	inline DUnregisterUnit_tB7A585B9C96839E9EB8A2264FD3CD35CE06CBFCC ** get_address_of_OnUnregisterUnit_5() { return &___OnUnregisterUnit_5; }
	inline void set_OnUnregisterUnit_5(DUnregisterUnit_tB7A585B9C96839E9EB8A2264FD3CD35CE06CBFCC * value)
	{
		___OnUnregisterUnit_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUnregisterUnit_5), (void*)value);
	}
};


// UI.UnitTypeSelector
struct UnitTypeSelector_tCE4315BDF2C562074885EE4F2EA7232B69A359C5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UI.UnitTypeSelector/DUnitButtonClicked UI.UnitTypeSelector::OnButtonClicked
	DUnitButtonClicked_tBE8676E1E0DBC2F05FE50B73CD273E49F95EC9FE * ___OnButtonClicked_4;
	// UnityEngine.UI.Button UI.UnitTypeSelector::<PressableButton>k__BackingField
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___U3CPressableButtonU3Ek__BackingField_5;
	// Gameplay.UnitParameters UI.UnitTypeSelector::<Parameters>k__BackingField
	UnitParameters_t43E307D7F896416EB4DF9695B8CB74A9AB80E041 * ___U3CParametersU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_OnButtonClicked_4() { return static_cast<int32_t>(offsetof(UnitTypeSelector_tCE4315BDF2C562074885EE4F2EA7232B69A359C5, ___OnButtonClicked_4)); }
	inline DUnitButtonClicked_tBE8676E1E0DBC2F05FE50B73CD273E49F95EC9FE * get_OnButtonClicked_4() const { return ___OnButtonClicked_4; }
	inline DUnitButtonClicked_tBE8676E1E0DBC2F05FE50B73CD273E49F95EC9FE ** get_address_of_OnButtonClicked_4() { return &___OnButtonClicked_4; }
	inline void set_OnButtonClicked_4(DUnitButtonClicked_tBE8676E1E0DBC2F05FE50B73CD273E49F95EC9FE * value)
	{
		___OnButtonClicked_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnButtonClicked_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPressableButtonU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnitTypeSelector_tCE4315BDF2C562074885EE4F2EA7232B69A359C5, ___U3CPressableButtonU3Ek__BackingField_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_U3CPressableButtonU3Ek__BackingField_5() const { return ___U3CPressableButtonU3Ek__BackingField_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_U3CPressableButtonU3Ek__BackingField_5() { return &___U3CPressableButtonU3Ek__BackingField_5; }
	inline void set_U3CPressableButtonU3Ek__BackingField_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___U3CPressableButtonU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPressableButtonU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CParametersU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnitTypeSelector_tCE4315BDF2C562074885EE4F2EA7232B69A359C5, ___U3CParametersU3Ek__BackingField_6)); }
	inline UnitParameters_t43E307D7F896416EB4DF9695B8CB74A9AB80E041 * get_U3CParametersU3Ek__BackingField_6() const { return ___U3CParametersU3Ek__BackingField_6; }
	inline UnitParameters_t43E307D7F896416EB4DF9695B8CB74A9AB80E041 ** get_address_of_U3CParametersU3Ek__BackingField_6() { return &___U3CParametersU3Ek__BackingField_6; }
	inline void set_U3CParametersU3Ek__BackingField_6(UnitParameters_t43E307D7F896416EB4DF9695B8CB74A9AB80E041 * value)
	{
		___U3CParametersU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParametersU3Ek__BackingField_6), (void*)value);
	}
};


// Gameplay.Components.HealthComponent
struct HealthComponent_t51D2DE6F27167E6E785C8ABE16E758B8145C270C  : public CurrencyComponent_1_t59512180D04C6D46EE3A62E82D6076DE10FB349D
{
public:

public:
};

struct HealthComponent_t51D2DE6F27167E6E785C8ABE16E758B8145C270C_StaticFields
{
public:
	// Gameplay.Components.HealthComponent/DDestroyUnit Gameplay.Components.HealthComponent::OnDestroyUnit
	DDestroyUnit_t5D4EC02605F1AB7D99B9CEAF00B2459599908E93 * ___OnDestroyUnit_7;

public:
	inline static int32_t get_offset_of_OnDestroyUnit_7() { return static_cast<int32_t>(offsetof(HealthComponent_t51D2DE6F27167E6E785C8ABE16E758B8145C270C_StaticFields, ___OnDestroyUnit_7)); }
	inline DDestroyUnit_t5D4EC02605F1AB7D99B9CEAF00B2459599908E93 * get_OnDestroyUnit_7() const { return ___OnDestroyUnit_7; }
	inline DDestroyUnit_t5D4EC02605F1AB7D99B9CEAF00B2459599908E93 ** get_address_of_OnDestroyUnit_7() { return &___OnDestroyUnit_7; }
	inline void set_OnDestroyUnit_7(DDestroyUnit_t5D4EC02605F1AB7D99B9CEAF00B2459599908E93 * value)
	{
		___OnDestroyUnit_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDestroyUnit_7), (void*)value);
	}
};


// Gameplay.Components.MoneyComponent
struct MoneyComponent_t228EEF2620FCABEA0792C76C2698AFA39588683B  : public CurrencyComponent_1_t66994DE0154F4226B3F3EB58E12A6FFF62D26AB4
{
public:
	// System.Boolean Gameplay.Components.MoneyComponent::<CanGainMoney>k__BackingField
	bool ___U3CCanGainMoneyU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CCanGainMoneyU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MoneyComponent_t228EEF2620FCABEA0792C76C2698AFA39588683B, ___U3CCanGainMoneyU3Ek__BackingField_7)); }
	inline bool get_U3CCanGainMoneyU3Ek__BackingField_7() const { return ___U3CCanGainMoneyU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CCanGainMoneyU3Ek__BackingField_7() { return &___U3CCanGainMoneyU3Ek__BackingField_7; }
	inline void set_U3CCanGainMoneyU3Ek__BackingField_7(bool value)
	{
		___U3CCanGainMoneyU3Ek__BackingField_7 = value;
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// Gameplay.Tower
struct Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908  : public Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Gameplay.Tower::upgrades
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___upgrades_15;
	// GenericDictionary`2<System.Int32,UnityEngine.Animator> Gameplay.Tower::tierAnimators
	GenericDictionary_2_tCFEF7DAA822BD7F8140BD45B93F56B268FBA1AB5 * ___tierAnimators_16;
	// System.Collections.Generic.List`1<System.Single> Gameplay.Tower::_healthTiers
	List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ____healthTiers_17;
	// System.Int32 Gameplay.Tower::_currentTier
	int32_t ____currentTier_19;
	// UnityEngine.Coroutine Gameplay.Tower::_spawningCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____spawningCoroutine_20;
	// GenericDictionary`2<System.Int32,Gameplay.UnitType> Gameplay.Tower::<PercentSpawningTypes>k__BackingField
	GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93 * ___U3CPercentSpawningTypesU3Ek__BackingField_21;
	// Gameplay.Components.SpawnerComponent Gameplay.Tower::<Spawner>k__BackingField
	SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * ___U3CSpawnerU3Ek__BackingField_22;
	// System.Single Gameplay.Tower::rateBetweenSpawn
	float ___rateBetweenSpawn_23;
	// System.Single Gameplay.Tower::radiusSpawn
	float ___radiusSpawn_24;
	// UnityEngine.WaitForSeconds Gameplay.Tower::_waitForNextSpawn
	WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * ____waitForNextSpawn_25;

public:
	inline static int32_t get_offset_of_upgrades_15() { return static_cast<int32_t>(offsetof(Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908, ___upgrades_15)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_upgrades_15() const { return ___upgrades_15; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_upgrades_15() { return &___upgrades_15; }
	inline void set_upgrades_15(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___upgrades_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___upgrades_15), (void*)value);
	}

	inline static int32_t get_offset_of_tierAnimators_16() { return static_cast<int32_t>(offsetof(Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908, ___tierAnimators_16)); }
	inline GenericDictionary_2_tCFEF7DAA822BD7F8140BD45B93F56B268FBA1AB5 * get_tierAnimators_16() const { return ___tierAnimators_16; }
	inline GenericDictionary_2_tCFEF7DAA822BD7F8140BD45B93F56B268FBA1AB5 ** get_address_of_tierAnimators_16() { return &___tierAnimators_16; }
	inline void set_tierAnimators_16(GenericDictionary_2_tCFEF7DAA822BD7F8140BD45B93F56B268FBA1AB5 * value)
	{
		___tierAnimators_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tierAnimators_16), (void*)value);
	}

	inline static int32_t get_offset_of__healthTiers_17() { return static_cast<int32_t>(offsetof(Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908, ____healthTiers_17)); }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * get__healthTiers_17() const { return ____healthTiers_17; }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA ** get_address_of__healthTiers_17() { return &____healthTiers_17; }
	inline void set__healthTiers_17(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * value)
	{
		____healthTiers_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____healthTiers_17), (void*)value);
	}

	inline static int32_t get_offset_of__currentTier_19() { return static_cast<int32_t>(offsetof(Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908, ____currentTier_19)); }
	inline int32_t get__currentTier_19() const { return ____currentTier_19; }
	inline int32_t* get_address_of__currentTier_19() { return &____currentTier_19; }
	inline void set__currentTier_19(int32_t value)
	{
		____currentTier_19 = value;
	}

	inline static int32_t get_offset_of__spawningCoroutine_20() { return static_cast<int32_t>(offsetof(Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908, ____spawningCoroutine_20)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__spawningCoroutine_20() const { return ____spawningCoroutine_20; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__spawningCoroutine_20() { return &____spawningCoroutine_20; }
	inline void set__spawningCoroutine_20(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____spawningCoroutine_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____spawningCoroutine_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPercentSpawningTypesU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908, ___U3CPercentSpawningTypesU3Ek__BackingField_21)); }
	inline GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93 * get_U3CPercentSpawningTypesU3Ek__BackingField_21() const { return ___U3CPercentSpawningTypesU3Ek__BackingField_21; }
	inline GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93 ** get_address_of_U3CPercentSpawningTypesU3Ek__BackingField_21() { return &___U3CPercentSpawningTypesU3Ek__BackingField_21; }
	inline void set_U3CPercentSpawningTypesU3Ek__BackingField_21(GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93 * value)
	{
		___U3CPercentSpawningTypesU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPercentSpawningTypesU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSpawnerU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908, ___U3CSpawnerU3Ek__BackingField_22)); }
	inline SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * get_U3CSpawnerU3Ek__BackingField_22() const { return ___U3CSpawnerU3Ek__BackingField_22; }
	inline SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD ** get_address_of_U3CSpawnerU3Ek__BackingField_22() { return &___U3CSpawnerU3Ek__BackingField_22; }
	inline void set_U3CSpawnerU3Ek__BackingField_22(SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * value)
	{
		___U3CSpawnerU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpawnerU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_rateBetweenSpawn_23() { return static_cast<int32_t>(offsetof(Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908, ___rateBetweenSpawn_23)); }
	inline float get_rateBetweenSpawn_23() const { return ___rateBetweenSpawn_23; }
	inline float* get_address_of_rateBetweenSpawn_23() { return &___rateBetweenSpawn_23; }
	inline void set_rateBetweenSpawn_23(float value)
	{
		___rateBetweenSpawn_23 = value;
	}

	inline static int32_t get_offset_of_radiusSpawn_24() { return static_cast<int32_t>(offsetof(Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908, ___radiusSpawn_24)); }
	inline float get_radiusSpawn_24() const { return ___radiusSpawn_24; }
	inline float* get_address_of_radiusSpawn_24() { return &___radiusSpawn_24; }
	inline void set_radiusSpawn_24(float value)
	{
		___radiusSpawn_24 = value;
	}

	inline static int32_t get_offset_of__waitForNextSpawn_25() { return static_cast<int32_t>(offsetof(Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908, ____waitForNextSpawn_25)); }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * get__waitForNextSpawn_25() const { return ____waitForNextSpawn_25; }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 ** get_address_of__waitForNextSpawn_25() { return &____waitForNextSpawn_25; }
	inline void set__waitForNextSpawn_25(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * value)
	{
		____waitForNextSpawn_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____waitForNextSpawn_25), (void*)value);
	}
};

struct Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908_StaticFields
{
public:
	// System.Int32 Gameplay.Tower::UpgradeTrigger
	int32_t ___UpgradeTrigger_18;

public:
	inline static int32_t get_offset_of_UpgradeTrigger_18() { return static_cast<int32_t>(offsetof(Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908_StaticFields, ___UpgradeTrigger_18)); }
	inline int32_t get_UpgradeTrigger_18() const { return ___UpgradeTrigger_18; }
	inline int32_t* get_address_of_UpgradeTrigger_18() { return &___UpgradeTrigger_18; }
	inline void set_UpgradeTrigger_18(int32_t value)
	{
		___UpgradeTrigger_18 = value;
	}
};


// Managers.UiManager
struct UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F  : public MonoSingleton_1_tB2F1044A7C0E9239B3F215BD80C4AEC145C1BAFB
{
public:
	// Controls.BaseUIControls Managers.UiManager::<BaseUiControls>k__BackingField
	BaseUIControls_t45DB53AA923879B80D03C145A046280C67C1225B * ___U3CBaseUiControlsU3Ek__BackingField_8;
	// UnityEngine.Camera Managers.UiManager::currentCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___currentCamera_9;
	// UI.PlayerUI Managers.UiManager::playerUI
	PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC * ___playerUI_10;
	// UI.EndGameUI Managers.UiManager::endGameUI
	EndGameUI_tA075D6CD03451CFEE161DAAF9E74D600A5B5A6AD * ___endGameUI_11;
	// UnityEngine.UI.GraphicRaycaster Managers.UiManager::_graphicRaycaster
	GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6 * ____graphicRaycaster_12;
	// UnityEngine.EventSystems.PointerEventData Managers.UiManager::_clickData
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ____clickData_13;
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> Managers.UiManager::<ClickResults>k__BackingField
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * ___U3CClickResultsU3Ek__BackingField_14;
	// UnityEngine.Vector2 Managers.UiManager::<CursorPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CCursorPositionU3Ek__BackingField_15;
	// UnityEngine.Ray Managers.UiManager::<CursorAsRay>k__BackingField
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___U3CCursorAsRayU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CBaseUiControlsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F, ___U3CBaseUiControlsU3Ek__BackingField_8)); }
	inline BaseUIControls_t45DB53AA923879B80D03C145A046280C67C1225B * get_U3CBaseUiControlsU3Ek__BackingField_8() const { return ___U3CBaseUiControlsU3Ek__BackingField_8; }
	inline BaseUIControls_t45DB53AA923879B80D03C145A046280C67C1225B ** get_address_of_U3CBaseUiControlsU3Ek__BackingField_8() { return &___U3CBaseUiControlsU3Ek__BackingField_8; }
	inline void set_U3CBaseUiControlsU3Ek__BackingField_8(BaseUIControls_t45DB53AA923879B80D03C145A046280C67C1225B * value)
	{
		___U3CBaseUiControlsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBaseUiControlsU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_currentCamera_9() { return static_cast<int32_t>(offsetof(UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F, ___currentCamera_9)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_currentCamera_9() const { return ___currentCamera_9; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_currentCamera_9() { return &___currentCamera_9; }
	inline void set_currentCamera_9(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___currentCamera_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentCamera_9), (void*)value);
	}

	inline static int32_t get_offset_of_playerUI_10() { return static_cast<int32_t>(offsetof(UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F, ___playerUI_10)); }
	inline PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC * get_playerUI_10() const { return ___playerUI_10; }
	inline PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC ** get_address_of_playerUI_10() { return &___playerUI_10; }
	inline void set_playerUI_10(PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC * value)
	{
		___playerUI_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerUI_10), (void*)value);
	}

	inline static int32_t get_offset_of_endGameUI_11() { return static_cast<int32_t>(offsetof(UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F, ___endGameUI_11)); }
	inline EndGameUI_tA075D6CD03451CFEE161DAAF9E74D600A5B5A6AD * get_endGameUI_11() const { return ___endGameUI_11; }
	inline EndGameUI_tA075D6CD03451CFEE161DAAF9E74D600A5B5A6AD ** get_address_of_endGameUI_11() { return &___endGameUI_11; }
	inline void set_endGameUI_11(EndGameUI_tA075D6CD03451CFEE161DAAF9E74D600A5B5A6AD * value)
	{
		___endGameUI_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endGameUI_11), (void*)value);
	}

	inline static int32_t get_offset_of__graphicRaycaster_12() { return static_cast<int32_t>(offsetof(UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F, ____graphicRaycaster_12)); }
	inline GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6 * get__graphicRaycaster_12() const { return ____graphicRaycaster_12; }
	inline GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6 ** get_address_of__graphicRaycaster_12() { return &____graphicRaycaster_12; }
	inline void set__graphicRaycaster_12(GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6 * value)
	{
		____graphicRaycaster_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____graphicRaycaster_12), (void*)value);
	}

	inline static int32_t get_offset_of__clickData_13() { return static_cast<int32_t>(offsetof(UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F, ____clickData_13)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get__clickData_13() const { return ____clickData_13; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of__clickData_13() { return &____clickData_13; }
	inline void set__clickData_13(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		____clickData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____clickData_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClickResultsU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F, ___U3CClickResultsU3Ek__BackingField_14)); }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * get_U3CClickResultsU3Ek__BackingField_14() const { return ___U3CClickResultsU3Ek__BackingField_14; }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 ** get_address_of_U3CClickResultsU3Ek__BackingField_14() { return &___U3CClickResultsU3Ek__BackingField_14; }
	inline void set_U3CClickResultsU3Ek__BackingField_14(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * value)
	{
		___U3CClickResultsU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClickResultsU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCursorPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F, ___U3CCursorPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CCursorPositionU3Ek__BackingField_15() const { return ___U3CCursorPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CCursorPositionU3Ek__BackingField_15() { return &___U3CCursorPositionU3Ek__BackingField_15; }
	inline void set_U3CCursorPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CCursorPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CCursorAsRayU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F, ___U3CCursorAsRayU3Ek__BackingField_16)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_U3CCursorAsRayU3Ek__BackingField_16() const { return ___U3CCursorAsRayU3Ek__BackingField_16; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_U3CCursorAsRayU3Ek__BackingField_16() { return &___U3CCursorAsRayU3Ek__BackingField_16; }
	inline void set_U3CCursorAsRayU3Ek__BackingField_16(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___U3CCursorAsRayU3Ek__BackingField_16 = value;
	}
};

struct UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F_StaticFields
{
public:
	// Managers.UiManager/DSelectRadarSearchingType Managers.UiManager::OnSelectRadarSearchingType
	DSelectRadarSearchingType_t43F4DE272DC752F851CE93CA78CC62B6D06708ED * ___OnSelectRadarSearchingType_6;
	// Managers.UiManager/DSelectSpawnableUnit Managers.UiManager::OnSelectSpawnableUnit
	DSelectSpawnableUnit_t33D8A41BDE468CBC0E39E32A4B0367E8BD490C78 * ___OnSelectSpawnableUnit_7;

public:
	inline static int32_t get_offset_of_OnSelectRadarSearchingType_6() { return static_cast<int32_t>(offsetof(UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F_StaticFields, ___OnSelectRadarSearchingType_6)); }
	inline DSelectRadarSearchingType_t43F4DE272DC752F851CE93CA78CC62B6D06708ED * get_OnSelectRadarSearchingType_6() const { return ___OnSelectRadarSearchingType_6; }
	inline DSelectRadarSearchingType_t43F4DE272DC752F851CE93CA78CC62B6D06708ED ** get_address_of_OnSelectRadarSearchingType_6() { return &___OnSelectRadarSearchingType_6; }
	inline void set_OnSelectRadarSearchingType_6(DSelectRadarSearchingType_t43F4DE272DC752F851CE93CA78CC62B6D06708ED * value)
	{
		___OnSelectRadarSearchingType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSelectRadarSearchingType_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnSelectSpawnableUnit_7() { return static_cast<int32_t>(offsetof(UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F_StaticFields, ___OnSelectSpawnableUnit_7)); }
	inline DSelectSpawnableUnit_t33D8A41BDE468CBC0E39E32A4B0367E8BD490C78 * get_OnSelectSpawnableUnit_7() const { return ___OnSelectSpawnableUnit_7; }
	inline DSelectSpawnableUnit_t33D8A41BDE468CBC0E39E32A4B0367E8BD490C78 ** get_address_of_OnSelectSpawnableUnit_7() { return &___OnSelectSpawnableUnit_7; }
	inline void set_OnSelectSpawnableUnit_7(DSelectSpawnableUnit_t33D8A41BDE468CBC0E39E32A4B0367E8BD490C78 * value)
	{
		___OnSelectSpawnableUnit_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSelectSpawnableUnit_7), (void*)value);
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.Scrollbar
struct Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_20;
	// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::m_Direction
	int32_t ___m_Direction_21;
	// System.Single UnityEngine.UI.Scrollbar::m_Value
	float ___m_Value_22;
	// System.Single UnityEngine.UI.Scrollbar::m_Size
	float ___m_Size_23;
	// System.Int32 UnityEngine.UI.Scrollbar::m_NumberOfSteps
	int32_t ___m_NumberOfSteps_24;
	// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::m_OnValueChanged
	ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED * ___m_OnValueChanged_25;
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_ContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_ContainerRect_26;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_27;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Scrollbar::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_28;
	// UnityEngine.Coroutine UnityEngine.UI.Scrollbar::m_PointerDownRepeat
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_PointerDownRepeat_29;
	// System.Boolean UnityEngine.UI.Scrollbar::isPointerDownAndNotDragging
	bool ___isPointerDownAndNotDragging_30;
	// System.Boolean UnityEngine.UI.Scrollbar::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_31;

public:
	inline static int32_t get_offset_of_m_HandleRect_20() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_HandleRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_20() const { return ___m_HandleRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_20() { return &___m_HandleRect_20; }
	inline void set_m_HandleRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_21() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Direction_21)); }
	inline int32_t get_m_Direction_21() const { return ___m_Direction_21; }
	inline int32_t* get_address_of_m_Direction_21() { return &___m_Direction_21; }
	inline void set_m_Direction_21(int32_t value)
	{
		___m_Direction_21 = value;
	}

	inline static int32_t get_offset_of_m_Value_22() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Value_22)); }
	inline float get_m_Value_22() const { return ___m_Value_22; }
	inline float* get_address_of_m_Value_22() { return &___m_Value_22; }
	inline void set_m_Value_22(float value)
	{
		___m_Value_22 = value;
	}

	inline static int32_t get_offset_of_m_Size_23() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Size_23)); }
	inline float get_m_Size_23() const { return ___m_Size_23; }
	inline float* get_address_of_m_Size_23() { return &___m_Size_23; }
	inline void set_m_Size_23(float value)
	{
		___m_Size_23 = value;
	}

	inline static int32_t get_offset_of_m_NumberOfSteps_24() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_NumberOfSteps_24)); }
	inline int32_t get_m_NumberOfSteps_24() const { return ___m_NumberOfSteps_24; }
	inline int32_t* get_address_of_m_NumberOfSteps_24() { return &___m_NumberOfSteps_24; }
	inline void set_m_NumberOfSteps_24(int32_t value)
	{
		___m_NumberOfSteps_24 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_25() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_OnValueChanged_25)); }
	inline ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED * get_m_OnValueChanged_25() const { return ___m_OnValueChanged_25; }
	inline ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED ** get_address_of_m_OnValueChanged_25() { return &___m_OnValueChanged_25; }
	inline void set_m_OnValueChanged_25(ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED * value)
	{
		___m_OnValueChanged_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContainerRect_26() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_ContainerRect_26)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_ContainerRect_26() const { return ___m_ContainerRect_26; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_ContainerRect_26() { return &___m_ContainerRect_26; }
	inline void set_m_ContainerRect_26(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_ContainerRect_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ContainerRect_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_27() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Offset_27)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_27() const { return ___m_Offset_27; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_27() { return &___m_Offset_27; }
	inline void set_m_Offset_27(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_27 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_28() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Tracker_28)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_28() const { return ___m_Tracker_28; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_28() { return &___m_Tracker_28; }
	inline void set_m_Tracker_28(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_28 = value;
	}

	inline static int32_t get_offset_of_m_PointerDownRepeat_29() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_PointerDownRepeat_29)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_PointerDownRepeat_29() const { return ___m_PointerDownRepeat_29; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_PointerDownRepeat_29() { return &___m_PointerDownRepeat_29; }
	inline void set_m_PointerDownRepeat_29(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_PointerDownRepeat_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerDownRepeat_29), (void*)value);
	}

	inline static int32_t get_offset_of_isPointerDownAndNotDragging_30() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___isPointerDownAndNotDragging_30)); }
	inline bool get_isPointerDownAndNotDragging_30() const { return ___isPointerDownAndNotDragging_30; }
	inline bool* get_address_of_isPointerDownAndNotDragging_30() { return &___isPointerDownAndNotDragging_30; }
	inline void set_isPointerDownAndNotDragging_30(bool value)
	{
		___isPointerDownAndNotDragging_30 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_31() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_DelayedUpdateVisuals_31)); }
	inline bool get_m_DelayedUpdateVisuals_31() const { return ___m_DelayedUpdateVisuals_31; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_31() { return &___m_DelayedUpdateVisuals_31; }
	inline void set_m_DelayedUpdateVisuals_31(bool value)
	{
		___m_DelayedUpdateVisuals_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  m_Items[1];

public:
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		m_Items[index] = value;
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


// !!0 UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_gshared (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m868F41761382778B94845B27E2B6D041FE814E88_gshared (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m0D1B9A031C6A1668D4AE3F7A153BF9B066F3193E_gshared_inline (KeyValuePair_2_t7C40DFD3E4598A1814263BCC6543EBD170B7664D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::TryGetComponent<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_mC7639C3E3E2A65695113BCF25718826CC392D6CB_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, RuntimeObject ** ___component0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  KeyValuePair_2_get_Key_m1ACA8B370B854CEB17B7AC7194544B66BEAC96B9_gshared_inline (KeyValuePair_2_t7C40DFD3E4598A1814263BCC6543EBD170B7664D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m7612B49A0C4765AB069FF3F0754E7B61C1A1F7C9_gshared (KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___key0, int32_t ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  KeyValuePair_2_get_Key_mFF8D9FEFDF56EC6F38DA016CFEB6BD045AB7424B_gshared_inline (KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 * __this, const RuntimeMethod* method);
// T Tools.MonoSingleton`1<System.Object>::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * MonoSingleton_1_get_Instance_mAAC56DCD44B5B574CEC32AB21F32838BE24A388D_gshared_inline (const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_gshared (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 GenericDictionary`2<System.Int32,System.Int32Enum>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericDictionary_2_get_Count_mBA83B43A7FEF45DB6143E53E356C5EF50E4F3779_gshared (GenericDictionary_2_tE591A7C139F491CE23F05A5C853C7AB866AAF538 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> GenericDictionary`2<System.Int32,System.Int32Enum>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GenericDictionary_2_GetEnumerator_m694B316EB575C2760AECB8F3716FDF121E0B0221_gshared (GenericDictionary_2_tE591A7C139F491CE23F05A5C853C7AB866AAF538 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32Enum>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mA549807931A8F164EEBAE7C7E0541C5AA957223A_gshared_inline (KeyValuePair_2_t3C23DAE4FC2A4966AC3BF6D463387F740C0139A5 * __this, const RuntimeMethod* method);
// TValue GenericDictionary`2<System.Int32,System.Int32Enum>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericDictionary_2_get_Item_mA3DED3B7BFC0B023C96F7EC4D48883B41EA09477_gshared (GenericDictionary_2_tE591A7C139F491CE23F05A5C853C7AB866AAF538 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Single Gameplay.Components.CurrencyComponent`1<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CurrencyComponent_1_get_Current_m58C073777FDEA9E810789DA19CC4F09028A1A4AB_gshared_inline (CurrencyComponent_1_t8E9271605EC7CC45BBAEC59FC45D6502B2045473 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m409D64ADC25ED175ADC7ED4C3F7ABF5439AD63AF_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, RuntimeObject ** ___component0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Camera CameraMovement::get_Camera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraMovement_get_Camera_m00885AAACE0B940467B466EF9158B6E29FB44611_inline (CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.DeviceType UnityEngine.SystemInfo::get_deviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_deviceType_mC7A6628167ECFF848FE509510A6E3E2FA0820100 (const RuntimeMethod* method);
// Controls.TouchControls CameraMovement::get_TouchControls()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * CameraMovement_get_TouchControls_m917D5A7526B49BF42DEF623B584E67CABEB411DC_inline (CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * __this, const RuntimeMethod* method);
// Controls.TouchControls/TouchActions Controls.TouchControls::get_Touch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7  TouchControls_get_Touch_m351F7A200C5113C647E02F091E643A3935664CCA (TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction Controls.TouchControls/TouchActions::get_PrimaryFingerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * TouchActions_get_PrimaryFingerPosition_m8480F12CFF404B100BC2D202D01C90955049E894 (TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 *, const RuntimeMethod*))InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputAction Controls.TouchControls/TouchActions::get_SecondaryFingerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * TouchActions_get_SecondaryFingerPosition_m2B3654918B354379504BCDB9A5DBDB26C4D20491 (TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// Controls.CameraControls CameraMovement::get_CameraControls()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CameraControls_tEDA4EF38E586C8A1DC6B93F001F386A7BDD735ED * CameraMovement_get_CameraControls_m1941048B0EF9914651C49EDD8190805DA6D9464C_inline (CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * __this, const RuntimeMethod* method);
// Controls.CameraControls/CameraActions Controls.CameraControls::get_Camera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraActions_t9335BF1B850A87C0A8FD253B06949F6A64580FAE  CameraControls_get_Camera_m060167993B5752E89778CBAB413272AF8D926B87 (CameraControls_tEDA4EF38E586C8A1DC6B93F001F386A7BDD735ED * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction Controls.CameraControls/CameraActions::get_Zoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * CameraActions_get_Zoom_mD733DD0F4ABA59D67861410F1A62AB978260A0A7 (CameraActions_t9335BF1B850A87C0A8FD253B06949F6A64580FAE * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
inline float InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m868F41761382778B94845B27E2B6D041FE814E88 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 *, const RuntimeMethod*))InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m868F41761382778B94845B27E2B6D041FE814E88_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m81CEEF1FCB5EFBBAA39071F48BCFBC16AED0C915 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Physics::RaycastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Physics_RaycastNonAlloc_m9076DDE1A65F87DB3D2824DAD4E5B8B534159F1F (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* ___results2, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Slerp_mEDBE029B9D394258437E16D858F2C96D72A36B7B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void CandidateMap/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA88E8D4060708BA3CB2CAFAF4E7767EC2DBA1BE7 (U3CU3Ec_t5A5947883458A78FB78DB005C350DEA924B5FA55 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void MapBrain/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFEA67FCA2C0AB3E1D6C71C52C5554D3AED5DD4E3 (U3CU3Ec_t1A143AFC59360CD7E27C34736D3488A694DDD541 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<CandidateMap>::GetEnumerator()
inline Enumerator_t01E2365B866BF22173D7F428BD227FC7BD86BC7A  List_1_GetEnumerator_mB42E239E8F6236DEE9D0A234FB149B80243A0669 (List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t01E2365B866BF22173D7F428BD227FC7BD86BC7A  (*) (List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<CandidateMap>::get_Current()
inline CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * Enumerator_get_Current_mD2FBE59C7113EC1BC94930B07794BC4CBDDCEA86_inline (Enumerator_t01E2365B866BF22173D7F428BD227FC7BD86BC7A * __this, const RuntimeMethod* method)
{
	return ((  CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * (*) (Enumerator_t01E2365B866BF22173D7F428BD227FC7BD86BC7A *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void CandidateMap::FindPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CandidateMap_FindPath_m210E125FB8D0A8F8D39626520177F6BE095F694B (CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Vector3> CandidateMap::Repair()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * CandidateMap_Repair_m032BD67FA41AE2B228D96A2203E42FEC3234663E (CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * __this, const RuntimeMethod* method);
// System.Void CandidateMap::GenerateTowers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CandidateMap_GenerateTowers_m2BCB172506C3AA8194B173B9DE48748EC667DE98 (CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * __this, const RuntimeMethod* method);
// MapData CandidateMap::ReturnMapData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8  CandidateMap_ReturnMapData_m84108E297CF5A697BA422AD1C669DD8C9659AD7A (CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * __this, const RuntimeMethod* method);
// System.Int32 MapBrain::CalculateFitness(MapData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapBrain_CalculateFitness_m7CBE8AEF967442BAA2DBC445FA5AB3699987814A (MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * __this, MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8  ___mapData0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<CandidateMap>::MoveNext()
inline bool Enumerator_MoveNext_mF064953A7828971045DA03225B8BD06113C4B7B9 (Enumerator_t01E2365B866BF22173D7F428BD227FC7BD86BC7A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t01E2365B866BF22173D7F428BD227FC7BD86BC7A *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<CandidateMap>::Dispose()
inline void Enumerator_Dispose_mD7A8ED267E8DB3120D7F8D91493890613845A6E4 (Enumerator_t01E2365B866BF22173D7F428BD227FC7BD86BC7A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t01E2365B866BF22173D7F428BD227FC7BD86BC7A *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// CandidateMap CandidateMap::DeepClone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * CandidateMap_DeepClone_m3F6B8C9CF1AD038AACB92A4868C286C9246F3184 (CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * __this, const RuntimeMethod* method);
// System.Void MapBrain::set_BestMap(CandidateMap)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MapBrain_set_BestMap_m28418E4AF8606EB8B10E2BDBB61DBFDFA8DAF308_inline (MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * __this, CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Void UIController::SetLoadingValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SetLoadingValue_mEDE177EC488CDD75ECD963FC0CA30C284C0CE2AF (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<CandidateMap>::.ctor()
inline void List_1__ctor_m1742EB5CB09CD424413E0CBFEC1849F4963E7C52 (List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Int32 MapBrain::RouletteWheelSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapBrain_RouletteWheelSelection_m99575A2613C012CAB80E1414A23A48CDA409841D (MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<CandidateMap>::get_Item(System.Int32)
inline CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * List_1_get_Item_m3A81C1ED01765116A1AD8A8636BC4281F6586E68_inline (List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * (*) (List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void MapBrain::CrossoverParents(CandidateMap,CandidateMap,CandidateMap&,CandidateMap&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapBrain_CrossoverParents_m807768C99979A13081CE15FB075A387D265BC2D5 (MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * __this, CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * ___parent10, CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * ___parent21, CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED ** ___child12, CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED ** ___child23, const RuntimeMethod* method);
// System.Void CandidateMap::AddMutation(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CandidateMap_AddMutation_m295048909B05ACFA408F114E765F896EEDCCFA2A (CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * __this, double ___mutationRate0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<CandidateMap>::Add(!0)
inline void List_1_Add_m0C1CF4D3DBB67BE8CD6C4A504DC19754C874A717 (List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 * __this, CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 *, CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<CandidateMap>::get_Count()
inline int32_t List_1_get_Count_mFAFE1697FE69956771C0F10056006C6261D4E4DB_inline (List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Collections.IEnumerator MapBrain::GeneticAlgorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapBrain_GeneticAlgorithm_m9B966A68FCF221BF33B4ADC63A5E3B7D5B32FD93 (MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void MapBrain::ShowResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapBrain_ShowResults_m7B2E3B966C6290DE3CF939F4D2C51C28D5DFE53E (MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * __this, const RuntimeMethod* method);
// System.Void MapVisualizer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m631A4356C2BE462C74907308BB60EC301DA24BEA (U3CU3Ec_t2D532FC10FA382DB658EF3AEA702C72902863E54 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.GameObject>::get_Value()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * KeyValuePair_2_get_Value_m84A358475EC8EEAC60A8D722A040615FD1E702D5_inline (KeyValuePair_2_tE11B93BE2B17569E0E9CCED689C2035649330F07 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (KeyValuePair_2_tE11B93BE2B17569E0E9CCED689C2035649330F07 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m0D1B9A031C6A1668D4AE3F7A153BF9B066F3193E_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.GameObject::TryGetComponent<Gameplay.Tower>(!!0&)
inline bool GameObject_TryGetComponent_TisTower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908_mA149B72CF274333FFB2DF13126B03244895BA8B0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 ** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 **, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_mC7639C3E3E2A65695113BCF25718826CC392D6CB_gshared)(__this, ___component0, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.GameObject>::get_Key()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  KeyValuePair_2_get_Key_m417C4D56013CA4EBCDD1D47879AAC85957FCC4A6_inline (KeyValuePair_2_tE11B93BE2B17569E0E9CCED689C2035649330F07 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (KeyValuePair_2_tE11B93BE2B17569E0E9CCED689C2035649330F07 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1ACA8B370B854CEB17B7AC7194544B66BEAC96B9_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// Cell MapGrid::GetCell(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * MapGrid_GetCell_m4730E216B240BFB3AE03B57F81622FC1FABAC92D (MapGrid_t236B663A22892CFD736FA4F8C43A59C44CF4F62A * __this, float ___x0, float ___z1, const RuntimeMethod* method);
// CellObjectType Cell::get_ObjectType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cell_get_ObjectType_mA42FCADB320AAE2440D8508F9C5C2CC2323C2818_inline (Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RuleTile/TilingRuleOutput/Neighbor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neighbor__ctor_mD1C56B88B8C0CFD1168B5D348D410A3080E9E90D (Neighbor_tF976C08FE4E0F2143DADE610274231167405D77B * __this, const RuntimeMethod* method);
// System.Void Outline/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF9B89AF9C89EBA2E177F233D3742EC6B9E783D67 (U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_m7612B49A0C4765AB069FF3F0754E7B61C1A1F7C9 (KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m7612B49A0C4765AB069FF3F0754E7B61C1A1F7C9_gshared)(__this, ___key0, ___value1, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>::get_Key()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  KeyValuePair_2_get_Key_mFF8D9FEFDF56EC6F38DA016CFEB6BD045AB7424B_inline (KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mFF8D9FEFDF56EC6F38DA016CFEB6BD045AB7424B_gshared_inline)(__this, method);
}
// System.Void Gameplay.Player/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1763529533392D9B028386C46AB73E5375426285 (U3CU3Ec_t535C18E424A6566A1193D6404FD769DE6680ECB6 * __this, const RuntimeMethod* method);
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4 (float* __this, float ___value0, const RuntimeMethod* method);
// T Tools.MonoSingleton`1<Managers.UiManager>::get_Instance()
inline UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F * MonoSingleton_1_get_Instance_m88D8C59FFBCEF4E4C45F66E606B7B12840700054_inline (const RuntimeMethod* method)
{
	return ((  UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F * (*) (const RuntimeMethod*))MonoSingleton_1_get_Instance_mAAC56DCD44B5B574CEC32AB21F32838BE24A388D_gshared_inline)(method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// GameState.GameStateManager GameState.GameStateManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameStateManager_tF7AEC3D17EAEB0E30CBADF2F67F129F582EF3505 * GameStateManager_get_Instance_m160572733C9C45A80CF306B82D53384DFC9E3797 (const RuntimeMethod* method);
// GameState.GameState GameState.GameStateManager::get_CurrentGameState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameStateManager_get_CurrentGameState_m066DDED0686771E8D0FA6480C7962DEE6371F11F_inline (GameStateManager_tF7AEC3D17EAEB0E30CBADF2F67F129F582EF3505 * __this, const RuntimeMethod* method);
// UnityEngine.Ray Managers.UiManager::get_CursorAsRay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  UiManager_get_CursorAsRay_m63AB878A93036720B74B3C14680B81A49F454CC6_inline (UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mA64F8C30681E3A6A8F2B7EDE592FE7BBC0D354F4 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, float ___distance0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m83E9014DE042AAFE0B97A66E2A23F701FFDBB8A3 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// System.Void Controls.PlayerControls/PlayerActions::.ctor(Controls.PlayerControls)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerActions__ctor_mEEC3202540FC6940EB8F109FAFB0E361DD76A224_inline (PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 * __this, PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A * ___wrapper0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction Controls.PlayerControls/PlayerActions::get_SelectAndSpawnUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * PlayerActions_get_SelectAndSpawnUnit_m99C6D314E0970CDA3ECAE0F487D25A408D585FC5 (PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionMap Controls.PlayerControls/PlayerActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * PlayerActions_Get_mBABB5C543A7B6B838B8F8751680B5ECE3DBDABB1 (PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionMap::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Enable_m7FB7229D7099C525C994CA0208284CC904D52F15 (InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * __this, const RuntimeMethod* method);
// System.Void Controls.PlayerControls/PlayerActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Enable_m12406082250D6C11C69B431091928E32EEC87203 (PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionMap::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Disable_mE9427CBA292066C977F0A8FE109A1D4B4E6CB6B5 (InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * __this, const RuntimeMethod* method);
// System.Void Controls.PlayerControls/PlayerActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Disable_m90687E6C3748650799E9CE3BB0CF298893417637 (PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.InputActionMap::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionMap_get_enabled_m067EAC332984B7758EC1214A45FF0552F913945E (InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * __this, const RuntimeMethod* method);
// System.Boolean Controls.PlayerControls/PlayerActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerActions_get_enabled_m772A248D681B21E4B66E040152BBC26185596439 (PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0 (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::remove_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void Controls.PlayerControls/PlayerActions::SetCallbacks(Controls.PlayerControls/IPlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_SetCallbacks_mBA942744E00F7644F89AC1F5047509128B3930FF (PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 * __this, RuntimeObject* ___instance0, const RuntimeMethod* method);
// System.Single Gameplay.Components.HealthComponent::get_CurrentPercent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HealthComponent_get_CurrentPercent_mA473C08A39646DEF593628EE145B0A586F541216 (HealthComponent_t51D2DE6F27167E6E785C8ABE16E758B8145C270C * __this, const RuntimeMethod* method);
// UnityEngine.UI.Scrollbar UI.PlayerUI::get_UnitInformationHealthBar()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * PlayerUI_get_UnitInformationHealthBar_mFB99DA677D2FBDCAC15EAAE21DFF6BE8F45CC56D_inline (PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.Scrollbar::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Scrollbar_get_value_mC925448739BB4DC891D49F600D370D808296BD07 (Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Scrollbar::set_value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrollbar_set_value_mEDFFDDF8153EA01B897198648DCFB1D1EA539197 (Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * __this, float ___value0, const RuntimeMethod* method);
// System.Void RandomizeGameObject/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mED8E8995B98DE4A142DD094AA48B5BFC1FE47F49 (U3CU3Ec_tBC51EABF39D5A7F72B1FD79E036C065FAA7975DD * __this, const RuntimeMethod* method);
// System.Void Gameplay.Components.SpawnerComponent/LaunchData::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaunchData__ctor_m39561418534467AF7A8DF4746B2B6F8C34CE3AF4 (LaunchData_tAE068343C79E1B868764B659F0CCFC16C44D2686 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialVelocity0, float ___timeToTarget1, const RuntimeMethod* method);
// System.Void Controls.TouchControls/TouchActions::.ctor(Controls.TouchControls)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TouchActions__ctor_m669675AEE0BB6BD3ACF4A2F47DD456A9989E3AEA_inline (TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * __this, TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * ___wrapper0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction Controls.TouchControls/TouchActions::get_SecondaryTouchContact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * TouchActions_get_SecondaryTouchContact_mB93584AB2112CB836AD7280264046D941E92D158 (TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionMap Controls.TouchControls/TouchActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * TouchActions_Get_mDEC68CD99EB2D4025CC30A3051C815E3F5304329 (TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * __this, const RuntimeMethod* method);
// System.Void Controls.TouchControls/TouchActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchActions_Enable_m4BB5A6FBC38438B9F12A9D780E2389A5CCDF5B46 (TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * __this, const RuntimeMethod* method);
// System.Void Controls.TouchControls/TouchActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchActions_Disable_m73825CC37ED24254F251DDDC3B5C5B91E6526BF6 (TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * __this, const RuntimeMethod* method);
// System.Boolean Controls.TouchControls/TouchActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchActions_get_enabled_m0A10248AA5B6D9B72924D4A430AD7612F6F62288 (TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * __this, const RuntimeMethod* method);
// System.Void Controls.TouchControls/TouchActions::SetCallbacks(Controls.TouchControls/ITouchActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchActions_SetCallbacks_m3FDB1FDFA3D09B8BFD7C7BE39F4C935ED29A1849 (TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * __this, RuntimeObject* ___instance0, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorStateInfo::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_length_m020815F180AA8D3485CC6AB59A7E596BBA11D6CF (AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_mC951C5D83749FC2AE37DCC75A022383C578F3B40 (AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * __this, const RuntimeMethod* method);
// GenericDictionary`2<System.Int32,Gameplay.UnitType> Gameplay.Tower::get_PercentSpawningTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93 * Tower_get_PercentSpawningTypes_m886A0B08DE7C43F5F1E318AD8A3C6B6FED5CAA89_inline (Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * __this, const RuntimeMethod* method);
// System.Int32 GenericDictionary`2<System.Int32,Gameplay.UnitType>::get_Count()
inline int32_t GenericDictionary_2_get_Count_mE4A833AAB126B8A55EE3EFFC30546AF7EBE9F778 (GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93 *, const RuntimeMethod*))GenericDictionary_2_get_Count_mBA83B43A7FEF45DB6143E53E356C5EF50E4F3779_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> GenericDictionary`2<System.Int32,Gameplay.UnitType>::GetEnumerator()
inline RuntimeObject* GenericDictionary_2_GetEnumerator_m64DA8E4F1643598B75314D72CA28D25B53027E63 (GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93 *, const RuntimeMethod*))GenericDictionary_2_GetEnumerator_m694B316EB575C2760AECB8F3716FDF121E0B0221_gshared)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,Gameplay.UnitType>::get_Key()
inline int32_t KeyValuePair_2_get_Key_mCEBD8B221F899AD9CFABF37864C2FF812DBCF562_inline (KeyValuePair_2_tD7776FAD45E0399E85A6820F450F712AC48B28F4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tD7776FAD45E0399E85A6820F450F712AC48B28F4 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mA549807931A8F164EEBAE7C7E0541C5AA957223A_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519 (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90 (const RuntimeMethod* method);
// Gameplay.Components.SpawnerComponent Gameplay.Tower::get_Spawner()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * Tower_get_Spawner_m9689064FF86ACBAEF942AF0147AD2F7B520B0852_inline (Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * __this, const RuntimeMethod* method);
// UnityEngine.Transform Gameplay.Components.SpawnerComponent::get_LaunchTransform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * SpawnerComponent_get_LaunchTransform_mC7512D5937EAA78B457F4110AEA7A651EC2C2A36_inline (SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * __this, const RuntimeMethod* method);
// TValue GenericDictionary`2<System.Int32,Gameplay.UnitType>::get_Item(TKey)
inline int32_t GenericDictionary_2_get_Item_m23E39C5E970445F88B162575DD5118FCCD60D21B (GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93 *, int32_t, const RuntimeMethod*))GenericDictionary_2_get_Item_mA3DED3B7BFC0B023C96F7EC4D48883B41EA09477_gshared)(__this, ___key0, method);
}
// Gameplay.Unit Gameplay.Components.SpawnerComponent::SpawnUnit(Gameplay.UnitType,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * SpawnerComponent_SpawnUnit_mDFD808F071D2577D25A21F6E356C3889E9F69F29 (SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * __this, int32_t ___type0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// Gameplay.Components.MoneyComponent Gameplay.Components.SpawnerComponent::get_Money()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MoneyComponent_t228EEF2620FCABEA0792C76C2698AFA39588683B * SpawnerComponent_get_Money_m0221965A3F92E642D3ACCD6C4A3F4E7D15FC113B_inline (SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * __this, const RuntimeMethod* method);
// System.Single Gameplay.Components.CurrencyComponent`1<Gameplay.Components.MoneyComponent>::get_Current()
inline float CurrencyComponent_1_get_Current_m6459AE4C8551194AF604C2411F405DF4DCD1F49C_inline (CurrencyComponent_1_t66994DE0154F4226B3F3EB58E12A6FFF62D26AB4 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (CurrencyComponent_1_t66994DE0154F4226B3F3EB58E12A6FFF62D26AB4 *, const RuntimeMethod*))CurrencyComponent_1_get_Current_m58C073777FDEA9E810789DA19CC4F09028A1A4AB_gshared_inline)(__this, method);
}
// System.Void Gameplay.Tower/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m530087BC3E59D27A8416E940B4AF9211EA9D02F5 (U3CU3Ec__DisplayClass21_0_t6D6C3347E71A72CF0A4C5FC140F5E3B312BCEEFA * __this, const RuntimeMethod* method);
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.AI.NavMeshSurface>(!!0&)
inline bool Component_TryGetComponent_TisNavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A_mA3DB542D600F84046863E065A99F50A0DBEB395F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A ** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A **, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m409D64ADC25ED175ADC7ED4C3F7ABF5439AD63AF_gshared)(__this, ___component0, method);
}
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate0, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshSurface::BuildNavMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshSurface_BuildNavMesh_mE6606F10EA912379674F43E92D50273AB1A9B4B7 (NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Gameplay.Tower::SpawnAfterTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tower_SpawnAfterTime_m6403F3B8E6A0FA0004EB7B0EE63792E2F235E8AE (Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraMovement/<ZoomDetection>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CZoomDetectionU3Ed__26__ctor_m806ED8237223560EC11B3731018677D40ECBB678 (U3CZoomDetectionU3Ed__26_t411FAB335549F9E9960A87D9EDDFF5452659E998 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void CameraMovement/<ZoomDetection>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CZoomDetectionU3Ed__26_System_IDisposable_Dispose_mB6019C079E4D81339CD3E4477890056CDDA6D40F (U3CZoomDetectionU3Ed__26_t411FAB335549F9E9960A87D9EDDFF5452659E998 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean CameraMovement/<ZoomDetection>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CZoomDetectionU3Ed__26_MoveNext_m14265B6D65D50A15D7259DB5275F1B77FAB243FE (U3CZoomDetectionU3Ed__26_t411FAB335549F9E9960A87D9EDDFF5452659E998 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m868F41761382778B94845B27E2B6D041FE814E88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * V_1 = NULL;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7  V_7;
	memset((&V_7), 0, sizeof(V_7));
	CameraActions_t9335BF1B850A87C0A8FD253B06949F6A64580FAE  V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	float V_14 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0298;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float previousDistance = 0.0f;
		__this->set_U3CpreviousDistanceU3E5__2_3((0.0f));
		// float distance = 0.0f;
		V_2 = (0.0f);
		// RaycastHit[] raycastHits = new RaycastHit[3];
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_4 = (RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09*)(RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09*)SZArrayNew(RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_U3CraycastHitsU3E5__3_4(L_4);
		// int size = 0;
		V_3 = 0;
	}

IL_0040:
	{
		// Vector3 currentPosition = Camera.transform.position;
		CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * L_5 = V_1;
		NullCheck(L_5);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6;
		L_6 = CameraMovement_get_Camera_m00885AAACE0B940467B466EF9158B6E29FB44611_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		// Vector3 targetPosition = currentPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_4;
		V_5 = L_9;
		// switch (SystemInfo.deviceType)
		int32_t L_10;
		L_10 = SystemInfo_get_deviceType_mC7A6628167ECFF848FE509510A6E3E2FA0820100(/*hidden argument*/NULL);
		V_6 = L_10;
		int32_t L_11 = V_6;
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_12 = V_6;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)2))) > ((uint32_t)1))))
		{
			goto IL_0103;
		}
	}
	{
		goto IL_0174;
	}

IL_0071:
	{
		// distance = Vector2.Distance(TouchControls.Touch.PrimaryFingerPosition.ReadValue<Vector2>(),
		//     TouchControls.Touch.SecondaryFingerPosition.ReadValue<Vector2>());
		CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * L_13 = V_1;
		NullCheck(L_13);
		TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * L_14;
		L_14 = CameraMovement_get_TouchControls_m917D5A7526B49BF42DEF623B584E67CABEB411DC_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7  L_15;
		L_15 = TouchControls_get_Touch_m351F7A200C5113C647E02F091E643A3935664CCA(L_14, /*hidden argument*/NULL);
		V_7 = L_15;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_16;
		L_16 = TouchActions_get_PrimaryFingerPosition_m8480F12CFF404B100BC2D202D01C90955049E894((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)(&V_7), /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F(L_16, /*hidden argument*/InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_RuntimeMethod_var);
		CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * L_18 = V_1;
		NullCheck(L_18);
		TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * L_19;
		L_19 = CameraMovement_get_TouchControls_m917D5A7526B49BF42DEF623B584E67CABEB411DC_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7  L_20;
		L_20 = TouchControls_get_Touch_m351F7A200C5113C647E02F091E643A3935664CCA(L_19, /*hidden argument*/NULL);
		V_7 = L_20;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_21;
		L_21 = TouchActions_get_SecondaryFingerPosition_m2B3654918B354379504BCDB9A5DBDB26C4D20491((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)(&V_7), /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		L_22 = InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F(L_21, /*hidden argument*/InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_RuntimeMethod_var);
		float L_23;
		L_23 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_17, L_22, /*hidden argument*/NULL);
		V_2 = L_23;
		// if (distance > previousDistance)
		float L_24 = V_2;
		float L_25 = __this->get_U3CpreviousDistanceU3E5__2_3();
		if ((!(((float)L_24) > ((float)L_25))))
		{
			goto IL_00d6;
		}
	}
	{
		// targetPosition -= Camera.transform.forward;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_5;
		CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * L_27 = V_1;
		NullCheck(L_27);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_28;
		L_28 = CameraMovement_get_Camera_m00885AAACE0B940467B466EF9158B6E29FB44611_inline(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_29, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_26, L_30, /*hidden argument*/NULL);
		V_5 = L_31;
		// distance = -1;
		V_2 = (-1.0f);
		// }
		goto IL_017a;
	}

IL_00d6:
	{
		// else if (distance < previousDistance)
		float L_32 = V_2;
		float L_33 = __this->get_U3CpreviousDistanceU3E5__2_3();
		if ((!(((float)L_32) < ((float)L_33))))
		{
			goto IL_017a;
		}
	}
	{
		// targetPosition += Camera.transform.forward;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_5;
		CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * L_35 = V_1;
		NullCheck(L_35);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_36;
		L_36 = CameraMovement_get_Camera_m00885AAACE0B940467B466EF9158B6E29FB44611_inline(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_37, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_34, L_38, /*hidden argument*/NULL);
		V_5 = L_39;
		// distance = 1;
		V_2 = (1.0f);
		// break;
		goto IL_017a;
	}

IL_0103:
	{
		// distance = Mathf.Clamp(CameraControls.Camera.Zoom.ReadValue<float>(), -1, 1);
		CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * L_40 = V_1;
		NullCheck(L_40);
		CameraControls_tEDA4EF38E586C8A1DC6B93F001F386A7BDD735ED * L_41;
		L_41 = CameraMovement_get_CameraControls_m1941048B0EF9914651C49EDD8190805DA6D9464C_inline(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		CameraActions_t9335BF1B850A87C0A8FD253B06949F6A64580FAE  L_42;
		L_42 = CameraControls_get_Camera_m060167993B5752E89778CBAB413272AF8D926B87(L_41, /*hidden argument*/NULL);
		V_8 = L_42;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_43;
		L_43 = CameraActions_get_Zoom_mD733DD0F4ABA59D67861410F1A62AB978260A0A7((CameraActions_t9335BF1B850A87C0A8FD253B06949F6A64580FAE *)(&V_8), /*hidden argument*/NULL);
		NullCheck(L_43);
		float L_44;
		L_44 = InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m868F41761382778B94845B27E2B6D041FE814E88(L_43, /*hidden argument*/InputAction_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m868F41761382778B94845B27E2B6D041FE814E88_RuntimeMethod_var);
		float L_45;
		L_45 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_44, (-1.0f), (1.0f), /*hidden argument*/NULL);
		V_2 = L_45;
		// if (distance > previousDistance) targetPosition += Camera.transform.forward;
		float L_46 = V_2;
		float L_47 = __this->get_U3CpreviousDistanceU3E5__2_3();
		if ((!(((float)L_46) > ((float)L_47))))
		{
			goto IL_0150;
		}
	}
	{
		// if (distance > previousDistance) targetPosition += Camera.transform.forward;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48 = V_5;
		CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * L_49 = V_1;
		NullCheck(L_49);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_50;
		L_50 = CameraMovement_get_Camera_m00885AAACE0B940467B466EF9158B6E29FB44611_inline(L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_51, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_48, L_52, /*hidden argument*/NULL);
		V_5 = L_53;
		goto IL_017a;
	}

IL_0150:
	{
		// else if (distance < previousDistance) targetPosition -= Camera.transform.forward;
		float L_54 = V_2;
		float L_55 = __this->get_U3CpreviousDistanceU3E5__2_3();
		if ((!(((float)L_54) < ((float)L_55))))
		{
			goto IL_017a;
		}
	}
	{
		// else if (distance < previousDistance) targetPosition -= Camera.transform.forward;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = V_5;
		CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * L_57 = V_1;
		NullCheck(L_57);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_58;
		L_58 = CameraMovement_get_Camera_m00885AAACE0B940467B466EF9158B6E29FB44611_inline(L_57, /*hidden argument*/NULL);
		NullCheck(L_58);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_58, /*hidden argument*/NULL);
		NullCheck(L_59);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_59, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_56, L_60, /*hidden argument*/NULL);
		V_5 = L_61;
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// throw new ArgumentOutOfRangeException();
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_62 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m81CEEF1FCB5EFBBAA39071F48BCFBC16AED0C915(L_62, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CZoomDetectionU3Ed__26_MoveNext_m14265B6D65D50A15D7259DB5275F1B77FAB243FE_RuntimeMethod_var)));
	}

IL_017a:
	{
		// size = Physics.RaycastNonAlloc(currentPosition, Camera.transform.forward, raycastHits);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = V_4;
		CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * L_64 = V_1;
		NullCheck(L_64);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_65;
		L_65 = CameraMovement_get_Camera_m00885AAACE0B940467B466EF9158B6E29FB44611_inline(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66;
		L_66 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_65, /*hidden argument*/NULL);
		NullCheck(L_66);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67;
		L_67 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_66, /*hidden argument*/NULL);
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_68 = __this->get_U3CraycastHitsU3E5__3_4();
		int32_t L_69;
		L_69 = Physics_RaycastNonAlloc_m9076DDE1A65F87DB3D2824DAD4E5B8B534159F1F(L_63, L_67, L_68, /*hidden argument*/NULL);
		V_3 = L_69;
		// for (int i = 0; i < size; i++)
		V_9 = 0;
		goto IL_0279;
	}

IL_01a0:
	{
		// var hitInfo = raycastHits[i];
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_70 = __this->get_U3CraycastHitsU3E5__3_4();
		int32_t L_71 = V_9;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_10 = L_73;
		// if (!hitInfo.collider.CompareTag("Ground")) continue;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_74;
		L_74 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_10), /*hidden argument*/NULL);
		NullCheck(L_74);
		bool L_75;
		L_75 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_74, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, /*hidden argument*/NULL);
		if (!L_75)
		{
			goto IL_0273;
		}
	}
	{
		// var slerp = Vector3.Slerp(currentPosition, targetPosition, Time.deltaTime * zoomSpeed);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77 = V_5;
		float L_78;
		L_78 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * L_79 = V_1;
		NullCheck(L_79);
		float L_80 = L_79->get_zoomSpeed_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81;
		L_81 = Vector3_Slerp_mEDBE029B9D394258437E16D858F2C96D72A36B7B(L_76, L_77, ((float)il2cpp_codegen_multiply((float)L_78, (float)L_80)), /*hidden argument*/NULL);
		V_11 = L_81;
		// var offset = slerp - currentPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82 = V_11;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84;
		L_84 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_82, L_83, /*hidden argument*/NULL);
		V_12 = L_84;
		// var overMinDistance = hitInfo.distance - offset.magnitude > minZoomDistance;
		float L_85;
		L_85 = RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_10), /*hidden argument*/NULL);
		float L_86;
		L_86 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_12), /*hidden argument*/NULL);
		CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * L_87 = V_1;
		NullCheck(L_87);
		float L_88 = L_87->get_minZoomDistance_10();
		// var underMaxDistance = hitInfo.distance + offset.magnitude < maxZoomDistance;
		float L_89;
		L_89 = RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_10), /*hidden argument*/NULL);
		float L_90;
		L_90 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_12), /*hidden argument*/NULL);
		CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * L_91 = V_1;
		NullCheck(L_91);
		float L_92 = L_91->get_maxZoomDistance_11();
		V_13 = (bool)((((float)((float)il2cpp_codegen_add((float)L_89, (float)L_90))) < ((float)L_92))? 1 : 0);
		// var dot = Vector3.Dot(Camera.transform.forward, offset.normalized);
		CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * L_93 = V_1;
		NullCheck(L_93);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_94;
		L_94 = CameraMovement_get_Camera_m00885AAACE0B940467B466EF9158B6E29FB44611_inline(L_93, /*hidden argument*/NULL);
		NullCheck(L_94);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_95;
		L_95 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_94, /*hidden argument*/NULL);
		NullCheck(L_95);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96;
		L_96 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_95, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_97;
		L_97 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_12), /*hidden argument*/NULL);
		float L_98;
		L_98 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_96, L_97, /*hidden argument*/NULL);
		V_14 = L_98;
		// if (overMinDistance && dot > 0.0f)
		if (!((((float)((float)il2cpp_codegen_subtract((float)L_85, (float)L_86))) > ((float)L_88))? 1 : 0))
		{
			goto IL_0254;
		}
	}
	{
		float L_99 = V_14;
		if ((!(((float)L_99) > ((float)(0.0f)))))
		{
			goto IL_0254;
		}
	}
	{
		// Camera.transform.position = slerp;
		CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * L_100 = V_1;
		NullCheck(L_100);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_101;
		L_101 = CameraMovement_get_Camera_m00885AAACE0B940467B466EF9158B6E29FB44611_inline(L_100, /*hidden argument*/NULL);
		NullCheck(L_101);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_102;
		L_102 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_101, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_103 = V_11;
		NullCheck(L_102);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_102, L_103, /*hidden argument*/NULL);
		// }
		goto IL_0273;
	}

IL_0254:
	{
		// else if (underMaxDistance && dot < 0.0f)
		bool L_104 = V_13;
		if (!L_104)
		{
			goto IL_0273;
		}
	}
	{
		float L_105 = V_14;
		if ((!(((float)L_105) < ((float)(0.0f)))))
		{
			goto IL_0273;
		}
	}
	{
		// Camera.transform.position = slerp;
		CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * L_106 = V_1;
		NullCheck(L_106);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_107;
		L_107 = CameraMovement_get_Camera_m00885AAACE0B940467B466EF9158B6E29FB44611_inline(L_106, /*hidden argument*/NULL);
		NullCheck(L_107);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_108;
		L_108 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_107, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109 = V_11;
		NullCheck(L_108);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_108, L_109, /*hidden argument*/NULL);
	}

IL_0273:
	{
		// for (int i = 0; i < size; i++)
		int32_t L_110 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)1));
	}

IL_0279:
	{
		// for (int i = 0; i < size; i++)
		int32_t L_111 = V_9;
		int32_t L_112 = V_3;
		if ((((int32_t)L_111) < ((int32_t)L_112)))
		{
			goto IL_01a0;
		}
	}
	{
		// previousDistance = distance;
		float L_113 = V_2;
		__this->set_U3CpreviousDistanceU3E5__2_3(L_113);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0298:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_0040;
	}
}
// System.Object CameraMovement/<ZoomDetection>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CZoomDetectionU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m65040FD81DBD2AADB03FE67AE0CC4B48571DB095 (U3CZoomDetectionU3Ed__26_t411FAB335549F9E9960A87D9EDDFF5452659E998 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void CameraMovement/<ZoomDetection>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CZoomDetectionU3Ed__26_System_Collections_IEnumerator_Reset_mF5D959BA1EC27D3E72184D10E923BC11CC606B8C (U3CZoomDetectionU3Ed__26_t411FAB335549F9E9960A87D9EDDFF5452659E998 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CZoomDetectionU3Ed__26_System_Collections_IEnumerator_Reset_mF5D959BA1EC27D3E72184D10E923BC11CC606B8C_RuntimeMethod_var)));
	}
}
// System.Object CameraMovement/<ZoomDetection>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CZoomDetectionU3Ed__26_System_Collections_IEnumerator_get_Current_m8C06B0BF8FA7CDCB72BD27703D554F3BC073228B (U3CZoomDetectionU3Ed__26_t411FAB335549F9E9960A87D9EDDFF5452659E998 * __this, const RuntimeMethod* method)
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
// System.Void CandidateMap/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0731097AB2F613D4C6BCBBF4D99BB9A7DF20CE45 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5A5947883458A78FB78DB005C350DEA924B5FA55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5A5947883458A78FB78DB005C350DEA924B5FA55 * L_0 = (U3CU3Ec_t5A5947883458A78FB78DB005C350DEA924B5FA55 *)il2cpp_codegen_object_new(U3CU3Ec_t5A5947883458A78FB78DB005C350DEA924B5FA55_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA88E8D4060708BA3CB2CAFAF4E7767EC2DBA1BE7(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5A5947883458A78FB78DB005C350DEA924B5FA55_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5A5947883458A78FB78DB005C350DEA924B5FA55_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void CandidateMap/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA88E8D4060708BA3CB2CAFAF4E7767EC2DBA1BE7 (U3CU3Ec_t5A5947883458A78FB78DB005C350DEA924B5FA55 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CandidateMap/<>c::<Repair>b__29_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CRepairU3Eb__29_0_mA649641B49BF404A6BCE295599909BFD59E53DF7 (U3CU3Ec_t5A5947883458A78FB78DB005C350DEA924B5FA55 * __this, bool ___obstacle0, const RuntimeMethod* method)
{
	{
		// int numberOfObstacles = _obstaclesArray.Count(obstacle => obstacle);
		bool L_0 = ___obstacle0;
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
// System.Void DropTween/<Grow>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGrowU3Ed__4__ctor_mF96F383BB0D52BA5E4201AD86D7E1D0A9EE398AC (U3CGrowU3Ed__4_t3769F20A3FC9616EE97D394AFF0C7A3C5F86BCA8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DropTween/<Grow>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGrowU3Ed__4_System_IDisposable_Dispose_m445E21CBBF47F8D24407CC4DC6ED659F71EF91C8 (U3CGrowU3Ed__4_t3769F20A3FC9616EE97D394AFF0C7A3C5F86BCA8 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DropTween/<Grow>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGrowU3Ed__4_MoveNext_m64D5956C9BA238F8DBF309BDD2E3D1B05E198FA1 (U3CGrowU3Ed__4_t3769F20A3FC9616EE97D394AFF0C7A3C5F86BCA8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	DropTween_t2F1DA2E2AFC0F76F7DC4CFEEA07D5D893E5D6635 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DropTween_t2F1DA2E2AFC0F76F7DC4CFEEA07D5D893E5D6635 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_008f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Vector3 position = gameObject.transform.position;
		DropTween_t2F1DA2E2AFC0F76F7DC4CFEEA07D5D893E5D6635 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		__this->set_U3CpositionU3E5__2_3(L_7);
		// float currentTime = 0f;
		__this->set_U3CcurrentTimeU3E5__3_4((0.0f));
	}

IL_003f:
	{
		// gameObject.transform.position = Vector3.Lerp(position, _destination, currentTime / scaleTime);
		DropTween_t2F1DA2E2AFC0F76F7DC4CFEEA07D5D893E5D6635 * L_8 = V_1;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = __this->get_U3CpositionU3E5__2_3();
		DropTween_t2F1DA2E2AFC0F76F7DC4CFEEA07D5D893E5D6635 * L_12 = V_1;
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = L_12->get__destination_6();
		float L_14 = __this->get_U3CcurrentTimeU3E5__3_4();
		DropTween_t2F1DA2E2AFC0F76F7DC4CFEEA07D5D893E5D6635 * L_15 = V_1;
		NullCheck(L_15);
		float L_16 = L_15->get_scaleTime_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_11, L_13, ((float)((float)L_14/(float)L_16)), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_17, /*hidden argument*/NULL);
		// currentTime += Time.deltaTime;
		float L_18 = __this->get_U3CcurrentTimeU3E5__3_4();
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CcurrentTimeU3E5__3_4(((float)il2cpp_codegen_add((float)L_18, (float)L_19)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_008f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// } while (currentTime <= scaleTime);
		float L_20 = __this->get_U3CcurrentTimeU3E5__3_4();
		DropTween_t2F1DA2E2AFC0F76F7DC4CFEEA07D5D893E5D6635 * L_21 = V_1;
		NullCheck(L_21);
		float L_22 = L_21->get_scaleTime_5();
		if ((((float)L_20) <= ((float)L_22)))
		{
			goto IL_003f;
		}
	}
	{
		// gameObject.transform.position = _destination;
		DropTween_t2F1DA2E2AFC0F76F7DC4CFEEA07D5D893E5D6635 * L_23 = V_1;
		NullCheck(L_23);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		DropTween_t2F1DA2E2AFC0F76F7DC4CFEEA07D5D893E5D6635 * L_26 = V_1;
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = L_26->get__destination_6();
		NullCheck(L_25);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_25, L_27, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object DropTween/<Grow>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGrowU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9C70D851A2DED94AAF6D8EFE61F3F1738A8CC5A9 (U3CGrowU3Ed__4_t3769F20A3FC9616EE97D394AFF0C7A3C5F86BCA8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DropTween/<Grow>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGrowU3Ed__4_System_Collections_IEnumerator_Reset_m9A34B48D3026138239AF3AC5E6BB59DCCDA3E2D3 (U3CGrowU3Ed__4_t3769F20A3FC9616EE97D394AFF0C7A3C5F86BCA8 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGrowU3Ed__4_System_Collections_IEnumerator_Reset_m9A34B48D3026138239AF3AC5E6BB59DCCDA3E2D3_RuntimeMethod_var)));
	}
}
// System.Object DropTween/<Grow>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGrowU3Ed__4_System_Collections_IEnumerator_get_Current_m3290C47F64392CC2EDD2E2574B157A8AF245A3CD (U3CGrowU3Ed__4_t3769F20A3FC9616EE97D394AFF0C7A3C5F86BCA8 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DDefeat_tFE73F7724C21B235D30257FDD83600D45DCBF549 (DDefeat_tFE73F7724C21B235D30257FDD83600D45DCBF549 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Managers.GameManager/DDefeat::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DDefeat__ctor_m331DEE99FC05BE17A32C5A1C56B0B44D0EDDCC3B (DDefeat_tFE73F7724C21B235D30257FDD83600D45DCBF549 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Managers.GameManager/DDefeat::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DDefeat_Invoke_m5EA2EAD0081E7BAAB004D79D9E787848698D1CC6 (DDefeat_tFE73F7724C21B235D30257FDD83600D45DCBF549 * __this, const RuntimeMethod* method)
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Managers.GameManager/DDefeat::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DDefeat_BeginInvoke_m26790470EF995F9CD7189DF5CED72B4B87DE95DD (DDefeat_tFE73F7724C21B235D30257FDD83600D45DCBF549 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Managers.GameManager/DDefeat::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DDefeat_EndInvoke_m0E598D0ECA282A8DF2A32DF6894677AAC63366D7 (DDefeat_tFE73F7724C21B235D30257FDD83600D45DCBF549 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DWin_t27AEF6F901F3E8F569F78C37FF03308C57EE2D37 (DWin_t27AEF6F901F3E8F569F78C37FF03308C57EE2D37 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Managers.GameManager/DWin::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DWin__ctor_mCD53629F11517C6339A3304ED920E7C9FB63C2E4 (DWin_t27AEF6F901F3E8F569F78C37FF03308C57EE2D37 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Managers.GameManager/DWin::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DWin_Invoke_m9781EDA3AA1CD62CE649B06AD9A70247049DF56A (DWin_t27AEF6F901F3E8F569F78C37FF03308C57EE2D37 * __this, const RuntimeMethod* method)
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Managers.GameManager/DWin::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DWin_BeginInvoke_mFF211CFE25F513866341E59A0E9A8F00EC9025CB (DWin_t27AEF6F901F3E8F569F78C37FF03308C57EE2D37 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Managers.GameManager/DWin::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DWin_EndInvoke_m1870DCCDA1F42470A2B119A6E0E23D09F55985F1 (DWin_t27AEF6F901F3E8F569F78C37FF03308C57EE2D37 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GameStateChangeHandler_tAD426F7A2DBB4222FA6503DDBE98341005D5B395 (GameStateChangeHandler_tAD426F7A2DBB4222FA6503DDBE98341005D5B395 * __this, int32_t ___newGameState0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___newGameState0);

}
// System.Void GameState.GameStateManager/GameStateChangeHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStateChangeHandler__ctor_mE97BB6D839F8419DA3D73242F37A0358D60DA09C (GameStateChangeHandler_tAD426F7A2DBB4222FA6503DDBE98341005D5B395 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameState.GameStateManager/GameStateChangeHandler::Invoke(GameState.GameState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStateChangeHandler_Invoke_m69DCEA1255FEE5621CB4BC9185ED579312A0F7B3 (GameStateChangeHandler_tAD426F7A2DBB4222FA6503DDBE98341005D5B395 * __this, int32_t ___newGameState0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___newGameState0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___newGameState0, targetMethod);
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
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___newGameState0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___newGameState0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___newGameState0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___newGameState0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___newGameState0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___newGameState0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult GameState.GameStateManager/GameStateChangeHandler::BeginInvoke(GameState.GameState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameStateChangeHandler_BeginInvoke_m4E82742FA083C21C10959119358793BED2D7FFB4 (GameStateChangeHandler_tAD426F7A2DBB4222FA6503DDBE98341005D5B395 * __this, int32_t ___newGameState0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameState_t0675C50881EA81C1735B4053426B5A0FA3FEF2DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(GameState_t0675C50881EA81C1735B4053426B5A0FA3FEF2DB_il2cpp_TypeInfo_var, &___newGameState0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void GameState.GameStateManager/GameStateChangeHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStateChangeHandler_EndInvoke_m61577D7EF8BB0AED0449008DCA641C9D879B41AF (GameStateChangeHandler_tAD426F7A2DBB4222FA6503DDBE98341005D5B395 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Gameplay.Components.HealthComponent/DDestroyUnit::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DDestroyUnit__ctor_m7E563E5A5CB061D1C6536044E9CB373025F4505D (DDestroyUnit_t5D4EC02605F1AB7D99B9CEAF00B2459599908E93 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Gameplay.Components.HealthComponent/DDestroyUnit::Invoke(Gameplay.Unit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DDestroyUnit_Invoke_m4D0F84C985253DC0280213F9801FCA5DFFE40F93 (DDestroyUnit_t5D4EC02605F1AB7D99B9CEAF00B2459599908E93 * __this, Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * ___unit0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___unit0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___unit0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___unit0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___unit0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___unit0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___unit0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___unit0, targetMethod);
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
						GenericInterfaceActionInvoker1< Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * >::Invoke(targetMethod, targetThis, ___unit0);
					else
						GenericVirtActionInvoker1< Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * >::Invoke(targetMethod, targetThis, ___unit0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___unit0);
					else
						VirtActionInvoker1< Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___unit0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___unit0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___unit0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Gameplay.Components.HealthComponent/DDestroyUnit::BeginInvoke(Gameplay.Unit,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DDestroyUnit_BeginInvoke_mB6BA9E9652C95D4E36C6117B3A822613951B229A (DDestroyUnit_t5D4EC02605F1AB7D99B9CEAF00B2459599908E93 * __this, Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * ___unit0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___unit0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Gameplay.Components.HealthComponent/DDestroyUnit::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DDestroyUnit_EndInvoke_mB4C3E90146559D3C9EC6564BBA817351AE7C886E (DDestroyUnit_t5D4EC02605F1AB7D99B9CEAF00B2459599908E93 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MapBrain/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDC6BE1AEE6AAABD597340ABD48B7C6DBF1D1B967 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A143AFC59360CD7E27C34736D3488A694DDD541_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1A143AFC59360CD7E27C34736D3488A694DDD541 * L_0 = (U3CU3Ec_t1A143AFC59360CD7E27C34736D3488A694DDD541 *)il2cpp_codegen_object_new(U3CU3Ec_t1A143AFC59360CD7E27C34736D3488A694DDD541_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mFEA67FCA2C0AB3E1D6C71C52C5554D3AED5DD4E3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t1A143AFC59360CD7E27C34736D3488A694DDD541_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A143AFC59360CD7E27C34736D3488A694DDD541_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MapBrain/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFEA67FCA2C0AB3E1D6C71C52C5554D3AED5DD4E3 (U3CU3Ec_t1A143AFC59360CD7E27C34736D3488A694DDD541 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MapBrain/<>c::<CalculateFitness>b__45_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCalculateFitnessU3Eb__45_0_mE98552BA1B75D66815B38B0217258894868F95DB (U3CU3Ec_t1A143AFC59360CD7E27C34736D3488A694DDD541 * __this, bool ___isObstacle0, const RuntimeMethod* method)
{
	{
		// int obstaclesCount = mapData.obstacleArray.Count(isObstacle => isObstacle);
		bool L_0 = ___isObstacle0;
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
// System.Void MapBrain/<>c__DisplayClass48_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0__ctor_m55A5072FB9EDC812F7B4D4F77162C7D8A719FC2C (U3CU3Ec__DisplayClass48_0_tFF3EE653C316E214065CE03767BDBDC809FEF65B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MapBrain/<>c__DisplayClass48_0::<DestroyTower>b__0(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass48_0_U3CDestroyTowerU3Eb__0_m8AFAC315CCB1A9C011F903D0589E9FB40A5BF644 (U3CU3Ec__DisplayClass48_0_tFF3EE653C316E214065CE03767BDBDC809FEF65B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method)
{
	{
		// int index = BestMap.Towers.FindIndex(pos => pos == position);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___pos0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_position_0();
		bool L_2;
		L_2 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void MapBrain/<GeneticAlgorithm>d__44::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGeneticAlgorithmU3Ed__44__ctor_mC2D4870E0ED8FA1037209EA486F18EEEB0B9E05E (U3CGeneticAlgorithmU3Ed__44_t19064C60D68C0148305535C3A644C2E1BD2AE343 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MapBrain/<GeneticAlgorithm>d__44::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGeneticAlgorithmU3Ed__44_System_IDisposable_Dispose_mB986AA533B8816917441C85628AD9A0A4CA2DC3F (U3CGeneticAlgorithmU3Ed__44_t19064C60D68C0148305535C3A644C2E1BD2AE343 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MapBrain/<GeneticAlgorithm>d__44::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGeneticAlgorithmU3Ed__44_MoveNext_m6E4D100D85716EC55A3D32022DFD85EA8D2AA516 (U3CGeneticAlgorithmU3Ed__44_t19064C60D68C0148305535C3A644C2E1BD2AE343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD7A8ED267E8DB3120D7F8D91493890613845A6E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF064953A7828971045DA03225B8BD06113C4B7B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD2FBE59C7113EC1BC94930B07794BC4CBDDCEA86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0C1CF4D3DBB67BE8CD6C4A504DC19754C874A717_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB42E239E8F6236DEE9D0A234FB149B80243A0669_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1742EB5CB09CD424413E0CBFEC1849F4963E7C52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFAFE1697FE69956771C0F10056006C6261D4E4DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3A81C1ED01765116A1AD8A8636BC4281F6586E68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * V_1 = NULL;
	int32_t V_2 = 0;
	CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * V_3 = NULL;
	Enumerator_t01E2365B866BF22173D7F428BD227FC7BD86BC7A  V_4;
	memset((&V_4), 0, sizeof(V_4));
	CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * V_5 = NULL;
	int32_t V_6 = 0;
	List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 * V_7 = NULL;
	CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * V_8 = NULL;
	CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * V_9 = NULL;
	CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * V_10 = NULL;
	CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * V_11 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00db;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// _totalFitnessCurrentGeneration = 0;
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_4 = V_1;
		NullCheck(L_4);
		L_4->set__totalFitnessCurrentGeneration_11(0);
		// int bestFitnessCurrentGeneration = 0;
		V_2 = 0;
		// CandidateMap bestMapCurrentGeneration = null;
		V_3 = (CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED *)NULL;
		// foreach(CandidateMap candidateMap in _currentGeneration)
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_5 = V_1;
		NullCheck(L_5);
		List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 * L_6 = L_5->get__currentGeneration_10();
		NullCheck(L_6);
		Enumerator_t01E2365B866BF22173D7F428BD227FC7BD86BC7A  L_7;
		L_7 = List_1_GetEnumerator_mB42E239E8F6236DEE9D0A234FB149B80243A0669(L_6, /*hidden argument*/List_1_GetEnumerator_mB42E239E8F6236DEE9D0A234FB149B80243A0669_RuntimeMethod_var);
		V_4 = L_7;
	}

IL_0039:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0083;
		}

IL_003b:
		{
			// foreach(CandidateMap candidateMap in _currentGeneration)
			CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * L_8;
			L_8 = Enumerator_get_Current_mD2FBE59C7113EC1BC94930B07794BC4CBDDCEA86_inline((Enumerator_t01E2365B866BF22173D7F428BD227FC7BD86BC7A *)(&V_4), /*hidden argument*/Enumerator_get_Current_mD2FBE59C7113EC1BC94930B07794BC4CBDDCEA86_RuntimeMethod_var);
			V_5 = L_8;
			// candidateMap.FindPath();
			CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * L_9 = V_5;
			NullCheck(L_9);
			CandidateMap_FindPath_m210E125FB8D0A8F8D39626520177F6BE095F694B(L_9, /*hidden argument*/NULL);
			// candidateMap.Repair();
			CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * L_10 = V_5;
			NullCheck(L_10);
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_11;
			L_11 = CandidateMap_Repair_m032BD67FA41AE2B228D96A2203E42FEC3234663E(L_10, /*hidden argument*/NULL);
			// candidateMap.GenerateTowers();
			CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * L_12 = V_5;
			NullCheck(L_12);
			CandidateMap_GenerateTowers_m2BCB172506C3AA8194B173B9DE48748EC667DE98(L_12, /*hidden argument*/NULL);
			// int fitness = CalculateFitness(candidateMap.ReturnMapData());
			MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_13 = V_1;
			CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * L_14 = V_5;
			NullCheck(L_14);
			MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8  L_15;
			L_15 = CandidateMap_ReturnMapData_m84108E297CF5A697BA422AD1C669DD8C9659AD7A(L_14, /*hidden argument*/NULL);
			NullCheck(L_13);
			int32_t L_16;
			L_16 = MapBrain_CalculateFitness_m7CBE8AEF967442BAA2DBC445FA5AB3699987814A(L_13, L_15, /*hidden argument*/NULL);
			V_6 = L_16;
			// _totalFitnessCurrentGeneration += fitness;
			MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_17 = V_1;
			MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_18 = V_1;
			NullCheck(L_18);
			int32_t L_19 = L_18->get__totalFitnessCurrentGeneration_11();
			int32_t L_20 = V_6;
			NullCheck(L_17);
			L_17->set__totalFitnessCurrentGeneration_11(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20)));
			// if (fitness > bestFitnessCurrentGeneration)
			int32_t L_21 = V_6;
			int32_t L_22 = V_2;
			if ((((int32_t)L_21) <= ((int32_t)L_22)))
			{
				goto IL_0083;
			}
		}

IL_007d:
		{
			// bestFitnessCurrentGeneration = fitness;
			int32_t L_23 = V_6;
			V_2 = L_23;
			// bestMapCurrentGeneration = candidateMap;
			CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * L_24 = V_5;
			V_3 = L_24;
		}

IL_0083:
		{
			// foreach(CandidateMap candidateMap in _currentGeneration)
			bool L_25;
			L_25 = Enumerator_MoveNext_mF064953A7828971045DA03225B8BD06113C4B7B9((Enumerator_t01E2365B866BF22173D7F428BD227FC7BD86BC7A *)(&V_4), /*hidden argument*/Enumerator_MoveNext_mF064953A7828971045DA03225B8BD06113C4B7B9_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_003b;
			}
		}

IL_008c:
		{
			IL2CPP_LEAVE(0x9C, FINALLY_008e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008e;
	}

FINALLY_008e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD7A8ED267E8DB3120D7F8D91493890613845A6E4((Enumerator_t01E2365B866BF22173D7F428BD227FC7BD86BC7A *)(&V_4), /*hidden argument*/Enumerator_Dispose_mD7A8ED267E8DB3120D7F8D91493890613845A6E4_RuntimeMethod_var);
		IL2CPP_END_FINALLY(142)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(142)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x9C, IL_009c)
	}

IL_009c:
	{
		// if (bestFitnessCurrentGeneration > _bestFitnessAllTime)
		int32_t L_26 = V_2;
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_27 = V_1;
		NullCheck(L_27);
		int32_t L_28 = L_27->get__bestFitnessAllTime_12();
		if ((((int32_t)L_26) <= ((int32_t)L_28)))
		{
			goto IL_00c7;
		}
	}
	{
		// _bestFitnessAllTime = bestFitnessCurrentGeneration;
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_29 = V_1;
		int32_t L_30 = V_2;
		NullCheck(L_29);
		L_29->set__bestFitnessAllTime_12(L_30);
		// if (bestMapCurrentGeneration != null) BestMap = bestMapCurrentGeneration.DeepClone();
		CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * L_31 = V_3;
		if (!L_31)
		{
			goto IL_00bb;
		}
	}
	{
		// if (bestMapCurrentGeneration != null) BestMap = bestMapCurrentGeneration.DeepClone();
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_32 = V_1;
		CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * L_33 = V_3;
		NullCheck(L_33);
		CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * L_34;
		L_34 = CandidateMap_DeepClone_m3F6B8C9CF1AD038AACB92A4868C286C9246F3184(L_33, /*hidden argument*/NULL);
		NullCheck(L_32);
		MapBrain_set_BestMap_m28418E4AF8606EB8B10E2BDBB61DBFDFA8DAF308_inline(L_32, L_34, /*hidden argument*/NULL);
	}

IL_00bb:
	{
		// _bestMapGenerationNumber = _generationNumber;
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_35 = V_1;
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_36 = V_1;
		NullCheck(L_36);
		int32_t L_37 = L_36->get__generationNumber_15();
		NullCheck(L_35);
		L_35->set__bestMapGenerationNumber_14(L_37);
	}

IL_00c7:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_38 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_38, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_38);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00db:
	{
		__this->set_U3CU3E1__state_0((-1));
		// UIController.instance.SetLoadingValue(_generationNumber / (float)generationLimit);
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_39 = ((UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_StaticFields*)il2cpp_codegen_static_fields_for(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182_il2cpp_TypeInfo_var))->get_instance_4();
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_40 = V_1;
		NullCheck(L_40);
		int32_t L_41 = L_40->get__generationNumber_15();
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_42 = V_1;
		NullCheck(L_42);
		int32_t L_43 = L_42->get_generationLimit_9();
		NullCheck(L_39);
		UIController_SetLoadingValue_mEDE177EC488CDD75ECD963FC0CA30C284C0CE2AF(L_39, ((float)((float)((float)((float)L_41))/(float)((float)((float)L_43)))), /*hidden argument*/NULL);
		// _generationNumber++;
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_44 = V_1;
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_45 = V_1;
		NullCheck(L_45);
		int32_t L_46 = L_45->get__generationNumber_15();
		NullCheck(L_44);
		L_44->set__generationNumber_15(((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1)));
		// if (_generationNumber < generationLimit)
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_47 = V_1;
		NullCheck(L_47);
		int32_t L_48 = L_47->get__generationNumber_15();
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_49 = V_1;
		NullCheck(L_49);
		int32_t L_50 = L_49->get_generationLimit_9();
		if ((((int32_t)L_48) >= ((int32_t)L_50)))
		{
			goto IL_01a9;
		}
	}
	{
		// List<CandidateMap> nextGeneration = new List<CandidateMap>();
		List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 * L_51 = (List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 *)il2cpp_codegen_object_new(List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9_il2cpp_TypeInfo_var);
		List_1__ctor_m1742EB5CB09CD424413E0CBFEC1849F4963E7C52(L_51, /*hidden argument*/List_1__ctor_m1742EB5CB09CD424413E0CBFEC1849F4963E7C52_RuntimeMethod_var);
		V_7 = L_51;
		goto IL_0183;
	}

IL_0123:
	{
		// CandidateMap parent1 = _currentGeneration[RouletteWheelSelection()];
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_52 = V_1;
		NullCheck(L_52);
		List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 * L_53 = L_52->get__currentGeneration_10();
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_54 = V_1;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = MapBrain_RouletteWheelSelection_m99575A2613C012CAB80E1414A23A48CDA409841D(L_54, /*hidden argument*/NULL);
		NullCheck(L_53);
		CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * L_56;
		L_56 = List_1_get_Item_m3A81C1ED01765116A1AD8A8636BC4281F6586E68_inline(L_53, L_55, /*hidden argument*/List_1_get_Item_m3A81C1ED01765116A1AD8A8636BC4281F6586E68_RuntimeMethod_var);
		V_8 = L_56;
		// CandidateMap parent2 = _currentGeneration[RouletteWheelSelection()];
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_57 = V_1;
		NullCheck(L_57);
		List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 * L_58 = L_57->get__currentGeneration_10();
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_59 = V_1;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = MapBrain_RouletteWheelSelection_m99575A2613C012CAB80E1414A23A48CDA409841D(L_59, /*hidden argument*/NULL);
		NullCheck(L_58);
		CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * L_61;
		L_61 = List_1_get_Item_m3A81C1ED01765116A1AD8A8636BC4281F6586E68_inline(L_58, L_60, /*hidden argument*/List_1_get_Item_m3A81C1ED01765116A1AD8A8636BC4281F6586E68_RuntimeMethod_var);
		V_9 = L_61;
		// CrossoverParents(parent1, parent2, out var child1, out var child2);
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_62 = V_1;
		CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * L_63 = V_8;
		CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * L_64 = V_9;
		NullCheck(L_62);
		MapBrain_CrossoverParents_m807768C99979A13081CE15FB075A387D265BC2D5(L_62, L_63, L_64, (CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED **)(&V_10), (CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED **)(&V_11), /*hidden argument*/NULL);
		// child1.AddMutation(_mutationRatePercent);
		CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * L_65 = V_10;
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_66 = V_1;
		NullCheck(L_66);
		double L_67 = L_66->get__mutationRatePercent_8();
		NullCheck(L_65);
		CandidateMap_AddMutation_m295048909B05ACFA408F114E765F896EEDCCFA2A(L_65, L_67, /*hidden argument*/NULL);
		// child2.AddMutation(_mutationRatePercent);
		CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * L_68 = V_11;
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_69 = V_1;
		NullCheck(L_69);
		double L_70 = L_69->get__mutationRatePercent_8();
		NullCheck(L_68);
		CandidateMap_AddMutation_m295048909B05ACFA408F114E765F896EEDCCFA2A(L_68, L_70, /*hidden argument*/NULL);
		// nextGeneration.Add(child1);
		List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 * L_71 = V_7;
		CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * L_72 = V_10;
		NullCheck(L_71);
		List_1_Add_m0C1CF4D3DBB67BE8CD6C4A504DC19754C874A717(L_71, L_72, /*hidden argument*/List_1_Add_m0C1CF4D3DBB67BE8CD6C4A504DC19754C874A717_RuntimeMethod_var);
		// nextGeneration.Add(child2);
		List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 * L_73 = V_7;
		CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * L_74 = V_11;
		NullCheck(L_73);
		List_1_Add_m0C1CF4D3DBB67BE8CD6C4A504DC19754C874A717(L_73, L_74, /*hidden argument*/List_1_Add_m0C1CF4D3DBB67BE8CD6C4A504DC19754C874A717_RuntimeMethod_var);
	}

IL_0183:
	{
		// while (nextGeneration.Count < populationSize)
		List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 * L_75 = V_7;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = List_1_get_Count_mFAFE1697FE69956771C0F10056006C6261D4E4DB_inline(L_75, /*hidden argument*/List_1_get_Count_mFAFE1697FE69956771C0F10056006C6261D4E4DB_RuntimeMethod_var);
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_77 = V_1;
		NullCheck(L_77);
		int32_t L_78 = L_77->get_populationSize_4();
		if ((((int32_t)L_76) < ((int32_t)L_78)))
		{
			goto IL_0123;
		}
	}
	{
		// _currentGeneration = nextGeneration;
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_79 = V_1;
		List_1_t325313424D24B91DF256A4956BF8358D4FC3D6E9 * L_80 = V_7;
		NullCheck(L_79);
		L_79->set__currentGeneration_10(L_80);
		// StartCoroutine(GeneticAlgorithm());
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_81 = V_1;
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_82 = V_1;
		NullCheck(L_82);
		RuntimeObject* L_83;
		L_83 = MapBrain_GeneticAlgorithm_m9B966A68FCF221BF33B4ADC63A5E3B7D5B32FD93(L_82, /*hidden argument*/NULL);
		NullCheck(L_81);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_84;
		L_84 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_81, L_83, /*hidden argument*/NULL);
		// }
		goto IL_01af;
	}

IL_01a9:
	{
		// ShowResults();
		MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * L_85 = V_1;
		NullCheck(L_85);
		MapBrain_ShowResults_m7B2E3B966C6290DE3CF939F4D2C51C28D5DFE53E(L_85, /*hidden argument*/NULL);
	}

IL_01af:
	{
		// }
		return (bool)0;
	}
}
// System.Object MapBrain/<GeneticAlgorithm>d__44::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGeneticAlgorithmU3Ed__44_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC1D5274B2ADE6B09DA1F632C40A894E26CFEFDF3 (U3CGeneticAlgorithmU3Ed__44_t19064C60D68C0148305535C3A644C2E1BD2AE343 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MapBrain/<GeneticAlgorithm>d__44::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGeneticAlgorithmU3Ed__44_System_Collections_IEnumerator_Reset_mC9AF57B09EE85ABDB11DFF3FF36CFAA4CC68DD1F (U3CGeneticAlgorithmU3Ed__44_t19064C60D68C0148305535C3A644C2E1BD2AE343 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGeneticAlgorithmU3Ed__44_System_Collections_IEnumerator_Reset_mC9AF57B09EE85ABDB11DFF3FF36CFAA4CC68DD1F_RuntimeMethod_var)));
	}
}
// System.Object MapBrain/<GeneticAlgorithm>d__44::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGeneticAlgorithmU3Ed__44_System_Collections_IEnumerator_get_Current_m6AF4B5BB33F9794E402A0B2DCE26662A91DFB45E (U3CGeneticAlgorithmU3Ed__44_t19064C60D68C0148305535C3A644C2E1BD2AE343 * __this, const RuntimeMethod* method)
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
// System.Void MapVisualizer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m94ACBB80AE10AC12097511AA56DACED0138EE774 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2D532FC10FA382DB658EF3AEA702C72902863E54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2D532FC10FA382DB658EF3AEA702C72902863E54 * L_0 = (U3CU3Ec_t2D532FC10FA382DB658EF3AEA702C72902863E54 *)il2cpp_codegen_object_new(U3CU3Ec_t2D532FC10FA382DB658EF3AEA702C72902863E54_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m631A4356C2BE462C74907308BB60EC301DA24BEA(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2D532FC10FA382DB658EF3AEA702C72902863E54_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D532FC10FA382DB658EF3AEA702C72902863E54_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MapVisualizer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m631A4356C2BE462C74907308BB60EC301DA24BEA (U3CU3Ec_t2D532FC10FA382DB658EF3AEA702C72902863E54 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MapVisualizer/<>c::<DestroyTower>b__22_0(System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CDestroyTowerU3Eb__22_0_m4338CE262537536AA5B039CE6147D94F57D811AA (U3CU3Ec_t2D532FC10FA382DB658EF3AEA702C72902863E54 * __this, KeyValuePair_2_tE11B93BE2B17569E0E9CCED689C2035649330F07  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisTower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908_mA149B72CF274333FFB2DF13126B03244895BA8B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m84A358475EC8EEAC60A8D722A040615FD1E702D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * V_0 = NULL;
	{
		// var positions = gameObjects.Where(item => item.Value.TryGetComponent(out Tower tower)).Select(item => item.Key);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = KeyValuePair_2_get_Value_m84A358475EC8EEAC60A8D722A040615FD1E702D5_inline((KeyValuePair_2_tE11B93BE2B17569E0E9CCED689C2035649330F07 *)(&___item0), /*hidden argument*/KeyValuePair_2_get_Value_m84A358475EC8EEAC60A8D722A040615FD1E702D5_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_TryGetComponent_TisTower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908_mA149B72CF274333FFB2DF13126B03244895BA8B0(L_0, (Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 **)(&V_0), /*hidden argument*/GameObject_TryGetComponent_TisTower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908_mA149B72CF274333FFB2DF13126B03244895BA8B0_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.Vector3 MapVisualizer/<>c::<DestroyTower>b__22_1(System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec_U3CDestroyTowerU3Eb__22_1_m5C748C45F6E8DF0E0E5E2499949E94E9A2FE8F01 (U3CU3Ec_t2D532FC10FA382DB658EF3AEA702C72902863E54 * __this, KeyValuePair_2_tE11B93BE2B17569E0E9CCED689C2035649330F07  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m417C4D56013CA4EBCDD1D47879AAC85957FCC4A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var positions = gameObjects.Where(item => item.Value.TryGetComponent(out Tower tower)).Select(item => item.Key);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = KeyValuePair_2_get_Key_m417C4D56013CA4EBCDD1D47879AAC85957FCC4A6_inline((KeyValuePair_2_tE11B93BE2B17569E0E9CCED689C2035649330F07 *)(&___item0), /*hidden argument*/KeyValuePair_2_get_Key_m417C4D56013CA4EBCDD1D47879AAC85957FCC4A6_RuntimeMethod_var);
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
// System.Void MapVisualizer/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_mA7BC7B1AB71F3599F62C180F45A6EAB38DA1B05F (U3CU3Ec__DisplayClass15_0_t92159B18C93CBA1CD1B6B5671168711BECFF9F94 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MapVisualizer/<>c__DisplayClass15_0::<VisualizeUsingPrefabs>b__0(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass15_0_U3CVisualizeUsingPrefabsU3Eb__0_mB4DB05BED22AC4CE1B3A660134084070929BF951 (U3CU3Ec__DisplayClass15_0_t92159B18C93CBA1CD1B6B5671168711BECFF9F94 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	{
		// foreach (var position in data.path.Where(position => position != data.endPosition && grid.GetCell(position.x, position.z).ObjectType == CellObjectType.Empty))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position0;
		MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8 * L_1 = __this->get_address_of_data_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = L_1->get_endPosition_5();
		bool L_3;
		L_3 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		MapGrid_t236B663A22892CFD736FA4F8C43A59C44CF4F62A * L_4 = __this->get_grid_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___position0;
		float L_6 = L_5.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___position0;
		float L_8 = L_7.get_z_4();
		NullCheck(L_4);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_9;
		L_9 = MapGrid_GetCell_m4730E216B240BFB3AE03B57F81622FC1FABAC92D(L_4, L_6, L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Cell_get_ObjectType_mA42FCADB320AAE2440D8508F9C5C2CC2323C2818_inline(L_9, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
	}

IL_0033:
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
// System.Void MapVisualizer/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m825A616C7EE3066F0EED5980A9C1E3E6FDAA2DE2 (U3CU3Ec__DisplayClass17_0_t7B785AEC943168F0630C4382B8D17760638CE3CB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MapVisualizer/<>c__DisplayClass17_0::<GetNextDirection>b__0(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass17_0_U3CGetNextDirectionU3Eb__0_mADEE400801EA79D372C3EB1D75023A56EEC439F5 (U3CU3Ec__DisplayClass17_0_t7B785AEC943168F0630C4382B8D17760638CE3CB * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	{
		// int index = data.path.FindIndex(a => a== position);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_position_0();
		bool L_2;
		L_2 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void MapVisualizer/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_m04B22B2B5485BE284D11F1E57E638995E0193481 (U3CU3Ec__DisplayClass19_0_tE0C216A9EA33CDC5636CE25ADC57D9A5CDFF833E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MapVisualizer/<>c__DisplayClass19_0::<GetPreviousDirection>b__0(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass19_0_U3CGetPreviousDirectionU3Eb__0_mE2639543029C6C8D91BA5E3D1FC86053E910742E (U3CU3Ec__DisplayClass19_0_tE0C216A9EA33CDC5636CE25ADC57D9A5CDFF833E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	{
		// int index = data.path.FindIndex(a => a == position);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_position_0();
		bool L_2;
		L_2 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Gameplay.Components.MovementComponent/DLandedComplete::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLandedComplete__ctor_m248723A1237C69E9247449C94815EDDE884A9DFA (DLandedComplete_tF35A9505355FD60AC2CD2CD58C8B302D5C1C2FE8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Gameplay.Components.MovementComponent/DLandedComplete::Invoke(Gameplay.Components.MovementComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLandedComplete_Invoke_m91918FC3FF1DBF8174ABF2B8FB4CB9AC872CCADE (DLandedComplete_tF35A9505355FD60AC2CD2CD58C8B302D5C1C2FE8 * __this, MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20 * ___component0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___component0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___component0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___component0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___component0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___component0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___component0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___component0, targetMethod);
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
						GenericInterfaceActionInvoker1< MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20 * >::Invoke(targetMethod, targetThis, ___component0);
					else
						GenericVirtActionInvoker1< MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20 * >::Invoke(targetMethod, targetThis, ___component0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___component0);
					else
						VirtActionInvoker1< MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___component0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___component0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___component0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Gameplay.Components.MovementComponent/DLandedComplete::BeginInvoke(Gameplay.Components.MovementComponent,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DLandedComplete_BeginInvoke_mD745D51B70D712624701E90C17A38CD2F205A04B (DLandedComplete_tF35A9505355FD60AC2CD2CD58C8B302D5C1C2FE8 * __this, MovementComponent_t8E04CB0F86A1E65D112EBEB2E5A9BF068EC06D20 * ___component0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___component0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Gameplay.Components.MovementComponent/DLandedComplete::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLandedComplete_EndInvoke_mE36FCAB79AF01EBEC7AB9F2EE2DA8EA8FA04B2A3 (DLandedComplete_tF35A9505355FD60AC2CD2CD58C8B302D5C1C2FE8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void NewCustomRuleTile/Neighbor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neighbor__ctor_mDA2790DEF6AFC351F44A816ADDC973896046F1F7 (Neighbor_tBFA27989DCA34FF377661D8D840E9A21C1C9FDE3 * __this, const RuntimeMethod* method)
{
	{
		Neighbor__ctor_mD1C56B88B8C0CFD1168B5D348D410A3080E9E90D(__this, /*hidden argument*/NULL);
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
// System.Void Outline/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1FF4A217292D37DA703B9C8AC1034AB976091256 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E * L_0 = (U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E *)il2cpp_codegen_object_new(U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF9B89AF9C89EBA2E177F233D3742EC6B9E783D67(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Outline/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF9B89AF9C89EBA2E177F233D3742EC6B9E783D67 (U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32> Outline/<>c::<SmoothNormals>b__30_0(UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4  U3CU3Ec_U3CSmoothNormalsU3Eb__30_0_m243CCB6355ABA744A3D4278CEE1E935DF7391AC0 (U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vertex0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m7612B49A0C4765AB069FF3F0754E7B61C1A1F7C9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var groups = mesh.vertices.Select((vertex, index) => new KeyValuePair<Vector3, int>(vertex, index)).GroupBy(pair => pair.Key);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___vertex0;
		int32_t L_1 = ___index1;
		KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4  L_2;
		memset((&L_2), 0, sizeof(L_2));
		KeyValuePair_2__ctor_m7612B49A0C4765AB069FF3F0754E7B61C1A1F7C9((&L_2), L_0, L_1, /*hidden argument*/KeyValuePair_2__ctor_m7612B49A0C4765AB069FF3F0754E7B61C1A1F7C9_RuntimeMethod_var);
		return L_2;
	}
}
// UnityEngine.Vector3 Outline/<>c::<SmoothNormals>b__30_1(System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec_U3CSmoothNormalsU3Eb__30_1_mE06EA252FE45A4AD9CDF96EC69961996798FAF75 (U3CU3Ec_tC1A4EBC76A3E4575670F0828C7F7CC1B61FE669E * __this, KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4  ___pair0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mFF8D9FEFDF56EC6F38DA016CFEB6BD045AB7424B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var groups = mesh.vertices.Select((vertex, index) => new KeyValuePair<Vector3, int>(vertex, index)).GroupBy(pair => pair.Key);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = KeyValuePair_2_get_Key_mFF8D9FEFDF56EC6F38DA016CFEB6BD045AB7424B_inline((KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 *)(&___pair0), /*hidden argument*/KeyValuePair_2_get_Key_mFF8D9FEFDF56EC6F38DA016CFEB6BD045AB7424B_RuntimeMethod_var);
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
// System.Void Outline/ListVector3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListVector3__ctor_mF76D832454EF12AE1EF141AFB6CD7957134806E7 (ListVector3_t54AB46ECA91F943A5FE7817CA662D0D5B78617B9 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Gameplay.Player/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mADEAA91D7C0F78D89CC19ABC35364CF37D5CB9FB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t535C18E424A6566A1193D6404FD769DE6680ECB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t535C18E424A6566A1193D6404FD769DE6680ECB6 * L_0 = (U3CU3Ec_t535C18E424A6566A1193D6404FD769DE6680ECB6 *)il2cpp_codegen_object_new(U3CU3Ec_t535C18E424A6566A1193D6404FD769DE6680ECB6_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1763529533392D9B028386C46AB73E5375426285(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t535C18E424A6566A1193D6404FD769DE6680ECB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t535C18E424A6566A1193D6404FD769DE6680ECB6_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Gameplay.Player/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1763529533392D9B028386C46AB73E5375426285 (U3CU3Ec_t535C18E424A6566A1193D6404FD769DE6680ECB6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Gameplay.Player/<>c::<FixedUpdate>b__37_0(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CFixedUpdateU3Eb__37_0_m737D4CE1268AADB4EEFF37EBDE80E947FD5130EF (U3CU3Ec_t535C18E424A6566A1193D6404FD769DE6680ECB6 * __this, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___x0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___y1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// if (_raycastAllCount > 1) Array.Sort(_raycastHits, (x, y) => x.distance.CompareTo(y.distance));
		float L_0;
		L_0 = RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&___x0), /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1;
		L_1 = RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&___y1), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4((float*)(&V_0), L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Gameplay.Player/<MoveCrosshair>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveCrosshairU3Ed__43__ctor_m4F212CBB58E0CFE756C1F127D3EE581D39579E4D (U3CMoveCrosshairU3Ed__43_t760AAA5F036C63AB0E8A79C493FF4E6B893D65C7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Gameplay.Player/<MoveCrosshair>d__43::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveCrosshairU3Ed__43_System_IDisposable_Dispose_m9E86162BFB80D2AB03D96A8C6C100BB3DFBC6297 (U3CMoveCrosshairU3Ed__43_t760AAA5F036C63AB0E8A79C493FF4E6B893D65C7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Gameplay.Player/<MoveCrosshair>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveCrosshairU3Ed__43_MoveNext_mF3D68D2BB48006488D01E6C9A0BE397133509A3A (U3CMoveCrosshairU3Ed__43_t760AAA5F036C63AB0E8A79C493FF4E6B893D65C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_get_Instance_m88D8C59FFBCEF4E4C45F66E606B7B12840700054_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014 * V_1 = NULL;
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0054;
			}
			case 2:
			{
				goto IL_007c;
			}
			case 3:
			{
				goto IL_0162;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!UiManager.Instance) yield break;
		UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F * L_3;
		L_3 = MonoSingleton_1_get_Instance_m88D8C59FFBCEF4E4C45F66E606B7B12840700054_inline(/*hidden argument*/MonoSingleton_1_get_Instance_m88D8C59FFBCEF4E4C45F66E606B7B12840700054_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		// if (!UiManager.Instance) yield break;
		return (bool)0;
	}

IL_003b:
	{
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, (0.200000003f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0054:
	{
		__this->set_U3CU3E1__state_0((-1));
		// _crosshairSpawn.SetActive(true);
		Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014 * L_6 = V_1;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = L_6->get__crosshairSpawn_20();
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)1, /*hidden argument*/NULL);
		goto IL_0169;
	}

IL_006c:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_007c:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0083:
	{
		// while (GameStateManager.Instance.CurrentGameState == GameState.GameState.Paused)
		GameStateManager_tF7AEC3D17EAEB0E30CBADF2F67F129F582EF3505 * L_8;
		L_8 = GameStateManager_get_Instance_m160572733C9C45A80CF306B82D53384DFC9E3797(/*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = GameStateManager_get_CurrentGameState_m066DDED0686771E8D0FA6480C7962DEE6371F11F_inline(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_006c;
		}
	}
	{
		// var cursorAsRay = UiManager.Instance.CursorAsRay;
		UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F * L_10;
		L_10 = MonoSingleton_1_get_Instance_m88D8C59FFBCEF4E4C45F66E606B7B12840700054_inline(/*hidden argument*/MonoSingleton_1_get_Instance_m88D8C59FFBCEF4E4C45F66E606B7B12840700054_RuntimeMethod_var);
		NullCheck(L_10);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_11;
		L_11 = UiManager_get_CursorAsRay_m63AB878A93036720B74B3C14680B81A49F454CC6_inline(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// var cursorEndPoint = cursorAsRay.origin + cursorAsRay.direction * 1000.0f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_2), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_2), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_13, (1000.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_12, L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		// if (Physics.Raycast(cursorAsRay, out RaycastHit hitInfo, Mathf.Infinity) &&
		//     hitInfo.collider.CompareTag("Ground"))
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_16 = V_2;
		bool L_17;
		L_17 = Physics_Raycast_mA64F8C30681E3A6A8F2B7EDE592FE7BBC0D354F4(L_16, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_4), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_013b;
		}
	}
	{
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_18;
		L_18 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_4), /*hidden argument*/NULL);
		NullCheck(L_18);
		bool L_19;
		L_19 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_18, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_013b;
		}
	}
	{
		// cursorEndPoint = cursorAsRay.GetPoint(hitInfo.distance);
		float L_20;
		L_20 = RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_4), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_2), L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		// _crosshairSpawn.transform.rotation = Quaternion.LookRotation(-Vector3.up);
		Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014 * L_22 = V_1;
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = L_22->get__crosshairSpawn_20();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_25, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27;
		L_27 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_24, L_27, /*hidden argument*/NULL);
		// _crosshairSpawn.transform.position = Vector3.SmoothDamp(_crosshairSpawn.transform.position,
		//     cursorEndPoint, ref _velocity, _dragSpeed);
		Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014 * L_28 = V_1;
		NullCheck(L_28);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = L_28->get__crosshairSpawn_20();
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014 * L_31 = V_1;
		NullCheck(L_31);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = L_31->get__crosshairSpawn_20();
		NullCheck(L_32);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_33, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = V_3;
		Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014 * L_36 = V_1;
		NullCheck(L_36);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_37 = L_36->get_address_of__velocity_17();
		Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014 * L_38 = V_1;
		NullCheck(L_38);
		float L_39 = L_38->get__dragSpeed_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627(L_34, L_35, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_37, L_39, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_30, L_40, /*hidden argument*/NULL);
	}

IL_013b:
	{
		// Debug.DrawLine(cursorAsRay.origin, cursorEndPoint, Color.red);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_2), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = V_3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43;
		L_43 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawLine_m83E9014DE042AAFE0B97A66E2A23F701FFDBB8A3(L_41, L_42, L_43, /*hidden argument*/NULL);
		// yield return _waitForFixedUpdate;
		Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014 * L_44 = V_1;
		NullCheck(L_44);
		WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * L_45 = L_44->get__waitForFixedUpdate_18();
		__this->set_U3CU3E2__current_1(L_45);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_0162:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0169:
	{
		// while (_spawningType != UnitType.Null)
		Player_t9E7D4D5D0BEC71B10C8B1BF9F0C5EA1262863014 * L_46 = V_1;
		NullCheck(L_46);
		int32_t L_47 = L_46->get__spawningType_19();
		if ((!(((uint32_t)L_47) == ((uint32_t)(-1)))))
		{
			goto IL_0083;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Gameplay.Player/<MoveCrosshair>d__43::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveCrosshairU3Ed__43_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB43B8004F73BCE82D2801D41F5039FB12B2E2178 (U3CMoveCrosshairU3Ed__43_t760AAA5F036C63AB0E8A79C493FF4E6B893D65C7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Gameplay.Player/<MoveCrosshair>d__43::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveCrosshairU3Ed__43_System_Collections_IEnumerator_Reset_m9849EFEB79723D356B26B4BB840C4CFA1A652FC8 (U3CMoveCrosshairU3Ed__43_t760AAA5F036C63AB0E8A79C493FF4E6B893D65C7 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveCrosshairU3Ed__43_System_Collections_IEnumerator_Reset_m9849EFEB79723D356B26B4BB840C4CFA1A652FC8_RuntimeMethod_var)));
	}
}
// System.Object Gameplay.Player/<MoveCrosshair>d__43::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveCrosshairU3Ed__43_System_Collections_IEnumerator_get_Current_m3E606775028F7F66587E0404A6D081F7BBD2374B (U3CMoveCrosshairU3Ed__43_t760AAA5F036C63AB0E8A79C493FF4E6B893D65C7 * __this, const RuntimeMethod* method)
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
// System.Void Gameplay.Player/DUnitHover::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DUnitHover__ctor_m4C3A097BB96C2DC03D99D20FECFA1BF0CDB63F15 (DUnitHover_tE4632E3CA979D212145A6551FA0D6072C68A2873 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Gameplay.Player/DUnitHover::Invoke(Gameplay.Unit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DUnitHover_Invoke_mC8D908881E390058757AF8AA7217AB262696D75D (DUnitHover_tE4632E3CA979D212145A6551FA0D6072C68A2873 * __this, Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * ___hoverUnit0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___hoverUnit0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___hoverUnit0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___hoverUnit0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___hoverUnit0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___hoverUnit0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___hoverUnit0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___hoverUnit0, targetMethod);
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
						GenericInterfaceActionInvoker1< Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * >::Invoke(targetMethod, targetThis, ___hoverUnit0);
					else
						GenericVirtActionInvoker1< Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * >::Invoke(targetMethod, targetThis, ___hoverUnit0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___hoverUnit0);
					else
						VirtActionInvoker1< Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___hoverUnit0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___hoverUnit0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___hoverUnit0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Gameplay.Player/DUnitHover::BeginInvoke(Gameplay.Unit,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DUnitHover_BeginInvoke_m8AE1BD30158D3231C7B83008C0D9175A37C0DF60 (DUnitHover_tE4632E3CA979D212145A6551FA0D6072C68A2873 * __this, Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * ___hoverUnit0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___hoverUnit0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Gameplay.Player/DUnitHover::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DUnitHover_EndInvoke_m1B2AC4566105E8C0F4B374A5F8F83B2E27C69377 (DUnitHover_tE4632E3CA979D212145A6551FA0D6072C68A2873 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Gameplay.Player/DUnitSelected::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DUnitSelected__ctor_m2CA2F24561CAF820912559641D9ABF94B50DD19C (DUnitSelected_t95F61357E6EB3EA355F745D67D35705638B9E0DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Gameplay.Player/DUnitSelected::Invoke(Gameplay.Unit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DUnitSelected_Invoke_m1CACCD2ECE4A6907F22D61D3A8D34BEDA3C6476A (DUnitSelected_t95F61357E6EB3EA355F745D67D35705638B9E0DC * __this, Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * ___selectedUnit0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___selectedUnit0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___selectedUnit0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___selectedUnit0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___selectedUnit0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___selectedUnit0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___selectedUnit0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___selectedUnit0, targetMethod);
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
						GenericInterfaceActionInvoker1< Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * >::Invoke(targetMethod, targetThis, ___selectedUnit0);
					else
						GenericVirtActionInvoker1< Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * >::Invoke(targetMethod, targetThis, ___selectedUnit0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___selectedUnit0);
					else
						VirtActionInvoker1< Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___selectedUnit0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___selectedUnit0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___selectedUnit0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Gameplay.Player/DUnitSelected::BeginInvoke(Gameplay.Unit,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DUnitSelected_BeginInvoke_mBF37CC5E17FF6ACA08D48539C268606439ADE279 (DUnitSelected_t95F61357E6EB3EA355F745D67D35705638B9E0DC * __this, Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * ___selectedUnit0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___selectedUnit0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Gameplay.Player/DUnitSelected::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DUnitSelected_EndInvoke_m23145A315EF5D26EE681D4E28F08B98FDDCEB791 (DUnitSelected_t95F61357E6EB3EA355F745D67D35705638B9E0DC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Controls.PlayerControls/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506_marshal_pinvoke(const PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506& unmarshaled, PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506_marshal_pinvoke_back(const PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506_marshaled_pinvoke& marshaled, PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Controls.PlayerControls/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506_marshal_pinvoke_cleanup(PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Controls.PlayerControls/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506_marshal_com(const PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506& unmarshaled, PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506_marshal_com_back(const PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506_marshaled_com& marshaled, PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Controls.PlayerControls/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506_marshal_com_cleanup(PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506_marshaled_com& marshaled)
{
}
// System.Void Controls.PlayerControls/PlayerActions::.ctor(Controls.PlayerControls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions__ctor_mEEC3202540FC6940EB8F109FAFB0E361DD76A224 (PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 * __this, PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A * ___wrapper0, const RuntimeMethod* method)
{
	{
		// public PlayerActions(@PlayerControls wrapper) { m_Wrapper = wrapper; }
		PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A * L_0 = ___wrapper0;
		__this->set_m_Wrapper_0(L_0);
		// public PlayerActions(@PlayerControls wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions__ctor_mEEC3202540FC6940EB8F109FAFB0E361DD76A224_AdjustorThunk (RuntimeObject * __this, PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A * ___wrapper0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 * _thisAdjusted = reinterpret_cast<PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 *>(__this + _offset);
	PlayerActions__ctor_mEEC3202540FC6940EB8F109FAFB0E361DD76A224_inline(_thisAdjusted, ___wrapper0, method);
}
// UnityEngine.InputSystem.InputAction Controls.PlayerControls/PlayerActions::get_SelectAndSpawnUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * PlayerActions_get_SelectAndSpawnUnit_m99C6D314E0970CDA3ECAE0F487D25A408D585FC5 (PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @SelectAndSpawnUnit => m_Wrapper.m_Player_SelectAndSpawnUnit;
		PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A * L_0 = __this->get_m_Wrapper_0();
		NullCheck(L_0);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_Player_SelectAndSpawnUnit_3();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * PlayerActions_get_SelectAndSpawnUnit_m99C6D314E0970CDA3ECAE0F487D25A408D585FC5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 * _thisAdjusted = reinterpret_cast<PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = PlayerActions_get_SelectAndSpawnUnit_m99C6D314E0970CDA3ECAE0F487D25A408D585FC5(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap Controls.PlayerControls/PlayerActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * PlayerActions_Get_mBABB5C543A7B6B838B8F8751680B5ECE3DBDABB1 (PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionMap Get() { return m_Wrapper.m_Player; }
		PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A * L_0 = __this->get_m_Wrapper_0();
		NullCheck(L_0);
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_1 = L_0->get_m_Player_1();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * PlayerActions_Get_mBABB5C543A7B6B838B8F8751680B5ECE3DBDABB1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 * _thisAdjusted = reinterpret_cast<PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 *>(__this + _offset);
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * _returnValue;
	_returnValue = PlayerActions_Get_mBABB5C543A7B6B838B8F8751680B5ECE3DBDABB1(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Controls.PlayerControls/PlayerActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Enable_m12406082250D6C11C69B431091928E32EEC87203 (PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 * __this, const RuntimeMethod* method)
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = PlayerActions_Get_mBABB5C543A7B6B838B8F8751680B5ECE3DBDABB1((PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 *)__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InputActionMap_Enable_m7FB7229D7099C525C994CA0208284CC904D52F15(L_0, /*hidden argument*/NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_Enable_m12406082250D6C11C69B431091928E32EEC87203_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 * _thisAdjusted = reinterpret_cast<PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 *>(__this + _offset);
	PlayerActions_Enable_m12406082250D6C11C69B431091928E32EEC87203(_thisAdjusted, method);
}
// System.Void Controls.PlayerControls/PlayerActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Disable_m90687E6C3748650799E9CE3BB0CF298893417637 (PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 * __this, const RuntimeMethod* method)
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = PlayerActions_Get_mBABB5C543A7B6B838B8F8751680B5ECE3DBDABB1((PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 *)__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InputActionMap_Disable_mE9427CBA292066C977F0A8FE109A1D4B4E6CB6B5(L_0, /*hidden argument*/NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_Disable_m90687E6C3748650799E9CE3BB0CF298893417637_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 * _thisAdjusted = reinterpret_cast<PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 *>(__this + _offset);
	PlayerActions_Disable_m90687E6C3748650799E9CE3BB0CF298893417637(_thisAdjusted, method);
}
// System.Boolean Controls.PlayerControls/PlayerActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerActions_get_enabled_m772A248D681B21E4B66E040152BBC26185596439 (PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 * __this, const RuntimeMethod* method)
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = PlayerActions_Get_mBABB5C543A7B6B838B8F8751680B5ECE3DBDABB1((PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 *)__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InputActionMap_get_enabled_m067EAC332984B7758EC1214A45FF0552F913945E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PlayerActions_get_enabled_m772A248D681B21E4B66E040152BBC26185596439_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 * _thisAdjusted = reinterpret_cast<PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayerActions_get_enabled_m772A248D681B21E4B66E040152BBC26185596439(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap Controls.PlayerControls/PlayerActions::op_Implicit(Controls.PlayerControls/PlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * PlayerActions_op_Implicit_mB007CF42FF346657097A43D1D9FD73E5B03CB29E (PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506  ___set0, const RuntimeMethod* method)
{
	{
		// public static implicit operator InputActionMap(PlayerActions set) { return set.Get(); }
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = PlayerActions_Get_mBABB5C543A7B6B838B8F8751680B5ECE3DBDABB1((PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 *)(&___set0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Controls.PlayerControls/PlayerActions::SetCallbacks(Controls.PlayerControls/IPlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_SetCallbacks_mBA942744E00F7644F89AC1F5047509128B3930FF (PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 * __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerActions_t3F62B9A240B9C683165F9E5781E66FEE3CDDCB0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Wrapper.m_PlayerActionsCallbackInterface != null)
		PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A * L_0 = __this->get_m_Wrapper_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_m_PlayerActionsCallbackInterface_2();
		if (!L_1)
		{
			goto IL_0073;
		}
	}
	{
		// @SelectAndSpawnUnit.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnSelectAndSpawnUnit;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_2;
		L_2 = PlayerActions_get_SelectAndSpawnUnit_m99C6D314E0970CDA3ECAE0F487D25A408D585FC5((PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 *)__this, /*hidden argument*/NULL);
		PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A * L_3 = __this->get_m_Wrapper_0();
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->get_m_PlayerActionsCallbackInterface_2();
		RuntimeObject* L_5 = L_4;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_6 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_6, L_5, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_5, 0, IPlayerActions_t3F62B9A240B9C683165F9E5781E66FEE3CDDCB0A_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_2);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_2, L_6, /*hidden argument*/NULL);
		// @SelectAndSpawnUnit.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnSelectAndSpawnUnit;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_7;
		L_7 = PlayerActions_get_SelectAndSpawnUnit_m99C6D314E0970CDA3ECAE0F487D25A408D585FC5((PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 *)__this, /*hidden argument*/NULL);
		PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A * L_8 = __this->get_m_Wrapper_0();
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->get_m_PlayerActionsCallbackInterface_2();
		RuntimeObject* L_10 = L_9;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_11 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_11, L_10, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_10, 0, IPlayerActions_t3F62B9A240B9C683165F9E5781E66FEE3CDDCB0A_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_7);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_7, L_11, /*hidden argument*/NULL);
		// @SelectAndSpawnUnit.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnSelectAndSpawnUnit;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_12;
		L_12 = PlayerActions_get_SelectAndSpawnUnit_m99C6D314E0970CDA3ECAE0F487D25A408D585FC5((PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 *)__this, /*hidden argument*/NULL);
		PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A * L_13 = __this->get_m_Wrapper_0();
		NullCheck(L_13);
		RuntimeObject* L_14 = L_13->get_m_PlayerActionsCallbackInterface_2();
		RuntimeObject* L_15 = L_14;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_16 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_16, L_15, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_15, 0, IPlayerActions_t3F62B9A240B9C683165F9E5781E66FEE3CDDCB0A_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_12);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_12, L_16, /*hidden argument*/NULL);
	}

IL_0073:
	{
		// m_Wrapper.m_PlayerActionsCallbackInterface = instance;
		PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A * L_17 = __this->get_m_Wrapper_0();
		RuntimeObject* L_18 = ___instance0;
		NullCheck(L_17);
		L_17->set_m_PlayerActionsCallbackInterface_2(L_18);
		// if (instance != null)
		RuntimeObject* L_19 = ___instance0;
		if (!L_19)
		{
			goto IL_00ca;
		}
	}
	{
		// @SelectAndSpawnUnit.started += instance.OnSelectAndSpawnUnit;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_20;
		L_20 = PlayerActions_get_SelectAndSpawnUnit_m99C6D314E0970CDA3ECAE0F487D25A408D585FC5((PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_21 = ___instance0;
		RuntimeObject* L_22 = L_21;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_23 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_23, L_22, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_22, 0, IPlayerActions_t3F62B9A240B9C683165F9E5781E66FEE3CDDCB0A_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_20);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_20, L_23, /*hidden argument*/NULL);
		// @SelectAndSpawnUnit.performed += instance.OnSelectAndSpawnUnit;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_24;
		L_24 = PlayerActions_get_SelectAndSpawnUnit_m99C6D314E0970CDA3ECAE0F487D25A408D585FC5((PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_25 = ___instance0;
		RuntimeObject* L_26 = L_25;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_27 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_27, L_26, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_26, 0, IPlayerActions_t3F62B9A240B9C683165F9E5781E66FEE3CDDCB0A_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_24);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_24, L_27, /*hidden argument*/NULL);
		// @SelectAndSpawnUnit.canceled += instance.OnSelectAndSpawnUnit;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_28;
		L_28 = PlayerActions_get_SelectAndSpawnUnit_m99C6D314E0970CDA3ECAE0F487D25A408D585FC5((PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_29 = ___instance0;
		RuntimeObject* L_30 = L_29;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_31 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_31, L_30, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_30, 0, IPlayerActions_t3F62B9A240B9C683165F9E5781E66FEE3CDDCB0A_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_28);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_28, L_31, /*hidden argument*/NULL);
	}

IL_00ca:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_SetCallbacks_mBA942744E00F7644F89AC1F5047509128B3930FF_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 * _thisAdjusted = reinterpret_cast<PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 *>(__this + _offset);
	PlayerActions_SetCallbacks_mBA942744E00F7644F89AC1F5047509128B3930FF(_thisAdjusted, ___instance0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UI.PlayerUI/<LerpHealthValue>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLerpHealthValueU3Ed__28__ctor_m652987E31CFEDCE0A603DE36EED9E54FB5CCCCC6 (U3CLerpHealthValueU3Ed__28_tFA9A3940A3048EA51BFD4E31741883AD3D045E1D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UI.PlayerUI/<LerpHealthValue>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLerpHealthValueU3Ed__28_System_IDisposable_Dispose_mDE3AB5B66F4C5224C94AF8A409E55B226C279940 (U3CLerpHealthValueU3Ed__28_tFA9A3940A3048EA51BFD4E31741883AD3D045E1D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UI.PlayerUI/<LerpHealthValue>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLerpHealthValueU3Ed__28_MoveNext_mDCB15C213F405AFA71614ACD2DCC28BB34074BF0 (U3CLerpHealthValueU3Ed__28_tFA9A3940A3048EA51BFD4E31741883AD3D045E1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_00a6;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_3 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float newHealth = healthComponent.CurrentPercent;
		HealthComponent_t51D2DE6F27167E6E785C8ABE16E758B8145C270C * L_4 = __this->get_healthComponent_2();
		NullCheck(L_4);
		float L_5;
		L_5 = HealthComponent_get_CurrentPercent_mA473C08A39646DEF593628EE145B0A586F541216(L_4, /*hidden argument*/NULL);
		__this->set_U3CnewHealthU3E5__2_4(L_5);
		// float healthValueInProgress = UnitInformationHealthBar.value;
		PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC * L_6 = V_1;
		NullCheck(L_6);
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_7;
		L_7 = PlayerUI_get_UnitInformationHealthBar_mFB99DA677D2FBDCAC15EAAE21DFF6BE8F45CC56D_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		float L_8;
		L_8 = Scrollbar_get_value_mC925448739BB4DC891D49F600D370D808296BD07(L_7, /*hidden argument*/NULL);
		__this->set_U3ChealthValueInProgressU3E5__3_5(L_8);
		goto IL_00ad;
	}

IL_0068:
	{
		// healthValueInProgress = Mathf.Lerp(healthValueInProgress, newHealth, healthBarLerpSpeed);
		float L_9 = __this->get_U3ChealthValueInProgressU3E5__3_5();
		float L_10 = __this->get_U3CnewHealthU3E5__2_4();
		PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC * L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->get_healthBarLerpSpeed_9();
		float L_13;
		L_13 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_9, L_10, L_12, /*hidden argument*/NULL);
		__this->set_U3ChealthValueInProgressU3E5__3_5(L_13);
		// UnitInformationHealthBar.value = healthValueInProgress;
		PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC * L_14 = V_1;
		NullCheck(L_14);
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_15;
		L_15 = PlayerUI_get_UnitInformationHealthBar_mFB99DA677D2FBDCAC15EAAE21DFF6BE8F45CC56D_inline(L_14, /*hidden argument*/NULL);
		float L_16 = __this->get_U3ChealthValueInProgressU3E5__3_5();
		NullCheck(L_15);
		Scrollbar_set_value_mEDFFDDF8153EA01B897198648DCFB1D1EA539197(L_15, L_16, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00a6:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00ad:
	{
		// while (UnitInformationHealthBar.value > newHealth)
		PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC * L_17 = V_1;
		NullCheck(L_17);
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_18;
		L_18 = PlayerUI_get_UnitInformationHealthBar_mFB99DA677D2FBDCAC15EAAE21DFF6BE8F45CC56D_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		float L_19;
		L_19 = Scrollbar_get_value_mC925448739BB4DC891D49F600D370D808296BD07(L_18, /*hidden argument*/NULL);
		float L_20 = __this->get_U3CnewHealthU3E5__2_4();
		if ((((float)L_19) > ((float)L_20)))
		{
			goto IL_0068;
		}
	}
	{
		// yield break;
		return (bool)0;
	}
}
// System.Object UI.PlayerUI/<LerpHealthValue>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLerpHealthValueU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF7C3932E643A345994E880FC7534FF92B8A267D6 (U3CLerpHealthValueU3Ed__28_tFA9A3940A3048EA51BFD4E31741883AD3D045E1D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UI.PlayerUI/<LerpHealthValue>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLerpHealthValueU3Ed__28_System_Collections_IEnumerator_Reset_m915395D5FC69E608AF9A1285C6BEDE0FB25E9342 (U3CLerpHealthValueU3Ed__28_tFA9A3940A3048EA51BFD4E31741883AD3D045E1D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLerpHealthValueU3Ed__28_System_Collections_IEnumerator_Reset_m915395D5FC69E608AF9A1285C6BEDE0FB25E9342_RuntimeMethod_var)));
	}
}
// System.Object UI.PlayerUI/<LerpHealthValue>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLerpHealthValueU3Ed__28_System_Collections_IEnumerator_get_Current_m44A3050D10CE4626790CB211BC39D428F410A40A (U3CLerpHealthValueU3Ed__28_tFA9A3940A3048EA51BFD4E31741883AD3D045E1D * __this, const RuntimeMethod* method)
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
// System.Void RandomizeGameObject/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD414867BFE13F7393E653F0591AA5EE336A6F292 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBC51EABF39D5A7F72B1FD79E036C065FAA7975DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBC51EABF39D5A7F72B1FD79E036C065FAA7975DD * L_0 = (U3CU3Ec_tBC51EABF39D5A7F72B1FD79E036C065FAA7975DD *)il2cpp_codegen_object_new(U3CU3Ec_tBC51EABF39D5A7F72B1FD79E036C065FAA7975DD_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mED8E8995B98DE4A142DD094AA48B5BFC1FE47F49(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tBC51EABF39D5A7F72B1FD79E036C065FAA7975DD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBC51EABF39D5A7F72B1FD79E036C065FAA7975DD_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void RandomizeGameObject/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mED8E8995B98DE4A142DD094AA48B5BFC1FE47F49 (U3CU3Ec_tBC51EABF39D5A7F72B1FD79E036C065FAA7975DD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 RandomizeGameObject/<>c::<RescaleProbabilities>b__3_0(RandomizeGameObject/RandomizingRule,RandomizeGameObject/RandomizingRule)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CRescaleProbabilitiesU3Eb__3_0_mD447B07BA38AC09E1684EC3126C73D6B13DF2C5D (U3CU3Ec_tBC51EABF39D5A7F72B1FD79E036C065FAA7975DD * __this, RandomizingRule_t6E572B8080AFE6989D0BF5D365E917616FF95869 * ___r10, RandomizingRule_t6E572B8080AFE6989D0BF5D365E917616FF95869 * ___r21, const RuntimeMethod* method)
{
	{
		// RandomizingRules.Sort((r1,r2) => r1.Probability.CompareTo(r2.Probability));
		RandomizingRule_t6E572B8080AFE6989D0BF5D365E917616FF95869 * L_0 = ___r10;
		NullCheck(L_0);
		float* L_1 = L_0->get_address_of_Probability_1();
		RandomizingRule_t6E572B8080AFE6989D0BF5D365E917616FF95869 * L_2 = ___r21;
		NullCheck(L_2);
		float L_3 = L_2->get_Probability_1();
		int32_t L_4;
		L_4 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4((float*)L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Single RandomizeGameObject/<>c::<RescaleProbabilities>b__3_1(RandomizeGameObject/RandomizingRule)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CRescaleProbabilitiesU3Eb__3_1_mC4089D334C9987723AFEE73B940F55E09C601EF4 (U3CU3Ec_tBC51EABF39D5A7F72B1FD79E036C065FAA7975DD * __this, RandomizingRule_t6E572B8080AFE6989D0BF5D365E917616FF95869 * ___Rule0, const RuntimeMethod* method)
{
	{
		// float Sum = RandomizingRules.Sum(Rule => Rule.Probability);
		RandomizingRule_t6E572B8080AFE6989D0BF5D365E917616FF95869 * L_0 = ___Rule0;
		NullCheck(L_0);
		float L_1 = L_0->get_Probability_1();
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
// System.Void RandomizeGameObject/RandomizingRule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomizingRule__ctor_m2E84BEF6FE12E56DEB9F20EEC4AB1C0FB18B31EB (RandomizingRule_t6E572B8080AFE6989D0BF5D365E917616FF95869 * __this, const RuntimeMethod* method)
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
// System.Void Gameplay.Components.SpawnerComponent/DRegisterSpawner::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRegisterSpawner__ctor_m683B8938ABC51950D88A8A1648428382BDA0C909 (DRegisterSpawner_t16093AA77CA07FF10F53ED12A10BF829DB733343 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Gameplay.Components.SpawnerComponent/DRegisterSpawner::Invoke(Gameplay.Components.SpawnerComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRegisterSpawner_Invoke_m6F3295ED8E281CBCA25893E3F2ADECC6550FE8EF (DRegisterSpawner_t16093AA77CA07FF10F53ED12A10BF829DB733343 * __this, SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * ___component0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___component0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___component0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___component0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___component0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___component0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___component0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___component0, targetMethod);
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
						GenericInterfaceActionInvoker1< SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * >::Invoke(targetMethod, targetThis, ___component0);
					else
						GenericVirtActionInvoker1< SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * >::Invoke(targetMethod, targetThis, ___component0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___component0);
					else
						VirtActionInvoker1< SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___component0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___component0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___component0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Gameplay.Components.SpawnerComponent/DRegisterSpawner::BeginInvoke(Gameplay.Components.SpawnerComponent,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRegisterSpawner_BeginInvoke_m5E10064D9B537026FF23E7261C29B17784920DE5 (DRegisterSpawner_t16093AA77CA07FF10F53ED12A10BF829DB733343 * __this, SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * ___component0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___component0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Gameplay.Components.SpawnerComponent/DRegisterSpawner::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRegisterSpawner_EndInvoke_m68A9441A0B68C8C83E6C4F233CAFB232EC78B306 (DRegisterSpawner_t16093AA77CA07FF10F53ED12A10BF829DB733343 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Gameplay.Components.SpawnerComponent/LaunchData::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaunchData__ctor_m39561418534467AF7A8DF4746B2B6F8C34CE3AF4 (LaunchData_tAE068343C79E1B868764B659F0CCFC16C44D2686 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialVelocity0, float ___timeToTarget1, const RuntimeMethod* method)
{
	{
		// this.initialVelocity = initialVelocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___initialVelocity0;
		__this->set_initialVelocity_0(L_0);
		// this.timeToTarget = timeToTarget;
		float L_1 = ___timeToTarget1;
		__this->set_timeToTarget_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void LaunchData__ctor_m39561418534467AF7A8DF4746B2B6F8C34CE3AF4_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialVelocity0, float ___timeToTarget1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	LaunchData_tAE068343C79E1B868764B659F0CCFC16C44D2686 * _thisAdjusted = reinterpret_cast<LaunchData_tAE068343C79E1B868764B659F0CCFC16C44D2686 *>(__this + _offset);
	LaunchData__ctor_m39561418534467AF7A8DF4746B2B6F8C34CE3AF4(_thisAdjusted, ___initialVelocity0, ___timeToTarget1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Controls.TouchControls/TouchActions
IL2CPP_EXTERN_C void TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7_marshal_pinvoke(const TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7& unmarshaled, TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'TouchActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7_marshal_pinvoke_back(const TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7_marshaled_pinvoke& marshaled, TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'TouchActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Controls.TouchControls/TouchActions
IL2CPP_EXTERN_C void TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7_marshal_pinvoke_cleanup(TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Controls.TouchControls/TouchActions
IL2CPP_EXTERN_C void TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7_marshal_com(const TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7& unmarshaled, TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'TouchActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7_marshal_com_back(const TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7_marshaled_com& marshaled, TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'TouchActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Controls.TouchControls/TouchActions
IL2CPP_EXTERN_C void TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7_marshal_com_cleanup(TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7_marshaled_com& marshaled)
{
}
// System.Void Controls.TouchControls/TouchActions::.ctor(Controls.TouchControls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchActions__ctor_m669675AEE0BB6BD3ACF4A2F47DD456A9989E3AEA (TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * __this, TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * ___wrapper0, const RuntimeMethod* method)
{
	{
		// public TouchActions(@TouchControls wrapper) { m_Wrapper = wrapper; }
		TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * L_0 = ___wrapper0;
		__this->set_m_Wrapper_0(L_0);
		// public TouchActions(@TouchControls wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void TouchActions__ctor_m669675AEE0BB6BD3ACF4A2F47DD456A9989E3AEA_AdjustorThunk (RuntimeObject * __this, TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * ___wrapper0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * _thisAdjusted = reinterpret_cast<TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *>(__this + _offset);
	TouchActions__ctor_m669675AEE0BB6BD3ACF4A2F47DD456A9989E3AEA_inline(_thisAdjusted, ___wrapper0, method);
}
// UnityEngine.InputSystem.InputAction Controls.TouchControls/TouchActions::get_PrimaryFingerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * TouchActions_get_PrimaryFingerPosition_m8480F12CFF404B100BC2D202D01C90955049E894 (TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @PrimaryFingerPosition => m_Wrapper.m_Touch_PrimaryFingerPosition;
		TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * L_0 = __this->get_m_Wrapper_0();
		NullCheck(L_0);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_Touch_PrimaryFingerPosition_3();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * TouchActions_get_PrimaryFingerPosition_m8480F12CFF404B100BC2D202D01C90955049E894_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * _thisAdjusted = reinterpret_cast<TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = TouchActions_get_PrimaryFingerPosition_m8480F12CFF404B100BC2D202D01C90955049E894(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction Controls.TouchControls/TouchActions::get_SecondaryFingerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * TouchActions_get_SecondaryFingerPosition_m2B3654918B354379504BCDB9A5DBDB26C4D20491 (TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @SecondaryFingerPosition => m_Wrapper.m_Touch_SecondaryFingerPosition;
		TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * L_0 = __this->get_m_Wrapper_0();
		NullCheck(L_0);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_Touch_SecondaryFingerPosition_4();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * TouchActions_get_SecondaryFingerPosition_m2B3654918B354379504BCDB9A5DBDB26C4D20491_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * _thisAdjusted = reinterpret_cast<TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = TouchActions_get_SecondaryFingerPosition_m2B3654918B354379504BCDB9A5DBDB26C4D20491(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction Controls.TouchControls/TouchActions::get_SecondaryTouchContact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * TouchActions_get_SecondaryTouchContact_mB93584AB2112CB836AD7280264046D941E92D158 (TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @SecondaryTouchContact => m_Wrapper.m_Touch_SecondaryTouchContact;
		TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * L_0 = __this->get_m_Wrapper_0();
		NullCheck(L_0);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_Touch_SecondaryTouchContact_5();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * TouchActions_get_SecondaryTouchContact_mB93584AB2112CB836AD7280264046D941E92D158_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * _thisAdjusted = reinterpret_cast<TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = TouchActions_get_SecondaryTouchContact_mB93584AB2112CB836AD7280264046D941E92D158(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap Controls.TouchControls/TouchActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * TouchActions_Get_mDEC68CD99EB2D4025CC30A3051C815E3F5304329 (TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionMap Get() { return m_Wrapper.m_Touch; }
		TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * L_0 = __this->get_m_Wrapper_0();
		NullCheck(L_0);
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_1 = L_0->get_m_Touch_1();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * TouchActions_Get_mDEC68CD99EB2D4025CC30A3051C815E3F5304329_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * _thisAdjusted = reinterpret_cast<TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *>(__this + _offset);
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * _returnValue;
	_returnValue = TouchActions_Get_mDEC68CD99EB2D4025CC30A3051C815E3F5304329(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Controls.TouchControls/TouchActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchActions_Enable_m4BB5A6FBC38438B9F12A9D780E2389A5CCDF5B46 (TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * __this, const RuntimeMethod* method)
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = TouchActions_Get_mDEC68CD99EB2D4025CC30A3051C815E3F5304329((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InputActionMap_Enable_m7FB7229D7099C525C994CA0208284CC904D52F15(L_0, /*hidden argument*/NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void TouchActions_Enable_m4BB5A6FBC38438B9F12A9D780E2389A5CCDF5B46_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * _thisAdjusted = reinterpret_cast<TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *>(__this + _offset);
	TouchActions_Enable_m4BB5A6FBC38438B9F12A9D780E2389A5CCDF5B46(_thisAdjusted, method);
}
// System.Void Controls.TouchControls/TouchActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchActions_Disable_m73825CC37ED24254F251DDDC3B5C5B91E6526BF6 (TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * __this, const RuntimeMethod* method)
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = TouchActions_Get_mDEC68CD99EB2D4025CC30A3051C815E3F5304329((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InputActionMap_Disable_mE9427CBA292066C977F0A8FE109A1D4B4E6CB6B5(L_0, /*hidden argument*/NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void TouchActions_Disable_m73825CC37ED24254F251DDDC3B5C5B91E6526BF6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * _thisAdjusted = reinterpret_cast<TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *>(__this + _offset);
	TouchActions_Disable_m73825CC37ED24254F251DDDC3B5C5B91E6526BF6(_thisAdjusted, method);
}
// System.Boolean Controls.TouchControls/TouchActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchActions_get_enabled_m0A10248AA5B6D9B72924D4A430AD7612F6F62288 (TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * __this, const RuntimeMethod* method)
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = TouchActions_Get_mDEC68CD99EB2D4025CC30A3051C815E3F5304329((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InputActionMap_get_enabled_m067EAC332984B7758EC1214A45FF0552F913945E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TouchActions_get_enabled_m0A10248AA5B6D9B72924D4A430AD7612F6F62288_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * _thisAdjusted = reinterpret_cast<TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TouchActions_get_enabled_m0A10248AA5B6D9B72924D4A430AD7612F6F62288(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap Controls.TouchControls/TouchActions::op_Implicit(Controls.TouchControls/TouchActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * TouchActions_op_Implicit_m8CD194DBE1C78B667995EC5D311786FED49A4780 (TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7  ___set0, const RuntimeMethod* method)
{
	{
		// public static implicit operator InputActionMap(TouchActions set) { return set.Get(); }
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = TouchActions_Get_mDEC68CD99EB2D4025CC30A3051C815E3F5304329((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)(&___set0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Controls.TouchControls/TouchActions::SetCallbacks(Controls.TouchControls/ITouchActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchActions_SetCallbacks_m3FDB1FDFA3D09B8BFD7C7BE39F4C935ED29A1849 (TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchActions_tB99260C763D8AB251A09F164BDBED4F37EF61344_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Wrapper.m_TouchActionsCallbackInterface != null)
		TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * L_0 = __this->get_m_Wrapper_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_m_TouchActionsCallbackInterface_2();
		if (!L_1)
		{
			goto IL_0142;
		}
	}
	{
		// @PrimaryFingerPosition.started -= m_Wrapper.m_TouchActionsCallbackInterface.OnPrimaryFingerPosition;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_2;
		L_2 = TouchActions_get_PrimaryFingerPosition_m8480F12CFF404B100BC2D202D01C90955049E894((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)__this, /*hidden argument*/NULL);
		TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * L_3 = __this->get_m_Wrapper_0();
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->get_m_TouchActionsCallbackInterface_2();
		RuntimeObject* L_5 = L_4;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_6 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_6, L_5, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_5, 0, ITouchActions_tB99260C763D8AB251A09F164BDBED4F37EF61344_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_2);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_2, L_6, /*hidden argument*/NULL);
		// @PrimaryFingerPosition.performed -= m_Wrapper.m_TouchActionsCallbackInterface.OnPrimaryFingerPosition;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_7;
		L_7 = TouchActions_get_PrimaryFingerPosition_m8480F12CFF404B100BC2D202D01C90955049E894((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)__this, /*hidden argument*/NULL);
		TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * L_8 = __this->get_m_Wrapper_0();
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->get_m_TouchActionsCallbackInterface_2();
		RuntimeObject* L_10 = L_9;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_11 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_11, L_10, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_10, 0, ITouchActions_tB99260C763D8AB251A09F164BDBED4F37EF61344_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_7);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_7, L_11, /*hidden argument*/NULL);
		// @PrimaryFingerPosition.canceled -= m_Wrapper.m_TouchActionsCallbackInterface.OnPrimaryFingerPosition;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_12;
		L_12 = TouchActions_get_PrimaryFingerPosition_m8480F12CFF404B100BC2D202D01C90955049E894((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)__this, /*hidden argument*/NULL);
		TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * L_13 = __this->get_m_Wrapper_0();
		NullCheck(L_13);
		RuntimeObject* L_14 = L_13->get_m_TouchActionsCallbackInterface_2();
		RuntimeObject* L_15 = L_14;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_16 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_16, L_15, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_15, 0, ITouchActions_tB99260C763D8AB251A09F164BDBED4F37EF61344_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_12);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_12, L_16, /*hidden argument*/NULL);
		// @SecondaryFingerPosition.started -= m_Wrapper.m_TouchActionsCallbackInterface.OnSecondaryFingerPosition;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_17;
		L_17 = TouchActions_get_SecondaryFingerPosition_m2B3654918B354379504BCDB9A5DBDB26C4D20491((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)__this, /*hidden argument*/NULL);
		TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * L_18 = __this->get_m_Wrapper_0();
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->get_m_TouchActionsCallbackInterface_2();
		RuntimeObject* L_20 = L_19;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_21 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_21, L_20, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_20, 1, ITouchActions_tB99260C763D8AB251A09F164BDBED4F37EF61344_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_17);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_17, L_21, /*hidden argument*/NULL);
		// @SecondaryFingerPosition.performed -= m_Wrapper.m_TouchActionsCallbackInterface.OnSecondaryFingerPosition;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_22;
		L_22 = TouchActions_get_SecondaryFingerPosition_m2B3654918B354379504BCDB9A5DBDB26C4D20491((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)__this, /*hidden argument*/NULL);
		TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * L_23 = __this->get_m_Wrapper_0();
		NullCheck(L_23);
		RuntimeObject* L_24 = L_23->get_m_TouchActionsCallbackInterface_2();
		RuntimeObject* L_25 = L_24;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_26 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_26, L_25, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_25, 1, ITouchActions_tB99260C763D8AB251A09F164BDBED4F37EF61344_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_22);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_22, L_26, /*hidden argument*/NULL);
		// @SecondaryFingerPosition.canceled -= m_Wrapper.m_TouchActionsCallbackInterface.OnSecondaryFingerPosition;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_27;
		L_27 = TouchActions_get_SecondaryFingerPosition_m2B3654918B354379504BCDB9A5DBDB26C4D20491((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)__this, /*hidden argument*/NULL);
		TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * L_28 = __this->get_m_Wrapper_0();
		NullCheck(L_28);
		RuntimeObject* L_29 = L_28->get_m_TouchActionsCallbackInterface_2();
		RuntimeObject* L_30 = L_29;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_31 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_31, L_30, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_30, 1, ITouchActions_tB99260C763D8AB251A09F164BDBED4F37EF61344_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_27);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_27, L_31, /*hidden argument*/NULL);
		// @SecondaryTouchContact.started -= m_Wrapper.m_TouchActionsCallbackInterface.OnSecondaryTouchContact;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_32;
		L_32 = TouchActions_get_SecondaryTouchContact_mB93584AB2112CB836AD7280264046D941E92D158((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)__this, /*hidden argument*/NULL);
		TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * L_33 = __this->get_m_Wrapper_0();
		NullCheck(L_33);
		RuntimeObject* L_34 = L_33->get_m_TouchActionsCallbackInterface_2();
		RuntimeObject* L_35 = L_34;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_36 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_36, L_35, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_35, 2, ITouchActions_tB99260C763D8AB251A09F164BDBED4F37EF61344_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_32);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_32, L_36, /*hidden argument*/NULL);
		// @SecondaryTouchContact.performed -= m_Wrapper.m_TouchActionsCallbackInterface.OnSecondaryTouchContact;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_37;
		L_37 = TouchActions_get_SecondaryTouchContact_mB93584AB2112CB836AD7280264046D941E92D158((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)__this, /*hidden argument*/NULL);
		TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * L_38 = __this->get_m_Wrapper_0();
		NullCheck(L_38);
		RuntimeObject* L_39 = L_38->get_m_TouchActionsCallbackInterface_2();
		RuntimeObject* L_40 = L_39;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_41 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_41, L_40, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_40, 2, ITouchActions_tB99260C763D8AB251A09F164BDBED4F37EF61344_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_37);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_37, L_41, /*hidden argument*/NULL);
		// @SecondaryTouchContact.canceled -= m_Wrapper.m_TouchActionsCallbackInterface.OnSecondaryTouchContact;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_42;
		L_42 = TouchActions_get_SecondaryTouchContact_mB93584AB2112CB836AD7280264046D941E92D158((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)__this, /*hidden argument*/NULL);
		TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * L_43 = __this->get_m_Wrapper_0();
		NullCheck(L_43);
		RuntimeObject* L_44 = L_43->get_m_TouchActionsCallbackInterface_2();
		RuntimeObject* L_45 = L_44;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_46 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_46, L_45, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_45, 2, ITouchActions_tB99260C763D8AB251A09F164BDBED4F37EF61344_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_42);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_42, L_46, /*hidden argument*/NULL);
	}

IL_0142:
	{
		// m_Wrapper.m_TouchActionsCallbackInterface = instance;
		TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * L_47 = __this->get_m_Wrapper_0();
		RuntimeObject* L_48 = ___instance0;
		NullCheck(L_47);
		L_47->set_m_TouchActionsCallbackInterface_2(L_48);
		// if (instance != null)
		RuntimeObject* L_49 = ___instance0;
		if (!L_49)
		{
			goto IL_022c;
		}
	}
	{
		// @PrimaryFingerPosition.started += instance.OnPrimaryFingerPosition;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_50;
		L_50 = TouchActions_get_PrimaryFingerPosition_m8480F12CFF404B100BC2D202D01C90955049E894((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_51 = ___instance0;
		RuntimeObject* L_52 = L_51;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_53 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_53, L_52, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_52, 0, ITouchActions_tB99260C763D8AB251A09F164BDBED4F37EF61344_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_50);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_50, L_53, /*hidden argument*/NULL);
		// @PrimaryFingerPosition.performed += instance.OnPrimaryFingerPosition;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_54;
		L_54 = TouchActions_get_PrimaryFingerPosition_m8480F12CFF404B100BC2D202D01C90955049E894((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_55 = ___instance0;
		RuntimeObject* L_56 = L_55;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_57 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_57, L_56, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_56, 0, ITouchActions_tB99260C763D8AB251A09F164BDBED4F37EF61344_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_54);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_54, L_57, /*hidden argument*/NULL);
		// @PrimaryFingerPosition.canceled += instance.OnPrimaryFingerPosition;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_58;
		L_58 = TouchActions_get_PrimaryFingerPosition_m8480F12CFF404B100BC2D202D01C90955049E894((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_59 = ___instance0;
		RuntimeObject* L_60 = L_59;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_61 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_61, L_60, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_60, 0, ITouchActions_tB99260C763D8AB251A09F164BDBED4F37EF61344_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_58);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_58, L_61, /*hidden argument*/NULL);
		// @SecondaryFingerPosition.started += instance.OnSecondaryFingerPosition;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_62;
		L_62 = TouchActions_get_SecondaryFingerPosition_m2B3654918B354379504BCDB9A5DBDB26C4D20491((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_63 = ___instance0;
		RuntimeObject* L_64 = L_63;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_65 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_65, L_64, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_64, 1, ITouchActions_tB99260C763D8AB251A09F164BDBED4F37EF61344_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_62);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_62, L_65, /*hidden argument*/NULL);
		// @SecondaryFingerPosition.performed += instance.OnSecondaryFingerPosition;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_66;
		L_66 = TouchActions_get_SecondaryFingerPosition_m2B3654918B354379504BCDB9A5DBDB26C4D20491((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_67 = ___instance0;
		RuntimeObject* L_68 = L_67;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_69 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_69, L_68, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_68, 1, ITouchActions_tB99260C763D8AB251A09F164BDBED4F37EF61344_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_66);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_66, L_69, /*hidden argument*/NULL);
		// @SecondaryFingerPosition.canceled += instance.OnSecondaryFingerPosition;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_70;
		L_70 = TouchActions_get_SecondaryFingerPosition_m2B3654918B354379504BCDB9A5DBDB26C4D20491((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_71 = ___instance0;
		RuntimeObject* L_72 = L_71;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_73 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_73, L_72, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_72, 1, ITouchActions_tB99260C763D8AB251A09F164BDBED4F37EF61344_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_70);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_70, L_73, /*hidden argument*/NULL);
		// @SecondaryTouchContact.started += instance.OnSecondaryTouchContact;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_74;
		L_74 = TouchActions_get_SecondaryTouchContact_mB93584AB2112CB836AD7280264046D941E92D158((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_75 = ___instance0;
		RuntimeObject* L_76 = L_75;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_77 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_77, L_76, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_76, 2, ITouchActions_tB99260C763D8AB251A09F164BDBED4F37EF61344_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_74);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_74, L_77, /*hidden argument*/NULL);
		// @SecondaryTouchContact.performed += instance.OnSecondaryTouchContact;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_78;
		L_78 = TouchActions_get_SecondaryTouchContact_mB93584AB2112CB836AD7280264046D941E92D158((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_79 = ___instance0;
		RuntimeObject* L_80 = L_79;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_81 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_81, L_80, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_80, 2, ITouchActions_tB99260C763D8AB251A09F164BDBED4F37EF61344_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_78);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_78, L_81, /*hidden argument*/NULL);
		// @SecondaryTouchContact.canceled += instance.OnSecondaryTouchContact;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_82;
		L_82 = TouchActions_get_SecondaryTouchContact_mB93584AB2112CB836AD7280264046D941E92D158((TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_83 = ___instance0;
		RuntimeObject* L_84 = L_83;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_85 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_85, L_84, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_84, 2, ITouchActions_tB99260C763D8AB251A09F164BDBED4F37EF61344_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_82);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_82, L_85, /*hidden argument*/NULL);
	}

IL_022c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TouchActions_SetCallbacks_m3FDB1FDFA3D09B8BFD7C7BE39F4C935ED29A1849_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * _thisAdjusted = reinterpret_cast<TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 *>(__this + _offset);
	TouchActions_SetCallbacks_m3FDB1FDFA3D09B8BFD7C7BE39F4C935ED29A1849(_thisAdjusted, ___instance0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Gameplay.Tower/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m530087BC3E59D27A8416E940B4AF9211EA9D02F5 (U3CU3Ec__DisplayClass21_0_t6D6C3347E71A72CF0A4C5FC140F5E3B312BCEEFA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Gameplay.Tower/<>c__DisplayClass21_0::<TestAnimationEnded>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass21_0_U3CTestAnimationEndedU3Eb__0_m0F27D144353DE2303D43C4B76CC6D880FAD1475D (U3CU3Ec__DisplayClass21_0_t6D6C3347E71A72CF0A4C5FC140F5E3B312BCEEFA * __this, const RuntimeMethod* method)
{
	{
		// yield return new WaitUntil(() => stateInfo.length > stateInfo.normalizedTime);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * L_0 = __this->get_address_of_stateInfo_0();
		float L_1;
		L_1 = AnimatorStateInfo_get_length_m020815F180AA8D3485CC6AB59A7E596BBA11D6CF((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)L_0, /*hidden argument*/NULL);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * L_2 = __this->get_address_of_stateInfo_0();
		float L_3;
		L_3 = AnimatorStateInfo_get_normalizedTime_mC951C5D83749FC2AE37DCC75A022383C578F3B40((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)L_2, /*hidden argument*/NULL);
		return (bool)((((float)L_1) > ((float)L_3))? 1 : 0);
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
// System.Void Gameplay.Tower/<SpawnAfterTime>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnAfterTimeU3Ed__19__ctor_mBE5AF96CEE62E7A7347928839EAAE76CBCDB9D6C (U3CSpawnAfterTimeU3Ed__19_t5C81BC747ADF6D129809F5F3A35B754D3099BF5E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Gameplay.Tower/<SpawnAfterTime>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnAfterTimeU3Ed__19_System_IDisposable_Dispose_m440890236263A66E16D33AB3B49C32170326A5C2 (U3CSpawnAfterTimeU3Ed__19_t5C81BC747ADF6D129809F5F3A35B754D3099BF5E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Gameplay.Tower/<SpawnAfterTime>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnAfterTimeU3Ed__19_MoveNext_mCC9E0F4DCFCFCB88E9603D5D35F9F311397FE34D (U3CSpawnAfterTimeU3Ed__19_t5C81BC747ADF6D129809F5F3A35B754D3099BF5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrencyComponent_1_get_Current_m6459AE4C8551194AF604C2411F405DF4DCD1F49C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericDictionary_2_GetEnumerator_m64DA8E4F1643598B75314D72CA28D25B53027E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericDictionary_2_get_Count_mE4A833AAB126B8A55EE3EFFC30546AF7EBE9F778_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericDictionary_2_get_Item_m23E39C5E970445F88B162575DD5118FCCD60D21B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBFED1107BED0293A2AD95C0CBEC0DBB336CE0F85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mCEBD8B221F899AD9CFABF37864C2FF812DBCF562_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	KeyValuePair_2_tD7776FAD45E0399E85A6820F450F712AC48B28F4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	KeyValuePair_2_tD7776FAD45E0399E85A6820F450F712AC48B28F4  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	GameStateManager_tF7AEC3D17EAEB0E30CBADF2F67F129F582EF3505 * G_B18_0 = NULL;
	GameStateManager_tF7AEC3D17EAEB0E30CBADF2F67F129F582EF3505 * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_00b9;
			}
			case 3:
			{
				goto IL_01c7;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return _waitForNextSpawn;
		Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * L_3 = V_1;
		NullCheck(L_3);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = L_3->get__waitForNextSpawn_25();
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0042:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (PercentSpawningTypes.Count <= 0) yield break;
		Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * L_5 = V_1;
		NullCheck(L_5);
		GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93 * L_6;
		L_6 = Tower_get_PercentSpawningTypes_m886A0B08DE7C43F5F1E318AD8A3C6B6FED5CAA89_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = GenericDictionary_2_get_Count_mE4A833AAB126B8A55EE3EFFC30546AF7EBE9F778(L_6, /*hidden argument*/GenericDictionary_2_get_Count_mE4A833AAB126B8A55EE3EFFC30546AF7EBE9F778_RuntimeMethod_var);
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		// if (PercentSpawningTypes.Count <= 0) yield break;
		return (bool)0;
	}

IL_0059:
	{
		// int minInclusive = 100;
		__this->set_U3CminInclusiveU3E5__2_3(((int32_t)100));
		// foreach (var percentSpawningType in PercentSpawningTypes)
		Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * L_8 = V_1;
		NullCheck(L_8);
		GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93 * L_9;
		L_9 = Tower_get_PercentSpawningTypes_m886A0B08DE7C43F5F1E318AD8A3C6B6FED5CAA89_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericDictionary_2_GetEnumerator_m64DA8E4F1643598B75314D72CA28D25B53027E63(L_9, /*hidden argument*/GenericDictionary_2_GetEnumerator_m64DA8E4F1643598B75314D72CA28D25B53027E63_RuntimeMethod_var);
		V_2 = L_10;
	}

IL_006d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0092;
		}

IL_006f:
		{
			// foreach (var percentSpawningType in PercentSpawningTypes)
			RuntimeObject* L_11 = V_2;
			NullCheck(L_11);
			KeyValuePair_2_tD7776FAD45E0399E85A6820F450F712AC48B28F4  L_12;
			L_12 = InterfaceFuncInvoker0< KeyValuePair_2_tD7776FAD45E0399E85A6820F450F712AC48B28F4  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Gameplay.UnitType>>::get_Current() */, IEnumerator_1_tBFED1107BED0293A2AD95C0CBEC0DBB336CE0F85_il2cpp_TypeInfo_var, L_11);
			V_3 = L_12;
			// if (percentSpawningType.Key <= minInclusive)
			int32_t L_13;
			L_13 = KeyValuePair_2_get_Key_mCEBD8B221F899AD9CFABF37864C2FF812DBCF562_inline((KeyValuePair_2_tD7776FAD45E0399E85A6820F450F712AC48B28F4 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_mCEBD8B221F899AD9CFABF37864C2FF812DBCF562_RuntimeMethod_var);
			int32_t L_14 = __this->get_U3CminInclusiveU3E5__2_3();
			if ((((int32_t)L_13) > ((int32_t)L_14)))
			{
				goto IL_0092;
			}
		}

IL_0085:
		{
			// minInclusive = percentSpawningType.Key;
			int32_t L_15;
			L_15 = KeyValuePair_2_get_Key_mCEBD8B221F899AD9CFABF37864C2FF812DBCF562_inline((KeyValuePair_2_tD7776FAD45E0399E85A6820F450F712AC48B28F4 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_mCEBD8B221F899AD9CFABF37864C2FF812DBCF562_RuntimeMethod_var);
			__this->set_U3CminInclusiveU3E5__2_3(L_15);
		}

IL_0092:
		{
			// foreach (var percentSpawningType in PercentSpawningTypes)
			RuntimeObject* L_16 = V_2;
			NullCheck(L_16);
			bool L_17;
			L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_16);
			if (L_17)
			{
				goto IL_006f;
			}
		}

IL_009a:
		{
			IL2CPP_LEAVE(0x1CE, FINALLY_009f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009f;
	}

FINALLY_009f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_18 = V_2;
			if (!L_18)
			{
				goto IL_00a8;
			}
		}

IL_00a2:
		{
			RuntimeObject* L_19 = V_2;
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_19);
		}

IL_00a8:
		{
			IL2CPP_END_FINALLY(159)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(159)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1CE, IL_01ce)
	}

IL_00a9:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00b9:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00c0:
	{
		// while (GameStateManager.Instance?.CurrentGameState == GameState.GameState.Paused)
		GameStateManager_tF7AEC3D17EAEB0E30CBADF2F67F129F582EF3505 * L_20;
		L_20 = GameStateManager_get_Instance_m160572733C9C45A80CF306B82D53384DFC9E3797(/*hidden argument*/NULL);
		GameStateManager_tF7AEC3D17EAEB0E30CBADF2F67F129F582EF3505 * L_21 = L_20;
		G_B17_0 = L_21;
		if (L_21)
		{
			G_B18_0 = L_21;
			goto IL_00cc;
		}
	}
	{
		G_B19_0 = 0;
		goto IL_00d4;
	}

IL_00cc:
	{
		NullCheck(G_B18_0);
		int32_t L_22;
		L_22 = GameStateManager_get_CurrentGameState_m066DDED0686771E8D0FA6480C7962DEE6371F11F_inline(G_B18_0, /*hidden argument*/NULL);
		G_B19_0 = ((((int32_t)L_22) == ((int32_t)1))? 1 : 0);
	}

IL_00d4:
	{
		if (G_B19_0)
		{
			goto IL_00a9;
		}
	}
	{
		// var rdmValue = Mathf.Min(Random.Range(minInclusive, 100), 100);
		int32_t L_23 = __this->get_U3CminInclusiveU3E5__2_3();
		int32_t L_24;
		L_24 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(L_23, ((int32_t)100), /*hidden argument*/NULL);
		int32_t L_25;
		L_25 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(L_24, ((int32_t)100), /*hidden argument*/NULL);
		V_4 = L_25;
		// int minPercentage = 0;
		V_5 = 0;
		// foreach (var percentSpawningType in PercentSpawningTypes)
		Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * L_26 = V_1;
		NullCheck(L_26);
		GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93 * L_27;
		L_27 = Tower_get_PercentSpawningTypes_m886A0B08DE7C43F5F1E318AD8A3C6B6FED5CAA89_inline(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericDictionary_2_GetEnumerator_m64DA8E4F1643598B75314D72CA28D25B53027E63(L_27, /*hidden argument*/GenericDictionary_2_GetEnumerator_m64DA8E4F1643598B75314D72CA28D25B53027E63_RuntimeMethod_var);
		V_2 = L_28;
	}

IL_00fb:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0124;
		}

IL_00fd:
		{
			// foreach (var percentSpawningType in PercentSpawningTypes)
			RuntimeObject* L_29 = V_2;
			NullCheck(L_29);
			KeyValuePair_2_tD7776FAD45E0399E85A6820F450F712AC48B28F4  L_30;
			L_30 = InterfaceFuncInvoker0< KeyValuePair_2_tD7776FAD45E0399E85A6820F450F712AC48B28F4  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Gameplay.UnitType>>::get_Current() */, IEnumerator_1_tBFED1107BED0293A2AD95C0CBEC0DBB336CE0F85_il2cpp_TypeInfo_var, L_29);
			V_8 = L_30;
			// if (percentSpawningType.Key <= rdmValue && percentSpawningType.Key > minPercentage)
			int32_t L_31;
			L_31 = KeyValuePair_2_get_Key_mCEBD8B221F899AD9CFABF37864C2FF812DBCF562_inline((KeyValuePair_2_tD7776FAD45E0399E85A6820F450F712AC48B28F4 *)(&V_8), /*hidden argument*/KeyValuePair_2_get_Key_mCEBD8B221F899AD9CFABF37864C2FF812DBCF562_RuntimeMethod_var);
			int32_t L_32 = V_4;
			if ((((int32_t)L_31) > ((int32_t)L_32)))
			{
				goto IL_0124;
			}
		}

IL_0110:
		{
			int32_t L_33;
			L_33 = KeyValuePair_2_get_Key_mCEBD8B221F899AD9CFABF37864C2FF812DBCF562_inline((KeyValuePair_2_tD7776FAD45E0399E85A6820F450F712AC48B28F4 *)(&V_8), /*hidden argument*/KeyValuePair_2_get_Key_mCEBD8B221F899AD9CFABF37864C2FF812DBCF562_RuntimeMethod_var);
			int32_t L_34 = V_5;
			if ((((int32_t)L_33) <= ((int32_t)L_34)))
			{
				goto IL_0124;
			}
		}

IL_011b:
		{
			// minPercentage = percentSpawningType.Key;
			int32_t L_35;
			L_35 = KeyValuePair_2_get_Key_mCEBD8B221F899AD9CFABF37864C2FF812DBCF562_inline((KeyValuePair_2_tD7776FAD45E0399E85A6820F450F712AC48B28F4 *)(&V_8), /*hidden argument*/KeyValuePair_2_get_Key_mCEBD8B221F899AD9CFABF37864C2FF812DBCF562_RuntimeMethod_var);
			V_5 = L_35;
		}

IL_0124:
		{
			// foreach (var percentSpawningType in PercentSpawningTypes)
			RuntimeObject* L_36 = V_2;
			NullCheck(L_36);
			bool L_37;
			L_37 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_36);
			if (L_37)
			{
				goto IL_00fd;
			}
		}

IL_012c:
		{
			IL2CPP_LEAVE(0x138, FINALLY_012e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_012e;
	}

FINALLY_012e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_38 = V_2;
			if (!L_38)
			{
				goto IL_0137;
			}
		}

IL_0131:
		{
			RuntimeObject* L_39 = V_2;
			NullCheck(L_39);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_39);
		}

IL_0137:
		{
			IL2CPP_END_FINALLY(302)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(302)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x138, IL_0138)
	}

IL_0138:
	{
		// var randomSphere = Random.insideUnitSphere * radiusSpawn;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90(/*hidden argument*/NULL);
		Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * L_41 = V_1;
		NullCheck(L_41);
		float L_42 = L_41->get_radiusSpawn_24();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_40, L_42, /*hidden argument*/NULL);
		V_6 = L_43;
		// randomSphere.y = 0;
		(&V_6)->set_y_3((0.0f));
		// randomSphere.z = Mathf.Abs(randomSphere.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = V_6;
		float L_45 = L_44.get_z_4();
		float L_46;
		L_46 = fabsf(L_45);
		(&V_6)->set_z_4(L_46);
		// var rdmInUnitSphere = Spawner.LaunchTransform.position + Spawner.LaunchTransform.forward + randomSphere;
		Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * L_47 = V_1;
		NullCheck(L_47);
		SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * L_48;
		L_48 = Tower_get_Spawner_m9689064FF86ACBAEF942AF0147AD2F7B520B0852_inline(L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = SpawnerComponent_get_LaunchTransform_mC7512D5937EAA78B457F4110AEA7A651EC2C2A36_inline(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_49, /*hidden argument*/NULL);
		Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * L_51 = V_1;
		NullCheck(L_51);
		SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * L_52;
		L_52 = Tower_get_Spawner_m9689064FF86ACBAEF942AF0147AD2F7B520B0852_inline(L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = SpawnerComponent_get_LaunchTransform_mC7512D5937EAA78B457F4110AEA7A651EC2C2A36_inline(L_52, /*hidden argument*/NULL);
		NullCheck(L_53);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_53, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_50, L_54, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_55, L_56, /*hidden argument*/NULL);
		V_7 = L_57;
		// Spawner.SpawnUnit(PercentSpawningTypes[minPercentage], rdmInUnitSphere);
		Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * L_58 = V_1;
		NullCheck(L_58);
		SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * L_59;
		L_59 = Tower_get_Spawner_m9689064FF86ACBAEF942AF0147AD2F7B520B0852_inline(L_58, /*hidden argument*/NULL);
		Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * L_60 = V_1;
		NullCheck(L_60);
		GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93 * L_61;
		L_61 = Tower_get_PercentSpawningTypes_m886A0B08DE7C43F5F1E318AD8A3C6B6FED5CAA89_inline(L_60, /*hidden argument*/NULL);
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63;
		L_63 = GenericDictionary_2_get_Item_m23E39C5E970445F88B162575DD5118FCCD60D21B(L_61, L_62, /*hidden argument*/GenericDictionary_2_get_Item_m23E39C5E970445F88B162575DD5118FCCD60D21B_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64 = V_7;
		NullCheck(L_59);
		Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * L_65;
		L_65 = SpawnerComponent_SpawnUnit_mDFD808F071D2577D25A21F6E356C3889E9F69F29(L_59, L_63, L_64, /*hidden argument*/NULL);
		// yield return _waitForNextSpawn;
		Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * L_66 = V_1;
		NullCheck(L_66);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_67 = L_66->get__waitForNextSpawn_25();
		__this->set_U3CU3E2__current_1(L_67);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_01c7:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_01ce:
	{
		// while (Spawner.Money.Current > 0.0f)
		Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * L_68 = V_1;
		NullCheck(L_68);
		SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * L_69;
		L_69 = Tower_get_Spawner_m9689064FF86ACBAEF942AF0147AD2F7B520B0852_inline(L_68, /*hidden argument*/NULL);
		NullCheck(L_69);
		MoneyComponent_t228EEF2620FCABEA0792C76C2698AFA39588683B * L_70;
		L_70 = SpawnerComponent_get_Money_m0221965A3F92E642D3ACCD6C4A3F4E7D15FC113B_inline(L_69, /*hidden argument*/NULL);
		NullCheck(L_70);
		float L_71;
		L_71 = CurrencyComponent_1_get_Current_m6459AE4C8551194AF604C2411F405DF4DCD1F49C_inline(L_70, /*hidden argument*/CurrencyComponent_1_get_Current_m6459AE4C8551194AF604C2411F405DF4DCD1F49C_RuntimeMethod_var);
		if ((((float)L_71) > ((float)(0.0f))))
		{
			goto IL_00c0;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Gameplay.Tower/<SpawnAfterTime>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnAfterTimeU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB29436B1A759B8925484DD78DDE4C623D63C04DC (U3CSpawnAfterTimeU3Ed__19_t5C81BC747ADF6D129809F5F3A35B754D3099BF5E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Gameplay.Tower/<SpawnAfterTime>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnAfterTimeU3Ed__19_System_Collections_IEnumerator_Reset_m08C60D1DE0E5C3EE25C10467468311DAB97FBA13 (U3CSpawnAfterTimeU3Ed__19_t5C81BC747ADF6D129809F5F3A35B754D3099BF5E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnAfterTimeU3Ed__19_System_Collections_IEnumerator_Reset_m08C60D1DE0E5C3EE25C10467468311DAB97FBA13_RuntimeMethod_var)));
	}
}
// System.Object Gameplay.Tower/<SpawnAfterTime>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnAfterTimeU3Ed__19_System_Collections_IEnumerator_get_Current_mEA487B4458ABE423668D4E13B571F403EE51AADA (U3CSpawnAfterTimeU3Ed__19_t5C81BC747ADF6D129809F5F3A35B754D3099BF5E * __this, const RuntimeMethod* method)
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
// System.Void Gameplay.Tower/<TestAnimationEnded>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestAnimationEndedU3Ed__21__ctor_mF9A14326B25E4D4B341FAD46E68DB8C1723A1139 (U3CTestAnimationEndedU3Ed__21_t1C01CBE1DD38C489468F1DE1FE3CFD55145BF123 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Gameplay.Tower/<TestAnimationEnded>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestAnimationEndedU3Ed__21_System_IDisposable_Dispose_mF0A873955536D17B5878801504DAC5A17AA58F90 (U3CTestAnimationEndedU3Ed__21_t1C01CBE1DD38C489468F1DE1FE3CFD55145BF123 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Gameplay.Tower/<TestAnimationEnded>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTestAnimationEndedU3Ed__21_MoveNext_m69173DAAFE5A6DA7603DDE6C3DFB3815708D2A0F (U3CTestAnimationEndedU3Ed__21_t1C01CBE1DD38C489468F1DE1FE3CFD55145BF123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisNavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A_mA3DB542D600F84046863E065A99F50A0DBEB395F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CTestAnimationEndedU3Eb__0_m0F27D144353DE2303D43C4B76CC6D880FAD1475D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_t6D6C3347E71A72CF0A4C5FC140F5E3B312BCEEFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * L_1 = __this->get_U3CU3E4__this_4();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_0099;
			}
			case 3:
			{
				goto IL_00c0;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		U3CU3Ec__DisplayClass21_0_t6D6C3347E71A72CF0A4C5FC140F5E3B312BCEEFA * L_3 = (U3CU3Ec__DisplayClass21_0_t6D6C3347E71A72CF0A4C5FC140F5E3B312BCEEFA *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_t6D6C3347E71A72CF0A4C5FC140F5E3B312BCEEFA_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass21_0__ctor_m530087BC3E59D27A8416E940B4AF9211EA9D02F5(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E8__1_2(L_3);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0048:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var stateInfo = animator.GetCurrentAnimatorStateInfo(0);
		U3CU3Ec__DisplayClass21_0_t6D6C3347E71A72CF0A4C5FC140F5E3B312BCEEFA * L_4 = __this->get_U3CU3E8__1_2();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = __this->get_animator_3();
		NullCheck(L_5);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_6;
		L_6 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_5, 0, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_stateInfo_0(L_6);
		// if (TryGetComponent(out NavMeshSurface surface))
		Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * L_7 = V_1;
		NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A ** L_8 = __this->get_address_of_U3CsurfaceU3E5__2_5();
		NullCheck(L_7);
		bool L_9;
		L_9 = Component_TryGetComponent_TisNavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A_mA3DB542D600F84046863E065A99F50A0DBEB395F(L_7, (NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A **)L_8, /*hidden argument*/Component_TryGetComponent_TisNavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A_mA3DB542D600F84046863E065A99F50A0DBEB395F_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_00ab;
		}
	}
	{
		// yield return new WaitUntil(() => stateInfo.length > stateInfo.normalizedTime);
		U3CU3Ec__DisplayClass21_0_t6D6C3347E71A72CF0A4C5FC140F5E3B312BCEEFA * L_10 = __this->get_U3CU3E8__1_2();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_11 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass21_0_U3CTestAnimationEndedU3Eb__0_m0F27D144353DE2303D43C4B76CC6D880FAD1475D_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_12 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_12, L_11, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0099:
	{
		__this->set_U3CU3E1__state_0((-1));
		// surface.BuildNavMesh();
		NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A * L_13 = __this->get_U3CsurfaceU3E5__2_5();
		NullCheck(L_13);
		NavMeshSurface_BuildNavMesh_mE6606F10EA912379674F43E92D50273AB1A9B4B7(L_13, /*hidden argument*/NULL);
	}

IL_00ab:
	{
		// yield return SpawnAfterTime();
		Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * L_14 = V_1;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = Tower_SpawnAfterTime_m6403F3B8E6A0FA0004EB7B0EE63792E2F235E8AE(L_14, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_00c0:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object Gameplay.Tower/<TestAnimationEnded>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTestAnimationEndedU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3CE0CDC8D5B4625DDF279EB4DFABADBA5FE17F9E (U3CTestAnimationEndedU3Ed__21_t1C01CBE1DD38C489468F1DE1FE3CFD55145BF123 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Gameplay.Tower/<TestAnimationEnded>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestAnimationEndedU3Ed__21_System_Collections_IEnumerator_Reset_m0A4C25357AF76711DD01E08C95860BA1DE5E2361 (U3CTestAnimationEndedU3Ed__21_t1C01CBE1DD38C489468F1DE1FE3CFD55145BF123 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTestAnimationEndedU3Ed__21_System_Collections_IEnumerator_Reset_m0A4C25357AF76711DD01E08C95860BA1DE5E2361_RuntimeMethod_var)));
	}
}
// System.Object Gameplay.Tower/<TestAnimationEnded>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTestAnimationEndedU3Ed__21_System_Collections_IEnumerator_get_Current_mAD57D3CA55A139A6DDD32CB1B60C4F737FBF3225 (U3CTestAnimationEndedU3Ed__21_t1C01CBE1DD38C489468F1DE1FE3CFD55145BF123 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DSelectRadarSearchingType_t43F4DE272DC752F851CE93CA78CC62B6D06708ED (DSelectRadarSearchingType_t43F4DE272DC752F851CE93CA78CC62B6D06708ED * __this, int32_t ___searchingMethod0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___searchingMethod0);

}
// System.Void Managers.UiManager/DSelectRadarSearchingType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DSelectRadarSearchingType__ctor_m228DA33335086E47058F0824FF3CFB05062CE22C (DSelectRadarSearchingType_t43F4DE272DC752F851CE93CA78CC62B6D06708ED * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Managers.UiManager/DSelectRadarSearchingType::Invoke(Gameplay.Components.SearchingMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DSelectRadarSearchingType_Invoke_m17EEAC5B3D088C91AF20E9E8BD11664D79F11B88 (DSelectRadarSearchingType_t43F4DE272DC752F851CE93CA78CC62B6D06708ED * __this, int32_t ___searchingMethod0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___searchingMethod0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___searchingMethod0, targetMethod);
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
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___searchingMethod0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___searchingMethod0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___searchingMethod0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___searchingMethod0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___searchingMethod0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___searchingMethod0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Managers.UiManager/DSelectRadarSearchingType::BeginInvoke(Gameplay.Components.SearchingMethod,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DSelectRadarSearchingType_BeginInvoke_m1EF80A9B6B596A7D94C07187AF1415E3093E8A40 (DSelectRadarSearchingType_t43F4DE272DC752F851CE93CA78CC62B6D06708ED * __this, int32_t ___searchingMethod0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SearchingMethod_t615DC655A0FA03617C5D596979D3D8D2DD2DA28A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(SearchingMethod_t615DC655A0FA03617C5D596979D3D8D2DD2DA28A_il2cpp_TypeInfo_var, &___searchingMethod0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Managers.UiManager/DSelectRadarSearchingType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DSelectRadarSearchingType_EndInvoke_m8939C7A8F68E13096977E6E5F8C01C3E2C4C58D0 (DSelectRadarSearchingType_t43F4DE272DC752F851CE93CA78CC62B6D06708ED * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Managers.UiManager/DSelectSpawnableUnit::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DSelectSpawnableUnit__ctor_m2C5E8D2D29D8D608EFC27EC9F35C5431FD261BF5 (DSelectSpawnableUnit_t33D8A41BDE468CBC0E39E32A4B0367E8BD490C78 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Managers.UiManager/DSelectSpawnableUnit::Invoke(UI.UnitTypeSelector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DSelectSpawnableUnit_Invoke_m93C72E670A358E6E433866FA4605E28E8ED884C6 (DSelectSpawnableUnit_t33D8A41BDE468CBC0E39E32A4B0367E8BD490C78 * __this, UnitTypeSelector_tCE4315BDF2C562074885EE4F2EA7232B69A359C5 * ___unitTypeSelector0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (UnitTypeSelector_tCE4315BDF2C562074885EE4F2EA7232B69A359C5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___unitTypeSelector0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UnitTypeSelector_tCE4315BDF2C562074885EE4F2EA7232B69A359C5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___unitTypeSelector0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___unitTypeSelector0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___unitTypeSelector0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___unitTypeSelector0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___unitTypeSelector0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UnitTypeSelector_tCE4315BDF2C562074885EE4F2EA7232B69A359C5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___unitTypeSelector0, targetMethod);
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
						GenericInterfaceActionInvoker1< UnitTypeSelector_tCE4315BDF2C562074885EE4F2EA7232B69A359C5 * >::Invoke(targetMethod, targetThis, ___unitTypeSelector0);
					else
						GenericVirtActionInvoker1< UnitTypeSelector_tCE4315BDF2C562074885EE4F2EA7232B69A359C5 * >::Invoke(targetMethod, targetThis, ___unitTypeSelector0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnitTypeSelector_tCE4315BDF2C562074885EE4F2EA7232B69A359C5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___unitTypeSelector0);
					else
						VirtActionInvoker1< UnitTypeSelector_tCE4315BDF2C562074885EE4F2EA7232B69A359C5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___unitTypeSelector0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (UnitTypeSelector_tCE4315BDF2C562074885EE4F2EA7232B69A359C5 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___unitTypeSelector0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, UnitTypeSelector_tCE4315BDF2C562074885EE4F2EA7232B69A359C5 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___unitTypeSelector0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Managers.UiManager/DSelectSpawnableUnit::BeginInvoke(UI.UnitTypeSelector,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DSelectSpawnableUnit_BeginInvoke_m02E105451604199B0049BB5F7C6482C9E2DF5199 (DSelectSpawnableUnit_t33D8A41BDE468CBC0E39E32A4B0367E8BD490C78 * __this, UnitTypeSelector_tCE4315BDF2C562074885EE4F2EA7232B69A359C5 * ___unitTypeSelector0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___unitTypeSelector0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Managers.UiManager/DSelectSpawnableUnit::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DSelectSpawnableUnit_EndInvoke_m122AA1708EE4179DA5B3D30F53D201C8451AEBEB (DSelectSpawnableUnit_t33D8A41BDE468CBC0E39E32A4B0367E8BD490C78 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Gameplay.Unit/DRegisterUnit::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRegisterUnit__ctor_mE5E6D21DD86F60D8DD57388346F3F31C6242F55A (DRegisterUnit_t22944849DF6EAF14CAF9EC9225CA3AC3EB10704F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Gameplay.Unit/DRegisterUnit::Invoke(Gameplay.Unit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRegisterUnit_Invoke_mEA63321E48982C6D2EC4C67D2D3726861BF342D0 (DRegisterUnit_t22944849DF6EAF14CAF9EC9225CA3AC3EB10704F * __this, Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * ___unit0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___unit0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___unit0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___unit0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___unit0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___unit0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___unit0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___unit0, targetMethod);
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
						GenericInterfaceActionInvoker1< Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * >::Invoke(targetMethod, targetThis, ___unit0);
					else
						GenericVirtActionInvoker1< Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * >::Invoke(targetMethod, targetThis, ___unit0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___unit0);
					else
						VirtActionInvoker1< Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___unit0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___unit0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___unit0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Gameplay.Unit/DRegisterUnit::BeginInvoke(Gameplay.Unit,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRegisterUnit_BeginInvoke_m95B2B061BEEDD33534D2B20095342332371D69B5 (DRegisterUnit_t22944849DF6EAF14CAF9EC9225CA3AC3EB10704F * __this, Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * ___unit0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___unit0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Gameplay.Unit/DRegisterUnit::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRegisterUnit_EndInvoke_mBFA27A05901020FC42FE245B48C12A0997A545B0 (DRegisterUnit_t22944849DF6EAF14CAF9EC9225CA3AC3EB10704F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Gameplay.Unit/DUnregisterUnit::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DUnregisterUnit__ctor_m18B8EF6DCF0CCA6190300E43727DF320B344F0A5 (DUnregisterUnit_tB7A585B9C96839E9EB8A2264FD3CD35CE06CBFCC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Gameplay.Unit/DUnregisterUnit::Invoke(Gameplay.Unit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DUnregisterUnit_Invoke_mFD2C6DB4B3598C94FF8216B475D2338E4423BA05 (DUnregisterUnit_tB7A585B9C96839E9EB8A2264FD3CD35CE06CBFCC * __this, Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * ___unit0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___unit0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___unit0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___unit0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___unit0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___unit0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___unit0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___unit0, targetMethod);
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
						GenericInterfaceActionInvoker1< Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * >::Invoke(targetMethod, targetThis, ___unit0);
					else
						GenericVirtActionInvoker1< Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * >::Invoke(targetMethod, targetThis, ___unit0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___unit0);
					else
						VirtActionInvoker1< Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___unit0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___unit0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___unit0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Gameplay.Unit/DUnregisterUnit::BeginInvoke(Gameplay.Unit,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DUnregisterUnit_BeginInvoke_m4EA8D7FC100A3B2387BB6C115EAD11D7CACEE960 (DUnregisterUnit_tB7A585B9C96839E9EB8A2264FD3CD35CE06CBFCC * __this, Unit_t41599A2C18FEF791BA0125B34A51D27D5A785B4D * ___unit0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___unit0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Gameplay.Unit/DUnregisterUnit::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DUnregisterUnit_EndInvoke_mDF3054E6E5F64C362E115647DA65BBFB8B2860D4 (DUnregisterUnit_tB7A585B9C96839E9EB8A2264FD3CD35CE06CBFCC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UI.UnitTypeSelector/DUnitButtonClicked::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DUnitButtonClicked__ctor_m83FE1A45702D6CD699C6C464E7F2FD4C136DA666 (DUnitButtonClicked_tBE8676E1E0DBC2F05FE50B73CD273E49F95EC9FE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UI.UnitTypeSelector/DUnitButtonClicked::Invoke(UnityEngine.UI.Button,Gameplay.UnitType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DUnitButtonClicked_Invoke_m8F75F60A8AF86F4AFF5B8BDE061CAA771912229B (DUnitButtonClicked_tBE8676E1E0DBC2F05FE50B73CD273E49F95EC9FE * __this, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___button0, int32_t ___type1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___button0, ___type1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___button0, ___type1, targetMethod);
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
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___button0, ___type1);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___button0, ___type1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___button0, ___type1);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___button0, ___type1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___button0, ___type1, targetMethod);
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
						GenericInterfaceActionInvoker2< Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D *, int32_t >::Invoke(targetMethod, targetThis, ___button0, ___type1);
					else
						GenericVirtActionInvoker2< Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D *, int32_t >::Invoke(targetMethod, targetThis, ___button0, ___type1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___button0, ___type1);
					else
						VirtActionInvoker2< Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___button0, ___type1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___button0, ___type1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___button0, ___type1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UI.UnitTypeSelector/DUnitButtonClicked::BeginInvoke(UnityEngine.UI.Button,Gameplay.UnitType,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DUnitButtonClicked_BeginInvoke_m3B3C67A95C489133EEBBA3B5647BFBA6D4670F4E (DUnitButtonClicked_tBE8676E1E0DBC2F05FE50B73CD273E49F95EC9FE * __this, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___button0, int32_t ___type1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitType_t6DAE1F7924C09474B126957F76961771B832D282_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___button0;
	__d_args[1] = Box(UnitType_t6DAE1F7924C09474B126957F76961771B832D282_il2cpp_TypeInfo_var, &___type1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UI.UnitTypeSelector/DUnitButtonClicked::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DUnitButtonClicked_EndInvoke_mDFC24A98F4254C635F5BEDA19F5FFAB090763B1A (DUnitButtonClicked_tBE8676E1E0DBC2F05FE50B73CD273E49F95EC9FE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraMovement_get_Camera_m00885AAACE0B940467B466EF9158B6E29FB44611_inline (CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * __this, const RuntimeMethod* method)
{
	{
		// public Camera Camera => _camera;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get__camera_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * CameraMovement_get_TouchControls_m917D5A7526B49BF42DEF623B584E67CABEB411DC_inline (CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * __this, const RuntimeMethod* method)
{
	{
		// [field: SerializeField] public Controls.TouchControls TouchControls { get; private set; }
		TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * L_0 = __this->get_U3CTouchControlsU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CameraControls_tEDA4EF38E586C8A1DC6B93F001F386A7BDD735ED * CameraMovement_get_CameraControls_m1941048B0EF9914651C49EDD8190805DA6D9464C_inline (CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * __this, const RuntimeMethod* method)
{
	{
		// [field: SerializeField] public Controls.CameraControls CameraControls { get; private set; }
		CameraControls_tEDA4EF38E586C8A1DC6B93F001F386A7BDD735ED * L_0 = __this->get_U3CCameraControlsU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MapBrain_set_BestMap_m28418E4AF8606EB8B10E2BDBB61DBFDFA8DAF308_inline (MapBrain_t6EBE49FC00E0657D7FA9C2A8BED6550E916711EE * __this, CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * ___value0, const RuntimeMethod* method)
{
	{
		// public CandidateMap BestMap { get; private set; }
		CandidateMap_t242EDC2D8F190EE6E494FBF6D4EF61ABA01A24ED * L_0 = ___value0;
		__this->set_U3CBestMapU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cell_get_ObjectType_mA42FCADB320AAE2440D8508F9C5C2CC2323C2818_inline (Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * __this, const RuntimeMethod* method)
{
	{
		// public CellObjectType ObjectType { get; set; }
		int32_t L_0 = __this->get_U3CObjectTypeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameStateManager_get_CurrentGameState_m066DDED0686771E8D0FA6480C7962DEE6371F11F_inline (GameStateManager_tF7AEC3D17EAEB0E30CBADF2F67F129F582EF3505 * __this, const RuntimeMethod* method)
{
	{
		// get => _currentGameState;
		int32_t L_0 = __this->get__currentGameState_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  UiManager_get_CursorAsRay_m63AB878A93036720B74B3C14680B81A49F454CC6_inline (UiManager_t4E69E79345B044D6435B2B8D794FA27A60F6B63F * __this, const RuntimeMethod* method)
{
	{
		// public Ray CursorAsRay { get; private set; }
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_0 = __this->get_U3CCursorAsRayU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerActions__ctor_mEEC3202540FC6940EB8F109FAFB0E361DD76A224_inline (PlayerActions_tE5D99AE54CBF21CE91B6764058097295ADB9B506 * __this, PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A * ___wrapper0, const RuntimeMethod* method)
{
	{
		// public PlayerActions(@PlayerControls wrapper) { m_Wrapper = wrapper; }
		PlayerControls_t982AB2582D9B1392C9030AE8E14FB1684879E72A * L_0 = ___wrapper0;
		__this->set_m_Wrapper_0(L_0);
		// public PlayerActions(@PlayerControls wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * PlayerUI_get_UnitInformationHealthBar_mFB99DA677D2FBDCAC15EAAE21DFF6BE8F45CC56D_inline (PlayerUI_t1F80ADFA2EA73D21ED30E2631621CDACD6138DBC * __this, const RuntimeMethod* method)
{
	{
		// [field: SerializeField] public Scrollbar UnitInformationHealthBar { get; private set; }
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_0 = __this->get_U3CUnitInformationHealthBarU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TouchActions__ctor_m669675AEE0BB6BD3ACF4A2F47DD456A9989E3AEA_inline (TouchActions_t85C3CC76B16416D662F2B78AE03A90B115536BC7 * __this, TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * ___wrapper0, const RuntimeMethod* method)
{
	{
		// public TouchActions(@TouchControls wrapper) { m_Wrapper = wrapper; }
		TouchControls_tFB3ED76DAF80478131A94CEDBF043A91B940AD21 * L_0 = ___wrapper0;
		__this->set_m_Wrapper_0(L_0);
		// public TouchActions(@TouchControls wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93 * Tower_get_PercentSpawningTypes_m886A0B08DE7C43F5F1E318AD8A3C6B6FED5CAA89_inline (Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * __this, const RuntimeMethod* method)
{
	{
		// [field: SerializeField] public GenericDictionary<int, UnitType> PercentSpawningTypes { get; private set; }
		GenericDictionary_2_t7A00D4416D6319EA3DF70EBD8504D2082CA86C93 * L_0 = __this->get_U3CPercentSpawningTypesU3Ek__BackingField_21();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * Tower_get_Spawner_m9689064FF86ACBAEF942AF0147AD2F7B520B0852_inline (Tower_t3670F5E438D7977AADDD3AD78C6CF8CD32DC3908 * __this, const RuntimeMethod* method)
{
	{
		// [field: SerializeField] public SpawnerComponent Spawner { get; private set; }
		SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * L_0 = __this->get_U3CSpawnerU3Ek__BackingField_22();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * SpawnerComponent_get_LaunchTransform_mC7512D5937EAA78B457F4110AEA7A651EC2C2A36_inline (SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * __this, const RuntimeMethod* method)
{
	{
		// [field: SerializeField] public Transform LaunchTransform { get; private set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CLaunchTransformU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MoneyComponent_t228EEF2620FCABEA0792C76C2698AFA39588683B * SpawnerComponent_get_Money_m0221965A3F92E642D3ACCD6C4A3F4E7D15FC113B_inline (SpawnerComponent_tCB72613B68214D79CED05A459139EA560DE15DCD * __this, const RuntimeMethod* method)
{
	{
		// [field: SerializeField] public MoneyComponent Money { get; private set; }
		MoneyComponent_t228EEF2620FCABEA0792C76C2698AFA39588683B * L_0 = __this->get_U3CMoneyU3Ek__BackingField_9();
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
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m0D1B9A031C6A1668D4AE3F7A153BF9B066F3193E_gshared_inline (KeyValuePair_2_t7C40DFD3E4598A1814263BCC6543EBD170B7664D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  KeyValuePair_2_get_Key_m1ACA8B370B854CEB17B7AC7194544B66BEAC96B9_gshared_inline (KeyValuePair_2_t7C40DFD3E4598A1814263BCC6543EBD170B7664D * __this, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )__this->get_key_0();
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  KeyValuePair_2_get_Key_mFF8D9FEFDF56EC6F38DA016CFEB6BD045AB7424B_gshared_inline (KeyValuePair_2_tC23E22D1C37D58F1786C32D4A1469827771854B4 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )__this->get_key_0();
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * MonoSingleton_1_get_Instance_mAAC56DCD44B5B574CEC32AB21F32838BE24A388D_gshared_inline (const RuntimeMethod* method)
{
	{
		// public static T Instance { get; protected set; }
		RuntimeObject * L_0 = ((MonoSingleton_1_tC8801AEDB57A1E78FF94100497CB7E98F87A0F5F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_U3CInstanceU3Ek__BackingField_5();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mA549807931A8F164EEBAE7C7E0541C5AA957223A_gshared_inline (KeyValuePair_2_t3C23DAE4FC2A4966AC3BF6D463387F740C0139A5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CurrencyComponent_1_get_Current_m58C073777FDEA9E810789DA19CC4F09028A1A4AB_gshared_inline (CurrencyComponent_1_t8E9271605EC7CC45BBAEC59FC45D6502B2045473 * __this, const RuntimeMethod* method)
{
	{
		// get => _current;
		float L_0 = (float)__this->get__current_6();
		return (float)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}

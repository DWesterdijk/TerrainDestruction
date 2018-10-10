#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.ArgumentException
struct ArgumentException_t132251570;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NullReferenceException
struct NullReferenceException_t1023182353;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Single[0...,0...]
struct SingleU5B0___U2C0___U5D_t1444911252;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Terrain
struct Terrain_t3055443660;
// UnityEngine.TerrainData
struct TerrainData_t657004131;

extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* NullReferenceException_t1023182353_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* TerrainData_t657004131_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1983507090;
extern String_t* _stringLiteral2986283356;
extern const RuntimeMethod* TerrainData_GetHeights_m20833332_RuntimeMethod_var;
extern const RuntimeMethod* TerrainData_SetHeights_m690219761_RuntimeMethod_var;
extern const uint32_t TerrainData_GetHeights_m20833332_MetadataUsageId;
extern const uint32_t TerrainData_SetHeights_m690219761_MetadataUsageId;
extern const uint32_t TerrainData__cctor_m2936165929_MetadataUsageId;
extern const uint32_t TerrainData__ctor_m1675272790_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;
struct SingleU5B0___U2C0___U5D_t1444911252;


#ifndef U3CMODULEU3E_T692745538_H
#define U3CMODULEU3E_T692745538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745538 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745538_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef NULLREFERENCEEXCEPTION_T1023182353_H
#define NULLREFERENCEEXCEPTION_T1023182353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullReferenceException
struct  NullReferenceException_t1023182353  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLREFERENCEEXCEPTION_T1023182353_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef BOUNDARYVALUETYPE_T1782311533_H
#define BOUNDARYVALUETYPE_T1782311533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TerrainData/BoundaryValueType
struct  BoundaryValueType_t1782311533 
{
public:
	// System.Int32 UnityEngine.TerrainData/BoundaryValueType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BoundaryValueType_t1782311533, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDARYVALUETYPE_T1782311533_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef TERRAINDATA_T657004131_H
#define TERRAINDATA_T657004131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TerrainData
struct  TerrainData_t657004131  : public Object_t631007953
{
public:

public:
};

struct TerrainData_t657004131_StaticFields
{
public:
	// System.Int32 UnityEngine.TerrainData::k_MaximumResolution
	int32_t ___k_MaximumResolution_10;
	// System.Int32 UnityEngine.TerrainData::k_MinimumDetailResolutionPerPatch
	int32_t ___k_MinimumDetailResolutionPerPatch_11;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailResolutionPerPatch
	int32_t ___k_MaximumDetailResolutionPerPatch_12;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailPatchCount
	int32_t ___k_MaximumDetailPatchCount_13;
	// System.Int32 UnityEngine.TerrainData::k_MinimumAlphamapResolution
	int32_t ___k_MinimumAlphamapResolution_14;
	// System.Int32 UnityEngine.TerrainData::k_MaximumAlphamapResolution
	int32_t ___k_MaximumAlphamapResolution_15;
	// System.Int32 UnityEngine.TerrainData::k_MinimumBaseMapResolution
	int32_t ___k_MinimumBaseMapResolution_16;
	// System.Int32 UnityEngine.TerrainData::k_MaximumBaseMapResolution
	int32_t ___k_MaximumBaseMapResolution_17;

public:
	inline static int32_t get_offset_of_k_MaximumResolution_10() { return static_cast<int32_t>(offsetof(TerrainData_t657004131_StaticFields, ___k_MaximumResolution_10)); }
	inline int32_t get_k_MaximumResolution_10() const { return ___k_MaximumResolution_10; }
	inline int32_t* get_address_of_k_MaximumResolution_10() { return &___k_MaximumResolution_10; }
	inline void set_k_MaximumResolution_10(int32_t value)
	{
		___k_MaximumResolution_10 = value;
	}

	inline static int32_t get_offset_of_k_MinimumDetailResolutionPerPatch_11() { return static_cast<int32_t>(offsetof(TerrainData_t657004131_StaticFields, ___k_MinimumDetailResolutionPerPatch_11)); }
	inline int32_t get_k_MinimumDetailResolutionPerPatch_11() const { return ___k_MinimumDetailResolutionPerPatch_11; }
	inline int32_t* get_address_of_k_MinimumDetailResolutionPerPatch_11() { return &___k_MinimumDetailResolutionPerPatch_11; }
	inline void set_k_MinimumDetailResolutionPerPatch_11(int32_t value)
	{
		___k_MinimumDetailResolutionPerPatch_11 = value;
	}

	inline static int32_t get_offset_of_k_MaximumDetailResolutionPerPatch_12() { return static_cast<int32_t>(offsetof(TerrainData_t657004131_StaticFields, ___k_MaximumDetailResolutionPerPatch_12)); }
	inline int32_t get_k_MaximumDetailResolutionPerPatch_12() const { return ___k_MaximumDetailResolutionPerPatch_12; }
	inline int32_t* get_address_of_k_MaximumDetailResolutionPerPatch_12() { return &___k_MaximumDetailResolutionPerPatch_12; }
	inline void set_k_MaximumDetailResolutionPerPatch_12(int32_t value)
	{
		___k_MaximumDetailResolutionPerPatch_12 = value;
	}

	inline static int32_t get_offset_of_k_MaximumDetailPatchCount_13() { return static_cast<int32_t>(offsetof(TerrainData_t657004131_StaticFields, ___k_MaximumDetailPatchCount_13)); }
	inline int32_t get_k_MaximumDetailPatchCount_13() const { return ___k_MaximumDetailPatchCount_13; }
	inline int32_t* get_address_of_k_MaximumDetailPatchCount_13() { return &___k_MaximumDetailPatchCount_13; }
	inline void set_k_MaximumDetailPatchCount_13(int32_t value)
	{
		___k_MaximumDetailPatchCount_13 = value;
	}

	inline static int32_t get_offset_of_k_MinimumAlphamapResolution_14() { return static_cast<int32_t>(offsetof(TerrainData_t657004131_StaticFields, ___k_MinimumAlphamapResolution_14)); }
	inline int32_t get_k_MinimumAlphamapResolution_14() const { return ___k_MinimumAlphamapResolution_14; }
	inline int32_t* get_address_of_k_MinimumAlphamapResolution_14() { return &___k_MinimumAlphamapResolution_14; }
	inline void set_k_MinimumAlphamapResolution_14(int32_t value)
	{
		___k_MinimumAlphamapResolution_14 = value;
	}

	inline static int32_t get_offset_of_k_MaximumAlphamapResolution_15() { return static_cast<int32_t>(offsetof(TerrainData_t657004131_StaticFields, ___k_MaximumAlphamapResolution_15)); }
	inline int32_t get_k_MaximumAlphamapResolution_15() const { return ___k_MaximumAlphamapResolution_15; }
	inline int32_t* get_address_of_k_MaximumAlphamapResolution_15() { return &___k_MaximumAlphamapResolution_15; }
	inline void set_k_MaximumAlphamapResolution_15(int32_t value)
	{
		___k_MaximumAlphamapResolution_15 = value;
	}

	inline static int32_t get_offset_of_k_MinimumBaseMapResolution_16() { return static_cast<int32_t>(offsetof(TerrainData_t657004131_StaticFields, ___k_MinimumBaseMapResolution_16)); }
	inline int32_t get_k_MinimumBaseMapResolution_16() const { return ___k_MinimumBaseMapResolution_16; }
	inline int32_t* get_address_of_k_MinimumBaseMapResolution_16() { return &___k_MinimumBaseMapResolution_16; }
	inline void set_k_MinimumBaseMapResolution_16(int32_t value)
	{
		___k_MinimumBaseMapResolution_16 = value;
	}

	inline static int32_t get_offset_of_k_MaximumBaseMapResolution_17() { return static_cast<int32_t>(offsetof(TerrainData_t657004131_StaticFields, ___k_MaximumBaseMapResolution_17)); }
	inline int32_t get_k_MaximumBaseMapResolution_17() const { return ___k_MaximumBaseMapResolution_17; }
	inline int32_t* get_address_of_k_MaximumBaseMapResolution_17() { return &___k_MaximumBaseMapResolution_17; }
	inline void set_k_MaximumBaseMapResolution_17(int32_t value)
	{
		___k_MaximumBaseMapResolution_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERRAINDATA_T657004131_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef TERRAIN_T3055443660_H
#define TERRAIN_T3055443660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Terrain
struct  Terrain_t3055443660  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERRAIN_T3055443660_H
// System.Single[0...,0...]
struct SingleU5B0___U2C0___U5D_t1444911252  : public RuntimeArray
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
	inline float GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, float value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, float value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



// System.Void UnityEngine.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m1087895580 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TerrainData::Internal_Create(UnityEngine.TerrainData)
extern "C" IL2CPP_METHOD_ATTR void TerrainData_Internal_Create_m1566437197 (RuntimeObject * __this /* static, unused */, TerrainData_t657004131 * ___terrainData0, const RuntimeMethod* method);
// System.Void UnityEngine.TerrainData::get_size_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void TerrainData_get_size_Injected_m1617926404 (TerrainData_t657004131 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method);
// System.Int32 UnityEngine.TerrainData::get_heightmapWidth()
extern "C" IL2CPP_METHOD_ATTR int32_t TerrainData_get_heightmapWidth_m3057970466 (TerrainData_t657004131 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.TerrainData::get_heightmapHeight()
extern "C" IL2CPP_METHOD_ATTR int32_t TerrainData_get_heightmapHeight_m3110588835 (TerrainData_t657004131 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Single[0...,0...] UnityEngine.TerrainData::Internal_GetHeights(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR SingleU5B0___U2C0___U5D_t1444911252* TerrainData_Internal_GetHeights_m447551078 (TerrainData_t657004131 * __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NullReferenceException__ctor_m744513393 (NullReferenceException_t1023182353 * __this, const RuntimeMethod* method);
// System.Int32 System.Array::GetLength(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_GetLength_m2178203778 (RuntimeArray * __this, int32_t p0, const RuntimeMethod* method);
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* UnityString_Format_m261690510 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void UnityEngine.TerrainData::Internal_SetHeights(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[0...,0...])
extern "C" IL2CPP_METHOD_ATTR void TerrainData_Internal_SetHeights_m2087687794 (TerrainData_t657004131 * __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___width2, int32_t ___height3, SingleU5B0___U2C0___U5D_t1444911252* ___heights4, const RuntimeMethod* method);
// System.Int32 UnityEngine.TerrainData::GetBoundaryValue(UnityEngine.TerrainData/BoundaryValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t TerrainData_GetBoundaryValue_m1103633233 (RuntimeObject * __this /* static, unused */, int32_t ___type0, const RuntimeMethod* method);
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
// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
extern "C" IL2CPP_METHOD_ATTR TerrainData_t657004131 * Terrain_get_terrainData_m2711583617 (Terrain_t3055443660 * __this, const RuntimeMethod* method)
{
	typedef TerrainData_t657004131 * (*Terrain_get_terrainData_m2711583617_ftn) (Terrain_t3055443660 *);
	static Terrain_get_terrainData_m2711583617_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_terrainData_m2711583617_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_terrainData()");
	TerrainData_t657004131 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.TerrainData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TerrainData__ctor_m1675272790 (TerrainData_t657004131 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainData__ctor_m1675272790_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object__ctor_m1087895580(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TerrainData_t657004131_il2cpp_TypeInfo_var);
		TerrainData_Internal_Create_m1566437197(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.TerrainData::GetBoundaryValue(UnityEngine.TerrainData/BoundaryValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t TerrainData_GetBoundaryValue_m1103633233 (RuntimeObject * __this /* static, unused */, int32_t ___type0, const RuntimeMethod* method)
{
	typedef int32_t (*TerrainData_GetBoundaryValue_m1103633233_ftn) (int32_t);
	static TerrainData_GetBoundaryValue_m1103633233_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_GetBoundaryValue_m1103633233_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::GetBoundaryValue(UnityEngine.TerrainData/BoundaryValueType)");
	int32_t retVal = _il2cpp_icall_func(___type0);
	return retVal;
}
// System.Void UnityEngine.TerrainData::Internal_Create(UnityEngine.TerrainData)
extern "C" IL2CPP_METHOD_ATTR void TerrainData_Internal_Create_m1566437197 (RuntimeObject * __this /* static, unused */, TerrainData_t657004131 * ___terrainData0, const RuntimeMethod* method)
{
	typedef void (*TerrainData_Internal_Create_m1566437197_ftn) (TerrainData_t657004131 *);
	static TerrainData_Internal_Create_m1566437197_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_Create_m1566437197_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_Create(UnityEngine.TerrainData)");
	_il2cpp_icall_func(___terrainData0);
}
// System.Int32 UnityEngine.TerrainData::get_heightmapWidth()
extern "C" IL2CPP_METHOD_ATTR int32_t TerrainData_get_heightmapWidth_m3057970466 (TerrainData_t657004131 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*TerrainData_get_heightmapWidth_m3057970466_ftn) (TerrainData_t657004131 *);
	static TerrainData_get_heightmapWidth_m3057970466_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_heightmapWidth_m3057970466_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_heightmapWidth()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.TerrainData::get_heightmapHeight()
extern "C" IL2CPP_METHOD_ATTR int32_t TerrainData_get_heightmapHeight_m3110588835 (TerrainData_t657004131 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*TerrainData_get_heightmapHeight_m3110588835_ftn) (TerrainData_t657004131 *);
	static TerrainData_get_heightmapHeight_m3110588835_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_heightmapHeight_m3110588835_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_heightmapHeight()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Vector3 UnityEngine.TerrainData::get_size()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  TerrainData_get_size_m1871576403 (TerrainData_t657004131 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		TerrainData_get_size_Injected_m1617926404(__this, (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		return L_0;
	}
}
// System.Single[0...,0...] UnityEngine.TerrainData::GetHeights(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR SingleU5B0___U2C0___U5D_t1444911252* TerrainData_GetHeights_m20833332 (TerrainData_t657004131 * __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainData_GetHeights_m20833332_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5B0___U2C0___U5D_t1444911252* V_0 = NULL;
	{
		int32_t L_0 = ___xBase0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_1 = ___yBase1;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_2 = ___xBase0;
		int32_t L_3 = ___width2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))) < ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_4 = ___yBase1;
		int32_t L_5 = ___height3;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5))) < ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_6 = ___xBase0;
		int32_t L_7 = ___width2;
		int32_t L_8 = TerrainData_get_heightmapWidth_m3057970466(__this, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7))) > ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_9 = ___yBase1;
		int32_t L_10 = ___height3;
		int32_t L_11 = TerrainData_get_heightmapHeight_m3110588835(__this, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10))) <= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}

IL_003f:
	{
		ArgumentException_t132251570 * L_12 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_12, _stringLiteral1983507090, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, TerrainData_GetHeights_m20833332_RuntimeMethod_var);
	}

IL_004b:
	{
		int32_t L_13 = ___xBase0;
		int32_t L_14 = ___yBase1;
		int32_t L_15 = ___width2;
		int32_t L_16 = ___height3;
		SingleU5B0___U2C0___U5D_t1444911252* L_17 = TerrainData_Internal_GetHeights_m447551078(__this, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		goto IL_005c;
	}

IL_005c:
	{
		SingleU5B0___U2C0___U5D_t1444911252* L_18 = V_0;
		return L_18;
	}
}
// System.Single[0...,0...] UnityEngine.TerrainData::Internal_GetHeights(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR SingleU5B0___U2C0___U5D_t1444911252* TerrainData_Internal_GetHeights_m447551078 (TerrainData_t657004131 * __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method)
{
	typedef SingleU5B0___U2C0___U5D_t1444911252* (*TerrainData_Internal_GetHeights_m447551078_ftn) (TerrainData_t657004131 *, int32_t, int32_t, int32_t, int32_t);
	static TerrainData_Internal_GetHeights_m447551078_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_GetHeights_m447551078_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_GetHeights(System.Int32,System.Int32,System.Int32,System.Int32)");
	SingleU5B0___U2C0___U5D_t1444911252* retVal = _il2cpp_icall_func(__this, ___xBase0, ___yBase1, ___width2, ___height3);
	return retVal;
}
// System.Void UnityEngine.TerrainData::SetHeights(System.Int32,System.Int32,System.Single[0...,0...])
extern "C" IL2CPP_METHOD_ATTR void TerrainData_SetHeights_m690219761 (TerrainData_t657004131 * __this, int32_t ___xBase0, int32_t ___yBase1, SingleU5B0___U2C0___U5D_t1444911252* ___heights2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainData_SetHeights_m690219761_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SingleU5B0___U2C0___U5D_t1444911252* L_0 = ___heights2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		NullReferenceException_t1023182353 * L_1 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m744513393(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, TerrainData_SetHeights_m690219761_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___xBase0;
		SingleU5B0___U2C0___U5D_t1444911252* L_3 = ___heights2;
		int32_t L_4 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_3, 1, /*hidden argument*/NULL);
		int32_t L_5 = TerrainData_get_heightmapWidth_m3057970466(__this, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_4))) > ((int32_t)L_5)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_6 = ___xBase0;
		SingleU5B0___U2C0___U5D_t1444911252* L_7 = ___heights2;
		int32_t L_8 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_7, 1, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_8))) < ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_9 = ___yBase1;
		SingleU5B0___U2C0___U5D_t1444911252* L_10 = ___heights2;
		int32_t L_11 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_10, 0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_11))) < ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_12 = ___xBase0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_13 = ___yBase1;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_14 = ___yBase1;
		SingleU5B0___U2C0___U5D_t1444911252* L_15 = ___heights2;
		int32_t L_16 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_15, 0, /*hidden argument*/NULL);
		int32_t L_17 = TerrainData_get_heightmapHeight_m3110588835(__this, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_16))) <= ((int32_t)L_17)))
		{
			goto IL_00b7;
		}
	}

IL_0062:
	{
		ObjectU5BU5D_t2843939325* L_18 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_19 = L_18;
		int32_t L_20 = ___xBase0;
		SingleU5B0___U2C0___U5D_t1444911252* L_21 = ___heights2;
		int32_t L_22 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_21, 1, /*hidden argument*/NULL);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_22));
		RuntimeObject * L_24 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_23);
		ArrayElementTypeCheck (L_19, L_24);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_24);
		ObjectU5BU5D_t2843939325* L_25 = L_19;
		int32_t L_26 = ___yBase1;
		SingleU5B0___U2C0___U5D_t1444911252* L_27 = ___heights2;
		int32_t L_28 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_27, 0, /*hidden argument*/NULL);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_28));
		RuntimeObject * L_30 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_29);
		ArrayElementTypeCheck (L_25, L_30);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_30);
		ObjectU5BU5D_t2843939325* L_31 = L_25;
		int32_t L_32 = TerrainData_get_heightmapWidth_m3057970466(__this, /*hidden argument*/NULL);
		int32_t L_33 = L_32;
		RuntimeObject * L_34 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_33);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_34);
		ObjectU5BU5D_t2843939325* L_35 = L_31;
		int32_t L_36 = TerrainData_get_heightmapHeight_m3110588835(__this, /*hidden argument*/NULL);
		int32_t L_37 = L_36;
		RuntimeObject * L_38 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_37);
		ArrayElementTypeCheck (L_35, L_38);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_38);
		String_t* L_39 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral2986283356, L_35, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_40 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_40, L_39, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, NULL, TerrainData_SetHeights_m690219761_RuntimeMethod_var);
	}

IL_00b7:
	{
		int32_t L_41 = ___xBase0;
		int32_t L_42 = ___yBase1;
		SingleU5B0___U2C0___U5D_t1444911252* L_43 = ___heights2;
		int32_t L_44 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_43, 1, /*hidden argument*/NULL);
		SingleU5B0___U2C0___U5D_t1444911252* L_45 = ___heights2;
		int32_t L_46 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_45, 0, /*hidden argument*/NULL);
		SingleU5B0___U2C0___U5D_t1444911252* L_47 = ___heights2;
		TerrainData_Internal_SetHeights_m2087687794(__this, L_41, L_42, L_44, L_46, L_47, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TerrainData::Internal_SetHeights(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[0...,0...])
extern "C" IL2CPP_METHOD_ATTR void TerrainData_Internal_SetHeights_m2087687794 (TerrainData_t657004131 * __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___width2, int32_t ___height3, SingleU5B0___U2C0___U5D_t1444911252* ___heights4, const RuntimeMethod* method)
{
	typedef void (*TerrainData_Internal_SetHeights_m2087687794_ftn) (TerrainData_t657004131 *, int32_t, int32_t, int32_t, int32_t, SingleU5B0___U2C0___U5D_t1444911252*);
	static TerrainData_Internal_SetHeights_m2087687794_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_SetHeights_m2087687794_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_SetHeights(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[0...,0...])");
	_il2cpp_icall_func(__this, ___xBase0, ___yBase1, ___width2, ___height3, ___heights4);
}
// System.Single UnityEngine.TerrainData::GetAlphamapResolutionInternal()
extern "C" IL2CPP_METHOD_ATTR float TerrainData_GetAlphamapResolutionInternal_m1173327220 (TerrainData_t657004131 * __this, const RuntimeMethod* method)
{
	typedef float (*TerrainData_GetAlphamapResolutionInternal_m1173327220_ftn) (TerrainData_t657004131 *);
	static TerrainData_GetAlphamapResolutionInternal_m1173327220_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_GetAlphamapResolutionInternal_m1173327220_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::GetAlphamapResolutionInternal()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.TerrainData::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TerrainData__cctor_m2936165929 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainData__cctor_m2936165929_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = TerrainData_GetBoundaryValue_m1103633233(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		((TerrainData_t657004131_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t657004131_il2cpp_TypeInfo_var))->set_k_MaximumResolution_10(L_0);
		int32_t L_1 = TerrainData_GetBoundaryValue_m1103633233(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		((TerrainData_t657004131_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t657004131_il2cpp_TypeInfo_var))->set_k_MinimumDetailResolutionPerPatch_11(L_1);
		int32_t L_2 = TerrainData_GetBoundaryValue_m1103633233(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		((TerrainData_t657004131_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t657004131_il2cpp_TypeInfo_var))->set_k_MaximumDetailResolutionPerPatch_12(L_2);
		int32_t L_3 = TerrainData_GetBoundaryValue_m1103633233(NULL /*static, unused*/, 3, /*hidden argument*/NULL);
		((TerrainData_t657004131_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t657004131_il2cpp_TypeInfo_var))->set_k_MaximumDetailPatchCount_13(L_3);
		int32_t L_4 = TerrainData_GetBoundaryValue_m1103633233(NULL /*static, unused*/, 4, /*hidden argument*/NULL);
		((TerrainData_t657004131_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t657004131_il2cpp_TypeInfo_var))->set_k_MinimumAlphamapResolution_14(L_4);
		int32_t L_5 = TerrainData_GetBoundaryValue_m1103633233(NULL /*static, unused*/, 5, /*hidden argument*/NULL);
		((TerrainData_t657004131_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t657004131_il2cpp_TypeInfo_var))->set_k_MaximumAlphamapResolution_15(L_5);
		int32_t L_6 = TerrainData_GetBoundaryValue_m1103633233(NULL /*static, unused*/, 6, /*hidden argument*/NULL);
		((TerrainData_t657004131_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t657004131_il2cpp_TypeInfo_var))->set_k_MinimumBaseMapResolution_16(L_6);
		int32_t L_7 = TerrainData_GetBoundaryValue_m1103633233(NULL /*static, unused*/, 7, /*hidden argument*/NULL);
		((TerrainData_t657004131_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t657004131_il2cpp_TypeInfo_var))->set_k_MaximumBaseMapResolution_17(L_7);
		return;
	}
}
// System.Void UnityEngine.TerrainData::get_size_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void TerrainData_get_size_Injected_m1617926404 (TerrainData_t657004131 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*TerrainData_get_size_Injected_m1617926404_ftn) (TerrainData_t657004131 *, Vector3_t3722313464 *);
	static TerrainData_get_size_Injected_m1617926404_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_size_Injected_m1617926404_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_size_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
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

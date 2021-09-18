// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ChangePlaneModel.proto

#include "ChangePlaneModel.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace xpilot {
constexpr ChangePlaneModel::ChangePlaneModel(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : callsign_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , airline_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , equipment_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct ChangePlaneModelDefaultTypeInternal {
  constexpr ChangePlaneModelDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ChangePlaneModelDefaultTypeInternal() {}
  union {
    ChangePlaneModel _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ChangePlaneModelDefaultTypeInternal _ChangePlaneModel_default_instance_;
}  // namespace xpilot
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ChangePlaneModel_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_ChangePlaneModel_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ChangePlaneModel_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ChangePlaneModel_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::xpilot::ChangePlaneModel, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::xpilot::ChangePlaneModel, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::xpilot::ChangePlaneModel, callsign_),
  PROTOBUF_FIELD_OFFSET(::xpilot::ChangePlaneModel, airline_),
  PROTOBUF_FIELD_OFFSET(::xpilot::ChangePlaneModel, equipment_),
  0,
  1,
  2,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::xpilot::ChangePlaneModel)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::xpilot::_ChangePlaneModel_default_instance_),
};

const char descriptor_table_protodef_ChangePlaneModel_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026ChangePlaneModel.proto\022\006xpilot\"~\n\020Chan"
  "gePlaneModel\022\025\n\010callsign\030\001 \001(\tH\000\210\001\001\022\024\n\007a"
  "irline\030\002 \001(\tH\001\210\001\001\022\026\n\tequipment\030\003 \001(\tH\002\210\001"
  "\001B\013\n\t_callsignB\n\n\010_airlineB\014\n\n_equipment"
  "B\031\252\002\026Vatsim.Xpilot.Protobufb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ChangePlaneModel_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ChangePlaneModel_2eproto = {
  false, false, 195, descriptor_table_protodef_ChangePlaneModel_2eproto, "ChangePlaneModel.proto", 
  &descriptor_table_ChangePlaneModel_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_ChangePlaneModel_2eproto::offsets,
  file_level_metadata_ChangePlaneModel_2eproto, file_level_enum_descriptors_ChangePlaneModel_2eproto, file_level_service_descriptors_ChangePlaneModel_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_ChangePlaneModel_2eproto_getter() {
  return &descriptor_table_ChangePlaneModel_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_ChangePlaneModel_2eproto(&descriptor_table_ChangePlaneModel_2eproto);
namespace xpilot {

// ===================================================================

class ChangePlaneModel::_Internal {
 public:
  using HasBits = decltype(std::declval<ChangePlaneModel>()._has_bits_);
  static void set_has_callsign(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_airline(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_equipment(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

ChangePlaneModel::ChangePlaneModel(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:xpilot.ChangePlaneModel)
}
ChangePlaneModel::ChangePlaneModel(const ChangePlaneModel& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  callsign_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_callsign()) {
    callsign_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_callsign(), 
      GetArenaForAllocation());
  }
  airline_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_airline()) {
    airline_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_airline(), 
      GetArenaForAllocation());
  }
  equipment_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_equipment()) {
    equipment_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_equipment(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:xpilot.ChangePlaneModel)
}

void ChangePlaneModel::SharedCtor() {
callsign_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
airline_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
equipment_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

ChangePlaneModel::~ChangePlaneModel() {
  // @@protoc_insertion_point(destructor:xpilot.ChangePlaneModel)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ChangePlaneModel::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  callsign_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  airline_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  equipment_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ChangePlaneModel::ArenaDtor(void* object) {
  ChangePlaneModel* _this = reinterpret_cast< ChangePlaneModel* >(object);
  (void)_this;
}
void ChangePlaneModel::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ChangePlaneModel::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ChangePlaneModel::Clear() {
// @@protoc_insertion_point(message_clear_start:xpilot.ChangePlaneModel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      callsign_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      airline_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      equipment_.ClearNonDefaultToEmpty();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ChangePlaneModel::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string callsign = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_callsign();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "xpilot.ChangePlaneModel.callsign"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string airline = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_airline();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "xpilot.ChangePlaneModel.airline"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string equipment = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_equipment();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "xpilot.ChangePlaneModel.equipment"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ChangePlaneModel::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:xpilot.ChangePlaneModel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // optional string callsign = 1;
  if (_internal_has_callsign()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_callsign().data(), static_cast<int>(this->_internal_callsign().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "xpilot.ChangePlaneModel.callsign");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_callsign(), target);
  }

  // optional string airline = 2;
  if (_internal_has_airline()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_airline().data(), static_cast<int>(this->_internal_airline().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "xpilot.ChangePlaneModel.airline");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_airline(), target);
  }

  // optional string equipment = 3;
  if (_internal_has_equipment()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_equipment().data(), static_cast<int>(this->_internal_equipment().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "xpilot.ChangePlaneModel.equipment");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_equipment(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:xpilot.ChangePlaneModel)
  return target;
}

size_t ChangePlaneModel::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xpilot.ChangePlaneModel)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional string callsign = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_callsign());
    }

    // optional string airline = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_airline());
    }

    // optional string equipment = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_equipment());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ChangePlaneModel::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:xpilot.ChangePlaneModel)
  GOOGLE_DCHECK_NE(&from, this);
  const ChangePlaneModel* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ChangePlaneModel>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:xpilot.ChangePlaneModel)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:xpilot.ChangePlaneModel)
    MergeFrom(*source);
  }
}

void ChangePlaneModel::MergeFrom(const ChangePlaneModel& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:xpilot.ChangePlaneModel)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_callsign(from._internal_callsign());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_airline(from._internal_airline());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_set_equipment(from._internal_equipment());
    }
  }
}

void ChangePlaneModel::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:xpilot.ChangePlaneModel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ChangePlaneModel::CopyFrom(const ChangePlaneModel& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xpilot.ChangePlaneModel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChangePlaneModel::IsInitialized() const {
  return true;
}

void ChangePlaneModel::InternalSwap(ChangePlaneModel* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &callsign_, GetArenaForAllocation(),
      &other->callsign_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &airline_, GetArenaForAllocation(),
      &other->airline_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &equipment_, GetArenaForAllocation(),
      &other->equipment_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata ChangePlaneModel::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_ChangePlaneModel_2eproto_getter, &descriptor_table_ChangePlaneModel_2eproto_once,
      file_level_metadata_ChangePlaneModel_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace xpilot
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::xpilot::ChangePlaneModel* Arena::CreateMaybeMessage< ::xpilot::ChangePlaneModel >(Arena* arena) {
  return Arena::CreateMessageInternal< ::xpilot::ChangePlaneModel >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

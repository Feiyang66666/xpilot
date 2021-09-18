// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TransponderMode.proto

#include "TransponderMode.pb.h"

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
constexpr TransponderMode::TransponderMode(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : mode_c_(false){}
struct TransponderModeDefaultTypeInternal {
  constexpr TransponderModeDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~TransponderModeDefaultTypeInternal() {}
  union {
    TransponderMode _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT TransponderModeDefaultTypeInternal _TransponderMode_default_instance_;
}  // namespace xpilot
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_TransponderMode_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_TransponderMode_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_TransponderMode_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_TransponderMode_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::xpilot::TransponderMode, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::xpilot::TransponderMode, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::xpilot::TransponderMode, mode_c_),
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::xpilot::TransponderMode)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::xpilot::_TransponderMode_default_instance_),
};

const char descriptor_table_protodef_TransponderMode_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025TransponderMode.proto\022\006xpilot\"1\n\017Trans"
  "ponderMode\022\023\n\006mode_c\030\001 \001(\010H\000\210\001\001B\t\n\007_mode"
  "_cB\031\252\002\026Vatsim.Xpilot.Protobufb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_TransponderMode_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_TransponderMode_2eproto = {
  false, false, 117, descriptor_table_protodef_TransponderMode_2eproto, "TransponderMode.proto", 
  &descriptor_table_TransponderMode_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_TransponderMode_2eproto::offsets,
  file_level_metadata_TransponderMode_2eproto, file_level_enum_descriptors_TransponderMode_2eproto, file_level_service_descriptors_TransponderMode_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_TransponderMode_2eproto_getter() {
  return &descriptor_table_TransponderMode_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_TransponderMode_2eproto(&descriptor_table_TransponderMode_2eproto);
namespace xpilot {

// ===================================================================

class TransponderMode::_Internal {
 public:
  using HasBits = decltype(std::declval<TransponderMode>()._has_bits_);
  static void set_has_mode_c(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

TransponderMode::TransponderMode(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:xpilot.TransponderMode)
}
TransponderMode::TransponderMode(const TransponderMode& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  mode_c_ = from.mode_c_;
  // @@protoc_insertion_point(copy_constructor:xpilot.TransponderMode)
}

void TransponderMode::SharedCtor() {
mode_c_ = false;
}

TransponderMode::~TransponderMode() {
  // @@protoc_insertion_point(destructor:xpilot.TransponderMode)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void TransponderMode::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void TransponderMode::ArenaDtor(void* object) {
  TransponderMode* _this = reinterpret_cast< TransponderMode* >(object);
  (void)_this;
}
void TransponderMode::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void TransponderMode::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void TransponderMode::Clear() {
// @@protoc_insertion_point(message_clear_start:xpilot.TransponderMode)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  mode_c_ = false;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TransponderMode::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional bool mode_c = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_mode_c(&has_bits);
          mode_c_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* TransponderMode::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:xpilot.TransponderMode)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // optional bool mode_c = 1;
  if (_internal_has_mode_c()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_mode_c(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:xpilot.TransponderMode)
  return target;
}

size_t TransponderMode::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xpilot.TransponderMode)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional bool mode_c = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TransponderMode::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:xpilot.TransponderMode)
  GOOGLE_DCHECK_NE(&from, this);
  const TransponderMode* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<TransponderMode>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:xpilot.TransponderMode)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:xpilot.TransponderMode)
    MergeFrom(*source);
  }
}

void TransponderMode::MergeFrom(const TransponderMode& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:xpilot.TransponderMode)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_mode_c()) {
    _internal_set_mode_c(from._internal_mode_c());
  }
}

void TransponderMode::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:xpilot.TransponderMode)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TransponderMode::CopyFrom(const TransponderMode& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xpilot.TransponderMode)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TransponderMode::IsInitialized() const {
  return true;
}

void TransponderMode::InternalSwap(TransponderMode* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(mode_c_, other->mode_c_);
}

::PROTOBUF_NAMESPACE_ID::Metadata TransponderMode::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_TransponderMode_2eproto_getter, &descriptor_table_TransponderMode_2eproto_once,
      file_level_metadata_TransponderMode_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace xpilot
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::xpilot::TransponderMode* Arena::CreateMaybeMessage< ::xpilot::TransponderMode >(Arena* arena) {
  return Arena::CreateMessageInternal< ::xpilot::TransponderMode >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

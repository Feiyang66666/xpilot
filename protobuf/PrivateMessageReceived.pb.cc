// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PrivateMessageReceived.proto

#include "PrivateMessageReceived.pb.h"

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
constexpr PrivateMessageReceived::PrivateMessageReceived(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : from_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , message_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , timestamp_(nullptr){}
struct PrivateMessageReceivedDefaultTypeInternal {
  constexpr PrivateMessageReceivedDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~PrivateMessageReceivedDefaultTypeInternal() {}
  union {
    PrivateMessageReceived _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PrivateMessageReceivedDefaultTypeInternal _PrivateMessageReceived_default_instance_;
}  // namespace xpilot
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_PrivateMessageReceived_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_PrivateMessageReceived_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_PrivateMessageReceived_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_PrivateMessageReceived_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::xpilot::PrivateMessageReceived, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::xpilot::PrivateMessageReceived, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::xpilot::PrivateMessageReceived, timestamp_),
  PROTOBUF_FIELD_OFFSET(::xpilot::PrivateMessageReceived, from_),
  PROTOBUF_FIELD_OFFSET(::xpilot::PrivateMessageReceived, message_),
  ~0u,
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::xpilot::PrivateMessageReceived)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::xpilot::_PrivateMessageReceived_default_instance_),
};

const char descriptor_table_protodef_PrivateMessageReceived_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\034PrivateMessageReceived.proto\022\006xpilot\032\037"
  "google/protobuf/timestamp.proto\"\205\001\n\026Priv"
  "ateMessageReceived\022-\n\ttimestamp\030\001 \001(\0132\032."
  "google.protobuf.Timestamp\022\021\n\004from\030\002 \001(\tH"
  "\000\210\001\001\022\024\n\007message\030\003 \001(\tH\001\210\001\001B\007\n\005_fromB\n\n\010_"
  "messageB\031\252\002\026Vatsim.Xpilot.Protobufb\006prot"
  "o3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_PrivateMessageReceived_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_PrivateMessageReceived_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PrivateMessageReceived_2eproto = {
  false, false, 242, descriptor_table_protodef_PrivateMessageReceived_2eproto, "PrivateMessageReceived.proto", 
  &descriptor_table_PrivateMessageReceived_2eproto_once, descriptor_table_PrivateMessageReceived_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_PrivateMessageReceived_2eproto::offsets,
  file_level_metadata_PrivateMessageReceived_2eproto, file_level_enum_descriptors_PrivateMessageReceived_2eproto, file_level_service_descriptors_PrivateMessageReceived_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_PrivateMessageReceived_2eproto_getter() {
  return &descriptor_table_PrivateMessageReceived_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_PrivateMessageReceived_2eproto(&descriptor_table_PrivateMessageReceived_2eproto);
namespace xpilot {

// ===================================================================

class PrivateMessageReceived::_Internal {
 public:
  using HasBits = decltype(std::declval<PrivateMessageReceived>()._has_bits_);
  static const PROTOBUF_NAMESPACE_ID::Timestamp& timestamp(const PrivateMessageReceived* msg);
  static void set_has_from(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_message(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const PROTOBUF_NAMESPACE_ID::Timestamp&
PrivateMessageReceived::_Internal::timestamp(const PrivateMessageReceived* msg) {
  return *msg->timestamp_;
}
void PrivateMessageReceived::clear_timestamp() {
  if (GetArenaForAllocation() == nullptr && timestamp_ != nullptr) {
    delete timestamp_;
  }
  timestamp_ = nullptr;
}
PrivateMessageReceived::PrivateMessageReceived(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:xpilot.PrivateMessageReceived)
}
PrivateMessageReceived::PrivateMessageReceived(const PrivateMessageReceived& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  from_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_from()) {
    from_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_from(), 
      GetArenaForAllocation());
  }
  message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_message()) {
    message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_message(), 
      GetArenaForAllocation());
  }
  if (from._internal_has_timestamp()) {
    timestamp_ = new PROTOBUF_NAMESPACE_ID::Timestamp(*from.timestamp_);
  } else {
    timestamp_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:xpilot.PrivateMessageReceived)
}

void PrivateMessageReceived::SharedCtor() {
from_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
timestamp_ = nullptr;
}

PrivateMessageReceived::~PrivateMessageReceived() {
  // @@protoc_insertion_point(destructor:xpilot.PrivateMessageReceived)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void PrivateMessageReceived::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  from_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  message_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete timestamp_;
}

void PrivateMessageReceived::ArenaDtor(void* object) {
  PrivateMessageReceived* _this = reinterpret_cast< PrivateMessageReceived* >(object);
  (void)_this;
}
void PrivateMessageReceived::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void PrivateMessageReceived::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void PrivateMessageReceived::Clear() {
// @@protoc_insertion_point(message_clear_start:xpilot.PrivateMessageReceived)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      from_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      message_.ClearNonDefaultToEmpty();
    }
  }
  if (GetArenaForAllocation() == nullptr && timestamp_ != nullptr) {
    delete timestamp_;
  }
  timestamp_ = nullptr;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PrivateMessageReceived::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .google.protobuf.Timestamp timestamp = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_timestamp(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string from = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_from();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "xpilot.PrivateMessageReceived.from"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string message = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_message();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "xpilot.PrivateMessageReceived.message"));
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

::PROTOBUF_NAMESPACE_ID::uint8* PrivateMessageReceived::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:xpilot.PrivateMessageReceived)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.Timestamp timestamp = 1;
  if (this->has_timestamp()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::timestamp(this), target, stream);
  }

  // optional string from = 2;
  if (_internal_has_from()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_from().data(), static_cast<int>(this->_internal_from().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "xpilot.PrivateMessageReceived.from");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_from(), target);
  }

  // optional string message = 3;
  if (_internal_has_message()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_message().data(), static_cast<int>(this->_internal_message().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "xpilot.PrivateMessageReceived.message");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_message(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:xpilot.PrivateMessageReceived)
  return target;
}

size_t PrivateMessageReceived::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xpilot.PrivateMessageReceived)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string from = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_from());
    }

    // optional string message = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_message());
    }

  }
  // .google.protobuf.Timestamp timestamp = 1;
  if (this->has_timestamp()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *timestamp_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PrivateMessageReceived::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:xpilot.PrivateMessageReceived)
  GOOGLE_DCHECK_NE(&from, this);
  const PrivateMessageReceived* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PrivateMessageReceived>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:xpilot.PrivateMessageReceived)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:xpilot.PrivateMessageReceived)
    MergeFrom(*source);
  }
}

void PrivateMessageReceived::MergeFrom(const PrivateMessageReceived& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:xpilot.PrivateMessageReceived)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_from(from._internal_from());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_message(from._internal_message());
    }
  }
  if (from.has_timestamp()) {
    _internal_mutable_timestamp()->PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(from._internal_timestamp());
  }
}

void PrivateMessageReceived::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:xpilot.PrivateMessageReceived)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PrivateMessageReceived::CopyFrom(const PrivateMessageReceived& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xpilot.PrivateMessageReceived)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PrivateMessageReceived::IsInitialized() const {
  return true;
}

void PrivateMessageReceived::InternalSwap(PrivateMessageReceived* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &from_, GetArenaForAllocation(),
      &other->from_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &message_, GetArenaForAllocation(),
      &other->message_, other->GetArenaForAllocation()
  );
  swap(timestamp_, other->timestamp_);
}

::PROTOBUF_NAMESPACE_ID::Metadata PrivateMessageReceived::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_PrivateMessageReceived_2eproto_getter, &descriptor_table_PrivateMessageReceived_2eproto_once,
      file_level_metadata_PrivateMessageReceived_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace xpilot
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::xpilot::PrivateMessageReceived* Arena::CreateMaybeMessage< ::xpilot::PrivateMessageReceived >(Arena* arena) {
  return Arena::CreateMessageInternal< ::xpilot::PrivateMessageReceived >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

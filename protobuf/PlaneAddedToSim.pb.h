// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlaneAddedToSim.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_PlaneAddedToSim_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_PlaneAddedToSim_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_PlaneAddedToSim_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_PlaneAddedToSim_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PlaneAddedToSim_2eproto;
namespace xpilot {
class PlaneAddedToSim;
struct PlaneAddedToSimDefaultTypeInternal;
extern PlaneAddedToSimDefaultTypeInternal _PlaneAddedToSim_default_instance_;
}  // namespace xpilot
PROTOBUF_NAMESPACE_OPEN
template<> ::xpilot::PlaneAddedToSim* Arena::CreateMaybeMessage<::xpilot::PlaneAddedToSim>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace xpilot {

// ===================================================================

class PlaneAddedToSim final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:xpilot.PlaneAddedToSim) */ {
 public:
  inline PlaneAddedToSim() : PlaneAddedToSim(nullptr) {}
  ~PlaneAddedToSim() override;
  explicit constexpr PlaneAddedToSim(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PlaneAddedToSim(const PlaneAddedToSim& from);
  PlaneAddedToSim(PlaneAddedToSim&& from) noexcept
    : PlaneAddedToSim() {
    *this = ::std::move(from);
  }

  inline PlaneAddedToSim& operator=(const PlaneAddedToSim& from) {
    CopyFrom(from);
    return *this;
  }
  inline PlaneAddedToSim& operator=(PlaneAddedToSim&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const PlaneAddedToSim& default_instance() {
    return *internal_default_instance();
  }
  static inline const PlaneAddedToSim* internal_default_instance() {
    return reinterpret_cast<const PlaneAddedToSim*>(
               &_PlaneAddedToSim_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PlaneAddedToSim& a, PlaneAddedToSim& b) {
    a.Swap(&b);
  }
  inline void Swap(PlaneAddedToSim* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PlaneAddedToSim* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PlaneAddedToSim* New() const final {
    return new PlaneAddedToSim();
  }

  PlaneAddedToSim* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PlaneAddedToSim>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PlaneAddedToSim& from);
  void MergeFrom(const PlaneAddedToSim& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PlaneAddedToSim* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "xpilot.PlaneAddedToSim";
  }
  protected:
  explicit PlaneAddedToSim(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCallsignFieldNumber = 1,
  };
  // optional string callsign = 1;
  bool has_callsign() const;
  private:
  bool _internal_has_callsign() const;
  public:
  void clear_callsign();
  const std::string& callsign() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_callsign(ArgT0&& arg0, ArgT... args);
  std::string* mutable_callsign();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_callsign();
  void set_allocated_callsign(std::string* callsign);
  private:
  const std::string& _internal_callsign() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_callsign(const std::string& value);
  std::string* _internal_mutable_callsign();
  public:

  // @@protoc_insertion_point(class_scope:xpilot.PlaneAddedToSim)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr callsign_;
  friend struct ::TableStruct_PlaneAddedToSim_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PlaneAddedToSim

// optional string callsign = 1;
inline bool PlaneAddedToSim::_internal_has_callsign() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool PlaneAddedToSim::has_callsign() const {
  return _internal_has_callsign();
}
inline void PlaneAddedToSim::clear_callsign() {
  callsign_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& PlaneAddedToSim::callsign() const {
  // @@protoc_insertion_point(field_get:xpilot.PlaneAddedToSim.callsign)
  return _internal_callsign();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PlaneAddedToSim::set_callsign(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 callsign_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:xpilot.PlaneAddedToSim.callsign)
}
inline std::string* PlaneAddedToSim::mutable_callsign() {
  // @@protoc_insertion_point(field_mutable:xpilot.PlaneAddedToSim.callsign)
  return _internal_mutable_callsign();
}
inline const std::string& PlaneAddedToSim::_internal_callsign() const {
  return callsign_.Get();
}
inline void PlaneAddedToSim::_internal_set_callsign(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  callsign_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* PlaneAddedToSim::_internal_mutable_callsign() {
  _has_bits_[0] |= 0x00000001u;
  return callsign_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* PlaneAddedToSim::release_callsign() {
  // @@protoc_insertion_point(field_release:xpilot.PlaneAddedToSim.callsign)
  if (!_internal_has_callsign()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return callsign_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void PlaneAddedToSim::set_allocated_callsign(std::string* callsign) {
  if (callsign != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  callsign_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), callsign,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:xpilot.PlaneAddedToSim.callsign)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace xpilot

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_PlaneAddedToSim_2eproto

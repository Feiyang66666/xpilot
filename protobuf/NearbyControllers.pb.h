// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NearbyControllers.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_NearbyControllers_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_NearbyControllers_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_NearbyControllers_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_NearbyControllers_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_NearbyControllers_2eproto;
namespace xpilot {
class NearbyControllers;
struct NearbyControllersDefaultTypeInternal;
extern NearbyControllersDefaultTypeInternal _NearbyControllers_default_instance_;
class NearbyControllers_Controller;
struct NearbyControllers_ControllerDefaultTypeInternal;
extern NearbyControllers_ControllerDefaultTypeInternal _NearbyControllers_Controller_default_instance_;
}  // namespace xpilot
PROTOBUF_NAMESPACE_OPEN
template<> ::xpilot::NearbyControllers* Arena::CreateMaybeMessage<::xpilot::NearbyControllers>(Arena*);
template<> ::xpilot::NearbyControllers_Controller* Arena::CreateMaybeMessage<::xpilot::NearbyControllers_Controller>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace xpilot {

// ===================================================================

class NearbyControllers_Controller final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:xpilot.NearbyControllers.Controller) */ {
 public:
  inline NearbyControllers_Controller() : NearbyControllers_Controller(nullptr) {}
  ~NearbyControllers_Controller() override;
  explicit constexpr NearbyControllers_Controller(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NearbyControllers_Controller(const NearbyControllers_Controller& from);
  NearbyControllers_Controller(NearbyControllers_Controller&& from) noexcept
    : NearbyControllers_Controller() {
    *this = ::std::move(from);
  }

  inline NearbyControllers_Controller& operator=(const NearbyControllers_Controller& from) {
    CopyFrom(from);
    return *this;
  }
  inline NearbyControllers_Controller& operator=(NearbyControllers_Controller&& from) noexcept {
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
  static const NearbyControllers_Controller& default_instance() {
    return *internal_default_instance();
  }
  static inline const NearbyControllers_Controller* internal_default_instance() {
    return reinterpret_cast<const NearbyControllers_Controller*>(
               &_NearbyControllers_Controller_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(NearbyControllers_Controller& a, NearbyControllers_Controller& b) {
    a.Swap(&b);
  }
  inline void Swap(NearbyControllers_Controller* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NearbyControllers_Controller* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline NearbyControllers_Controller* New() const final {
    return new NearbyControllers_Controller();
  }

  NearbyControllers_Controller* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<NearbyControllers_Controller>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const NearbyControllers_Controller& from);
  void MergeFrom(const NearbyControllers_Controller& from);
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
  void InternalSwap(NearbyControllers_Controller* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "xpilot.NearbyControllers.Controller";
  }
  protected:
  explicit NearbyControllers_Controller(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCallsignFieldNumber = 1,
    kFrequencyFieldNumber = 3,
    kRealNameFieldNumber = 4,
    kXplaneFrequencyFieldNumber = 2,
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

  // optional string frequency = 3;
  bool has_frequency() const;
  private:
  bool _internal_has_frequency() const;
  public:
  void clear_frequency();
  const std::string& frequency() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_frequency(ArgT0&& arg0, ArgT... args);
  std::string* mutable_frequency();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_frequency();
  void set_allocated_frequency(std::string* frequency);
  private:
  const std::string& _internal_frequency() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_frequency(const std::string& value);
  std::string* _internal_mutable_frequency();
  public:

  // optional string real_name = 4;
  bool has_real_name() const;
  private:
  bool _internal_has_real_name() const;
  public:
  void clear_real_name();
  const std::string& real_name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_real_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_real_name();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_real_name();
  void set_allocated_real_name(std::string* real_name);
  private:
  const std::string& _internal_real_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_real_name(const std::string& value);
  std::string* _internal_mutable_real_name();
  public:

  // optional int32 xplane_frequency = 2;
  bool has_xplane_frequency() const;
  private:
  bool _internal_has_xplane_frequency() const;
  public:
  void clear_xplane_frequency();
  ::PROTOBUF_NAMESPACE_ID::int32 xplane_frequency() const;
  void set_xplane_frequency(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_xplane_frequency() const;
  void _internal_set_xplane_frequency(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:xpilot.NearbyControllers.Controller)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr callsign_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr frequency_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr real_name_;
  ::PROTOBUF_NAMESPACE_ID::int32 xplane_frequency_;
  friend struct ::TableStruct_NearbyControllers_2eproto;
};
// -------------------------------------------------------------------

class NearbyControllers final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:xpilot.NearbyControllers) */ {
 public:
  inline NearbyControllers() : NearbyControllers(nullptr) {}
  ~NearbyControllers() override;
  explicit constexpr NearbyControllers(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NearbyControllers(const NearbyControllers& from);
  NearbyControllers(NearbyControllers&& from) noexcept
    : NearbyControllers() {
    *this = ::std::move(from);
  }

  inline NearbyControllers& operator=(const NearbyControllers& from) {
    CopyFrom(from);
    return *this;
  }
  inline NearbyControllers& operator=(NearbyControllers&& from) noexcept {
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
  static const NearbyControllers& default_instance() {
    return *internal_default_instance();
  }
  static inline const NearbyControllers* internal_default_instance() {
    return reinterpret_cast<const NearbyControllers*>(
               &_NearbyControllers_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(NearbyControllers& a, NearbyControllers& b) {
    a.Swap(&b);
  }
  inline void Swap(NearbyControllers* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NearbyControllers* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline NearbyControllers* New() const final {
    return new NearbyControllers();
  }

  NearbyControllers* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<NearbyControllers>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const NearbyControllers& from);
  void MergeFrom(const NearbyControllers& from);
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
  void InternalSwap(NearbyControllers* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "xpilot.NearbyControllers";
  }
  protected:
  explicit NearbyControllers(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef NearbyControllers_Controller Controller;

  // accessors -------------------------------------------------------

  enum : int {
    kListFieldNumber = 1,
  };
  // repeated .xpilot.NearbyControllers.Controller list = 1;
  int list_size() const;
  private:
  int _internal_list_size() const;
  public:
  void clear_list();
  ::xpilot::NearbyControllers_Controller* mutable_list(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::xpilot::NearbyControllers_Controller >*
      mutable_list();
  private:
  const ::xpilot::NearbyControllers_Controller& _internal_list(int index) const;
  ::xpilot::NearbyControllers_Controller* _internal_add_list();
  public:
  const ::xpilot::NearbyControllers_Controller& list(int index) const;
  ::xpilot::NearbyControllers_Controller* add_list();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::xpilot::NearbyControllers_Controller >&
      list() const;

  // @@protoc_insertion_point(class_scope:xpilot.NearbyControllers)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::xpilot::NearbyControllers_Controller > list_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_NearbyControllers_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NearbyControllers_Controller

// optional string callsign = 1;
inline bool NearbyControllers_Controller::_internal_has_callsign() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool NearbyControllers_Controller::has_callsign() const {
  return _internal_has_callsign();
}
inline void NearbyControllers_Controller::clear_callsign() {
  callsign_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& NearbyControllers_Controller::callsign() const {
  // @@protoc_insertion_point(field_get:xpilot.NearbyControllers.Controller.callsign)
  return _internal_callsign();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void NearbyControllers_Controller::set_callsign(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 callsign_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:xpilot.NearbyControllers.Controller.callsign)
}
inline std::string* NearbyControllers_Controller::mutable_callsign() {
  // @@protoc_insertion_point(field_mutable:xpilot.NearbyControllers.Controller.callsign)
  return _internal_mutable_callsign();
}
inline const std::string& NearbyControllers_Controller::_internal_callsign() const {
  return callsign_.Get();
}
inline void NearbyControllers_Controller::_internal_set_callsign(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  callsign_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* NearbyControllers_Controller::_internal_mutable_callsign() {
  _has_bits_[0] |= 0x00000001u;
  return callsign_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* NearbyControllers_Controller::release_callsign() {
  // @@protoc_insertion_point(field_release:xpilot.NearbyControllers.Controller.callsign)
  if (!_internal_has_callsign()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return callsign_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void NearbyControllers_Controller::set_allocated_callsign(std::string* callsign) {
  if (callsign != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  callsign_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), callsign,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:xpilot.NearbyControllers.Controller.callsign)
}

// optional int32 xplane_frequency = 2;
inline bool NearbyControllers_Controller::_internal_has_xplane_frequency() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool NearbyControllers_Controller::has_xplane_frequency() const {
  return _internal_has_xplane_frequency();
}
inline void NearbyControllers_Controller::clear_xplane_frequency() {
  xplane_frequency_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 NearbyControllers_Controller::_internal_xplane_frequency() const {
  return xplane_frequency_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 NearbyControllers_Controller::xplane_frequency() const {
  // @@protoc_insertion_point(field_get:xpilot.NearbyControllers.Controller.xplane_frequency)
  return _internal_xplane_frequency();
}
inline void NearbyControllers_Controller::_internal_set_xplane_frequency(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000008u;
  xplane_frequency_ = value;
}
inline void NearbyControllers_Controller::set_xplane_frequency(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_xplane_frequency(value);
  // @@protoc_insertion_point(field_set:xpilot.NearbyControllers.Controller.xplane_frequency)
}

// optional string frequency = 3;
inline bool NearbyControllers_Controller::_internal_has_frequency() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool NearbyControllers_Controller::has_frequency() const {
  return _internal_has_frequency();
}
inline void NearbyControllers_Controller::clear_frequency() {
  frequency_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& NearbyControllers_Controller::frequency() const {
  // @@protoc_insertion_point(field_get:xpilot.NearbyControllers.Controller.frequency)
  return _internal_frequency();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void NearbyControllers_Controller::set_frequency(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000002u;
 frequency_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:xpilot.NearbyControllers.Controller.frequency)
}
inline std::string* NearbyControllers_Controller::mutable_frequency() {
  // @@protoc_insertion_point(field_mutable:xpilot.NearbyControllers.Controller.frequency)
  return _internal_mutable_frequency();
}
inline const std::string& NearbyControllers_Controller::_internal_frequency() const {
  return frequency_.Get();
}
inline void NearbyControllers_Controller::_internal_set_frequency(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  frequency_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* NearbyControllers_Controller::_internal_mutable_frequency() {
  _has_bits_[0] |= 0x00000002u;
  return frequency_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* NearbyControllers_Controller::release_frequency() {
  // @@protoc_insertion_point(field_release:xpilot.NearbyControllers.Controller.frequency)
  if (!_internal_has_frequency()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return frequency_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void NearbyControllers_Controller::set_allocated_frequency(std::string* frequency) {
  if (frequency != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  frequency_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), frequency,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:xpilot.NearbyControllers.Controller.frequency)
}

// optional string real_name = 4;
inline bool NearbyControllers_Controller::_internal_has_real_name() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool NearbyControllers_Controller::has_real_name() const {
  return _internal_has_real_name();
}
inline void NearbyControllers_Controller::clear_real_name() {
  real_name_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& NearbyControllers_Controller::real_name() const {
  // @@protoc_insertion_point(field_get:xpilot.NearbyControllers.Controller.real_name)
  return _internal_real_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void NearbyControllers_Controller::set_real_name(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000004u;
 real_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:xpilot.NearbyControllers.Controller.real_name)
}
inline std::string* NearbyControllers_Controller::mutable_real_name() {
  // @@protoc_insertion_point(field_mutable:xpilot.NearbyControllers.Controller.real_name)
  return _internal_mutable_real_name();
}
inline const std::string& NearbyControllers_Controller::_internal_real_name() const {
  return real_name_.Get();
}
inline void NearbyControllers_Controller::_internal_set_real_name(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  real_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* NearbyControllers_Controller::_internal_mutable_real_name() {
  _has_bits_[0] |= 0x00000004u;
  return real_name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* NearbyControllers_Controller::release_real_name() {
  // @@protoc_insertion_point(field_release:xpilot.NearbyControllers.Controller.real_name)
  if (!_internal_has_real_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  return real_name_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void NearbyControllers_Controller::set_allocated_real_name(std::string* real_name) {
  if (real_name != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  real_name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), real_name,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:xpilot.NearbyControllers.Controller.real_name)
}

// -------------------------------------------------------------------

// NearbyControllers

// repeated .xpilot.NearbyControllers.Controller list = 1;
inline int NearbyControllers::_internal_list_size() const {
  return list_.size();
}
inline int NearbyControllers::list_size() const {
  return _internal_list_size();
}
inline void NearbyControllers::clear_list() {
  list_.Clear();
}
inline ::xpilot::NearbyControllers_Controller* NearbyControllers::mutable_list(int index) {
  // @@protoc_insertion_point(field_mutable:xpilot.NearbyControllers.list)
  return list_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::xpilot::NearbyControllers_Controller >*
NearbyControllers::mutable_list() {
  // @@protoc_insertion_point(field_mutable_list:xpilot.NearbyControllers.list)
  return &list_;
}
inline const ::xpilot::NearbyControllers_Controller& NearbyControllers::_internal_list(int index) const {
  return list_.Get(index);
}
inline const ::xpilot::NearbyControllers_Controller& NearbyControllers::list(int index) const {
  // @@protoc_insertion_point(field_get:xpilot.NearbyControllers.list)
  return _internal_list(index);
}
inline ::xpilot::NearbyControllers_Controller* NearbyControllers::_internal_add_list() {
  return list_.Add();
}
inline ::xpilot::NearbyControllers_Controller* NearbyControllers::add_list() {
  // @@protoc_insertion_point(field_add:xpilot.NearbyControllers.list)
  return _internal_add_list();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::xpilot::NearbyControllers_Controller >&
NearbyControllers::list() const {
  // @@protoc_insertion_point(field_list:xpilot.NearbyControllers.list)
  return list_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace xpilot

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_NearbyControllers_2eproto

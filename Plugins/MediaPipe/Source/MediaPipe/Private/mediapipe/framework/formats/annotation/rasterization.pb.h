// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/framework/formats/annotation/rasterization.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fframework_2fformats_2fannotation_2frasterization_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fframework_2fformats_2fannotation_2frasterization_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_mediapipe_2fframework_2fformats_2fannotation_2frasterization_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_mediapipe_2fframework_2fformats_2fannotation_2frasterization_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fframework_2fformats_2fannotation_2frasterization_2eproto;
namespace mediapipe {
class Rasterization;
class RasterizationDefaultTypeInternal;
extern RasterizationDefaultTypeInternal _Rasterization_default_instance_;
class Rasterization_Interval;
class Rasterization_IntervalDefaultTypeInternal;
extern Rasterization_IntervalDefaultTypeInternal _Rasterization_Interval_default_instance_;
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> ::mediapipe::Rasterization* Arena::CreateMaybeMessage<::mediapipe::Rasterization>(Arena*);
template<> ::mediapipe::Rasterization_Interval* Arena::CreateMaybeMessage<::mediapipe::Rasterization_Interval>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mediapipe {

// ===================================================================

class Rasterization_Interval :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mediapipe.Rasterization.Interval) */ {
 public:
  Rasterization_Interval();
  virtual ~Rasterization_Interval();

  Rasterization_Interval(const Rasterization_Interval& from);
  Rasterization_Interval(Rasterization_Interval&& from) noexcept
    : Rasterization_Interval() {
    *this = ::std::move(from);
  }

  inline Rasterization_Interval& operator=(const Rasterization_Interval& from) {
    CopyFrom(from);
    return *this;
  }
  inline Rasterization_Interval& operator=(Rasterization_Interval&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Rasterization_Interval& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Rasterization_Interval* internal_default_instance() {
    return reinterpret_cast<const Rasterization_Interval*>(
               &_Rasterization_Interval_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Rasterization_Interval& a, Rasterization_Interval& b) {
    a.Swap(&b);
  }
  inline void Swap(Rasterization_Interval* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Rasterization_Interval* New() const final {
    return CreateMaybeMessage<Rasterization_Interval>(nullptr);
  }

  Rasterization_Interval* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Rasterization_Interval>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Rasterization_Interval& from);
  void MergeFrom(const Rasterization_Interval& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Rasterization_Interval* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mediapipe.Rasterization.Interval";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_mediapipe_2fframework_2fformats_2fannotation_2frasterization_2eproto);
    return ::descriptor_table_mediapipe_2fframework_2fformats_2fannotation_2frasterization_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kYFieldNumber = 1,
    kLeftXFieldNumber = 2,
    kRightXFieldNumber = 3,
  };
  // required int32 y = 1;
  bool has_y() const;
  private:
  bool _internal_has_y() const;
  public:
  void clear_y();
  ::PROTOBUF_NAMESPACE_ID::int32 y() const;
  void set_y(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_y() const;
  void _internal_set_y(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required int32 left_x = 2;
  bool has_left_x() const;
  private:
  bool _internal_has_left_x() const;
  public:
  void clear_left_x();
  ::PROTOBUF_NAMESPACE_ID::int32 left_x() const;
  void set_left_x(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_left_x() const;
  void _internal_set_left_x(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required int32 right_x = 3;
  bool has_right_x() const;
  private:
  bool _internal_has_right_x() const;
  public:
  void clear_right_x();
  ::PROTOBUF_NAMESPACE_ID::int32 right_x() const;
  void set_right_x(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_right_x() const;
  void _internal_set_right_x(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:mediapipe.Rasterization.Interval)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 y_;
  ::PROTOBUF_NAMESPACE_ID::int32 left_x_;
  ::PROTOBUF_NAMESPACE_ID::int32 right_x_;
  friend struct ::TableStruct_mediapipe_2fframework_2fformats_2fannotation_2frasterization_2eproto;
};
// -------------------------------------------------------------------

class Rasterization :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mediapipe.Rasterization) */ {
 public:
  Rasterization();
  virtual ~Rasterization();

  Rasterization(const Rasterization& from);
  Rasterization(Rasterization&& from) noexcept
    : Rasterization() {
    *this = ::std::move(from);
  }

  inline Rasterization& operator=(const Rasterization& from) {
    CopyFrom(from);
    return *this;
  }
  inline Rasterization& operator=(Rasterization&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Rasterization& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Rasterization* internal_default_instance() {
    return reinterpret_cast<const Rasterization*>(
               &_Rasterization_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Rasterization& a, Rasterization& b) {
    a.Swap(&b);
  }
  inline void Swap(Rasterization* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Rasterization* New() const final {
    return CreateMaybeMessage<Rasterization>(nullptr);
  }

  Rasterization* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Rasterization>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Rasterization& from);
  void MergeFrom(const Rasterization& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Rasterization* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mediapipe.Rasterization";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_mediapipe_2fframework_2fformats_2fannotation_2frasterization_2eproto);
    return ::descriptor_table_mediapipe_2fframework_2fformats_2fannotation_2frasterization_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Rasterization_Interval Interval;

  // accessors -------------------------------------------------------

  enum : int {
    kIntervalFieldNumber = 1,
  };
  // repeated .mediapipe.Rasterization.Interval interval = 1;
  int interval_size() const;
  private:
  int _internal_interval_size() const;
  public:
  void clear_interval();
  ::mediapipe::Rasterization_Interval* mutable_interval(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::mediapipe::Rasterization_Interval >*
      mutable_interval();
  private:
  const ::mediapipe::Rasterization_Interval& _internal_interval(int index) const;
  ::mediapipe::Rasterization_Interval* _internal_add_interval();
  public:
  const ::mediapipe::Rasterization_Interval& interval(int index) const;
  ::mediapipe::Rasterization_Interval* add_interval();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::mediapipe::Rasterization_Interval >&
      interval() const;

  // @@protoc_insertion_point(class_scope:mediapipe.Rasterization)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::mediapipe::Rasterization_Interval > interval_;
  friend struct ::TableStruct_mediapipe_2fframework_2fformats_2fannotation_2frasterization_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Rasterization_Interval

// required int32 y = 1;
inline bool Rasterization_Interval::_internal_has_y() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Rasterization_Interval::has_y() const {
  return _internal_has_y();
}
inline void Rasterization_Interval::clear_y() {
  y_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Rasterization_Interval::_internal_y() const {
  return y_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Rasterization_Interval::y() const {
  // @@protoc_insertion_point(field_get:mediapipe.Rasterization.Interval.y)
  return _internal_y();
}
inline void Rasterization_Interval::_internal_set_y(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  y_ = value;
}
inline void Rasterization_Interval::set_y(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:mediapipe.Rasterization.Interval.y)
}

// required int32 left_x = 2;
inline bool Rasterization_Interval::_internal_has_left_x() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Rasterization_Interval::has_left_x() const {
  return _internal_has_left_x();
}
inline void Rasterization_Interval::clear_left_x() {
  left_x_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Rasterization_Interval::_internal_left_x() const {
  return left_x_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Rasterization_Interval::left_x() const {
  // @@protoc_insertion_point(field_get:mediapipe.Rasterization.Interval.left_x)
  return _internal_left_x();
}
inline void Rasterization_Interval::_internal_set_left_x(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  left_x_ = value;
}
inline void Rasterization_Interval::set_left_x(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_left_x(value);
  // @@protoc_insertion_point(field_set:mediapipe.Rasterization.Interval.left_x)
}

// required int32 right_x = 3;
inline bool Rasterization_Interval::_internal_has_right_x() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Rasterization_Interval::has_right_x() const {
  return _internal_has_right_x();
}
inline void Rasterization_Interval::clear_right_x() {
  right_x_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Rasterization_Interval::_internal_right_x() const {
  return right_x_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Rasterization_Interval::right_x() const {
  // @@protoc_insertion_point(field_get:mediapipe.Rasterization.Interval.right_x)
  return _internal_right_x();
}
inline void Rasterization_Interval::_internal_set_right_x(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  right_x_ = value;
}
inline void Rasterization_Interval::set_right_x(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_right_x(value);
  // @@protoc_insertion_point(field_set:mediapipe.Rasterization.Interval.right_x)
}

// -------------------------------------------------------------------

// Rasterization

// repeated .mediapipe.Rasterization.Interval interval = 1;
inline int Rasterization::_internal_interval_size() const {
  return interval_.size();
}
inline int Rasterization::interval_size() const {
  return _internal_interval_size();
}
inline void Rasterization::clear_interval() {
  interval_.Clear();
}
inline ::mediapipe::Rasterization_Interval* Rasterization::mutable_interval(int index) {
  // @@protoc_insertion_point(field_mutable:mediapipe.Rasterization.interval)
  return interval_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::mediapipe::Rasterization_Interval >*
Rasterization::mutable_interval() {
  // @@protoc_insertion_point(field_mutable_list:mediapipe.Rasterization.interval)
  return &interval_;
}
inline const ::mediapipe::Rasterization_Interval& Rasterization::_internal_interval(int index) const {
  return interval_.Get(index);
}
inline const ::mediapipe::Rasterization_Interval& Rasterization::interval(int index) const {
  // @@protoc_insertion_point(field_get:mediapipe.Rasterization.interval)
  return _internal_interval(index);
}
inline ::mediapipe::Rasterization_Interval* Rasterization::_internal_add_interval() {
  return interval_.Add();
}
inline ::mediapipe::Rasterization_Interval* Rasterization::add_interval() {
  // @@protoc_insertion_point(field_add:mediapipe.Rasterization.interval)
  return _internal_add_interval();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::mediapipe::Rasterization_Interval >&
Rasterization::interval() const {
  // @@protoc_insertion_point(field_list:mediapipe.Rasterization.interval)
  return interval_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace mediapipe

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fframework_2fformats_2fannotation_2frasterization_2eproto

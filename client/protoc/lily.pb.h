// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: lily.proto

#ifndef PROTOBUF_lily_2eproto__INCLUDED
#define PROTOBUF_lily_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace lily {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_lily_2eproto();
void protobuf_AssignDesc_lily_2eproto();
void protobuf_ShutdownFile_lily_2eproto();

class CSGetCode;
class SCGetCode;
class CSRegister;
class SCRegister;

enum Status {
  SUCCESS = 0,
  FAIL = 1
};
bool Status_IsValid(int value);
const Status Status_MIN = SUCCESS;
const Status Status_MAX = FAIL;
const int Status_ARRAYSIZE = Status_MAX + 1;

const ::google::protobuf::EnumDescriptor* Status_descriptor();
inline const ::std::string& Status_Name(Status value) {
  return ::google::protobuf::internal::NameOfEnum(
    Status_descriptor(), value);
}
inline bool Status_Parse(
    const ::std::string& name, Status* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Status>(
    Status_descriptor(), name, value);
}
// ===================================================================

class CSGetCode : public ::google::protobuf::Message {
 public:
  CSGetCode();
  virtual ~CSGetCode();

  CSGetCode(const CSGetCode& from);

  inline CSGetCode& operator=(const CSGetCode& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CSGetCode& default_instance();

  void Swap(CSGetCode* other);

  // implements Message ----------------------------------------------

  inline CSGetCode* New() const { return New(NULL); }

  CSGetCode* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CSGetCode& from);
  void MergeFrom(const CSGetCode& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(CSGetCode* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 phonenum = 1;
  bool has_phonenum() const;
  void clear_phonenum();
  static const int kPhonenumFieldNumber = 1;
  ::google::protobuf::int32 phonenum() const;
  void set_phonenum(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:lily.CSGetCode)
 private:
  inline void set_has_phonenum();
  inline void clear_has_phonenum();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 phonenum_;
  friend void  protobuf_AddDesc_lily_2eproto();
  friend void protobuf_AssignDesc_lily_2eproto();
  friend void protobuf_ShutdownFile_lily_2eproto();

  void InitAsDefaultInstance();
  static CSGetCode* default_instance_;
};
// -------------------------------------------------------------------

class SCGetCode : public ::google::protobuf::Message {
 public:
  SCGetCode();
  virtual ~SCGetCode();

  SCGetCode(const SCGetCode& from);

  inline SCGetCode& operator=(const SCGetCode& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SCGetCode& default_instance();

  void Swap(SCGetCode* other);

  // implements Message ----------------------------------------------

  inline SCGetCode* New() const { return New(NULL); }

  SCGetCode* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SCGetCode& from);
  void MergeFrom(const SCGetCode& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SCGetCode* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .lily.Status ret = 1;
  bool has_ret() const;
  void clear_ret();
  static const int kRetFieldNumber = 1;
  ::lily::Status ret() const;
  void set_ret(::lily::Status value);

  // optional string msg = 2;
  bool has_msg() const;
  void clear_msg();
  static const int kMsgFieldNumber = 2;
  const ::std::string& msg() const;
  void set_msg(const ::std::string& value);
  void set_msg(const char* value);
  void set_msg(const char* value, size_t size);
  ::std::string* mutable_msg();
  ::std::string* release_msg();
  void set_allocated_msg(::std::string* msg);

  // @@protoc_insertion_point(class_scope:lily.SCGetCode)
 private:
  inline void set_has_ret();
  inline void clear_has_ret();
  inline void set_has_msg();
  inline void clear_has_msg();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr msg_;
  int ret_;
  friend void  protobuf_AddDesc_lily_2eproto();
  friend void protobuf_AssignDesc_lily_2eproto();
  friend void protobuf_ShutdownFile_lily_2eproto();

  void InitAsDefaultInstance();
  static SCGetCode* default_instance_;
};
// -------------------------------------------------------------------

class CSRegister : public ::google::protobuf::Message {
 public:
  CSRegister();
  virtual ~CSRegister();

  CSRegister(const CSRegister& from);

  inline CSRegister& operator=(const CSRegister& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CSRegister& default_instance();

  void Swap(CSRegister* other);

  // implements Message ----------------------------------------------

  inline CSRegister* New() const { return New(NULL); }

  CSRegister* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CSRegister& from);
  void MergeFrom(const CSRegister& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(CSRegister* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 phonenum = 1;
  bool has_phonenum() const;
  void clear_phonenum();
  static const int kPhonenumFieldNumber = 1;
  ::google::protobuf::int32 phonenum() const;
  void set_phonenum(::google::protobuf::int32 value);

  // required int32 code = 2;
  bool has_code() const;
  void clear_code();
  static const int kCodeFieldNumber = 2;
  ::google::protobuf::int32 code() const;
  void set_code(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:lily.CSRegister)
 private:
  inline void set_has_phonenum();
  inline void clear_has_phonenum();
  inline void set_has_code();
  inline void clear_has_code();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 phonenum_;
  ::google::protobuf::int32 code_;
  friend void  protobuf_AddDesc_lily_2eproto();
  friend void protobuf_AssignDesc_lily_2eproto();
  friend void protobuf_ShutdownFile_lily_2eproto();

  void InitAsDefaultInstance();
  static CSRegister* default_instance_;
};
// -------------------------------------------------------------------

class SCRegister : public ::google::protobuf::Message {
 public:
  SCRegister();
  virtual ~SCRegister();

  SCRegister(const SCRegister& from);

  inline SCRegister& operator=(const SCRegister& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SCRegister& default_instance();

  void Swap(SCRegister* other);

  // implements Message ----------------------------------------------

  inline SCRegister* New() const { return New(NULL); }

  SCRegister* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SCRegister& from);
  void MergeFrom(const SCRegister& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SCRegister* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .lily.Status status = 1;
  bool has_status() const;
  void clear_status();
  static const int kStatusFieldNumber = 1;
  ::lily::Status status() const;
  void set_status(::lily::Status value);

  // optional string msg = 2;
  bool has_msg() const;
  void clear_msg();
  static const int kMsgFieldNumber = 2;
  const ::std::string& msg() const;
  void set_msg(const ::std::string& value);
  void set_msg(const char* value);
  void set_msg(const char* value, size_t size);
  ::std::string* mutable_msg();
  ::std::string* release_msg();
  void set_allocated_msg(::std::string* msg);

  // optional string token = 3;
  bool has_token() const;
  void clear_token();
  static const int kTokenFieldNumber = 3;
  const ::std::string& token() const;
  void set_token(const ::std::string& value);
  void set_token(const char* value);
  void set_token(const char* value, size_t size);
  ::std::string* mutable_token();
  ::std::string* release_token();
  void set_allocated_token(::std::string* token);

  // @@protoc_insertion_point(class_scope:lily.SCRegister)
 private:
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_msg();
  inline void clear_has_msg();
  inline void set_has_token();
  inline void clear_has_token();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr msg_;
  ::google::protobuf::internal::ArenaStringPtr token_;
  int status_;
  friend void  protobuf_AddDesc_lily_2eproto();
  friend void protobuf_AssignDesc_lily_2eproto();
  friend void protobuf_ShutdownFile_lily_2eproto();

  void InitAsDefaultInstance();
  static SCRegister* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CSGetCode

// required int32 phonenum = 1;
inline bool CSGetCode::has_phonenum() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CSGetCode::set_has_phonenum() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CSGetCode::clear_has_phonenum() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CSGetCode::clear_phonenum() {
  phonenum_ = 0;
  clear_has_phonenum();
}
inline ::google::protobuf::int32 CSGetCode::phonenum() const {
  // @@protoc_insertion_point(field_get:lily.CSGetCode.phonenum)
  return phonenum_;
}
inline void CSGetCode::set_phonenum(::google::protobuf::int32 value) {
  set_has_phonenum();
  phonenum_ = value;
  // @@protoc_insertion_point(field_set:lily.CSGetCode.phonenum)
}

// -------------------------------------------------------------------

// SCGetCode

// required .lily.Status ret = 1;
inline bool SCGetCode::has_ret() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SCGetCode::set_has_ret() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SCGetCode::clear_has_ret() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SCGetCode::clear_ret() {
  ret_ = 0;
  clear_has_ret();
}
inline ::lily::Status SCGetCode::ret() const {
  // @@protoc_insertion_point(field_get:lily.SCGetCode.ret)
  return static_cast< ::lily::Status >(ret_);
}
inline void SCGetCode::set_ret(::lily::Status value) {
  assert(::lily::Status_IsValid(value));
  set_has_ret();
  ret_ = value;
  // @@protoc_insertion_point(field_set:lily.SCGetCode.ret)
}

// optional string msg = 2;
inline bool SCGetCode::has_msg() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SCGetCode::set_has_msg() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SCGetCode::clear_has_msg() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SCGetCode::clear_msg() {
  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_msg();
}
inline const ::std::string& SCGetCode::msg() const {
  // @@protoc_insertion_point(field_get:lily.SCGetCode.msg)
  return msg_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SCGetCode::set_msg(const ::std::string& value) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lily.SCGetCode.msg)
}
inline void SCGetCode::set_msg(const char* value) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lily.SCGetCode.msg)
}
inline void SCGetCode::set_msg(const char* value, size_t size) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lily.SCGetCode.msg)
}
inline ::std::string* SCGetCode::mutable_msg() {
  set_has_msg();
  // @@protoc_insertion_point(field_mutable:lily.SCGetCode.msg)
  return msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SCGetCode::release_msg() {
  clear_has_msg();
  return msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SCGetCode::set_allocated_msg(::std::string* msg) {
  if (msg != NULL) {
    set_has_msg();
  } else {
    clear_has_msg();
  }
  msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:lily.SCGetCode.msg)
}

// -------------------------------------------------------------------

// CSRegister

// required int32 phonenum = 1;
inline bool CSRegister::has_phonenum() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CSRegister::set_has_phonenum() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CSRegister::clear_has_phonenum() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CSRegister::clear_phonenum() {
  phonenum_ = 0;
  clear_has_phonenum();
}
inline ::google::protobuf::int32 CSRegister::phonenum() const {
  // @@protoc_insertion_point(field_get:lily.CSRegister.phonenum)
  return phonenum_;
}
inline void CSRegister::set_phonenum(::google::protobuf::int32 value) {
  set_has_phonenum();
  phonenum_ = value;
  // @@protoc_insertion_point(field_set:lily.CSRegister.phonenum)
}

// required int32 code = 2;
inline bool CSRegister::has_code() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CSRegister::set_has_code() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CSRegister::clear_has_code() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CSRegister::clear_code() {
  code_ = 0;
  clear_has_code();
}
inline ::google::protobuf::int32 CSRegister::code() const {
  // @@protoc_insertion_point(field_get:lily.CSRegister.code)
  return code_;
}
inline void CSRegister::set_code(::google::protobuf::int32 value) {
  set_has_code();
  code_ = value;
  // @@protoc_insertion_point(field_set:lily.CSRegister.code)
}

// -------------------------------------------------------------------

// SCRegister

// required .lily.Status status = 1;
inline bool SCRegister::has_status() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SCRegister::set_has_status() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SCRegister::clear_has_status() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SCRegister::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::lily::Status SCRegister::status() const {
  // @@protoc_insertion_point(field_get:lily.SCRegister.status)
  return static_cast< ::lily::Status >(status_);
}
inline void SCRegister::set_status(::lily::Status value) {
  assert(::lily::Status_IsValid(value));
  set_has_status();
  status_ = value;
  // @@protoc_insertion_point(field_set:lily.SCRegister.status)
}

// optional string msg = 2;
inline bool SCRegister::has_msg() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SCRegister::set_has_msg() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SCRegister::clear_has_msg() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SCRegister::clear_msg() {
  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_msg();
}
inline const ::std::string& SCRegister::msg() const {
  // @@protoc_insertion_point(field_get:lily.SCRegister.msg)
  return msg_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SCRegister::set_msg(const ::std::string& value) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lily.SCRegister.msg)
}
inline void SCRegister::set_msg(const char* value) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lily.SCRegister.msg)
}
inline void SCRegister::set_msg(const char* value, size_t size) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lily.SCRegister.msg)
}
inline ::std::string* SCRegister::mutable_msg() {
  set_has_msg();
  // @@protoc_insertion_point(field_mutable:lily.SCRegister.msg)
  return msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SCRegister::release_msg() {
  clear_has_msg();
  return msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SCRegister::set_allocated_msg(::std::string* msg) {
  if (msg != NULL) {
    set_has_msg();
  } else {
    clear_has_msg();
  }
  msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:lily.SCRegister.msg)
}

// optional string token = 3;
inline bool SCRegister::has_token() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SCRegister::set_has_token() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SCRegister::clear_has_token() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SCRegister::clear_token() {
  token_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_token();
}
inline const ::std::string& SCRegister::token() const {
  // @@protoc_insertion_point(field_get:lily.SCRegister.token)
  return token_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SCRegister::set_token(const ::std::string& value) {
  set_has_token();
  token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lily.SCRegister.token)
}
inline void SCRegister::set_token(const char* value) {
  set_has_token();
  token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lily.SCRegister.token)
}
inline void SCRegister::set_token(const char* value, size_t size) {
  set_has_token();
  token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lily.SCRegister.token)
}
inline ::std::string* SCRegister::mutable_token() {
  set_has_token();
  // @@protoc_insertion_point(field_mutable:lily.SCRegister.token)
  return token_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SCRegister::release_token() {
  clear_has_token();
  return token_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SCRegister::set_allocated_token(::std::string* token) {
  if (token != NULL) {
    set_has_token();
  } else {
    clear_has_token();
  }
  token_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), token);
  // @@protoc_insertion_point(field_set_allocated:lily.SCRegister.token)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace lily

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::lily::Status> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::lily::Status>() {
  return ::lily::Status_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_lily_2eproto__INCLUDED

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ClientData.proto

#ifndef PROTOBUF_ClientData_2eproto__INCLUDED
#define PROTOBUF_ClientData_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_ClientData_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsClientImpl();
void InitDefaultsClient();
inline void InitDefaults() {
  InitDefaultsClient();
}
}  // namespace protobuf_ClientData_2eproto
namespace ClientData {
class Client;
class ClientDefaultTypeInternal;
extern ClientDefaultTypeInternal _Client_default_instance_;
}  // namespace ClientData
namespace ClientData {

enum Client_Role {
  Client_Role_User = 0,
  Client_Role_Developer = 1,
  Client_Role_Admin = 2,
  Client_Role_Client_Role_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Client_Role_Client_Role_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Client_Role_IsValid(int value);
const Client_Role Client_Role_Role_MIN = Client_Role_User;
const Client_Role Client_Role_Role_MAX = Client_Role_Admin;
const int Client_Role_Role_ARRAYSIZE = Client_Role_Role_MAX + 1;

const ::google::protobuf::EnumDescriptor* Client_Role_descriptor();
inline const ::std::string& Client_Role_Name(Client_Role value) {
  return ::google::protobuf::internal::NameOfEnum(
    Client_Role_descriptor(), value);
}
inline bool Client_Role_Parse(
    const ::std::string& name, Client_Role* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Client_Role>(
    Client_Role_descriptor(), name, value);
}
// ===================================================================

class Client : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ClientData.Client) */ {
 public:
  Client();
  virtual ~Client();

  Client(const Client& from);

  inline Client& operator=(const Client& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Client(Client&& from) noexcept
    : Client() {
    *this = ::std::move(from);
  }

  inline Client& operator=(Client&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Client& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Client* internal_default_instance() {
    return reinterpret_cast<const Client*>(
               &_Client_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Client* other);
  friend void swap(Client& a, Client& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Client* New() const PROTOBUF_FINAL { return New(NULL); }

  Client* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Client& from);
  void MergeFrom(const Client& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Client* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef Client_Role Role;
  static const Role User =
    Client_Role_User;
  static const Role Developer =
    Client_Role_Developer;
  static const Role Admin =
    Client_Role_Admin;
  static inline bool Role_IsValid(int value) {
    return Client_Role_IsValid(value);
  }
  static const Role Role_MIN =
    Client_Role_Role_MIN;
  static const Role Role_MAX =
    Client_Role_Role_MAX;
  static const int Role_ARRAYSIZE =
    Client_Role_Role_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Role_descriptor() {
    return Client_Role_descriptor();
  }
  static inline const ::std::string& Role_Name(Role value) {
    return Client_Role_Name(value);
  }
  static inline bool Role_Parse(const ::std::string& name,
      Role* value) {
    return Client_Role_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // string first_name = 1;
  void clear_first_name();
  static const int kFirstNameFieldNumber = 1;
  const ::std::string& first_name() const;
  void set_first_name(const ::std::string& value);
  #if LANG_CXX11
  void set_first_name(::std::string&& value);
  #endif
  void set_first_name(const char* value);
  void set_first_name(const char* value, size_t size);
  ::std::string* mutable_first_name();
  ::std::string* release_first_name();
  void set_allocated_first_name(::std::string* first_name);

  // string last_name = 2;
  void clear_last_name();
  static const int kLastNameFieldNumber = 2;
  const ::std::string& last_name() const;
  void set_last_name(const ::std::string& value);
  #if LANG_CXX11
  void set_last_name(::std::string&& value);
  #endif
  void set_last_name(const char* value);
  void set_last_name(const char* value, size_t size);
  ::std::string* mutable_last_name();
  ::std::string* release_last_name();
  void set_allocated_last_name(::std::string* last_name);

  // int32 age = 3;
  void clear_age();
  static const int kAgeFieldNumber = 3;
  ::google::protobuf::int32 age() const;
  void set_age(::google::protobuf::int32 value);

  // .ClientData.Client.Role role = 4;
  void clear_role();
  static const int kRoleFieldNumber = 4;
  ::ClientData::Client_Role role() const;
  void set_role(::ClientData::Client_Role value);

  // @@protoc_insertion_point(class_scope:ClientData.Client)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr first_name_;
  ::google::protobuf::internal::ArenaStringPtr last_name_;
  ::google::protobuf::int32 age_;
  int role_;
  mutable int _cached_size_;
  friend struct ::protobuf_ClientData_2eproto::TableStruct;
  friend void ::protobuf_ClientData_2eproto::InitDefaultsClientImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Client

// string first_name = 1;
inline void Client::clear_first_name() {
  first_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Client::first_name() const {
  // @@protoc_insertion_point(field_get:ClientData.Client.first_name)
  return first_name_.GetNoArena();
}
inline void Client::set_first_name(const ::std::string& value) {
  
  first_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ClientData.Client.first_name)
}
#if LANG_CXX11
inline void Client::set_first_name(::std::string&& value) {
  
  first_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ClientData.Client.first_name)
}
#endif
inline void Client::set_first_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  first_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ClientData.Client.first_name)
}
inline void Client::set_first_name(const char* value, size_t size) {
  
  first_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ClientData.Client.first_name)
}
inline ::std::string* Client::mutable_first_name() {
  
  // @@protoc_insertion_point(field_mutable:ClientData.Client.first_name)
  return first_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Client::release_first_name() {
  // @@protoc_insertion_point(field_release:ClientData.Client.first_name)
  
  return first_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Client::set_allocated_first_name(::std::string* first_name) {
  if (first_name != NULL) {
    
  } else {
    
  }
  first_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), first_name);
  // @@protoc_insertion_point(field_set_allocated:ClientData.Client.first_name)
}

// string last_name = 2;
inline void Client::clear_last_name() {
  last_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Client::last_name() const {
  // @@protoc_insertion_point(field_get:ClientData.Client.last_name)
  return last_name_.GetNoArena();
}
inline void Client::set_last_name(const ::std::string& value) {
  
  last_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ClientData.Client.last_name)
}
#if LANG_CXX11
inline void Client::set_last_name(::std::string&& value) {
  
  last_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ClientData.Client.last_name)
}
#endif
inline void Client::set_last_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  last_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ClientData.Client.last_name)
}
inline void Client::set_last_name(const char* value, size_t size) {
  
  last_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ClientData.Client.last_name)
}
inline ::std::string* Client::mutable_last_name() {
  
  // @@protoc_insertion_point(field_mutable:ClientData.Client.last_name)
  return last_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Client::release_last_name() {
  // @@protoc_insertion_point(field_release:ClientData.Client.last_name)
  
  return last_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Client::set_allocated_last_name(::std::string* last_name) {
  if (last_name != NULL) {
    
  } else {
    
  }
  last_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), last_name);
  // @@protoc_insertion_point(field_set_allocated:ClientData.Client.last_name)
}

// int32 age = 3;
inline void Client::clear_age() {
  age_ = 0;
}
inline ::google::protobuf::int32 Client::age() const {
  // @@protoc_insertion_point(field_get:ClientData.Client.age)
  return age_;
}
inline void Client::set_age(::google::protobuf::int32 value) {
  
  age_ = value;
  // @@protoc_insertion_point(field_set:ClientData.Client.age)
}

// .ClientData.Client.Role role = 4;
inline void Client::clear_role() {
  role_ = 0;
}
inline ::ClientData::Client_Role Client::role() const {
  // @@protoc_insertion_point(field_get:ClientData.Client.role)
  return static_cast< ::ClientData::Client_Role >(role_);
}
inline void Client::set_role(::ClientData::Client_Role value) {
  
  role_ = value;
  // @@protoc_insertion_point(field_set:ClientData.Client.role)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace ClientData

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::ClientData::Client_Role> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ClientData::Client_Role>() {
  return ::ClientData::Client_Role_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ClientData_2eproto__INCLUDED

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ClientData.proto

#include "ClientData.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace ClientData {
class ClientDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Client>
      _instance;
} _Client_default_instance_;
}  // namespace ClientData
namespace protobuf_ClientData_2eproto {
void InitDefaultsClientImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::ClientData::_Client_default_instance_;
    new (ptr) ::ClientData::Client();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ClientData::Client::InitAsDefaultInstance();
}

void InitDefaultsClient() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsClientImpl);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ClientData::Client, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ClientData::Client, first_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ClientData::Client, last_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ClientData::Client, age_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ClientData::Client, role_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ClientData::Client)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::ClientData::_Client_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "ClientData.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\020ClientData.proto\022\nClientData\"\217\001\n\006Clien"
      "t\022\022\n\nfirst_name\030\001 \001(\t\022\021\n\tlast_name\030\002 \001(\t"
      "\022\013\n\003age\030\003 \001(\005\022%\n\004role\030\004 \001(\0162\027.ClientData"
      ".Client.Role\"*\n\004Role\022\010\n\004User\020\000\022\r\n\tDevelo"
      "per\020\001\022\t\n\005Admin\020\002b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 184);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ClientData.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_ClientData_2eproto
namespace ClientData {
const ::google::protobuf::EnumDescriptor* Client_Role_descriptor() {
  protobuf_ClientData_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_ClientData_2eproto::file_level_enum_descriptors[0];
}
bool Client_Role_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Client_Role Client::User;
const Client_Role Client::Developer;
const Client_Role Client::Admin;
const Client_Role Client::Role_MIN;
const Client_Role Client::Role_MAX;
const int Client::Role_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void Client::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Client::kFirstNameFieldNumber;
const int Client::kLastNameFieldNumber;
const int Client::kAgeFieldNumber;
const int Client::kRoleFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Client::Client()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_ClientData_2eproto::InitDefaultsClient();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:ClientData.Client)
}
Client::Client(const Client& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  first_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.first_name().size() > 0) {
    first_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.first_name_);
  }
  last_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.last_name().size() > 0) {
    last_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.last_name_);
  }
  ::memcpy(&age_, &from.age_,
    static_cast<size_t>(reinterpret_cast<char*>(&role_) -
    reinterpret_cast<char*>(&age_)) + sizeof(role_));
  // @@protoc_insertion_point(copy_constructor:ClientData.Client)
}

void Client::SharedCtor() {
  first_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  last_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&age_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&role_) -
      reinterpret_cast<char*>(&age_)) + sizeof(role_));
  _cached_size_ = 0;
}

Client::~Client() {
  // @@protoc_insertion_point(destructor:ClientData.Client)
  SharedDtor();
}

void Client::SharedDtor() {
  first_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  last_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Client::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Client::descriptor() {
  ::protobuf_ClientData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ClientData_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Client& Client::default_instance() {
  ::protobuf_ClientData_2eproto::InitDefaultsClient();
  return *internal_default_instance();
}

Client* Client::New(::google::protobuf::Arena* arena) const {
  Client* n = new Client;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Client::Clear() {
// @@protoc_insertion_point(message_clear_start:ClientData.Client)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  first_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  last_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&age_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&role_) -
      reinterpret_cast<char*>(&age_)) + sizeof(role_));
  _internal_metadata_.Clear();
}

bool Client::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ClientData.Client)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string first_name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_first_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->first_name().data(), static_cast<int>(this->first_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ClientData.Client.first_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string last_name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_last_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->last_name().data(), static_cast<int>(this->last_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ClientData.Client.last_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 age = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &age_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .ClientData.Client.Role role = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_role(static_cast< ::ClientData::Client_Role >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ClientData.Client)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ClientData.Client)
  return false;
#undef DO_
}

void Client::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ClientData.Client)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string first_name = 1;
  if (this->first_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->first_name().data(), static_cast<int>(this->first_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ClientData.Client.first_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->first_name(), output);
  }

  // string last_name = 2;
  if (this->last_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->last_name().data(), static_cast<int>(this->last_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ClientData.Client.last_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->last_name(), output);
  }

  // int32 age = 3;
  if (this->age() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->age(), output);
  }

  // .ClientData.Client.Role role = 4;
  if (this->role() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->role(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:ClientData.Client)
}

::google::protobuf::uint8* Client::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ClientData.Client)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string first_name = 1;
  if (this->first_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->first_name().data(), static_cast<int>(this->first_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ClientData.Client.first_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->first_name(), target);
  }

  // string last_name = 2;
  if (this->last_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->last_name().data(), static_cast<int>(this->last_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ClientData.Client.last_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->last_name(), target);
  }

  // int32 age = 3;
  if (this->age() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->age(), target);
  }

  // .ClientData.Client.Role role = 4;
  if (this->role() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->role(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ClientData.Client)
  return target;
}

size_t Client::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ClientData.Client)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string first_name = 1;
  if (this->first_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->first_name());
  }

  // string last_name = 2;
  if (this->last_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->last_name());
  }

  // int32 age = 3;
  if (this->age() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->age());
  }

  // .ClientData.Client.Role role = 4;
  if (this->role() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->role());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Client::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ClientData.Client)
  GOOGLE_DCHECK_NE(&from, this);
  const Client* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Client>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ClientData.Client)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ClientData.Client)
    MergeFrom(*source);
  }
}

void Client::MergeFrom(const Client& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ClientData.Client)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.first_name().size() > 0) {

    first_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.first_name_);
  }
  if (from.last_name().size() > 0) {

    last_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.last_name_);
  }
  if (from.age() != 0) {
    set_age(from.age());
  }
  if (from.role() != 0) {
    set_role(from.role());
  }
}

void Client::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ClientData.Client)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Client::CopyFrom(const Client& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ClientData.Client)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Client::IsInitialized() const {
  return true;
}

void Client::Swap(Client* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Client::InternalSwap(Client* other) {
  using std::swap;
  first_name_.Swap(&other->first_name_);
  last_name_.Swap(&other->last_name_);
  swap(age_, other->age_);
  swap(role_, other->role_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Client::GetMetadata() const {
  protobuf_ClientData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ClientData_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace ClientData

// @@protoc_insertion_point(global_scope)

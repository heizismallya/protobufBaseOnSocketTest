// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config.proto

#include "config.pb.h"

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
namespace config {
class VoiceConfigDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<VoiceConfig>
      _instance;
} _VoiceConfig_default_instance_;
}  // namespace config
namespace protobuf_config_2eproto {
void InitDefaultsVoiceConfigImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::config::_VoiceConfig_default_instance_;
    new (ptr) ::config::VoiceConfig();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::config::VoiceConfig::InitAsDefaultInstance();
}

void InitDefaultsVoiceConfig() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsVoiceConfigImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::VoiceConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::VoiceConfig, sample_rate_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::VoiceConfig, mic_num_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::VoiceConfig, voiceserver_address_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::VoiceConfig, wakeup_sensitivity_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::VoiceConfig, bargein_sensitivity_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::VoiceConfig, audo_outtype_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::config::VoiceConfig)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::config::_VoiceConfig_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "config.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
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
      "\n\014config.proto\022\006config\"\237\001\n\013VoiceConfig\022\023"
      "\n\013sample_rate\030\001 \001(\005\022\017\n\007mic_num\030\002 \001(\005\022\033\n\023"
      "voiceserver_address\030\003 \001(\t\022\032\n\022wakeup_sens"
      "itivity\030\004 \001(\005\022\033\n\023bargein_sensitivity\030\005 \001"
      "(\005\022\024\n\014audo_outtype\030\006 \001(\005b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 192);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "config.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_config_2eproto
namespace config {

// ===================================================================

void VoiceConfig::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VoiceConfig::kSampleRateFieldNumber;
const int VoiceConfig::kMicNumFieldNumber;
const int VoiceConfig::kVoiceserverAddressFieldNumber;
const int VoiceConfig::kWakeupSensitivityFieldNumber;
const int VoiceConfig::kBargeinSensitivityFieldNumber;
const int VoiceConfig::kAudoOuttypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VoiceConfig::VoiceConfig()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_config_2eproto::InitDefaultsVoiceConfig();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:config.VoiceConfig)
}
VoiceConfig::VoiceConfig(const VoiceConfig& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  voiceserver_address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.voiceserver_address().size() > 0) {
    voiceserver_address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.voiceserver_address_);
  }
  ::memcpy(&sample_rate_, &from.sample_rate_,
    static_cast<size_t>(reinterpret_cast<char*>(&audo_outtype_) -
    reinterpret_cast<char*>(&sample_rate_)) + sizeof(audo_outtype_));
  // @@protoc_insertion_point(copy_constructor:config.VoiceConfig)
}

void VoiceConfig::SharedCtor() {
  voiceserver_address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&sample_rate_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&audo_outtype_) -
      reinterpret_cast<char*>(&sample_rate_)) + sizeof(audo_outtype_));
  _cached_size_ = 0;
}

VoiceConfig::~VoiceConfig() {
  // @@protoc_insertion_point(destructor:config.VoiceConfig)
  SharedDtor();
}

void VoiceConfig::SharedDtor() {
  voiceserver_address_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void VoiceConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VoiceConfig::descriptor() {
  ::protobuf_config_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_config_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const VoiceConfig& VoiceConfig::default_instance() {
  ::protobuf_config_2eproto::InitDefaultsVoiceConfig();
  return *internal_default_instance();
}

VoiceConfig* VoiceConfig::New(::google::protobuf::Arena* arena) const {
  VoiceConfig* n = new VoiceConfig;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VoiceConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:config.VoiceConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  voiceserver_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&sample_rate_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&audo_outtype_) -
      reinterpret_cast<char*>(&sample_rate_)) + sizeof(audo_outtype_));
  _internal_metadata_.Clear();
}

bool VoiceConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:config.VoiceConfig)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 sample_rate = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &sample_rate_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 mic_num = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &mic_num_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string voiceserver_address = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_voiceserver_address()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->voiceserver_address().data(), static_cast<int>(this->voiceserver_address().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "config.VoiceConfig.voiceserver_address"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 wakeup_sensitivity = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &wakeup_sensitivity_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 bargein_sensitivity = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &bargein_sensitivity_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 audo_outtype = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &audo_outtype_)));
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
  // @@protoc_insertion_point(parse_success:config.VoiceConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:config.VoiceConfig)
  return false;
#undef DO_
}

void VoiceConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:config.VoiceConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 sample_rate = 1;
  if (this->sample_rate() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->sample_rate(), output);
  }

  // int32 mic_num = 2;
  if (this->mic_num() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->mic_num(), output);
  }

  // string voiceserver_address = 3;
  if (this->voiceserver_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->voiceserver_address().data(), static_cast<int>(this->voiceserver_address().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "config.VoiceConfig.voiceserver_address");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->voiceserver_address(), output);
  }

  // int32 wakeup_sensitivity = 4;
  if (this->wakeup_sensitivity() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->wakeup_sensitivity(), output);
  }

  // int32 bargein_sensitivity = 5;
  if (this->bargein_sensitivity() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->bargein_sensitivity(), output);
  }

  // int32 audo_outtype = 6;
  if (this->audo_outtype() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->audo_outtype(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:config.VoiceConfig)
}

::google::protobuf::uint8* VoiceConfig::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:config.VoiceConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 sample_rate = 1;
  if (this->sample_rate() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->sample_rate(), target);
  }

  // int32 mic_num = 2;
  if (this->mic_num() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->mic_num(), target);
  }

  // string voiceserver_address = 3;
  if (this->voiceserver_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->voiceserver_address().data(), static_cast<int>(this->voiceserver_address().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "config.VoiceConfig.voiceserver_address");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->voiceserver_address(), target);
  }

  // int32 wakeup_sensitivity = 4;
  if (this->wakeup_sensitivity() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->wakeup_sensitivity(), target);
  }

  // int32 bargein_sensitivity = 5;
  if (this->bargein_sensitivity() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->bargein_sensitivity(), target);
  }

  // int32 audo_outtype = 6;
  if (this->audo_outtype() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->audo_outtype(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:config.VoiceConfig)
  return target;
}

size_t VoiceConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:config.VoiceConfig)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string voiceserver_address = 3;
  if (this->voiceserver_address().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->voiceserver_address());
  }

  // int32 sample_rate = 1;
  if (this->sample_rate() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->sample_rate());
  }

  // int32 mic_num = 2;
  if (this->mic_num() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->mic_num());
  }

  // int32 wakeup_sensitivity = 4;
  if (this->wakeup_sensitivity() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->wakeup_sensitivity());
  }

  // int32 bargein_sensitivity = 5;
  if (this->bargein_sensitivity() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->bargein_sensitivity());
  }

  // int32 audo_outtype = 6;
  if (this->audo_outtype() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->audo_outtype());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VoiceConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:config.VoiceConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const VoiceConfig* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VoiceConfig>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:config.VoiceConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:config.VoiceConfig)
    MergeFrom(*source);
  }
}

void VoiceConfig::MergeFrom(const VoiceConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:config.VoiceConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.voiceserver_address().size() > 0) {

    voiceserver_address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.voiceserver_address_);
  }
  if (from.sample_rate() != 0) {
    set_sample_rate(from.sample_rate());
  }
  if (from.mic_num() != 0) {
    set_mic_num(from.mic_num());
  }
  if (from.wakeup_sensitivity() != 0) {
    set_wakeup_sensitivity(from.wakeup_sensitivity());
  }
  if (from.bargein_sensitivity() != 0) {
    set_bargein_sensitivity(from.bargein_sensitivity());
  }
  if (from.audo_outtype() != 0) {
    set_audo_outtype(from.audo_outtype());
  }
}

void VoiceConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:config.VoiceConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VoiceConfig::CopyFrom(const VoiceConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:config.VoiceConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VoiceConfig::IsInitialized() const {
  return true;
}

void VoiceConfig::Swap(VoiceConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VoiceConfig::InternalSwap(VoiceConfig* other) {
  using std::swap;
  voiceserver_address_.Swap(&other->voiceserver_address_);
  swap(sample_rate_, other->sample_rate_);
  swap(mic_num_, other->mic_num_);
  swap(wakeup_sensitivity_, other->wakeup_sensitivity_);
  swap(bargein_sensitivity_, other->bargein_sensitivity_);
  swap(audo_outtype_, other->audo_outtype_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VoiceConfig::GetMetadata() const {
  protobuf_config_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_config_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace config

// @@protoc_insertion_point(global_scope)
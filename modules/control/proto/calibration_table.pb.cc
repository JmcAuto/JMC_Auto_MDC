// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/control/proto/calibration_table.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "modules/control/proto/calibration_table.pb.h"

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
// @@protoc_insertion_point(includes)

namespace jmc_auto {
namespace control {
namespace calibrationtable {
class ControlCalibrationTableDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ControlCalibrationTable> {
} _ControlCalibrationTable_default_instance_;
class ControlCalibrationInfoDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ControlCalibrationInfo> {
} _ControlCalibrationInfo_default_instance_;

namespace protobuf_modules_2fcontrol_2fproto_2fcalibration_5ftable_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControlCalibrationTable, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControlCalibrationTable, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControlCalibrationTable, calibration_),
  ~0u,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControlCalibrationInfo, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControlCalibrationInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControlCalibrationInfo, speed_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControlCalibrationInfo, acceleration_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControlCalibrationInfo, command_),
  0,
  1,
  2,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 6, sizeof(ControlCalibrationTable)},
  { 7, 15, sizeof(ControlCalibrationInfo)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_ControlCalibrationTable_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_ControlCalibrationInfo_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "modules/control/proto/calibration_table.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace

void TableStruct::Shutdown() {
  _ControlCalibrationTable_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _ControlCalibrationInfo_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _ControlCalibrationTable_default_instance_.DefaultConstruct();
  _ControlCalibrationInfo_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n-modules/control/proto/calibration_tabl"
      "e.proto\022!jmc_auto.control.calibrationtab"
      "le\"i\n\027ControlCalibrationTable\022N\n\013calibra"
      "tion\030\001 \003(\01329.jmc_auto.control.calibratio"
      "ntable.ControlCalibrationInfo\"N\n\026Control"
      "CalibrationInfo\022\r\n\005speed\030\001 \001(\001\022\024\n\014accele"
      "ration\030\002 \001(\001\022\017\n\007command\030\003 \001(\001"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 269);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "modules/control/proto/calibration_table.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_modules_2fcontrol_2fproto_2fcalibration_5ftable_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ControlCalibrationTable::kCalibrationFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ControlCalibrationTable::ControlCalibrationTable()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_modules_2fcontrol_2fproto_2fcalibration_5ftable_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:jmc_auto.control.calibrationtable.ControlCalibrationTable)
}
ControlCalibrationTable::ControlCalibrationTable(const ControlCalibrationTable& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      calibration_(from.calibration_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:jmc_auto.control.calibrationtable.ControlCalibrationTable)
}

void ControlCalibrationTable::SharedCtor() {
  _cached_size_ = 0;
}

ControlCalibrationTable::~ControlCalibrationTable() {
  // @@protoc_insertion_point(destructor:jmc_auto.control.calibrationtable.ControlCalibrationTable)
  SharedDtor();
}

void ControlCalibrationTable::SharedDtor() {
}

void ControlCalibrationTable::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ControlCalibrationTable::descriptor() {
  protobuf_modules_2fcontrol_2fproto_2fcalibration_5ftable_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fcontrol_2fproto_2fcalibration_5ftable_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ControlCalibrationTable& ControlCalibrationTable::default_instance() {
  protobuf_modules_2fcontrol_2fproto_2fcalibration_5ftable_2eproto::InitDefaults();
  return *internal_default_instance();
}

ControlCalibrationTable* ControlCalibrationTable::New(::google::protobuf::Arena* arena) const {
  ControlCalibrationTable* n = new ControlCalibrationTable;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ControlCalibrationTable::Clear() {
// @@protoc_insertion_point(message_clear_start:jmc_auto.control.calibrationtable.ControlCalibrationTable)
  calibration_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ControlCalibrationTable::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:jmc_auto.control.calibrationtable.ControlCalibrationTable)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .jmc_auto.control.calibrationtable.ControlCalibrationInfo calibration = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_calibration()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:jmc_auto.control.calibrationtable.ControlCalibrationTable)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:jmc_auto.control.calibrationtable.ControlCalibrationTable)
  return false;
#undef DO_
}

void ControlCalibrationTable::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:jmc_auto.control.calibrationtable.ControlCalibrationTable)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .jmc_auto.control.calibrationtable.ControlCalibrationInfo calibration = 1;
  for (unsigned int i = 0, n = this->calibration_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->calibration(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:jmc_auto.control.calibrationtable.ControlCalibrationTable)
}

::google::protobuf::uint8* ControlCalibrationTable::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:jmc_auto.control.calibrationtable.ControlCalibrationTable)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .jmc_auto.control.calibrationtable.ControlCalibrationInfo calibration = 1;
  for (unsigned int i = 0, n = this->calibration_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->calibration(i), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:jmc_auto.control.calibrationtable.ControlCalibrationTable)
  return target;
}

size_t ControlCalibrationTable::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:jmc_auto.control.calibrationtable.ControlCalibrationTable)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  // repeated .jmc_auto.control.calibrationtable.ControlCalibrationInfo calibration = 1;
  {
    unsigned int count = this->calibration_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->calibration(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ControlCalibrationTable::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:jmc_auto.control.calibrationtable.ControlCalibrationTable)
  GOOGLE_DCHECK_NE(&from, this);
  const ControlCalibrationTable* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ControlCalibrationTable>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:jmc_auto.control.calibrationtable.ControlCalibrationTable)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:jmc_auto.control.calibrationtable.ControlCalibrationTable)
    MergeFrom(*source);
  }
}

void ControlCalibrationTable::MergeFrom(const ControlCalibrationTable& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:jmc_auto.control.calibrationtable.ControlCalibrationTable)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  calibration_.MergeFrom(from.calibration_);
}

void ControlCalibrationTable::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:jmc_auto.control.calibrationtable.ControlCalibrationTable)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ControlCalibrationTable::CopyFrom(const ControlCalibrationTable& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:jmc_auto.control.calibrationtable.ControlCalibrationTable)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ControlCalibrationTable::IsInitialized() const {
  return true;
}

void ControlCalibrationTable::Swap(ControlCalibrationTable* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ControlCalibrationTable::InternalSwap(ControlCalibrationTable* other) {
  calibration_.InternalSwap(&other->calibration_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ControlCalibrationTable::GetMetadata() const {
  protobuf_modules_2fcontrol_2fproto_2fcalibration_5ftable_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fcontrol_2fproto_2fcalibration_5ftable_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ControlCalibrationTable

// repeated .jmc_auto.control.calibrationtable.ControlCalibrationInfo calibration = 1;
int ControlCalibrationTable::calibration_size() const {
  return calibration_.size();
}
void ControlCalibrationTable::clear_calibration() {
  calibration_.Clear();
}
const ::jmc_auto::control::calibrationtable::ControlCalibrationInfo& ControlCalibrationTable::calibration(int index) const {
  // @@protoc_insertion_point(field_get:jmc_auto.control.calibrationtable.ControlCalibrationTable.calibration)
  return calibration_.Get(index);
}
::jmc_auto::control::calibrationtable::ControlCalibrationInfo* ControlCalibrationTable::mutable_calibration(int index) {
  // @@protoc_insertion_point(field_mutable:jmc_auto.control.calibrationtable.ControlCalibrationTable.calibration)
  return calibration_.Mutable(index);
}
::jmc_auto::control::calibrationtable::ControlCalibrationInfo* ControlCalibrationTable::add_calibration() {
  // @@protoc_insertion_point(field_add:jmc_auto.control.calibrationtable.ControlCalibrationTable.calibration)
  return calibration_.Add();
}
::google::protobuf::RepeatedPtrField< ::jmc_auto::control::calibrationtable::ControlCalibrationInfo >*
ControlCalibrationTable::mutable_calibration() {
  // @@protoc_insertion_point(field_mutable_list:jmc_auto.control.calibrationtable.ControlCalibrationTable.calibration)
  return &calibration_;
}
const ::google::protobuf::RepeatedPtrField< ::jmc_auto::control::calibrationtable::ControlCalibrationInfo >&
ControlCalibrationTable::calibration() const {
  // @@protoc_insertion_point(field_list:jmc_auto.control.calibrationtable.ControlCalibrationTable.calibration)
  return calibration_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ControlCalibrationInfo::kSpeedFieldNumber;
const int ControlCalibrationInfo::kAccelerationFieldNumber;
const int ControlCalibrationInfo::kCommandFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ControlCalibrationInfo::ControlCalibrationInfo()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_modules_2fcontrol_2fproto_2fcalibration_5ftable_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:jmc_auto.control.calibrationtable.ControlCalibrationInfo)
}
ControlCalibrationInfo::ControlCalibrationInfo(const ControlCalibrationInfo& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&speed_, &from.speed_,
    reinterpret_cast<char*>(&command_) -
    reinterpret_cast<char*>(&speed_) + sizeof(command_));
  // @@protoc_insertion_point(copy_constructor:jmc_auto.control.calibrationtable.ControlCalibrationInfo)
}

void ControlCalibrationInfo::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&speed_, 0, reinterpret_cast<char*>(&command_) -
    reinterpret_cast<char*>(&speed_) + sizeof(command_));
}

ControlCalibrationInfo::~ControlCalibrationInfo() {
  // @@protoc_insertion_point(destructor:jmc_auto.control.calibrationtable.ControlCalibrationInfo)
  SharedDtor();
}

void ControlCalibrationInfo::SharedDtor() {
}

void ControlCalibrationInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ControlCalibrationInfo::descriptor() {
  protobuf_modules_2fcontrol_2fproto_2fcalibration_5ftable_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fcontrol_2fproto_2fcalibration_5ftable_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ControlCalibrationInfo& ControlCalibrationInfo::default_instance() {
  protobuf_modules_2fcontrol_2fproto_2fcalibration_5ftable_2eproto::InitDefaults();
  return *internal_default_instance();
}

ControlCalibrationInfo* ControlCalibrationInfo::New(::google::protobuf::Arena* arena) const {
  ControlCalibrationInfo* n = new ControlCalibrationInfo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ControlCalibrationInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:jmc_auto.control.calibrationtable.ControlCalibrationInfo)
  if (_has_bits_[0 / 32] & 7u) {
    ::memset(&speed_, 0, reinterpret_cast<char*>(&command_) -
      reinterpret_cast<char*>(&speed_) + sizeof(command_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ControlCalibrationInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:jmc_auto.control.calibrationtable.ControlCalibrationInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double speed = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u)) {
          set_has_speed();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &speed_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double acceleration = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u)) {
          set_has_acceleration();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &acceleration_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double command = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u)) {
          set_has_command();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &command_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:jmc_auto.control.calibrationtable.ControlCalibrationInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:jmc_auto.control.calibrationtable.ControlCalibrationInfo)
  return false;
#undef DO_
}

void ControlCalibrationInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:jmc_auto.control.calibrationtable.ControlCalibrationInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double speed = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->speed(), output);
  }

  // optional double acceleration = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->acceleration(), output);
  }

  // optional double command = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->command(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:jmc_auto.control.calibrationtable.ControlCalibrationInfo)
}

::google::protobuf::uint8* ControlCalibrationInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:jmc_auto.control.calibrationtable.ControlCalibrationInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double speed = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->speed(), target);
  }

  // optional double acceleration = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->acceleration(), target);
  }

  // optional double command = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->command(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:jmc_auto.control.calibrationtable.ControlCalibrationInfo)
  return target;
}

size_t ControlCalibrationInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:jmc_auto.control.calibrationtable.ControlCalibrationInfo)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  if (_has_bits_[0 / 32] & 7u) {
    // optional double speed = 1;
    if (has_speed()) {
      total_size += 1 + 8;
    }

    // optional double acceleration = 2;
    if (has_acceleration()) {
      total_size += 1 + 8;
    }

    // optional double command = 3;
    if (has_command()) {
      total_size += 1 + 8;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ControlCalibrationInfo::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:jmc_auto.control.calibrationtable.ControlCalibrationInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const ControlCalibrationInfo* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ControlCalibrationInfo>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:jmc_auto.control.calibrationtable.ControlCalibrationInfo)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:jmc_auto.control.calibrationtable.ControlCalibrationInfo)
    MergeFrom(*source);
  }
}

void ControlCalibrationInfo::MergeFrom(const ControlCalibrationInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:jmc_auto.control.calibrationtable.ControlCalibrationInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      speed_ = from.speed_;
    }
    if (cached_has_bits & 0x00000002u) {
      acceleration_ = from.acceleration_;
    }
    if (cached_has_bits & 0x00000004u) {
      command_ = from.command_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ControlCalibrationInfo::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:jmc_auto.control.calibrationtable.ControlCalibrationInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ControlCalibrationInfo::CopyFrom(const ControlCalibrationInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:jmc_auto.control.calibrationtable.ControlCalibrationInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ControlCalibrationInfo::IsInitialized() const {
  return true;
}

void ControlCalibrationInfo::Swap(ControlCalibrationInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ControlCalibrationInfo::InternalSwap(ControlCalibrationInfo* other) {
  std::swap(speed_, other->speed_);
  std::swap(acceleration_, other->acceleration_);
  std::swap(command_, other->command_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ControlCalibrationInfo::GetMetadata() const {
  protobuf_modules_2fcontrol_2fproto_2fcalibration_5ftable_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fcontrol_2fproto_2fcalibration_5ftable_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ControlCalibrationInfo

// optional double speed = 1;
bool ControlCalibrationInfo::has_speed() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ControlCalibrationInfo::set_has_speed() {
  _has_bits_[0] |= 0x00000001u;
}
void ControlCalibrationInfo::clear_has_speed() {
  _has_bits_[0] &= ~0x00000001u;
}
void ControlCalibrationInfo::clear_speed() {
  speed_ = 0;
  clear_has_speed();
}
double ControlCalibrationInfo::speed() const {
  // @@protoc_insertion_point(field_get:jmc_auto.control.calibrationtable.ControlCalibrationInfo.speed)
  return speed_;
}
void ControlCalibrationInfo::set_speed(double value) {
  set_has_speed();
  speed_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.control.calibrationtable.ControlCalibrationInfo.speed)
}

// optional double acceleration = 2;
bool ControlCalibrationInfo::has_acceleration() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void ControlCalibrationInfo::set_has_acceleration() {
  _has_bits_[0] |= 0x00000002u;
}
void ControlCalibrationInfo::clear_has_acceleration() {
  _has_bits_[0] &= ~0x00000002u;
}
void ControlCalibrationInfo::clear_acceleration() {
  acceleration_ = 0;
  clear_has_acceleration();
}
double ControlCalibrationInfo::acceleration() const {
  // @@protoc_insertion_point(field_get:jmc_auto.control.calibrationtable.ControlCalibrationInfo.acceleration)
  return acceleration_;
}
void ControlCalibrationInfo::set_acceleration(double value) {
  set_has_acceleration();
  acceleration_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.control.calibrationtable.ControlCalibrationInfo.acceleration)
}

// optional double command = 3;
bool ControlCalibrationInfo::has_command() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void ControlCalibrationInfo::set_has_command() {
  _has_bits_[0] |= 0x00000004u;
}
void ControlCalibrationInfo::clear_has_command() {
  _has_bits_[0] &= ~0x00000004u;
}
void ControlCalibrationInfo::clear_command() {
  command_ = 0;
  clear_has_command();
}
double ControlCalibrationInfo::command() const {
  // @@protoc_insertion_point(field_get:jmc_auto.control.calibrationtable.ControlCalibrationInfo.command)
  return command_;
}
void ControlCalibrationInfo::set_command(double value) {
  set_has_command();
  command_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.control.calibrationtable.ControlCalibrationInfo.command)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace calibrationtable
}  // namespace control
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)

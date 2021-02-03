// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/planning/proto/lane_change_decider_config.proto

#ifndef PROTOBUF_modules_2fplanning_2fproto_2flane_5fchange_5fdecider_5fconfig_2eproto__INCLUDED
#define PROTOBUF_modules_2fplanning_2fproto_2flane_5fchange_5fdecider_5fconfig_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace jmc_auto {
namespace planning {
class LaneChangeDeciderConfig;
class LaneChangeDeciderConfigDefaultTypeInternal;
extern LaneChangeDeciderConfigDefaultTypeInternal _LaneChangeDeciderConfig_default_instance_;
}  // namespace planning
}  // namespace jmc_auto

namespace jmc_auto {
namespace planning {

namespace protobuf_modules_2fplanning_2fproto_2flane_5fchange_5fdecider_5fconfig_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_modules_2fplanning_2fproto_2flane_5fchange_5fdecider_5fconfig_2eproto

// ===================================================================

class LaneChangeDeciderConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jmc_auto.planning.LaneChangeDeciderConfig) */ {
 public:
  LaneChangeDeciderConfig();
  virtual ~LaneChangeDeciderConfig();

  LaneChangeDeciderConfig(const LaneChangeDeciderConfig& from);

  inline LaneChangeDeciderConfig& operator=(const LaneChangeDeciderConfig& from) {
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
  static const LaneChangeDeciderConfig& default_instance();

  static inline const LaneChangeDeciderConfig* internal_default_instance() {
    return reinterpret_cast<const LaneChangeDeciderConfig*>(
               &_LaneChangeDeciderConfig_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(LaneChangeDeciderConfig* other);

  // implements Message ----------------------------------------------

  inline LaneChangeDeciderConfig* New() const PROTOBUF_FINAL { return New(NULL); }

  LaneChangeDeciderConfig* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const LaneChangeDeciderConfig& from);
  void MergeFrom(const LaneChangeDeciderConfig& from);
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
  void InternalSwap(LaneChangeDeciderConfig* other);
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

  // accessors -------------------------------------------------------

  // optional bool enable_lane_change_urgency_check = 1;
  bool has_enable_lane_change_urgency_check() const;
  void clear_enable_lane_change_urgency_check();
  static const int kEnableLaneChangeUrgencyCheckFieldNumber = 1;
  bool enable_lane_change_urgency_check() const;
  void set_enable_lane_change_urgency_check(bool value);

  // optional bool enable_prioritize_change_lane = 2 [default = false];
  bool has_enable_prioritize_change_lane() const;
  void clear_enable_prioritize_change_lane();
  static const int kEnablePrioritizeChangeLaneFieldNumber = 2;
  bool enable_prioritize_change_lane() const;
  void set_enable_prioritize_change_lane(bool value);

  // optional bool enable_remove_change_lane = 3 [default = false];
  bool has_enable_remove_change_lane() const;
  void clear_enable_remove_change_lane();
  static const int kEnableRemoveChangeLaneFieldNumber = 3;
  bool enable_remove_change_lane() const;
  void set_enable_remove_change_lane(bool value);

  // optional bool reckless_change_lane = 4 [default = false];
  bool has_reckless_change_lane() const;
  void clear_reckless_change_lane();
  static const int kRecklessChangeLaneFieldNumber = 4;
  bool reckless_change_lane() const;
  void set_reckless_change_lane(bool value);

  // optional double change_lane_success_freeze_time = 5 [default = 1.5];
  bool has_change_lane_success_freeze_time() const;
  void clear_change_lane_success_freeze_time();
  static const int kChangeLaneSuccessFreezeTimeFieldNumber = 5;
  double change_lane_success_freeze_time() const;
  void set_change_lane_success_freeze_time(double value);

  // optional double change_lane_fail_freeze_time = 6 [default = 1];
  bool has_change_lane_fail_freeze_time() const;
  void clear_change_lane_fail_freeze_time();
  static const int kChangeLaneFailFreezeTimeFieldNumber = 6;
  double change_lane_fail_freeze_time() const;
  void set_change_lane_fail_freeze_time(double value);

  // @@protoc_insertion_point(class_scope:jmc_auto.planning.LaneChangeDeciderConfig)
 private:
  void set_has_enable_lane_change_urgency_check();
  void clear_has_enable_lane_change_urgency_check();
  void set_has_enable_prioritize_change_lane();
  void clear_has_enable_prioritize_change_lane();
  void set_has_enable_remove_change_lane();
  void clear_has_enable_remove_change_lane();
  void set_has_reckless_change_lane();
  void clear_has_reckless_change_lane();
  void set_has_change_lane_success_freeze_time();
  void clear_has_change_lane_success_freeze_time();
  void set_has_change_lane_fail_freeze_time();
  void clear_has_change_lane_fail_freeze_time();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  bool enable_lane_change_urgency_check_;
  bool enable_prioritize_change_lane_;
  bool enable_remove_change_lane_;
  bool reckless_change_lane_;
  double change_lane_success_freeze_time_;
  double change_lane_fail_freeze_time_;
  friend struct protobuf_modules_2fplanning_2fproto_2flane_5fchange_5fdecider_5fconfig_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// LaneChangeDeciderConfig

// optional bool enable_lane_change_urgency_check = 1;
inline bool LaneChangeDeciderConfig::has_enable_lane_change_urgency_check() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LaneChangeDeciderConfig::set_has_enable_lane_change_urgency_check() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LaneChangeDeciderConfig::clear_has_enable_lane_change_urgency_check() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LaneChangeDeciderConfig::clear_enable_lane_change_urgency_check() {
  enable_lane_change_urgency_check_ = false;
  clear_has_enable_lane_change_urgency_check();
}
inline bool LaneChangeDeciderConfig::enable_lane_change_urgency_check() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.LaneChangeDeciderConfig.enable_lane_change_urgency_check)
  return enable_lane_change_urgency_check_;
}
inline void LaneChangeDeciderConfig::set_enable_lane_change_urgency_check(bool value) {
  set_has_enable_lane_change_urgency_check();
  enable_lane_change_urgency_check_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.LaneChangeDeciderConfig.enable_lane_change_urgency_check)
}

// optional bool enable_prioritize_change_lane = 2 [default = false];
inline bool LaneChangeDeciderConfig::has_enable_prioritize_change_lane() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LaneChangeDeciderConfig::set_has_enable_prioritize_change_lane() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LaneChangeDeciderConfig::clear_has_enable_prioritize_change_lane() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LaneChangeDeciderConfig::clear_enable_prioritize_change_lane() {
  enable_prioritize_change_lane_ = false;
  clear_has_enable_prioritize_change_lane();
}
inline bool LaneChangeDeciderConfig::enable_prioritize_change_lane() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.LaneChangeDeciderConfig.enable_prioritize_change_lane)
  return enable_prioritize_change_lane_;
}
inline void LaneChangeDeciderConfig::set_enable_prioritize_change_lane(bool value) {
  set_has_enable_prioritize_change_lane();
  enable_prioritize_change_lane_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.LaneChangeDeciderConfig.enable_prioritize_change_lane)
}

// optional bool enable_remove_change_lane = 3 [default = false];
inline bool LaneChangeDeciderConfig::has_enable_remove_change_lane() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LaneChangeDeciderConfig::set_has_enable_remove_change_lane() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LaneChangeDeciderConfig::clear_has_enable_remove_change_lane() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LaneChangeDeciderConfig::clear_enable_remove_change_lane() {
  enable_remove_change_lane_ = false;
  clear_has_enable_remove_change_lane();
}
inline bool LaneChangeDeciderConfig::enable_remove_change_lane() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.LaneChangeDeciderConfig.enable_remove_change_lane)
  return enable_remove_change_lane_;
}
inline void LaneChangeDeciderConfig::set_enable_remove_change_lane(bool value) {
  set_has_enable_remove_change_lane();
  enable_remove_change_lane_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.LaneChangeDeciderConfig.enable_remove_change_lane)
}

// optional bool reckless_change_lane = 4 [default = false];
inline bool LaneChangeDeciderConfig::has_reckless_change_lane() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LaneChangeDeciderConfig::set_has_reckless_change_lane() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LaneChangeDeciderConfig::clear_has_reckless_change_lane() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LaneChangeDeciderConfig::clear_reckless_change_lane() {
  reckless_change_lane_ = false;
  clear_has_reckless_change_lane();
}
inline bool LaneChangeDeciderConfig::reckless_change_lane() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.LaneChangeDeciderConfig.reckless_change_lane)
  return reckless_change_lane_;
}
inline void LaneChangeDeciderConfig::set_reckless_change_lane(bool value) {
  set_has_reckless_change_lane();
  reckless_change_lane_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.LaneChangeDeciderConfig.reckless_change_lane)
}

// optional double change_lane_success_freeze_time = 5 [default = 1.5];
inline bool LaneChangeDeciderConfig::has_change_lane_success_freeze_time() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LaneChangeDeciderConfig::set_has_change_lane_success_freeze_time() {
  _has_bits_[0] |= 0x00000010u;
}
inline void LaneChangeDeciderConfig::clear_has_change_lane_success_freeze_time() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void LaneChangeDeciderConfig::clear_change_lane_success_freeze_time() {
  change_lane_success_freeze_time_ = 1.5;
  clear_has_change_lane_success_freeze_time();
}
inline double LaneChangeDeciderConfig::change_lane_success_freeze_time() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.LaneChangeDeciderConfig.change_lane_success_freeze_time)
  return change_lane_success_freeze_time_;
}
inline void LaneChangeDeciderConfig::set_change_lane_success_freeze_time(double value) {
  set_has_change_lane_success_freeze_time();
  change_lane_success_freeze_time_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.LaneChangeDeciderConfig.change_lane_success_freeze_time)
}

// optional double change_lane_fail_freeze_time = 6 [default = 1];
inline bool LaneChangeDeciderConfig::has_change_lane_fail_freeze_time() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void LaneChangeDeciderConfig::set_has_change_lane_fail_freeze_time() {
  _has_bits_[0] |= 0x00000020u;
}
inline void LaneChangeDeciderConfig::clear_has_change_lane_fail_freeze_time() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void LaneChangeDeciderConfig::clear_change_lane_fail_freeze_time() {
  change_lane_fail_freeze_time_ = 1;
  clear_has_change_lane_fail_freeze_time();
}
inline double LaneChangeDeciderConfig::change_lane_fail_freeze_time() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.LaneChangeDeciderConfig.change_lane_fail_freeze_time)
  return change_lane_fail_freeze_time_;
}
inline void LaneChangeDeciderConfig::set_change_lane_fail_freeze_time(double value) {
  set_has_change_lane_fail_freeze_time();
  change_lane_fail_freeze_time_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.LaneChangeDeciderConfig.change_lane_fail_freeze_time)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace planning
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2fplanning_2fproto_2flane_5fchange_5fdecider_5fconfig_2eproto__INCLUDED
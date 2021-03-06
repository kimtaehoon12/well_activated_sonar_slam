// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SensorDvl.proto

#ifndef PROTOBUF_SensorDvl_2eproto__INCLUDED
#define PROTOBUF_SensorDvl_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "vector3d.pb.h"
// @@protoc_insertion_point(includes)

namespace sensor_msgs {
namespace msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_SensorDvl_2eproto();
void protobuf_AssignDesc_SensorDvl_2eproto();
void protobuf_ShutdownFile_SensorDvl_2eproto();

class Dvl;

// ===================================================================

class Dvl : public ::google::protobuf::Message {
 public:
  Dvl();
  virtual ~Dvl();

  Dvl(const Dvl& from);

  inline Dvl& operator=(const Dvl& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Dvl& default_instance();

  void Swap(Dvl* other);

  // implements Message ----------------------------------------------

  Dvl* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Dvl& from);
  void MergeFrom(const Dvl& from);
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
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .gazebo.msgs.Vector3d linear_velocity = 1;
  inline bool has_linear_velocity() const;
  inline void clear_linear_velocity();
  static const int kLinearVelocityFieldNumber = 1;
  inline const ::gazebo::msgs::Vector3d& linear_velocity() const;
  inline ::gazebo::msgs::Vector3d* mutable_linear_velocity();
  inline ::gazebo::msgs::Vector3d* release_linear_velocity();
  inline void set_allocated_linear_velocity(::gazebo::msgs::Vector3d* linear_velocity);

  // repeated float linear_velocity_covariance = 2 [packed = true];
  inline int linear_velocity_covariance_size() const;
  inline void clear_linear_velocity_covariance();
  static const int kLinearVelocityCovarianceFieldNumber = 2;
  inline float linear_velocity_covariance(int index) const;
  inline void set_linear_velocity_covariance(int index, float value);
  inline void add_linear_velocity_covariance(float value);
  inline const ::google::protobuf::RepeatedField< float >&
      linear_velocity_covariance() const;
  inline ::google::protobuf::RepeatedField< float >*
      mutable_linear_velocity_covariance();

  // @@protoc_insertion_point(class_scope:sensor_msgs.msgs.Dvl)
 private:
  inline void set_has_linear_velocity();
  inline void clear_has_linear_velocity();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::gazebo::msgs::Vector3d* linear_velocity_;
  ::google::protobuf::RepeatedField< float > linear_velocity_covariance_;
  mutable int _linear_velocity_covariance_cached_byte_size_;
  friend void  protobuf_AddDesc_SensorDvl_2eproto();
  friend void protobuf_AssignDesc_SensorDvl_2eproto();
  friend void protobuf_ShutdownFile_SensorDvl_2eproto();

  void InitAsDefaultInstance();
  static Dvl* default_instance_;
};
// ===================================================================


// ===================================================================

// Dvl

// required .gazebo.msgs.Vector3d linear_velocity = 1;
inline bool Dvl::has_linear_velocity() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Dvl::set_has_linear_velocity() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Dvl::clear_has_linear_velocity() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Dvl::clear_linear_velocity() {
  if (linear_velocity_ != NULL) linear_velocity_->::gazebo::msgs::Vector3d::Clear();
  clear_has_linear_velocity();
}
inline const ::gazebo::msgs::Vector3d& Dvl::linear_velocity() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.Dvl.linear_velocity)
  return linear_velocity_ != NULL ? *linear_velocity_ : *default_instance_->linear_velocity_;
}
inline ::gazebo::msgs::Vector3d* Dvl::mutable_linear_velocity() {
  set_has_linear_velocity();
  if (linear_velocity_ == NULL) linear_velocity_ = new ::gazebo::msgs::Vector3d;
  // @@protoc_insertion_point(field_mutable:sensor_msgs.msgs.Dvl.linear_velocity)
  return linear_velocity_;
}
inline ::gazebo::msgs::Vector3d* Dvl::release_linear_velocity() {
  clear_has_linear_velocity();
  ::gazebo::msgs::Vector3d* temp = linear_velocity_;
  linear_velocity_ = NULL;
  return temp;
}
inline void Dvl::set_allocated_linear_velocity(::gazebo::msgs::Vector3d* linear_velocity) {
  delete linear_velocity_;
  linear_velocity_ = linear_velocity;
  if (linear_velocity) {
    set_has_linear_velocity();
  } else {
    clear_has_linear_velocity();
  }
  // @@protoc_insertion_point(field_set_allocated:sensor_msgs.msgs.Dvl.linear_velocity)
}

// repeated float linear_velocity_covariance = 2 [packed = true];
inline int Dvl::linear_velocity_covariance_size() const {
  return linear_velocity_covariance_.size();
}
inline void Dvl::clear_linear_velocity_covariance() {
  linear_velocity_covariance_.Clear();
}
inline float Dvl::linear_velocity_covariance(int index) const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.Dvl.linear_velocity_covariance)
  return linear_velocity_covariance_.Get(index);
}
inline void Dvl::set_linear_velocity_covariance(int index, float value) {
  linear_velocity_covariance_.Set(index, value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.Dvl.linear_velocity_covariance)
}
inline void Dvl::add_linear_velocity_covariance(float value) {
  linear_velocity_covariance_.Add(value);
  // @@protoc_insertion_point(field_add:sensor_msgs.msgs.Dvl.linear_velocity_covariance)
}
inline const ::google::protobuf::RepeatedField< float >&
Dvl::linear_velocity_covariance() const {
  // @@protoc_insertion_point(field_list:sensor_msgs.msgs.Dvl.linear_velocity_covariance)
  return linear_velocity_covariance_;
}
inline ::google::protobuf::RepeatedField< float >*
Dvl::mutable_linear_velocity_covariance() {
  // @@protoc_insertion_point(field_mutable_list:sensor_msgs.msgs.Dvl.linear_velocity_covariance)
  return &linear_velocity_covariance_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace sensor_msgs

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SensorDvl_2eproto__INCLUDED

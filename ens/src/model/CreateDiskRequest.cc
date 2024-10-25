/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/ens/model/CreateDiskRequest.h>

using AlibabaCloud::Ens::Model::CreateDiskRequest;

CreateDiskRequest::CreateDiskRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateDisk") {
  setMethod(HttpRequest::Method::Post);
}

CreateDiskRequest::~CreateDiskRequest() {}

std::string CreateDiskRequest::getDiskName() const {
  return diskName_;
}

void CreateDiskRequest::setDiskName(const std::string &diskName) {
  diskName_ = diskName;
  setParameter(std::string("DiskName"), diskName);
}

std::string CreateDiskRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void CreateDiskRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::vector<CreateDiskRequest::Tag> CreateDiskRequest::getTag() const {
  return tag_;
}

void CreateDiskRequest::setTag(const std::vector<CreateDiskRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateDiskRequest::getSize() const {
  return size_;
}

void CreateDiskRequest::setSize(const std::string &size) {
  size_ = size;
  setParameter(std::string("Size"), size);
}

std::string CreateDiskRequest::getSnapshotId() const {
  return snapshotId_;
}

void CreateDiskRequest::setSnapshotId(const std::string &snapshotId) {
  snapshotId_ = snapshotId;
  setParameter(std::string("SnapshotId"), snapshotId);
}

std::string CreateDiskRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void CreateDiskRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

bool CreateDiskRequest::getEncrypted() const {
  return encrypted_;
}

void CreateDiskRequest::setEncrypted(bool encrypted) {
  encrypted_ = encrypted;
  setParameter(std::string("Encrypted"), encrypted ? "true" : "false");
}

std::string CreateDiskRequest::getCategory() const {
  return category_;
}

void CreateDiskRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

std::string CreateDiskRequest::getKMSKeyId() const {
  return kMSKeyId_;
}

void CreateDiskRequest::setKMSKeyId(const std::string &kMSKeyId) {
  kMSKeyId_ = kMSKeyId;
  setParameter(std::string("KMSKeyId"), kMSKeyId);
}


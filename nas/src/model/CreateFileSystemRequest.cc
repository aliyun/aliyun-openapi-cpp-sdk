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

#include <alibabacloud/nas/model/CreateFileSystemRequest.h>

using AlibabaCloud::NAS::Model::CreateFileSystemRequest;

CreateFileSystemRequest::CreateFileSystemRequest()
    : RpcServiceRequest("nas", "2017-06-26", "CreateFileSystem") {
  setMethod(HttpRequest::Method::Post);
}

CreateFileSystemRequest::~CreateFileSystemRequest() {}

std::string CreateFileSystemRequest::getSnapshotId() const {
  return snapshotId_;
}

void CreateFileSystemRequest::setSnapshotId(const std::string &snapshotId) {
  snapshotId_ = snapshotId;
  setParameter(std::string("SnapshotId"), snapshotId);
}

std::string CreateFileSystemRequest::getClientToken() const {
  return clientToken_;
}

void CreateFileSystemRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateFileSystemRequest::getDescription() const {
  return description_;
}

void CreateFileSystemRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateFileSystemRequest::getFileSystemType() const {
  return fileSystemType_;
}

void CreateFileSystemRequest::setFileSystemType(const std::string &fileSystemType) {
  fileSystemType_ = fileSystemType;
  setParameter(std::string("FileSystemType"), fileSystemType);
}

std::string CreateFileSystemRequest::getStorageType() const {
  return storageType_;
}

void CreateFileSystemRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

long CreateFileSystemRequest::getCapacity() const {
  return capacity_;
}

void CreateFileSystemRequest::setCapacity(long capacity) {
  capacity_ = capacity;
  setParameter(std::string("Capacity"), std::to_string(capacity));
}

int CreateFileSystemRequest::getEncryptType() const {
  return encryptType_;
}

void CreateFileSystemRequest::setEncryptType(int encryptType) {
  encryptType_ = encryptType;
  setParameter(std::string("EncryptType"), std::to_string(encryptType));
}

int CreateFileSystemRequest::getDuration() const {
  return duration_;
}

void CreateFileSystemRequest::setDuration(int duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string CreateFileSystemRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateFileSystemRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

bool CreateFileSystemRequest::getDryRun() const {
  return dryRun_;
}

void CreateFileSystemRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

long CreateFileSystemRequest::getBandwidth() const {
  return bandwidth_;
}

void CreateFileSystemRequest::setBandwidth(long bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string CreateFileSystemRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateFileSystemRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateFileSystemRequest::getVpcId() const {
  return vpcId_;
}

void CreateFileSystemRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateFileSystemRequest::getZoneId() const {
  return zoneId_;
}

void CreateFileSystemRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateFileSystemRequest::getProtocolType() const {
  return protocolType_;
}

void CreateFileSystemRequest::setProtocolType(const std::string &protocolType) {
  protocolType_ = protocolType;
  setParameter(std::string("ProtocolType"), protocolType);
}

std::string CreateFileSystemRequest::getChargeType() const {
  return chargeType_;
}

void CreateFileSystemRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

std::string CreateFileSystemRequest::getKmsKeyId() const {
  return kmsKeyId_;
}

void CreateFileSystemRequest::setKmsKeyId(const std::string &kmsKeyId) {
  kmsKeyId_ = kmsKeyId;
  setParameter(std::string("KmsKeyId"), kmsKeyId);
}


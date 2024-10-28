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

#include <alibabacloud/nas/model/CreateAccessPointRequest.h>

using AlibabaCloud::NAS::Model::CreateAccessPointRequest;

CreateAccessPointRequest::CreateAccessPointRequest()
    : RpcServiceRequest("nas", "2017-06-26", "CreateAccessPoint") {
  setMethod(HttpRequest::Method::Post);
}

CreateAccessPointRequest::~CreateAccessPointRequest() {}

std::string CreateAccessPointRequest::getVswId() const {
  return vswId_;
}

void CreateAccessPointRequest::setVswId(const std::string &vswId) {
  vswId_ = vswId;
  setParameter(std::string("VswId"), vswId);
}

std::string CreateAccessPointRequest::getAccessPointName() const {
  return accessPointName_;
}

void CreateAccessPointRequest::setAccessPointName(const std::string &accessPointName) {
  accessPointName_ = accessPointName;
  setParameter(std::string("AccessPointName"), accessPointName);
}

int CreateAccessPointRequest::getPosixGroupId() const {
  return posixGroupId_;
}

void CreateAccessPointRequest::setPosixGroupId(int posixGroupId) {
  posixGroupId_ = posixGroupId;
  setParameter(std::string("PosixGroupId"), std::to_string(posixGroupId));
}

std::string CreateAccessPointRequest::getPosixSecondaryGroupIds() const {
  return posixSecondaryGroupIds_;
}

void CreateAccessPointRequest::setPosixSecondaryGroupIds(const std::string &posixSecondaryGroupIds) {
  posixSecondaryGroupIds_ = posixSecondaryGroupIds;
  setParameter(std::string("PosixSecondaryGroupIds"), posixSecondaryGroupIds);
}

std::string CreateAccessPointRequest::getFileSystemId() const {
  return fileSystemId_;
}

void CreateAccessPointRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

int CreateAccessPointRequest::getOwnerGroupId() const {
  return ownerGroupId_;
}

void CreateAccessPointRequest::setOwnerGroupId(int ownerGroupId) {
  ownerGroupId_ = ownerGroupId;
  setParameter(std::string("OwnerGroupId"), std::to_string(ownerGroupId));
}

bool CreateAccessPointRequest::getEnabledRam() const {
  return enabledRam_;
}

void CreateAccessPointRequest::setEnabledRam(bool enabledRam) {
  enabledRam_ = enabledRam;
  setParameter(std::string("EnabledRam"), enabledRam ? "true" : "false");
}

int CreateAccessPointRequest::getOwnerUserId() const {
  return ownerUserId_;
}

void CreateAccessPointRequest::setOwnerUserId(int ownerUserId) {
  ownerUserId_ = ownerUserId;
  setParameter(std::string("OwnerUserId"), std::to_string(ownerUserId));
}

std::string CreateAccessPointRequest::getPermission() const {
  return permission_;
}

void CreateAccessPointRequest::setPermission(const std::string &permission) {
  permission_ = permission;
  setParameter(std::string("Permission"), permission);
}

std::string CreateAccessPointRequest::getVpcId() const {
  return vpcId_;
}

void CreateAccessPointRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateAccessPointRequest::getProtocolType() const {
  return protocolType_;
}

void CreateAccessPointRequest::setProtocolType(const std::string &protocolType) {
  protocolType_ = protocolType;
  setParameter(std::string("ProtocolType"), protocolType);
}

std::string CreateAccessPointRequest::getRootDirectory() const {
  return rootDirectory_;
}

void CreateAccessPointRequest::setRootDirectory(const std::string &rootDirectory) {
  rootDirectory_ = rootDirectory;
  setParameter(std::string("RootDirectory"), rootDirectory);
}

std::string CreateAccessPointRequest::getAccessGroup() const {
  return accessGroup_;
}

void CreateAccessPointRequest::setAccessGroup(const std::string &accessGroup) {
  accessGroup_ = accessGroup;
  setParameter(std::string("AccessGroup"), accessGroup);
}

int CreateAccessPointRequest::getPosixUserId() const {
  return posixUserId_;
}

void CreateAccessPointRequest::setPosixUserId(int posixUserId) {
  posixUserId_ = posixUserId;
  setParameter(std::string("PosixUserId"), std::to_string(posixUserId));
}


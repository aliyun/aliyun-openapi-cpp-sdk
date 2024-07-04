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

#include <alibabacloud/nis/model/CreateNetworkPathRequest.h>

using AlibabaCloud::Nis::Model::CreateNetworkPathRequest;

CreateNetworkPathRequest::CreateNetworkPathRequest()
    : RpcServiceRequest("nis", "2021-12-16", "CreateNetworkPath") {
  setMethod(HttpRequest::Method::Post);
}

CreateNetworkPathRequest::~CreateNetworkPathRequest() {}

long CreateNetworkPathRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateNetworkPathRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateNetworkPathRequest::getTargetId() const {
  return targetId_;
}

void CreateNetworkPathRequest::setTargetId(const std::string &targetId) {
  targetId_ = targetId;
  setParameter(std::string("TargetId"), targetId);
}

std::string CreateNetworkPathRequest::getTargetType() const {
  return targetType_;
}

void CreateNetworkPathRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string CreateNetworkPathRequest::getClientToken() const {
  return clientToken_;
}

void CreateNetworkPathRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<CreateNetworkPathRequest::SystemTag> CreateNetworkPathRequest::getSystemTag() const {
  return systemTag_;
}

void CreateNetworkPathRequest::setSystemTag(const std::vector<CreateNetworkPathRequest::SystemTag> &systemTag) {
  systemTag_ = systemTag;
  for(int dep1 = 0; dep1 != systemTag.size(); dep1++) {
  auto systemTagObj = systemTag.at(dep1);
  std::string systemTagObjStr = std::string("SystemTag") + "." + std::to_string(dep1 + 1);
    setParameter(systemTagObjStr + ".Key", systemTagObj.key);
    setParameter(systemTagObjStr + ".Value", systemTagObj.value);
    setParameter(systemTagObjStr + ".Scope", systemTagObj.scope);
  }
}

std::string CreateNetworkPathRequest::getTargetIpAddress() const {
  return targetIpAddress_;
}

void CreateNetworkPathRequest::setTargetIpAddress(const std::string &targetIpAddress) {
  targetIpAddress_ = targetIpAddress;
  setParameter(std::string("TargetIpAddress"), targetIpAddress);
}

std::string CreateNetworkPathRequest::getNetworkPathName() const {
  return networkPathName_;
}

void CreateNetworkPathRequest::setNetworkPathName(const std::string &networkPathName) {
  networkPathName_ = networkPathName;
  setParameter(std::string("NetworkPathName"), networkPathName);
}

int CreateNetworkPathRequest::getSourcePort() const {
  return sourcePort_;
}

void CreateNetworkPathRequest::setSourcePort(int sourcePort) {
  sourcePort_ = sourcePort;
  setParameter(std::string("SourcePort"), std::to_string(sourcePort));
}

std::string CreateNetworkPathRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateNetworkPathRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateNetworkPathRequest::getProtocol() const {
  return protocol_;
}

void CreateNetworkPathRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string CreateNetworkPathRequest::getRegionId() const {
  return regionId_;
}

void CreateNetworkPathRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long CreateNetworkPathRequest::getSourceAliUid() const {
  return sourceAliUid_;
}

void CreateNetworkPathRequest::setSourceAliUid(long sourceAliUid) {
  sourceAliUid_ = sourceAliUid;
  setParameter(std::string("SourceAliUid"), std::to_string(sourceAliUid));
}

std::string CreateNetworkPathRequest::getSourceType() const {
  return sourceType_;
}

void CreateNetworkPathRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setParameter(std::string("SourceType"), sourceType);
}

std::vector<CreateNetworkPathRequest::Tag> CreateNetworkPathRequest::getTag() const {
  return tag_;
}

void CreateNetworkPathRequest::setTag(const std::vector<CreateNetworkPathRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

int CreateNetworkPathRequest::getTargetPort() const {
  return targetPort_;
}

void CreateNetworkPathRequest::setTargetPort(int targetPort) {
  targetPort_ = targetPort;
  setParameter(std::string("TargetPort"), std::to_string(targetPort));
}

std::string CreateNetworkPathRequest::getSourceId() const {
  return sourceId_;
}

void CreateNetworkPathRequest::setSourceId(const std::string &sourceId) {
  sourceId_ = sourceId;
  setParameter(std::string("SourceId"), sourceId);
}

std::string CreateNetworkPathRequest::getSourceIpAddress() const {
  return sourceIpAddress_;
}

void CreateNetworkPathRequest::setSourceIpAddress(const std::string &sourceIpAddress) {
  sourceIpAddress_ = sourceIpAddress;
  setParameter(std::string("SourceIpAddress"), sourceIpAddress);
}

bool CreateNetworkPathRequest::getDryRun() const {
  return dryRun_;
}

void CreateNetworkPathRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

bool CreateNetworkPathRequest::getUseMultiAccount() const {
  return useMultiAccount_;
}

void CreateNetworkPathRequest::setUseMultiAccount(bool useMultiAccount) {
  useMultiAccount_ = useMultiAccount;
  setParameter(std::string("UseMultiAccount"), useMultiAccount ? "true" : "false");
}

std::string CreateNetworkPathRequest::getNetworkPathDescription() const {
  return networkPathDescription_;
}

void CreateNetworkPathRequest::setNetworkPathDescription(const std::string &networkPathDescription) {
  networkPathDescription_ = networkPathDescription;
  setParameter(std::string("NetworkPathDescription"), networkPathDescription);
}

long CreateNetworkPathRequest::getTargetAliUid() const {
  return targetAliUid_;
}

void CreateNetworkPathRequest::setTargetAliUid(long targetAliUid) {
  targetAliUid_ = targetAliUid;
  setParameter(std::string("TargetAliUid"), std::to_string(targetAliUid));
}


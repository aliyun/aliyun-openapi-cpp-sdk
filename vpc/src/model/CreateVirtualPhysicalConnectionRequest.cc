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

#include <alibabacloud/vpc/model/CreateVirtualPhysicalConnectionRequest.h>

using AlibabaCloud::Vpc::Model::CreateVirtualPhysicalConnectionRequest;

CreateVirtualPhysicalConnectionRequest::CreateVirtualPhysicalConnectionRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateVirtualPhysicalConnection") {
  setMethod(HttpRequest::Method::Post);
}

CreateVirtualPhysicalConnectionRequest::~CreateVirtualPhysicalConnectionRequest() {}

long CreateVirtualPhysicalConnectionRequest::getVpconnAliUid() const {
  return vpconnAliUid_;
}

void CreateVirtualPhysicalConnectionRequest::setVpconnAliUid(long vpconnAliUid) {
  vpconnAliUid_ = vpconnAliUid;
  setParameter(std::string("VpconnAliUid"), std::to_string(vpconnAliUid));
}

std::string CreateVirtualPhysicalConnectionRequest::getOrderMode() const {
  return orderMode_;
}

void CreateVirtualPhysicalConnectionRequest::setOrderMode(const std::string &orderMode) {
  orderMode_ = orderMode;
  setParameter(std::string("OrderMode"), orderMode);
}

long CreateVirtualPhysicalConnectionRequest::getVlanId() const {
  return vlanId_;
}

void CreateVirtualPhysicalConnectionRequest::setVlanId(long vlanId) {
  vlanId_ = vlanId;
  setParameter(std::string("VlanId"), std::to_string(vlanId));
}

std::string CreateVirtualPhysicalConnectionRequest::getVpconnUidResourceGroupId() const {
  return vpconnUidResourceGroupId_;
}

void CreateVirtualPhysicalConnectionRequest::setVpconnUidResourceGroupId(const std::string &vpconnUidResourceGroupId) {
  vpconnUidResourceGroupId_ = vpconnUidResourceGroupId;
  setParameter(std::string("VpconnUidResourceGroupId"), vpconnUidResourceGroupId);
}

std::string CreateVirtualPhysicalConnectionRequest::getDescription() const {
  return description_;
}

void CreateVirtualPhysicalConnectionRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateVirtualPhysicalConnectionRequest::getSpec() const {
  return spec_;
}

void CreateVirtualPhysicalConnectionRequest::setSpec(const std::string &spec) {
  spec_ = spec;
  setParameter(std::string("Spec"), spec);
}

std::string CreateVirtualPhysicalConnectionRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateVirtualPhysicalConnectionRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateVirtualPhysicalConnectionRequest::getRegionId() const {
  return regionId_;
}

void CreateVirtualPhysicalConnectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateVirtualPhysicalConnectionRequest::Tag> CreateVirtualPhysicalConnectionRequest::getTag() const {
  return tag_;
}

void CreateVirtualPhysicalConnectionRequest::setTag(const std::vector<CreateVirtualPhysicalConnectionRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

bool CreateVirtualPhysicalConnectionRequest::getDryRun() const {
  return dryRun_;
}

void CreateVirtualPhysicalConnectionRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateVirtualPhysicalConnectionRequest::getToken() const {
  return token_;
}

void CreateVirtualPhysicalConnectionRequest::setToken(const std::string &token) {
  token_ = token;
  setParameter(std::string("Token"), token);
}

std::string CreateVirtualPhysicalConnectionRequest::getPhysicalConnectionId() const {
  return physicalConnectionId_;
}

void CreateVirtualPhysicalConnectionRequest::setPhysicalConnectionId(const std::string &physicalConnectionId) {
  physicalConnectionId_ = physicalConnectionId;
  setParameter(std::string("PhysicalConnectionId"), physicalConnectionId);
}

std::string CreateVirtualPhysicalConnectionRequest::getName() const {
  return name_;
}

void CreateVirtualPhysicalConnectionRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}


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

#include <alibabacloud/rds/model/CloneParameterGroupRequest.h>

using AlibabaCloud::Rds::Model::CloneParameterGroupRequest;

CloneParameterGroupRequest::CloneParameterGroupRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CloneParameterGroup") {
  setMethod(HttpRequest::Method::Post);
}

CloneParameterGroupRequest::~CloneParameterGroupRequest() {}

long CloneParameterGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CloneParameterGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CloneParameterGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CloneParameterGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CloneParameterGroupRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CloneParameterGroupRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CloneParameterGroupRequest::getParameterGroupId() const {
  return parameterGroupId_;
}

void CloneParameterGroupRequest::setParameterGroupId(const std::string &parameterGroupId) {
  parameterGroupId_ = parameterGroupId;
  setParameter(std::string("ParameterGroupId"), parameterGroupId);
}

std::string CloneParameterGroupRequest::getRegionId() const {
  return regionId_;
}

void CloneParameterGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CloneParameterGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CloneParameterGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long CloneParameterGroupRequest::getOwnerId() const {
  return ownerId_;
}

void CloneParameterGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CloneParameterGroupRequest::getTargetRegionId() const {
  return targetRegionId_;
}

void CloneParameterGroupRequest::setTargetRegionId(const std::string &targetRegionId) {
  targetRegionId_ = targetRegionId;
  setParameter(std::string("TargetRegionId"), targetRegionId);
}

std::string CloneParameterGroupRequest::getParameterGroupName() const {
  return parameterGroupName_;
}

void CloneParameterGroupRequest::setParameterGroupName(const std::string &parameterGroupName) {
  parameterGroupName_ = parameterGroupName;
  setParameter(std::string("ParameterGroupName"), parameterGroupName);
}

std::string CloneParameterGroupRequest::getParameterGroupDesc() const {
  return parameterGroupDesc_;
}

void CloneParameterGroupRequest::setParameterGroupDesc(const std::string &parameterGroupDesc) {
  parameterGroupDesc_ = parameterGroupDesc;
  setParameter(std::string("ParameterGroupDesc"), parameterGroupDesc);
}


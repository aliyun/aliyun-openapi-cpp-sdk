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

#include <alibabacloud/adb/model/ModifyDBResourceGroupRequest.h>

using AlibabaCloud::Adb::Model::ModifyDBResourceGroupRequest;

ModifyDBResourceGroupRequest::ModifyDBResourceGroupRequest()
    : RpcServiceRequest("adb", "2021-12-01", "ModifyDBResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBResourceGroupRequest::~ModifyDBResourceGroupRequest() {}

std::string ModifyDBResourceGroupRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBResourceGroupRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBResourceGroupRequest::getMinComputeResource() const {
  return minComputeResource_;
}

void ModifyDBResourceGroupRequest::setMinComputeResource(const std::string &minComputeResource) {
  minComputeResource_ = minComputeResource;
  setParameter(std::string("MinComputeResource"), minComputeResource);
}

std::string ModifyDBResourceGroupRequest::getGroupName() const {
  return groupName_;
}

void ModifyDBResourceGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string ModifyDBResourceGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBResourceGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBResourceGroupRequest::getGroupType() const {
  return groupType_;
}

void ModifyDBResourceGroupRequest::setGroupType(const std::string &groupType) {
  groupType_ = groupType;
  setParameter(std::string("GroupType"), groupType);
}

std::string ModifyDBResourceGroupRequest::getMaxComputeResource() const {
  return maxComputeResource_;
}

void ModifyDBResourceGroupRequest::setMaxComputeResource(const std::string &maxComputeResource) {
  maxComputeResource_ = maxComputeResource;
  setParameter(std::string("MaxComputeResource"), maxComputeResource);
}


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

#include <alibabacloud/devops/model/CreateHostGroupRequest.h>

using AlibabaCloud::Devops::Model::CreateHostGroupRequest;

CreateHostGroupRequest::CreateHostGroupRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/hostGroups"};
  setMethod(HttpRequest::Method::Post);
}

CreateHostGroupRequest::~CreateHostGroupRequest() {}

long CreateHostGroupRequest::getServiceConnectionId() const {
  return serviceConnectionId_;
}

void CreateHostGroupRequest::setServiceConnectionId(long serviceConnectionId) {
  serviceConnectionId_ = serviceConnectionId;
  setBodyParameter(std::string("serviceConnectionId"), std::to_string(serviceConnectionId));
}

std::string CreateHostGroupRequest::getMachineInfos() const {
  return machineInfos_;
}

void CreateHostGroupRequest::setMachineInfos(const std::string &machineInfos) {
  machineInfos_ = machineInfos;
  setBodyParameter(std::string("machineInfos"), machineInfos);
}

std::string CreateHostGroupRequest::getTagIds() const {
  return tagIds_;
}

void CreateHostGroupRequest::setTagIds(const std::string &tagIds) {
  tagIds_ = tagIds;
  setBodyParameter(std::string("tagIds"), tagIds);
}

std::string CreateHostGroupRequest::getAliyunRegion() const {
  return aliyunRegion_;
}

void CreateHostGroupRequest::setAliyunRegion(const std::string &aliyunRegion) {
  aliyunRegion_ = aliyunRegion;
  setBodyParameter(std::string("aliyunRegion"), aliyunRegion);
}

std::string CreateHostGroupRequest::getEnvId() const {
  return envId_;
}

void CreateHostGroupRequest::setEnvId(const std::string &envId) {
  envId_ = envId;
  setBodyParameter(std::string("envId"), envId);
}

std::string CreateHostGroupRequest::getType() const {
  return type_;
}

void CreateHostGroupRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("type"), type);
}

std::string CreateHostGroupRequest::getOrganizationId() const {
  return organizationId_;
}

void CreateHostGroupRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string CreateHostGroupRequest::getEcsLabelKey() const {
  return ecsLabelKey_;
}

void CreateHostGroupRequest::setEcsLabelKey(const std::string &ecsLabelKey) {
  ecsLabelKey_ = ecsLabelKey;
  setBodyParameter(std::string("ecsLabelKey"), ecsLabelKey);
}

std::string CreateHostGroupRequest::getName() const {
  return name_;
}

void CreateHostGroupRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("name"), name);
}

std::string CreateHostGroupRequest::getEcsLabelValue() const {
  return ecsLabelValue_;
}

void CreateHostGroupRequest::setEcsLabelValue(const std::string &ecsLabelValue) {
  ecsLabelValue_ = ecsLabelValue;
  setBodyParameter(std::string("ecsLabelValue"), ecsLabelValue);
}

std::string CreateHostGroupRequest::getEcsType() const {
  return ecsType_;
}

void CreateHostGroupRequest::setEcsType(const std::string &ecsType) {
  ecsType_ = ecsType;
  setBodyParameter(std::string("ecsType"), ecsType);
}


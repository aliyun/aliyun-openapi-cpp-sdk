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

#include <alibabacloud/devops/model/UpdateHostGroupRequest.h>

using AlibabaCloud::Devops::Model::UpdateHostGroupRequest;

UpdateHostGroupRequest::UpdateHostGroupRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/hostGroups/[id]"};
  setMethod(HttpRequest::Method::Put);
}

UpdateHostGroupRequest::~UpdateHostGroupRequest() {}

long UpdateHostGroupRequest::getServiceConnectionId() const {
  return serviceConnectionId_;
}

void UpdateHostGroupRequest::setServiceConnectionId(long serviceConnectionId) {
  serviceConnectionId_ = serviceConnectionId;
  setBodyParameter(std::string("serviceConnectionId"), std::to_string(serviceConnectionId));
}

std::string UpdateHostGroupRequest::getMachineInfos() const {
  return machineInfos_;
}

void UpdateHostGroupRequest::setMachineInfos(const std::string &machineInfos) {
  machineInfos_ = machineInfos;
  setBodyParameter(std::string("machineInfos"), machineInfos);
}

std::string UpdateHostGroupRequest::getTagIds() const {
  return tagIds_;
}

void UpdateHostGroupRequest::setTagIds(const std::string &tagIds) {
  tagIds_ = tagIds;
  setBodyParameter(std::string("tagIds"), tagIds);
}

std::string UpdateHostGroupRequest::getAliyunRegion() const {
  return aliyunRegion_;
}

void UpdateHostGroupRequest::setAliyunRegion(const std::string &aliyunRegion) {
  aliyunRegion_ = aliyunRegion;
  setBodyParameter(std::string("aliyunRegion"), aliyunRegion);
}

std::string UpdateHostGroupRequest::getEnvId() const {
  return envId_;
}

void UpdateHostGroupRequest::setEnvId(const std::string &envId) {
  envId_ = envId;
  setBodyParameter(std::string("envId"), envId);
}

std::string UpdateHostGroupRequest::getType() const {
  return type_;
}

void UpdateHostGroupRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("type"), type);
}

std::string UpdateHostGroupRequest::getOrganizationId() const {
  return organizationId_;
}

void UpdateHostGroupRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string UpdateHostGroupRequest::getEcsLabelKey() const {
  return ecsLabelKey_;
}

void UpdateHostGroupRequest::setEcsLabelKey(const std::string &ecsLabelKey) {
  ecsLabelKey_ = ecsLabelKey;
  setBodyParameter(std::string("ecsLabelKey"), ecsLabelKey);
}

std::string UpdateHostGroupRequest::getName() const {
  return name_;
}

void UpdateHostGroupRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("name"), name);
}

std::string UpdateHostGroupRequest::getEcsLabelValue() const {
  return ecsLabelValue_;
}

void UpdateHostGroupRequest::setEcsLabelValue(const std::string &ecsLabelValue) {
  ecsLabelValue_ = ecsLabelValue;
  setBodyParameter(std::string("ecsLabelValue"), ecsLabelValue);
}

long UpdateHostGroupRequest::getId() const {
  return id_;
}

void UpdateHostGroupRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("id"), std::to_string(id));
}

std::string UpdateHostGroupRequest::getEcsType() const {
  return ecsType_;
}

void UpdateHostGroupRequest::setEcsType(const std::string &ecsType) {
  ecsType_ = ecsType;
  setBodyParameter(std::string("ecsType"), ecsType);
}


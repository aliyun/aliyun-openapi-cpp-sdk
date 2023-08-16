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

#include <alibabacloud/csas/model/UpdateDynamicRouteRequest.h>

using AlibabaCloud::Csas::Model::UpdateDynamicRouteRequest;

UpdateDynamicRouteRequest::UpdateDynamicRouteRequest()
    : RpcServiceRequest("csas", "2023-01-20", "UpdateDynamicRoute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDynamicRouteRequest::~UpdateDynamicRouteRequest() {}

std::string UpdateDynamicRouteRequest::getDescription() const {
  return description_;
}

void UpdateDynamicRouteRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateDynamicRouteRequest::getDynamicRouteId() const {
  return dynamicRouteId_;
}

void UpdateDynamicRouteRequest::setDynamicRouteId(const std::string &dynamicRouteId) {
  dynamicRouteId_ = dynamicRouteId;
  setBodyParameter(std::string("DynamicRouteId"), dynamicRouteId);
}

std::string UpdateDynamicRouteRequest::getSourceIp() const {
  return sourceIp_;
}

void UpdateDynamicRouteRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string UpdateDynamicRouteRequest::getDynamicRouteType() const {
  return dynamicRouteType_;
}

void UpdateDynamicRouteRequest::setDynamicRouteType(const std::string &dynamicRouteType) {
  dynamicRouteType_ = dynamicRouteType;
  setBodyParameter(std::string("DynamicRouteType"), dynamicRouteType);
}

std::vector<UpdateDynamicRouteRequest::std::string> UpdateDynamicRouteRequest::getTagIds() const {
  return tagIds_;
}

void UpdateDynamicRouteRequest::setTagIds(const std::vector<UpdateDynamicRouteRequest::std::string> &tagIds) {
  tagIds_ = tagIds;
  for(int dep1 = 0; dep1 != tagIds.size(); dep1++) {
    setBodyParameter(std::string("TagIds") + "." + std::to_string(dep1 + 1), tagIds[dep1]);
  }
}

std::vector<UpdateDynamicRouteRequest::std::string> UpdateDynamicRouteRequest::getRegionIds() const {
  return regionIds_;
}

void UpdateDynamicRouteRequest::setRegionIds(const std::vector<UpdateDynamicRouteRequest::std::string> &regionIds) {
  regionIds_ = regionIds;
  for(int dep1 = 0; dep1 != regionIds.size(); dep1++) {
    setBodyParameter(std::string("RegionIds") + "." + std::to_string(dep1 + 1), regionIds[dep1]);
  }
}

int UpdateDynamicRouteRequest::getPriority() const {
  return priority_;
}

void UpdateDynamicRouteRequest::setPriority(int priority) {
  priority_ = priority;
  setBodyParameter(std::string("Priority"), std::to_string(priority));
}

std::string UpdateDynamicRouteRequest::getNextHop() const {
  return nextHop_;
}

void UpdateDynamicRouteRequest::setNextHop(const std::string &nextHop) {
  nextHop_ = nextHop;
  setBodyParameter(std::string("NextHop"), nextHop);
}

std::vector<UpdateDynamicRouteRequest::std::string> UpdateDynamicRouteRequest::getApplicationIds() const {
  return applicationIds_;
}

void UpdateDynamicRouteRequest::setApplicationIds(const std::vector<UpdateDynamicRouteRequest::std::string> &applicationIds) {
  applicationIds_ = applicationIds;
  for(int dep1 = 0; dep1 != applicationIds.size(); dep1++) {
    setBodyParameter(std::string("ApplicationIds") + "." + std::to_string(dep1 + 1), applicationIds[dep1]);
  }
}

std::string UpdateDynamicRouteRequest::getModifyType() const {
  return modifyType_;
}

void UpdateDynamicRouteRequest::setModifyType(const std::string &modifyType) {
  modifyType_ = modifyType;
  setBodyParameter(std::string("ModifyType"), modifyType);
}

std::string UpdateDynamicRouteRequest::getName() const {
  return name_;
}

void UpdateDynamicRouteRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string UpdateDynamicRouteRequest::getApplicationType() const {
  return applicationType_;
}

void UpdateDynamicRouteRequest::setApplicationType(const std::string &applicationType) {
  applicationType_ = applicationType;
  setBodyParameter(std::string("ApplicationType"), applicationType);
}

std::string UpdateDynamicRouteRequest::getStatus() const {
  return status_;
}

void UpdateDynamicRouteRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}


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

#include <alibabacloud/csas/model/CreateDynamicRouteRequest.h>

using AlibabaCloud::Csas::Model::CreateDynamicRouteRequest;

CreateDynamicRouteRequest::CreateDynamicRouteRequest()
    : RpcServiceRequest("csas", "2023-01-20", "CreateDynamicRoute") {
  setMethod(HttpRequest::Method::Post);
}

CreateDynamicRouteRequest::~CreateDynamicRouteRequest() {}

std::string CreateDynamicRouteRequest::getDescription() const {
  return description_;
}

void CreateDynamicRouteRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateDynamicRouteRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateDynamicRouteRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreateDynamicRouteRequest::getDynamicRouteType() const {
  return dynamicRouteType_;
}

void CreateDynamicRouteRequest::setDynamicRouteType(const std::string &dynamicRouteType) {
  dynamicRouteType_ = dynamicRouteType;
  setBodyParameter(std::string("DynamicRouteType"), dynamicRouteType);
}

std::vector<CreateDynamicRouteRequest::std::string> CreateDynamicRouteRequest::getTagIds() const {
  return tagIds_;
}

void CreateDynamicRouteRequest::setTagIds(const std::vector<CreateDynamicRouteRequest::std::string> &tagIds) {
  tagIds_ = tagIds;
  for(int dep1 = 0; dep1 != tagIds.size(); dep1++) {
    setBodyParameter(std::string("TagIds") + "." + std::to_string(dep1 + 1), tagIds[dep1]);
  }
}

std::vector<CreateDynamicRouteRequest::std::string> CreateDynamicRouteRequest::getRegionIds() const {
  return regionIds_;
}

void CreateDynamicRouteRequest::setRegionIds(const std::vector<CreateDynamicRouteRequest::std::string> &regionIds) {
  regionIds_ = regionIds;
  for(int dep1 = 0; dep1 != regionIds.size(); dep1++) {
    setBodyParameter(std::string("RegionIds") + "." + std::to_string(dep1 + 1), regionIds[dep1]);
  }
}

int CreateDynamicRouteRequest::getPriority() const {
  return priority_;
}

void CreateDynamicRouteRequest::setPriority(int priority) {
  priority_ = priority;
  setBodyParameter(std::string("Priority"), std::to_string(priority));
}

std::string CreateDynamicRouteRequest::getNextHop() const {
  return nextHop_;
}

void CreateDynamicRouteRequest::setNextHop(const std::string &nextHop) {
  nextHop_ = nextHop;
  setBodyParameter(std::string("NextHop"), nextHop);
}

std::vector<CreateDynamicRouteRequest::std::string> CreateDynamicRouteRequest::getApplicationIds() const {
  return applicationIds_;
}

void CreateDynamicRouteRequest::setApplicationIds(const std::vector<CreateDynamicRouteRequest::std::string> &applicationIds) {
  applicationIds_ = applicationIds;
  for(int dep1 = 0; dep1 != applicationIds.size(); dep1++) {
    setBodyParameter(std::string("ApplicationIds") + "." + std::to_string(dep1 + 1), applicationIds[dep1]);
  }
}

std::string CreateDynamicRouteRequest::getName() const {
  return name_;
}

void CreateDynamicRouteRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string CreateDynamicRouteRequest::getApplicationType() const {
  return applicationType_;
}

void CreateDynamicRouteRequest::setApplicationType(const std::string &applicationType) {
  applicationType_ = applicationType;
  setBodyParameter(std::string("ApplicationType"), applicationType);
}

std::string CreateDynamicRouteRequest::getStatus() const {
  return status_;
}

void CreateDynamicRouteRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}


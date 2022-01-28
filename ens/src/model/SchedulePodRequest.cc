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

#include <alibabacloud/ens/model/SchedulePodRequest.h>

using AlibabaCloud::Ens::Model::SchedulePodRequest;

SchedulePodRequest::SchedulePodRequest()
    : RpcServiceRequest("ens", "2017-11-10", "SchedulePod") {
  setMethod(HttpRequest::Method::Post);
}

SchedulePodRequest::~SchedulePodRequest() {}

std::string SchedulePodRequest::getAreaCodes() const {
  return areaCodes_;
}

void SchedulePodRequest::setAreaCodes(const std::string &areaCodes) {
  areaCodes_ = areaCodes;
  setParameter(std::string("AreaCodes"), areaCodes);
}

std::string SchedulePodRequest::getGroupUuid() const {
  return groupUuid_;
}

void SchedulePodRequest::setGroupUuid(const std::string &groupUuid) {
  groupUuid_ = groupUuid;
  setParameter(std::string("GroupUuid"), groupUuid);
}

std::string SchedulePodRequest::getIsps() const {
  return isps_;
}

void SchedulePodRequest::setIsps(const std::string &isps) {
  isps_ = isps;
  setParameter(std::string("Isps"), isps);
}

std::string SchedulePodRequest::getTenant() const {
  return tenant_;
}

void SchedulePodRequest::setTenant(const std::string &tenant) {
  tenant_ = tenant;
  setParameter(std::string("Tenant"), tenant);
}

std::string SchedulePodRequest::getWorkloadUuid() const {
  return workloadUuid_;
}

void SchedulePodRequest::setWorkloadUuid(const std::string &workloadUuid) {
  workloadUuid_ = workloadUuid;
  setParameter(std::string("WorkloadUuid"), workloadUuid);
}

std::string SchedulePodRequest::getLabels() const {
  return labels_;
}

void SchedulePodRequest::setLabels(const std::string &labels) {
  labels_ = labels;
  setParameter(std::string("Labels"), labels);
}

std::string SchedulePodRequest::getRegions() const {
  return regions_;
}

void SchedulePodRequest::setRegions(const std::string &regions) {
  regions_ = regions;
  setParameter(std::string("Regions"), regions);
}

std::string SchedulePodRequest::getResourceAttribute() const {
  return resourceAttribute_;
}

void SchedulePodRequest::setResourceAttribute(const std::string &resourceAttribute) {
  resourceAttribute_ = resourceAttribute;
  setBodyParameter(std::string("ResourceAttribute"), resourceAttribute);
}

long SchedulePodRequest::getAliUid() const {
  return aliUid_;
}

void SchedulePodRequest::setAliUid(long aliUid) {
  aliUid_ = aliUid;
  setParameter(std::string("AliUid"), std::to_string(aliUid));
}

std::string SchedulePodRequest::getRequirements() const {
  return requirements_;
}

void SchedulePodRequest::setRequirements(const std::string &requirements) {
  requirements_ = requirements;
  setBodyParameter(std::string("Requirements"), requirements);
}


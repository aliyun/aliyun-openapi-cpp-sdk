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

#include <alibabacloud/ecd/model/ApplyCoordinationForMonitoringRequest.h>

using AlibabaCloud::Ecd::Model::ApplyCoordinationForMonitoringRequest;

ApplyCoordinationForMonitoringRequest::ApplyCoordinationForMonitoringRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ApplyCoordinationForMonitoring") {
  setMethod(HttpRequest::Method::Post);
}

ApplyCoordinationForMonitoringRequest::~ApplyCoordinationForMonitoringRequest() {}

std::string ApplyCoordinationForMonitoringRequest::getUuid() const {
  return uuid_;
}

void ApplyCoordinationForMonitoringRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string ApplyCoordinationForMonitoringRequest::getInitiatorType() const {
  return initiatorType_;
}

void ApplyCoordinationForMonitoringRequest::setInitiatorType(const std::string &initiatorType) {
  initiatorType_ = initiatorType;
  setParameter(std::string("InitiatorType"), initiatorType);
}

std::string ApplyCoordinationForMonitoringRequest::getCoordinatePolicyType() const {
  return coordinatePolicyType_;
}

void ApplyCoordinationForMonitoringRequest::setCoordinatePolicyType(const std::string &coordinatePolicyType) {
  coordinatePolicyType_ = coordinatePolicyType;
  setParameter(std::string("CoordinatePolicyType"), coordinatePolicyType);
}

std::string ApplyCoordinationForMonitoringRequest::getRegionId() const {
  return regionId_;
}

void ApplyCoordinationForMonitoringRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<ApplyCoordinationForMonitoringRequest::ResourceCandidates> ApplyCoordinationForMonitoringRequest::getResourceCandidates() const {
  return resourceCandidates_;
}

void ApplyCoordinationForMonitoringRequest::setResourceCandidates(const std::vector<ApplyCoordinationForMonitoringRequest::ResourceCandidates> &resourceCandidates) {
  resourceCandidates_ = resourceCandidates;
  for(int dep1 = 0; dep1 != resourceCandidates.size(); dep1++) {
  auto resourceCandidatesObj = resourceCandidates.at(dep1);
  std::string resourceCandidatesObjStr = std::string("ResourceCandidates") + "." + std::to_string(dep1 + 1);
    setParameter(resourceCandidatesObjStr + ".ResourceId", resourceCandidatesObj.resourceId);
    setParameter(resourceCandidatesObjStr + ".ResourceProperties", resourceCandidatesObj.resourceProperties);
    setParameter(resourceCandidatesObjStr + ".ResourceName", resourceCandidatesObj.resourceName);
    setParameter(resourceCandidatesObjStr + ".ResourceType", resourceCandidatesObj.resourceType);
    setParameter(resourceCandidatesObjStr + ".OwnerWyId", resourceCandidatesObj.ownerWyId);
    setParameter(resourceCandidatesObjStr + ".ResourceRegionId", resourceCandidatesObj.resourceRegionId);
    setParameter(resourceCandidatesObjStr + ".OwnerAliUid", std::to_string(resourceCandidatesObj.ownerAliUid));
    setParameter(resourceCandidatesObjStr + ".OwnerEndUserId", resourceCandidatesObj.ownerEndUserId);
  }
}

std::string ApplyCoordinationForMonitoringRequest::getEndUserId() const {
  return endUserId_;
}

void ApplyCoordinationForMonitoringRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}


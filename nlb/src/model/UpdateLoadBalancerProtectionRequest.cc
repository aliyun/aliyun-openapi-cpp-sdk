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

#include <alibabacloud/nlb/model/UpdateLoadBalancerProtectionRequest.h>

using AlibabaCloud::Nlb::Model::UpdateLoadBalancerProtectionRequest;

UpdateLoadBalancerProtectionRequest::UpdateLoadBalancerProtectionRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "UpdateLoadBalancerProtection") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLoadBalancerProtectionRequest::~UpdateLoadBalancerProtectionRequest() {}

std::string UpdateLoadBalancerProtectionRequest::getDeletionProtectionReason() const {
  return deletionProtectionReason_;
}

void UpdateLoadBalancerProtectionRequest::setDeletionProtectionReason(const std::string &deletionProtectionReason) {
  deletionProtectionReason_ = deletionProtectionReason;
  setBodyParameter(std::string("DeletionProtectionReason"), deletionProtectionReason);
}

std::string UpdateLoadBalancerProtectionRequest::getModificationProtectionReason() const {
  return modificationProtectionReason_;
}

void UpdateLoadBalancerProtectionRequest::setModificationProtectionReason(const std::string &modificationProtectionReason) {
  modificationProtectionReason_ = modificationProtectionReason;
  setBodyParameter(std::string("ModificationProtectionReason"), modificationProtectionReason);
}

std::string UpdateLoadBalancerProtectionRequest::getClientToken() const {
  return clientToken_;
}

void UpdateLoadBalancerProtectionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

bool UpdateLoadBalancerProtectionRequest::getDeletionProtectionEnabled() const {
  return deletionProtectionEnabled_;
}

void UpdateLoadBalancerProtectionRequest::setDeletionProtectionEnabled(bool deletionProtectionEnabled) {
  deletionProtectionEnabled_ = deletionProtectionEnabled;
  setBodyParameter(std::string("DeletionProtectionEnabled"), deletionProtectionEnabled ? "true" : "false");
}

std::string UpdateLoadBalancerProtectionRequest::getRegionId() const {
  return regionId_;
}

void UpdateLoadBalancerProtectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

bool UpdateLoadBalancerProtectionRequest::getDryRun() const {
  return dryRun_;
}

void UpdateLoadBalancerProtectionRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateLoadBalancerProtectionRequest::getModificationProtectionStatus() const {
  return modificationProtectionStatus_;
}

void UpdateLoadBalancerProtectionRequest::setModificationProtectionStatus(const std::string &modificationProtectionStatus) {
  modificationProtectionStatus_ = modificationProtectionStatus;
  setBodyParameter(std::string("ModificationProtectionStatus"), modificationProtectionStatus);
}

std::string UpdateLoadBalancerProtectionRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void UpdateLoadBalancerProtectionRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setBodyParameter(std::string("LoadBalancerId"), loadBalancerId);
}


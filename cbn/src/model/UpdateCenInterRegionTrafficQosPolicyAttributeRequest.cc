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

#include <alibabacloud/cbn/model/UpdateCenInterRegionTrafficQosPolicyAttributeRequest.h>

using AlibabaCloud::Cbn::Model::UpdateCenInterRegionTrafficQosPolicyAttributeRequest;

UpdateCenInterRegionTrafficQosPolicyAttributeRequest::UpdateCenInterRegionTrafficQosPolicyAttributeRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "UpdateCenInterRegionTrafficQosPolicyAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateCenInterRegionTrafficQosPolicyAttributeRequest::~UpdateCenInterRegionTrafficQosPolicyAttributeRequest() {}

long UpdateCenInterRegionTrafficQosPolicyAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateCenInterRegionTrafficQosPolicyAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateCenInterRegionTrafficQosPolicyAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateCenInterRegionTrafficQosPolicyAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateCenInterRegionTrafficQosPolicyAttributeRequest::getTrafficQosPolicyName() const {
  return trafficQosPolicyName_;
}

void UpdateCenInterRegionTrafficQosPolicyAttributeRequest::setTrafficQosPolicyName(const std::string &trafficQosPolicyName) {
  trafficQosPolicyName_ = trafficQosPolicyName;
  setParameter(std::string("TrafficQosPolicyName"), trafficQosPolicyName);
}

bool UpdateCenInterRegionTrafficQosPolicyAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateCenInterRegionTrafficQosPolicyAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateCenInterRegionTrafficQosPolicyAttributeRequest::getTrafficQosPolicyId() const {
  return trafficQosPolicyId_;
}

void UpdateCenInterRegionTrafficQosPolicyAttributeRequest::setTrafficQosPolicyId(const std::string &trafficQosPolicyId) {
  trafficQosPolicyId_ = trafficQosPolicyId;
  setParameter(std::string("TrafficQosPolicyId"), trafficQosPolicyId);
}

std::string UpdateCenInterRegionTrafficQosPolicyAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateCenInterRegionTrafficQosPolicyAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateCenInterRegionTrafficQosPolicyAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateCenInterRegionTrafficQosPolicyAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string UpdateCenInterRegionTrafficQosPolicyAttributeRequest::getTrafficQosPolicyDescription() const {
  return trafficQosPolicyDescription_;
}

void UpdateCenInterRegionTrafficQosPolicyAttributeRequest::setTrafficQosPolicyDescription(const std::string &trafficQosPolicyDescription) {
  trafficQosPolicyDescription_ = trafficQosPolicyDescription;
  setParameter(std::string("TrafficQosPolicyDescription"), trafficQosPolicyDescription);
}

long UpdateCenInterRegionTrafficQosPolicyAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateCenInterRegionTrafficQosPolicyAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateCenInterRegionTrafficQosPolicyAttributeRequest::getVersion() const {
  return version_;
}

void UpdateCenInterRegionTrafficQosPolicyAttributeRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}


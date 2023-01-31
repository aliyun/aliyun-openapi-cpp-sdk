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

#include <alibabacloud/vpc/model/UpdateTrafficMirrorFilterAttributeRequest.h>

using AlibabaCloud::Vpc::Model::UpdateTrafficMirrorFilterAttributeRequest;

UpdateTrafficMirrorFilterAttributeRequest::UpdateTrafficMirrorFilterAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "UpdateTrafficMirrorFilterAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTrafficMirrorFilterAttributeRequest::~UpdateTrafficMirrorFilterAttributeRequest() {}

long UpdateTrafficMirrorFilterAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateTrafficMirrorFilterAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateTrafficMirrorFilterAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateTrafficMirrorFilterAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateTrafficMirrorFilterAttributeRequest::getTrafficMirrorFilterName() const {
  return trafficMirrorFilterName_;
}

void UpdateTrafficMirrorFilterAttributeRequest::setTrafficMirrorFilterName(const std::string &trafficMirrorFilterName) {
  trafficMirrorFilterName_ = trafficMirrorFilterName;
  setParameter(std::string("TrafficMirrorFilterName"), trafficMirrorFilterName);
}

std::string UpdateTrafficMirrorFilterAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateTrafficMirrorFilterAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool UpdateTrafficMirrorFilterAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateTrafficMirrorFilterAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateTrafficMirrorFilterAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateTrafficMirrorFilterAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateTrafficMirrorFilterAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateTrafficMirrorFilterAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateTrafficMirrorFilterAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateTrafficMirrorFilterAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateTrafficMirrorFilterAttributeRequest::getTrafficMirrorFilterDescription() const {
  return trafficMirrorFilterDescription_;
}

void UpdateTrafficMirrorFilterAttributeRequest::setTrafficMirrorFilterDescription(const std::string &trafficMirrorFilterDescription) {
  trafficMirrorFilterDescription_ = trafficMirrorFilterDescription;
  setParameter(std::string("TrafficMirrorFilterDescription"), trafficMirrorFilterDescription);
}

std::string UpdateTrafficMirrorFilterAttributeRequest::getTrafficMirrorFilterId() const {
  return trafficMirrorFilterId_;
}

void UpdateTrafficMirrorFilterAttributeRequest::setTrafficMirrorFilterId(const std::string &trafficMirrorFilterId) {
  trafficMirrorFilterId_ = trafficMirrorFilterId;
  setParameter(std::string("TrafficMirrorFilterId"), trafficMirrorFilterId);
}


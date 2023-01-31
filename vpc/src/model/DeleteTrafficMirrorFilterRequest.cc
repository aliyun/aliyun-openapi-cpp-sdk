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

#include <alibabacloud/vpc/model/DeleteTrafficMirrorFilterRequest.h>

using AlibabaCloud::Vpc::Model::DeleteTrafficMirrorFilterRequest;

DeleteTrafficMirrorFilterRequest::DeleteTrafficMirrorFilterRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteTrafficMirrorFilter") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTrafficMirrorFilterRequest::~DeleteTrafficMirrorFilterRequest() {}

long DeleteTrafficMirrorFilterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteTrafficMirrorFilterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteTrafficMirrorFilterRequest::getClientToken() const {
  return clientToken_;
}

void DeleteTrafficMirrorFilterRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteTrafficMirrorFilterRequest::getRegionId() const {
  return regionId_;
}

void DeleteTrafficMirrorFilterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeleteTrafficMirrorFilterRequest::getDryRun() const {
  return dryRun_;
}

void DeleteTrafficMirrorFilterRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteTrafficMirrorFilterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteTrafficMirrorFilterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteTrafficMirrorFilterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteTrafficMirrorFilterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteTrafficMirrorFilterRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteTrafficMirrorFilterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteTrafficMirrorFilterRequest::getTrafficMirrorFilterId() const {
  return trafficMirrorFilterId_;
}

void DeleteTrafficMirrorFilterRequest::setTrafficMirrorFilterId(const std::string &trafficMirrorFilterId) {
  trafficMirrorFilterId_ = trafficMirrorFilterId;
  setParameter(std::string("TrafficMirrorFilterId"), trafficMirrorFilterId);
}


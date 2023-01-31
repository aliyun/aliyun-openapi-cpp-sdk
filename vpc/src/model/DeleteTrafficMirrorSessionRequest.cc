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

#include <alibabacloud/vpc/model/DeleteTrafficMirrorSessionRequest.h>

using AlibabaCloud::Vpc::Model::DeleteTrafficMirrorSessionRequest;

DeleteTrafficMirrorSessionRequest::DeleteTrafficMirrorSessionRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteTrafficMirrorSession") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTrafficMirrorSessionRequest::~DeleteTrafficMirrorSessionRequest() {}

long DeleteTrafficMirrorSessionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteTrafficMirrorSessionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteTrafficMirrorSessionRequest::getClientToken() const {
  return clientToken_;
}

void DeleteTrafficMirrorSessionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteTrafficMirrorSessionRequest::getRegionId() const {
  return regionId_;
}

void DeleteTrafficMirrorSessionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeleteTrafficMirrorSessionRequest::getDryRun() const {
  return dryRun_;
}

void DeleteTrafficMirrorSessionRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteTrafficMirrorSessionRequest::getTrafficMirrorSessionId() const {
  return trafficMirrorSessionId_;
}

void DeleteTrafficMirrorSessionRequest::setTrafficMirrorSessionId(const std::string &trafficMirrorSessionId) {
  trafficMirrorSessionId_ = trafficMirrorSessionId;
  setParameter(std::string("TrafficMirrorSessionId"), trafficMirrorSessionId);
}

std::string DeleteTrafficMirrorSessionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteTrafficMirrorSessionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteTrafficMirrorSessionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteTrafficMirrorSessionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteTrafficMirrorSessionRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteTrafficMirrorSessionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


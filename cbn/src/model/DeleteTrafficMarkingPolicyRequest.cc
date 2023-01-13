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

#include <alibabacloud/cbn/model/DeleteTrafficMarkingPolicyRequest.h>

using AlibabaCloud::Cbn::Model::DeleteTrafficMarkingPolicyRequest;

DeleteTrafficMarkingPolicyRequest::DeleteTrafficMarkingPolicyRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DeleteTrafficMarkingPolicy") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTrafficMarkingPolicyRequest::~DeleteTrafficMarkingPolicyRequest() {}

long DeleteTrafficMarkingPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteTrafficMarkingPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteTrafficMarkingPolicyRequest::getClientToken() const {
  return clientToken_;
}

void DeleteTrafficMarkingPolicyRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteTrafficMarkingPolicyRequest::getTrafficMarkingPolicyId() const {
  return trafficMarkingPolicyId_;
}

void DeleteTrafficMarkingPolicyRequest::setTrafficMarkingPolicyId(const std::string &trafficMarkingPolicyId) {
  trafficMarkingPolicyId_ = trafficMarkingPolicyId;
  setParameter(std::string("TrafficMarkingPolicyId"), trafficMarkingPolicyId);
}

bool DeleteTrafficMarkingPolicyRequest::getDryRun() const {
  return dryRun_;
}

void DeleteTrafficMarkingPolicyRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteTrafficMarkingPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteTrafficMarkingPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteTrafficMarkingPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteTrafficMarkingPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteTrafficMarkingPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteTrafficMarkingPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteTrafficMarkingPolicyRequest::getVersion() const {
  return version_;
}

void DeleteTrafficMarkingPolicyRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}


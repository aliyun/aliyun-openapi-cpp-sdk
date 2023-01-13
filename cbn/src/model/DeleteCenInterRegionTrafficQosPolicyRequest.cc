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

#include <alibabacloud/cbn/model/DeleteCenInterRegionTrafficQosPolicyRequest.h>

using AlibabaCloud::Cbn::Model::DeleteCenInterRegionTrafficQosPolicyRequest;

DeleteCenInterRegionTrafficQosPolicyRequest::DeleteCenInterRegionTrafficQosPolicyRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DeleteCenInterRegionTrafficQosPolicy") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCenInterRegionTrafficQosPolicyRequest::~DeleteCenInterRegionTrafficQosPolicyRequest() {}

long DeleteCenInterRegionTrafficQosPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteCenInterRegionTrafficQosPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteCenInterRegionTrafficQosPolicyRequest::getClientToken() const {
  return clientToken_;
}

void DeleteCenInterRegionTrafficQosPolicyRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool DeleteCenInterRegionTrafficQosPolicyRequest::getDryRun() const {
  return dryRun_;
}

void DeleteCenInterRegionTrafficQosPolicyRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteCenInterRegionTrafficQosPolicyRequest::getTrafficQosPolicyId() const {
  return trafficQosPolicyId_;
}

void DeleteCenInterRegionTrafficQosPolicyRequest::setTrafficQosPolicyId(const std::string &trafficQosPolicyId) {
  trafficQosPolicyId_ = trafficQosPolicyId;
  setParameter(std::string("TrafficQosPolicyId"), trafficQosPolicyId);
}

std::string DeleteCenInterRegionTrafficQosPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteCenInterRegionTrafficQosPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteCenInterRegionTrafficQosPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteCenInterRegionTrafficQosPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteCenInterRegionTrafficQosPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteCenInterRegionTrafficQosPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteCenInterRegionTrafficQosPolicyRequest::getVersion() const {
  return version_;
}

void DeleteCenInterRegionTrafficQosPolicyRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}


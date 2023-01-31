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

#include <alibabacloud/vpc/model/DeleteNatIpRequest.h>

using AlibabaCloud::Vpc::Model::DeleteNatIpRequest;

DeleteNatIpRequest::DeleteNatIpRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteNatIp") {
  setMethod(HttpRequest::Method::Post);
}

DeleteNatIpRequest::~DeleteNatIpRequest() {}

long DeleteNatIpRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteNatIpRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteNatIpRequest::getClientToken() const {
  return clientToken_;
}

void DeleteNatIpRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteNatIpRequest::getRegionId() const {
  return regionId_;
}

void DeleteNatIpRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeleteNatIpRequest::getDryRun() const {
  return dryRun_;
}

void DeleteNatIpRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteNatIpRequest::getNatIpId() const {
  return natIpId_;
}

void DeleteNatIpRequest::setNatIpId(const std::string &natIpId) {
  natIpId_ = natIpId;
  setParameter(std::string("NatIpId"), natIpId);
}

std::string DeleteNatIpRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteNatIpRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteNatIpRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteNatIpRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteNatIpRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteNatIpRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


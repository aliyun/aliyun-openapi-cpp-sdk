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

#include <alibabacloud/vpc/model/DeleteIpv6GatewayRequest.h>

using AlibabaCloud::Vpc::Model::DeleteIpv6GatewayRequest;

DeleteIpv6GatewayRequest::DeleteIpv6GatewayRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteIpv6Gateway") {
  setMethod(HttpRequest::Method::Post);
}

DeleteIpv6GatewayRequest::~DeleteIpv6GatewayRequest() {}

long DeleteIpv6GatewayRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteIpv6GatewayRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteIpv6GatewayRequest::getClientToken() const {
  return clientToken_;
}

void DeleteIpv6GatewayRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteIpv6GatewayRequest::getRegionId() const {
  return regionId_;
}

void DeleteIpv6GatewayRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeleteIpv6GatewayRequest::getDryRun() const {
  return dryRun_;
}

void DeleteIpv6GatewayRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteIpv6GatewayRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteIpv6GatewayRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteIpv6GatewayRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteIpv6GatewayRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteIpv6GatewayRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteIpv6GatewayRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteIpv6GatewayRequest::getIpv6GatewayId() const {
  return ipv6GatewayId_;
}

void DeleteIpv6GatewayRequest::setIpv6GatewayId(const std::string &ipv6GatewayId) {
  ipv6GatewayId_ = ipv6GatewayId;
  setParameter(std::string("Ipv6GatewayId"), ipv6GatewayId);
}


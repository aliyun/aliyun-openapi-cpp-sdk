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

#include <alibabacloud/vpc/model/DeleteIpv4GatewayRequest.h>

using AlibabaCloud::Vpc::Model::DeleteIpv4GatewayRequest;

DeleteIpv4GatewayRequest::DeleteIpv4GatewayRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteIpv4Gateway") {
  setMethod(HttpRequest::Method::Post);
}

DeleteIpv4GatewayRequest::~DeleteIpv4GatewayRequest() {}

long DeleteIpv4GatewayRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteIpv4GatewayRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteIpv4GatewayRequest::getClientToken() const {
  return clientToken_;
}

void DeleteIpv4GatewayRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteIpv4GatewayRequest::getRegionId() const {
  return regionId_;
}

void DeleteIpv4GatewayRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteIpv4GatewayRequest::getIpv4GatewayId() const {
  return ipv4GatewayId_;
}

void DeleteIpv4GatewayRequest::setIpv4GatewayId(const std::string &ipv4GatewayId) {
  ipv4GatewayId_ = ipv4GatewayId;
  setParameter(std::string("Ipv4GatewayId"), ipv4GatewayId);
}

bool DeleteIpv4GatewayRequest::getDryRun() const {
  return dryRun_;
}

void DeleteIpv4GatewayRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteIpv4GatewayRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteIpv4GatewayRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteIpv4GatewayRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteIpv4GatewayRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteIpv4GatewayRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteIpv4GatewayRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteIpv4GatewayRequest::getInternetMode() const {
  return internetMode_;
}

void DeleteIpv4GatewayRequest::setInternetMode(const std::string &internetMode) {
  internetMode_ = internetMode;
  setParameter(std::string("InternetMode"), internetMode);
}


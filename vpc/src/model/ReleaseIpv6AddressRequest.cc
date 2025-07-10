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

#include <alibabacloud/vpc/model/ReleaseIpv6AddressRequest.h>

using AlibabaCloud::Vpc::Model::ReleaseIpv6AddressRequest;

ReleaseIpv6AddressRequest::ReleaseIpv6AddressRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ReleaseIpv6Address") {
  setMethod(HttpRequest::Method::Post);
}

ReleaseIpv6AddressRequest::~ReleaseIpv6AddressRequest() {}

long ReleaseIpv6AddressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ReleaseIpv6AddressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ReleaseIpv6AddressRequest::getClientToken() const {
  return clientToken_;
}

void ReleaseIpv6AddressRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ReleaseIpv6AddressRequest::getRegionId() const {
  return regionId_;
}

void ReleaseIpv6AddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ReleaseIpv6AddressRequest::getDryRun() const {
  return dryRun_;
}

void ReleaseIpv6AddressRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ReleaseIpv6AddressRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ReleaseIpv6AddressRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ReleaseIpv6AddressRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ReleaseIpv6AddressRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ReleaseIpv6AddressRequest::getOwnerId() const {
  return ownerId_;
}

void ReleaseIpv6AddressRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ReleaseIpv6AddressRequest::getIpv6AddressId() const {
  return ipv6AddressId_;
}

void ReleaseIpv6AddressRequest::setIpv6AddressId(const std::string &ipv6AddressId) {
  ipv6AddressId_ = ipv6AddressId;
  setParameter(std::string("Ipv6AddressId"), ipv6AddressId);
}


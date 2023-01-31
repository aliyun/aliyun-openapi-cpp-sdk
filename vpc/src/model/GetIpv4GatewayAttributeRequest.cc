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

#include <alibabacloud/vpc/model/GetIpv4GatewayAttributeRequest.h>

using AlibabaCloud::Vpc::Model::GetIpv4GatewayAttributeRequest;

GetIpv4GatewayAttributeRequest::GetIpv4GatewayAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "GetIpv4GatewayAttribute") {
  setMethod(HttpRequest::Method::Post);
}

GetIpv4GatewayAttributeRequest::~GetIpv4GatewayAttributeRequest() {}

long GetIpv4GatewayAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetIpv4GatewayAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetIpv4GatewayAttributeRequest::getRegionId() const {
  return regionId_;
}

void GetIpv4GatewayAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetIpv4GatewayAttributeRequest::getIpv4GatewayId() const {
  return ipv4GatewayId_;
}

void GetIpv4GatewayAttributeRequest::setIpv4GatewayId(const std::string &ipv4GatewayId) {
  ipv4GatewayId_ = ipv4GatewayId;
  setParameter(std::string("Ipv4GatewayId"), ipv4GatewayId);
}

std::string GetIpv4GatewayAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetIpv4GatewayAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetIpv4GatewayAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetIpv4GatewayAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GetIpv4GatewayAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void GetIpv4GatewayAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


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

#include <alibabacloud/vpc/model/DescribeIpv6GatewayAttributeRequest.h>

using AlibabaCloud::Vpc::Model::DescribeIpv6GatewayAttributeRequest;

DescribeIpv6GatewayAttributeRequest::DescribeIpv6GatewayAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeIpv6GatewayAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeIpv6GatewayAttributeRequest::~DescribeIpv6GatewayAttributeRequest() {}

long DescribeIpv6GatewayAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeIpv6GatewayAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeIpv6GatewayAttributeRequest::getRegionId() const {
  return regionId_;
}

void DescribeIpv6GatewayAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeIpv6GatewayAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeIpv6GatewayAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeIpv6GatewayAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeIpv6GatewayAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeIpv6GatewayAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeIpv6GatewayAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeIpv6GatewayAttributeRequest::getIpv6GatewayId() const {
  return ipv6GatewayId_;
}

void DescribeIpv6GatewayAttributeRequest::setIpv6GatewayId(const std::string &ipv6GatewayId) {
  ipv6GatewayId_ = ipv6GatewayId;
  setParameter(std::string("Ipv6GatewayId"), ipv6GatewayId);
}


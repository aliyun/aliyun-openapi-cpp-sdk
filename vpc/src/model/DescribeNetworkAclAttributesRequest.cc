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

#include <alibabacloud/vpc/model/DescribeNetworkAclAttributesRequest.h>

using AlibabaCloud::Vpc::Model::DescribeNetworkAclAttributesRequest;

DescribeNetworkAclAttributesRequest::DescribeNetworkAclAttributesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeNetworkAclAttributes") {
  setMethod(HttpRequest::Method::Post);
}

DescribeNetworkAclAttributesRequest::~DescribeNetworkAclAttributesRequest() {}

long DescribeNetworkAclAttributesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeNetworkAclAttributesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeNetworkAclAttributesRequest::getClientToken() const {
  return clientToken_;
}

void DescribeNetworkAclAttributesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeNetworkAclAttributesRequest::getRegionId() const {
  return regionId_;
}

void DescribeNetworkAclAttributesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeNetworkAclAttributesRequest::getNetworkAclId() const {
  return networkAclId_;
}

void DescribeNetworkAclAttributesRequest::setNetworkAclId(const std::string &networkAclId) {
  networkAclId_ = networkAclId;
  setParameter(std::string("NetworkAclId"), networkAclId);
}

std::string DescribeNetworkAclAttributesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeNetworkAclAttributesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeNetworkAclAttributesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeNetworkAclAttributesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeNetworkAclAttributesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeNetworkAclAttributesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


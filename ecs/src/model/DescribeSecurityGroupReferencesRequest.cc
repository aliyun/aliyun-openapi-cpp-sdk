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

#include <alibabacloud/ecs/model/DescribeSecurityGroupReferencesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeSecurityGroupReferencesRequest;

DescribeSecurityGroupReferencesRequest::DescribeSecurityGroupReferencesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeSecurityGroupReferences") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSecurityGroupReferencesRequest::~DescribeSecurityGroupReferencesRequest() {}

long DescribeSecurityGroupReferencesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSecurityGroupReferencesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<std::string> DescribeSecurityGroupReferencesRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void DescribeSecurityGroupReferencesRequest::setSecurityGroupId(const std::vector<std::string> &securityGroupId) {
  securityGroupId_ = securityGroupId;
}

std::string DescribeSecurityGroupReferencesRequest::getRegionId() const {
  return regionId_;
}

void DescribeSecurityGroupReferencesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSecurityGroupReferencesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSecurityGroupReferencesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSecurityGroupReferencesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSecurityGroupReferencesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSecurityGroupReferencesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSecurityGroupReferencesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


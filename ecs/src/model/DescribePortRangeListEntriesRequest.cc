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

#include <alibabacloud/ecs/model/DescribePortRangeListEntriesRequest.h>

using AlibabaCloud::Ecs::Model::DescribePortRangeListEntriesRequest;

DescribePortRangeListEntriesRequest::DescribePortRangeListEntriesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribePortRangeListEntries") {
  setMethod(HttpRequest::Method::Post);
}

DescribePortRangeListEntriesRequest::~DescribePortRangeListEntriesRequest() {}

long DescribePortRangeListEntriesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribePortRangeListEntriesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribePortRangeListEntriesRequest::getRegionId() const {
  return regionId_;
}

void DescribePortRangeListEntriesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribePortRangeListEntriesRequest::getPortRangeListId() const {
  return portRangeListId_;
}

void DescribePortRangeListEntriesRequest::setPortRangeListId(const std::string &portRangeListId) {
  portRangeListId_ = portRangeListId;
  setParameter(std::string("PortRangeListId"), portRangeListId);
}

std::string DescribePortRangeListEntriesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribePortRangeListEntriesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribePortRangeListEntriesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribePortRangeListEntriesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribePortRangeListEntriesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribePortRangeListEntriesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


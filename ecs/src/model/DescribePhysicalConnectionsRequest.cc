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

#include <alibabacloud/ecs/model/DescribePhysicalConnectionsRequest.h>

using AlibabaCloud::Ecs::Model::DescribePhysicalConnectionsRequest;

DescribePhysicalConnectionsRequest::DescribePhysicalConnectionsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribePhysicalConnections") {
  setMethod(HttpRequest::Method::Post);
}

DescribePhysicalConnectionsRequest::~DescribePhysicalConnectionsRequest() {}

long DescribePhysicalConnectionsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribePhysicalConnectionsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribePhysicalConnectionsRequest::getClientToken() const {
  return clientToken_;
}

void DescribePhysicalConnectionsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int DescribePhysicalConnectionsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribePhysicalConnectionsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribePhysicalConnectionsRequest::getRegionId() const {
  return regionId_;
}

void DescribePhysicalConnectionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribePhysicalConnectionsRequest::getPageSize() const {
  return pageSize_;
}

void DescribePhysicalConnectionsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribePhysicalConnectionsRequest::getUserCidr() const {
  return userCidr_;
}

void DescribePhysicalConnectionsRequest::setUserCidr(const std::string &userCidr) {
  userCidr_ = userCidr;
  setParameter(std::string("UserCidr"), userCidr);
}

std::string DescribePhysicalConnectionsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribePhysicalConnectionsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribePhysicalConnectionsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribePhysicalConnectionsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribePhysicalConnectionsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribePhysicalConnectionsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<DescribePhysicalConnectionsRequest::Filter> DescribePhysicalConnectionsRequest::getFilter() const {
  return filter_;
}

void DescribePhysicalConnectionsRequest::setFilter(const std::vector<DescribePhysicalConnectionsRequest::Filter> &filter) {
  filter_ = filter;
  for(int dep1 = 0; dep1 != filter.size(); dep1++) {
  auto filterObj = filter.at(dep1);
  std::string filterObjStr = std::string("Filter") + "." + std::to_string(dep1 + 1);
    setParameter(filterObjStr + ".Key", filterObj.key);
  }
}


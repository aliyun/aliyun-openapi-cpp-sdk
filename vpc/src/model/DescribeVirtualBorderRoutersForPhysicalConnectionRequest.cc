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

#include <alibabacloud/vpc/model/DescribeVirtualBorderRoutersForPhysicalConnectionRequest.h>

using AlibabaCloud::Vpc::Model::DescribeVirtualBorderRoutersForPhysicalConnectionRequest;

DescribeVirtualBorderRoutersForPhysicalConnectionRequest::DescribeVirtualBorderRoutersForPhysicalConnectionRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeVirtualBorderRoutersForPhysicalConnection") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVirtualBorderRoutersForPhysicalConnectionRequest::~DescribeVirtualBorderRoutersForPhysicalConnectionRequest() {}

long DescribeVirtualBorderRoutersForPhysicalConnectionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeVirtualBorderRoutersForPhysicalConnectionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeVirtualBorderRoutersForPhysicalConnectionRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeVirtualBorderRoutersForPhysicalConnectionRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeVirtualBorderRoutersForPhysicalConnectionRequest::getRegionId() const {
  return regionId_;
}

void DescribeVirtualBorderRoutersForPhysicalConnectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeVirtualBorderRoutersForPhysicalConnectionRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVirtualBorderRoutersForPhysicalConnectionRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeVirtualBorderRoutersForPhysicalConnectionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeVirtualBorderRoutersForPhysicalConnectionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeVirtualBorderRoutersForPhysicalConnectionRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVirtualBorderRoutersForPhysicalConnectionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<DescribeVirtualBorderRoutersForPhysicalConnectionRequest::Filter> DescribeVirtualBorderRoutersForPhysicalConnectionRequest::getFilter() const {
  return filter_;
}

void DescribeVirtualBorderRoutersForPhysicalConnectionRequest::setFilter(const std::vector<DescribeVirtualBorderRoutersForPhysicalConnectionRequest::Filter> &filter) {
  filter_ = filter;
  for(int dep1 = 0; dep1 != filter.size(); dep1++) {
  auto filterObj = filter.at(dep1);
  std::string filterObjStr = std::string("Filter") + "." + std::to_string(dep1 + 1);
    setParameter(filterObjStr + ".Key", filterObj.key);
  }
}

std::string DescribeVirtualBorderRoutersForPhysicalConnectionRequest::getPhysicalConnectionId() const {
  return physicalConnectionId_;
}

void DescribeVirtualBorderRoutersForPhysicalConnectionRequest::setPhysicalConnectionId(const std::string &physicalConnectionId) {
  physicalConnectionId_ = physicalConnectionId;
  setParameter(std::string("PhysicalConnectionId"), physicalConnectionId);
}


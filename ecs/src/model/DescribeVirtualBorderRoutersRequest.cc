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

#include <alibabacloud/ecs/model/DescribeVirtualBorderRoutersRequest.h>

using AlibabaCloud::Ecs::Model::DescribeVirtualBorderRoutersRequest;

DescribeVirtualBorderRoutersRequest::DescribeVirtualBorderRoutersRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeVirtualBorderRouters") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVirtualBorderRoutersRequest::~DescribeVirtualBorderRoutersRequest() {}

long DescribeVirtualBorderRoutersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeVirtualBorderRoutersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeVirtualBorderRoutersRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeVirtualBorderRoutersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeVirtualBorderRoutersRequest::getRegionId() const {
  return regionId_;
}

void DescribeVirtualBorderRoutersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeVirtualBorderRoutersRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVirtualBorderRoutersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeVirtualBorderRoutersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeVirtualBorderRoutersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeVirtualBorderRoutersRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVirtualBorderRoutersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<DescribeVirtualBorderRoutersRequest::Filter> DescribeVirtualBorderRoutersRequest::getFilter() const {
  return filter_;
}

void DescribeVirtualBorderRoutersRequest::setFilter(const std::vector<DescribeVirtualBorderRoutersRequest::Filter> &filter) {
  filter_ = filter;
  for(int dep1 = 0; dep1 != filter.size(); dep1++) {
  auto filterObj = filter.at(dep1);
  std::string filterObjStr = std::string("Filter") + "." + std::to_string(dep1 + 1);
    setParameter(filterObjStr + ".Key", filterObj.key);
  }
}


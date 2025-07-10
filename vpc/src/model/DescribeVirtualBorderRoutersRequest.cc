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

#include <alibabacloud/vpc/model/DescribeVirtualBorderRoutersRequest.h>

using AlibabaCloud::Vpc::Model::DescribeVirtualBorderRoutersRequest;

DescribeVirtualBorderRoutersRequest::DescribeVirtualBorderRoutersRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeVirtualBorderRouters") {
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

std::string DescribeVirtualBorderRoutersRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeVirtualBorderRoutersRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
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

bool DescribeVirtualBorderRoutersRequest::getIncludeCrossAccountVbr() const {
  return includeCrossAccountVbr_;
}

void DescribeVirtualBorderRoutersRequest::setIncludeCrossAccountVbr(bool includeCrossAccountVbr) {
  includeCrossAccountVbr_ = includeCrossAccountVbr;
  setParameter(std::string("IncludeCrossAccountVbr"), includeCrossAccountVbr ? "true" : "false");
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

std::vector<DescribeVirtualBorderRoutersRequest::Tags> DescribeVirtualBorderRoutersRequest::getTags() const {
  return tags_;
}

void DescribeVirtualBorderRoutersRequest::setTags(const std::vector<DescribeVirtualBorderRoutersRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
  }
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


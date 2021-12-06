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

#include <alibabacloud/ecs/model/DescribeVRoutersRequest.h>

using AlibabaCloud::Ecs::Model::DescribeVRoutersRequest;

DescribeVRoutersRequest::DescribeVRoutersRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeVRouters") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVRoutersRequest::~DescribeVRoutersRequest() {}

long DescribeVRoutersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeVRoutersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeVRoutersRequest::getVRouterId() const {
  return vRouterId_;
}

void DescribeVRoutersRequest::setVRouterId(const std::string &vRouterId) {
  vRouterId_ = vRouterId;
  setParameter(std::string("VRouterId"), vRouterId);
}

int DescribeVRoutersRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeVRoutersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeVRoutersRequest::getRegionId() const {
  return regionId_;
}

void DescribeVRoutersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeVRoutersRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVRoutersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeVRoutersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeVRoutersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeVRoutersRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeVRoutersRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeVRoutersRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVRoutersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


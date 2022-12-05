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

#include <alibabacloud/polardb/model/DescribeStoragePlanRequest.h>

using AlibabaCloud::Polardb::Model::DescribeStoragePlanRequest;

DescribeStoragePlanRequest::DescribeStoragePlanRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeStoragePlan") {
  setMethod(HttpRequest::Method::Post);
}

DescribeStoragePlanRequest::~DescribeStoragePlanRequest() {}

long DescribeStoragePlanRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeStoragePlanRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeStoragePlanRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeStoragePlanRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeStoragePlanRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeStoragePlanRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeStoragePlanRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeStoragePlanRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int DescribeStoragePlanRequest::getPageSize() const {
  return pageSize_;
}

void DescribeStoragePlanRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeStoragePlanRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeStoragePlanRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeStoragePlanRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeStoragePlanRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeStoragePlanRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeStoragePlanRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


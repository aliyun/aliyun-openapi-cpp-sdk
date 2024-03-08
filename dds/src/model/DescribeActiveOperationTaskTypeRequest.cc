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

#include <alibabacloud/dds/model/DescribeActiveOperationTaskTypeRequest.h>

using AlibabaCloud::Dds::Model::DescribeActiveOperationTaskTypeRequest;

DescribeActiveOperationTaskTypeRequest::DescribeActiveOperationTaskTypeRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeActiveOperationTaskType") {
  setMethod(HttpRequest::Method::Post);
}

DescribeActiveOperationTaskTypeRequest::~DescribeActiveOperationTaskTypeRequest() {}

long DescribeActiveOperationTaskTypeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeActiveOperationTaskTypeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeActiveOperationTaskTypeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeActiveOperationTaskTypeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeActiveOperationTaskTypeRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeActiveOperationTaskTypeRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int DescribeActiveOperationTaskTypeRequest::getIsHistory() const {
  return isHistory_;
}

void DescribeActiveOperationTaskTypeRequest::setIsHistory(int isHistory) {
  isHistory_ = isHistory;
  setParameter(std::string("IsHistory"), std::to_string(isHistory));
}

std::string DescribeActiveOperationTaskTypeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeActiveOperationTaskTypeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeActiveOperationTaskTypeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeActiveOperationTaskTypeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeActiveOperationTaskTypeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeActiveOperationTaskTypeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


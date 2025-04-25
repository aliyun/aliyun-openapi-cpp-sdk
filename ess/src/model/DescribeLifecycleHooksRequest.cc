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

#include <alibabacloud/ess/model/DescribeLifecycleHooksRequest.h>

using AlibabaCloud::Ess::Model::DescribeLifecycleHooksRequest;

DescribeLifecycleHooksRequest::DescribeLifecycleHooksRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DescribeLifecycleHooks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLifecycleHooksRequest::~DescribeLifecycleHooksRequest() {}

std::string DescribeLifecycleHooksRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void DescribeLifecycleHooksRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

int DescribeLifecycleHooksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLifecycleHooksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeLifecycleHooksRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeLifecycleHooksRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeLifecycleHooksRequest::getLifecycleHookName() const {
  return lifecycleHookName_;
}

void DescribeLifecycleHooksRequest::setLifecycleHookName(const std::string &lifecycleHookName) {
  lifecycleHookName_ = lifecycleHookName;
  setParameter(std::string("LifecycleHookName"), lifecycleHookName);
}

std::string DescribeLifecycleHooksRequest::getRegionId() const {
  return regionId_;
}

void DescribeLifecycleHooksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeLifecycleHooksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLifecycleHooksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeLifecycleHooksRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeLifecycleHooksRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::vector<std::string> DescribeLifecycleHooksRequest::getLifecycleHookId() const {
  return lifecycleHookId_;
}

void DescribeLifecycleHooksRequest::setLifecycleHookId(const std::vector<std::string> &lifecycleHookId) {
  lifecycleHookId_ = lifecycleHookId;
}

std::string DescribeLifecycleHooksRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeLifecycleHooksRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeLifecycleHooksRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLifecycleHooksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


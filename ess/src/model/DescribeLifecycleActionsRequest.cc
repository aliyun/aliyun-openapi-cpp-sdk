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

#include <alibabacloud/ess/model/DescribeLifecycleActionsRequest.h>

using AlibabaCloud::Ess::Model::DescribeLifecycleActionsRequest;

DescribeLifecycleActionsRequest::DescribeLifecycleActionsRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DescribeLifecycleActions") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLifecycleActionsRequest::~DescribeLifecycleActionsRequest() {}

std::string DescribeLifecycleActionsRequest::getLifecycleActionStatus() const {
  return lifecycleActionStatus_;
}

void DescribeLifecycleActionsRequest::setLifecycleActionStatus(const std::string &lifecycleActionStatus) {
  lifecycleActionStatus_ = lifecycleActionStatus;
  setParameter(std::string("LifecycleActionStatus"), lifecycleActionStatus);
}

std::string DescribeLifecycleActionsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeLifecycleActionsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeLifecycleActionsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeLifecycleActionsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeLifecycleActionsRequest::getRegionId() const {
  return regionId_;
}

void DescribeLifecycleActionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLifecycleActionsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeLifecycleActionsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeLifecycleActionsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLifecycleActionsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLifecycleActionsRequest::getScalingActivityId() const {
  return scalingActivityId_;
}

void DescribeLifecycleActionsRequest::setScalingActivityId(const std::string &scalingActivityId) {
  scalingActivityId_ = scalingActivityId;
  setParameter(std::string("ScalingActivityId"), scalingActivityId);
}

int DescribeLifecycleActionsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeLifecycleActionsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}


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

#include <alibabacloud/ess/model/DescribeScalingActivityDetailRequest.h>

using AlibabaCloud::Ess::Model::DescribeScalingActivityDetailRequest;

DescribeScalingActivityDetailRequest::DescribeScalingActivityDetailRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DescribeScalingActivityDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribeScalingActivityDetailRequest::~DescribeScalingActivityDetailRequest() {}

long DescribeScalingActivityDetailRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeScalingActivityDetailRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeScalingActivityDetailRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeScalingActivityDetailRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeScalingActivityDetailRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeScalingActivityDetailRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeScalingActivityDetailRequest::getScalingActivityId() const {
  return scalingActivityId_;
}

void DescribeScalingActivityDetailRequest::setScalingActivityId(const std::string &scalingActivityId) {
  scalingActivityId_ = scalingActivityId;
  setParameter(std::string("ScalingActivityId"), scalingActivityId);
}

std::string DescribeScalingActivityDetailRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeScalingActivityDetailRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}


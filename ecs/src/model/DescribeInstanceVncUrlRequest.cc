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

#include <alibabacloud/ecs/model/DescribeInstanceVncUrlRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInstanceVncUrlRequest;

DescribeInstanceVncUrlRequest::DescribeInstanceVncUrlRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeInstanceVncUrl") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceVncUrlRequest::~DescribeInstanceVncUrlRequest() {}

long DescribeInstanceVncUrlRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeInstanceVncUrlRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeInstanceVncUrlRequest::getRegionId() const {
  return regionId_;
}

void DescribeInstanceVncUrlRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeInstanceVncUrlRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeInstanceVncUrlRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeInstanceVncUrlRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeInstanceVncUrlRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeInstanceVncUrlRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeInstanceVncUrlRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeInstanceVncUrlRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstanceVncUrlRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


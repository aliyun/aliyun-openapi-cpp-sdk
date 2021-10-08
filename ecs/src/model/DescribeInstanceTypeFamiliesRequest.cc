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

#include <alibabacloud/ecs/model/DescribeInstanceTypeFamiliesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInstanceTypeFamiliesRequest;

DescribeInstanceTypeFamiliesRequest::DescribeInstanceTypeFamiliesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeInstanceTypeFamilies") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceTypeFamiliesRequest::~DescribeInstanceTypeFamiliesRequest() {}

long DescribeInstanceTypeFamiliesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeInstanceTypeFamiliesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeInstanceTypeFamiliesRequest::getRegionId() const {
  return regionId_;
}

void DescribeInstanceTypeFamiliesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeInstanceTypeFamiliesRequest::getGeneration() const {
  return generation_;
}

void DescribeInstanceTypeFamiliesRequest::setGeneration(const std::string &generation) {
  generation_ = generation;
  setParameter(std::string("Generation"), generation);
}

std::string DescribeInstanceTypeFamiliesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeInstanceTypeFamiliesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeInstanceTypeFamiliesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeInstanceTypeFamiliesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeInstanceTypeFamiliesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeInstanceTypeFamiliesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


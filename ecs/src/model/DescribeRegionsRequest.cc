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

#include <alibabacloud/ecs/model/DescribeRegionsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeRegionsRequest;

DescribeRegionsRequest::DescribeRegionsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeRegions") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRegionsRequest::~DescribeRegionsRequest() {}

long DescribeRegionsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRegionsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeRegionsRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void DescribeRegionsRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::string DescribeRegionsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeRegionsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeRegionsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeRegionsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeRegionsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRegionsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeRegionsRequest::getResourceType() const {
  return resourceType_;
}

void DescribeRegionsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string DescribeRegionsRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DescribeRegionsRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}


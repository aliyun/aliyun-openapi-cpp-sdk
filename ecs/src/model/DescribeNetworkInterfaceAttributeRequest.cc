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

#include <alibabacloud/ecs/model/DescribeNetworkInterfaceAttributeRequest.h>

using AlibabaCloud::Ecs::Model::DescribeNetworkInterfaceAttributeRequest;

DescribeNetworkInterfaceAttributeRequest::DescribeNetworkInterfaceAttributeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeNetworkInterfaceAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeNetworkInterfaceAttributeRequest::~DescribeNetworkInterfaceAttributeRequest() {}

long DescribeNetworkInterfaceAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeNetworkInterfaceAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeNetworkInterfaceAttributeRequest::getRegionId() const {
  return regionId_;
}

void DescribeNetworkInterfaceAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<DescribeNetworkInterfaceAttributeRequest::Tag> DescribeNetworkInterfaceAttributeRequest::getTag() const {
  return tag_;
}

void DescribeNetworkInterfaceAttributeRequest::setTag(const std::vector<DescribeNetworkInterfaceAttributeRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string DescribeNetworkInterfaceAttributeRequest::getAttribute() const {
  return attribute_;
}

void DescribeNetworkInterfaceAttributeRequest::setAttribute(const std::string &attribute) {
  attribute_ = attribute;
  setParameter(std::string("Attribute"), attribute);
}

std::string DescribeNetworkInterfaceAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeNetworkInterfaceAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeNetworkInterfaceAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeNetworkInterfaceAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeNetworkInterfaceAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeNetworkInterfaceAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeNetworkInterfaceAttributeRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void DescribeNetworkInterfaceAttributeRequest::setNetworkInterfaceId(const std::string &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  setParameter(std::string("NetworkInterfaceId"), networkInterfaceId);
}


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

#include <alibabacloud/ecs/model/DescribeKeyPairsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeKeyPairsRequest;

DescribeKeyPairsRequest::DescribeKeyPairsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeKeyPairs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeKeyPairsRequest::~DescribeKeyPairsRequest() {}

long DescribeKeyPairsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeKeyPairsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeKeyPairsRequest::getKeyPairFingerPrint() const {
  return keyPairFingerPrint_;
}

void DescribeKeyPairsRequest::setKeyPairFingerPrint(const std::string &keyPairFingerPrint) {
  keyPairFingerPrint_ = keyPairFingerPrint;
  setParameter(std::string("KeyPairFingerPrint"), keyPairFingerPrint);
}

std::string DescribeKeyPairsRequest::getKeyPairName() const {
  return keyPairName_;
}

void DescribeKeyPairsRequest::setKeyPairName(const std::string &keyPairName) {
  keyPairName_ = keyPairName;
  setParameter(std::string("KeyPairName"), keyPairName);
}

bool DescribeKeyPairsRequest::getIncludePublicKey() const {
  return includePublicKey_;
}

void DescribeKeyPairsRequest::setIncludePublicKey(bool includePublicKey) {
  includePublicKey_ = includePublicKey;
  setParameter(std::string("IncludePublicKey"), includePublicKey ? "true" : "false");
}

int DescribeKeyPairsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeKeyPairsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeKeyPairsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeKeyPairsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeKeyPairsRequest::getRegionId() const {
  return regionId_;
}

void DescribeKeyPairsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeKeyPairsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeKeyPairsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeKeyPairsRequest::Tag> DescribeKeyPairsRequest::getTag() const {
  return tag_;
}

void DescribeKeyPairsRequest::setTag(const std::vector<DescribeKeyPairsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeKeyPairsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeKeyPairsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeKeyPairsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeKeyPairsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


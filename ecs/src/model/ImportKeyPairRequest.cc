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

#include <alibabacloud/ecs/model/ImportKeyPairRequest.h>

using AlibabaCloud::Ecs::Model::ImportKeyPairRequest;

ImportKeyPairRequest::ImportKeyPairRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ImportKeyPair") {
  setMethod(HttpRequest::Method::Post);
}

ImportKeyPairRequest::~ImportKeyPairRequest() {}

long ImportKeyPairRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ImportKeyPairRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ImportKeyPairRequest::getKeyPairName() const {
  return keyPairName_;
}

void ImportKeyPairRequest::setKeyPairName(const std::string &keyPairName) {
  keyPairName_ = keyPairName;
  setParameter(std::string("KeyPairName"), keyPairName);
}

std::string ImportKeyPairRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ImportKeyPairRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ImportKeyPairRequest::getRegionId() const {
  return regionId_;
}

void ImportKeyPairRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<ImportKeyPairRequest::Tag> ImportKeyPairRequest::getTag() const {
  return tag_;
}

void ImportKeyPairRequest::setTag(const std::vector<ImportKeyPairRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string ImportKeyPairRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ImportKeyPairRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ImportKeyPairRequest::getPublicKeyBody() const {
  return publicKeyBody_;
}

void ImportKeyPairRequest::setPublicKeyBody(const std::string &publicKeyBody) {
  publicKeyBody_ = publicKeyBody;
  setParameter(std::string("PublicKeyBody"), publicKeyBody);
}

long ImportKeyPairRequest::getOwnerId() const {
  return ownerId_;
}

void ImportKeyPairRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


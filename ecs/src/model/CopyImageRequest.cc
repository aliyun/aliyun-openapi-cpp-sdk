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

#include <alibabacloud/ecs/model/CopyImageRequest.h>

using AlibabaCloud::Ecs::Model::CopyImageRequest;

CopyImageRequest::CopyImageRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CopyImage") {
  setMethod(HttpRequest::Method::Post);
}

CopyImageRequest::~CopyImageRequest() {}

long CopyImageRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CopyImageRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CopyImageRequest::getImageId() const {
  return imageId_;
}

void CopyImageRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string CopyImageRequest::getEncryptAlgorithm() const {
  return encryptAlgorithm_;
}

void CopyImageRequest::setEncryptAlgorithm(const std::string &encryptAlgorithm) {
  encryptAlgorithm_ = encryptAlgorithm;
  setParameter(std::string("EncryptAlgorithm"), encryptAlgorithm);
}

std::string CopyImageRequest::getDestinationRegionId() const {
  return destinationRegionId_;
}

void CopyImageRequest::setDestinationRegionId(const std::string &destinationRegionId) {
  destinationRegionId_ = destinationRegionId;
  setParameter(std::string("DestinationRegionId"), destinationRegionId);
}

std::string CopyImageRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CopyImageRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CopyImageRequest::getRegionId() const {
  return regionId_;
}

void CopyImageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CopyImageRequest::Tag> CopyImageRequest::getTag() const {
  return tag_;
}

void CopyImageRequest::setTag(const std::vector<CopyImageRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CopyImageRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CopyImageRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CopyImageRequest::getDestinationImageName() const {
  return destinationImageName_;
}

void CopyImageRequest::setDestinationImageName(const std::string &destinationImageName) {
  destinationImageName_ = destinationImageName;
  setParameter(std::string("DestinationImageName"), destinationImageName);
}

std::string CopyImageRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CopyImageRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CopyImageRequest::getOwnerId() const {
  return ownerId_;
}

void CopyImageRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool CopyImageRequest::getEncrypted() const {
  return encrypted_;
}

void CopyImageRequest::setEncrypted(bool encrypted) {
  encrypted_ = encrypted;
  setParameter(std::string("Encrypted"), encrypted ? "true" : "false");
}

std::string CopyImageRequest::getKMSKeyId() const {
  return kMSKeyId_;
}

void CopyImageRequest::setKMSKeyId(const std::string &kMSKeyId) {
  kMSKeyId_ = kMSKeyId;
  setParameter(std::string("KMSKeyId"), kMSKeyId);
}

std::string CopyImageRequest::getDestinationDescription() const {
  return destinationDescription_;
}

void CopyImageRequest::setDestinationDescription(const std::string &destinationDescription) {
  destinationDescription_ = destinationDescription;
  setParameter(std::string("DestinationDescription"), destinationDescription);
}


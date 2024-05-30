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

#include <alibabacloud/slb/model/UploadCACertificateRequest.h>

using AlibabaCloud::Slb::Model::UploadCACertificateRequest;

UploadCACertificateRequest::UploadCACertificateRequest()
    : RpcServiceRequest("slb", "2014-05-15", "UploadCACertificate") {
  setMethod(HttpRequest::Method::Post);
}

UploadCACertificateRequest::~UploadCACertificateRequest() {}

std::string UploadCACertificateRequest::getAccess_key_id() const {
  return access_key_id_;
}

void UploadCACertificateRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long UploadCACertificateRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UploadCACertificateRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UploadCACertificateRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void UploadCACertificateRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string UploadCACertificateRequest::getCACertificateName() const {
  return cACertificateName_;
}

void UploadCACertificateRequest::setCACertificateName(const std::string &cACertificateName) {
  cACertificateName_ = cACertificateName;
  setParameter(std::string("CACertificateName"), cACertificateName);
}

std::string UploadCACertificateRequest::getRegionId() const {
  return regionId_;
}

void UploadCACertificateRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<UploadCACertificateRequest::Tag> UploadCACertificateRequest::getTag() const {
  return tag_;
}

void UploadCACertificateRequest::setTag(const std::vector<UploadCACertificateRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string UploadCACertificateRequest::getCACertificate() const {
  return cACertificate_;
}

void UploadCACertificateRequest::setCACertificate(const std::string &cACertificate) {
  cACertificate_ = cACertificate;
  setParameter(std::string("CACertificate"), cACertificate);
}

std::string UploadCACertificateRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UploadCACertificateRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UploadCACertificateRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UploadCACertificateRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string UploadCACertificateRequest::getStandardType() const {
  return standardType_;
}

void UploadCACertificateRequest::setStandardType(const std::string &standardType) {
  standardType_ = standardType;
  setParameter(std::string("StandardType"), standardType);
}

long UploadCACertificateRequest::getOwnerId() const {
  return ownerId_;
}

void UploadCACertificateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


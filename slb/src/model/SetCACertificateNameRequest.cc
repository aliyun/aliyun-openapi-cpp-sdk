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

#include <alibabacloud/slb/model/SetCACertificateNameRequest.h>

using AlibabaCloud::Slb::Model::SetCACertificateNameRequest;

SetCACertificateNameRequest::SetCACertificateNameRequest()
    : RpcServiceRequest("slb", "2014-05-15", "SetCACertificateName") {
  setMethod(HttpRequest::Method::Post);
}

SetCACertificateNameRequest::~SetCACertificateNameRequest() {}

std::string SetCACertificateNameRequest::getAccess_key_id() const {
  return access_key_id_;
}

void SetCACertificateNameRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long SetCACertificateNameRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SetCACertificateNameRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SetCACertificateNameRequest::getCACertificateName() const {
  return cACertificateName_;
}

void SetCACertificateNameRequest::setCACertificateName(const std::string &cACertificateName) {
  cACertificateName_ = cACertificateName;
  setParameter(std::string("CACertificateName"), cACertificateName);
}

std::string SetCACertificateNameRequest::getRegionId() const {
  return regionId_;
}

void SetCACertificateNameRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SetCACertificateNameRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SetCACertificateNameRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SetCACertificateNameRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SetCACertificateNameRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SetCACertificateNameRequest::getOwnerId() const {
  return ownerId_;
}

void SetCACertificateNameRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetCACertificateNameRequest::getCACertificateId() const {
  return cACertificateId_;
}

void SetCACertificateNameRequest::setCACertificateId(const std::string &cACertificateId) {
  cACertificateId_ = cACertificateId;
  setParameter(std::string("CACertificateId"), cACertificateId);
}


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

#include <alibabacloud/slb/model/SetDomainExtensionAttributeRequest.h>

using AlibabaCloud::Slb::Model::SetDomainExtensionAttributeRequest;

SetDomainExtensionAttributeRequest::SetDomainExtensionAttributeRequest()
    : RpcServiceRequest("slb", "2014-05-15", "SetDomainExtensionAttribute") {
  setMethod(HttpRequest::Method::Post);
}

SetDomainExtensionAttributeRequest::~SetDomainExtensionAttributeRequest() {}

std::string SetDomainExtensionAttributeRequest::getAccess_key_id() const {
  return access_key_id_;
}

void SetDomainExtensionAttributeRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long SetDomainExtensionAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SetDomainExtensionAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<SetDomainExtensionAttributeRequest::ServerCertificate> SetDomainExtensionAttributeRequest::getServerCertificate() const {
  return serverCertificate_;
}

void SetDomainExtensionAttributeRequest::setServerCertificate(const std::vector<SetDomainExtensionAttributeRequest::ServerCertificate> &serverCertificate) {
  serverCertificate_ = serverCertificate;
  for(int dep1 = 0; dep1 != serverCertificate.size(); dep1++) {
  auto serverCertificateObj = serverCertificate.at(dep1);
  std::string serverCertificateObjStr = std::string("ServerCertificate") + "." + std::to_string(dep1 + 1);
    setParameter(serverCertificateObjStr + ".BindingType", serverCertificateObj.bindingType);
    setParameter(serverCertificateObjStr + ".CertificateId", serverCertificateObj.certificateId);
    setParameter(serverCertificateObjStr + ".StandardType", serverCertificateObj.standardType);
  }
}

std::string SetDomainExtensionAttributeRequest::getRegionId() const {
  return regionId_;
}

void SetDomainExtensionAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SetDomainExtensionAttributeRequest::getDomainExtensionId() const {
  return domainExtensionId_;
}

void SetDomainExtensionAttributeRequest::setDomainExtensionId(const std::string &domainExtensionId) {
  domainExtensionId_ = domainExtensionId;
  setParameter(std::string("DomainExtensionId"), domainExtensionId);
}

std::string SetDomainExtensionAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SetDomainExtensionAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SetDomainExtensionAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SetDomainExtensionAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::vector<std::string> SetDomainExtensionAttributeRequest::getCertificateId() const {
  return certificateId_;
}

void SetDomainExtensionAttributeRequest::setCertificateId(const std::vector<std::string> &certificateId) {
  certificateId_ = certificateId;
}

long SetDomainExtensionAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void SetDomainExtensionAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetDomainExtensionAttributeRequest::getServerCertificateId() const {
  return serverCertificateId_;
}

void SetDomainExtensionAttributeRequest::setServerCertificateId(const std::string &serverCertificateId) {
  serverCertificateId_ = serverCertificateId;
  setParameter(std::string("ServerCertificateId"), serverCertificateId);
}

std::string SetDomainExtensionAttributeRequest::getTags() const {
  return tags_;
}

void SetDomainExtensionAttributeRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}


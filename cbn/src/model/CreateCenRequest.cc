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

#include <alibabacloud/cbn/model/CreateCenRequest.h>

using AlibabaCloud::Cbn::Model::CreateCenRequest;

CreateCenRequest::CreateCenRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "CreateCen") {
  setMethod(HttpRequest::Method::Post);
}

CreateCenRequest::~CreateCenRequest() {}

long CreateCenRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateCenRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateCenRequest::getClientToken() const {
  return clientToken_;
}

void CreateCenRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateCenRequest::getIpv6Level() const {
  return ipv6Level_;
}

void CreateCenRequest::setIpv6Level(const std::string &ipv6Level) {
  ipv6Level_ = ipv6Level;
  setParameter(std::string("Ipv6Level"), ipv6Level);
}

std::string CreateCenRequest::getDescription() const {
  return description_;
}

void CreateCenRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateCenRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateCenRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::vector<CreateCenRequest::Tag> CreateCenRequest::getTag() const {
  return tag_;
}

void CreateCenRequest::setTag(const std::vector<CreateCenRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateCenRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateCenRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateCenRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateCenRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateCenRequest::getOwnerId() const {
  return ownerId_;
}

void CreateCenRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateCenRequest::getVersion() const {
  return version_;
}

void CreateCenRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string CreateCenRequest::getProtectionLevel() const {
  return protectionLevel_;
}

void CreateCenRequest::setProtectionLevel(const std::string &protectionLevel) {
  protectionLevel_ = protectionLevel;
  setParameter(std::string("ProtectionLevel"), protectionLevel);
}

std::string CreateCenRequest::getName() const {
  return name_;
}

void CreateCenRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}


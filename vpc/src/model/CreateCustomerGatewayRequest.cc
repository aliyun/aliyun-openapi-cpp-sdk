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

#include <alibabacloud/vpc/model/CreateCustomerGatewayRequest.h>

using AlibabaCloud::Vpc::Model::CreateCustomerGatewayRequest;

CreateCustomerGatewayRequest::CreateCustomerGatewayRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateCustomerGateway") {
  setMethod(HttpRequest::Method::Post);
}

CreateCustomerGatewayRequest::~CreateCustomerGatewayRequest() {}

std::string CreateCustomerGatewayRequest::getIpAddress() const {
  return ipAddress_;
}

void CreateCustomerGatewayRequest::setIpAddress(const std::string &ipAddress) {
  ipAddress_ = ipAddress;
  setParameter(std::string("IpAddress"), ipAddress);
}

std::string CreateCustomerGatewayRequest::getAuthKey() const {
  return authKey_;
}

void CreateCustomerGatewayRequest::setAuthKey(const std::string &authKey) {
  authKey_ = authKey;
  setParameter(std::string("AuthKey"), authKey);
}

long CreateCustomerGatewayRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateCustomerGatewayRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateCustomerGatewayRequest::getClientToken() const {
  return clientToken_;
}

void CreateCustomerGatewayRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateCustomerGatewayRequest::getDescription() const {
  return description_;
}

void CreateCustomerGatewayRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateCustomerGatewayRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateCustomerGatewayRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateCustomerGatewayRequest::getRegionId() const {
  return regionId_;
}

void CreateCustomerGatewayRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateCustomerGatewayRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateCustomerGatewayRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateCustomerGatewayRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateCustomerGatewayRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateCustomerGatewayRequest::getOwnerId() const {
  return ownerId_;
}

void CreateCustomerGatewayRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<CreateCustomerGatewayRequest::Tags> CreateCustomerGatewayRequest::getTags() const {
  return tags_;
}

void CreateCustomerGatewayRequest::setTags(const std::vector<CreateCustomerGatewayRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
  }
}

std::string CreateCustomerGatewayRequest::getName() const {
  return name_;
}

void CreateCustomerGatewayRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateCustomerGatewayRequest::getAsn() const {
  return asn_;
}

void CreateCustomerGatewayRequest::setAsn(const std::string &asn) {
  asn_ = asn;
  setParameter(std::string("Asn"), asn);
}


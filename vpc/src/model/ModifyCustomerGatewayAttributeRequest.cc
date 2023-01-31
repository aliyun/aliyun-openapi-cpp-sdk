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

#include <alibabacloud/vpc/model/ModifyCustomerGatewayAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyCustomerGatewayAttributeRequest;

ModifyCustomerGatewayAttributeRequest::ModifyCustomerGatewayAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyCustomerGatewayAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCustomerGatewayAttributeRequest::~ModifyCustomerGatewayAttributeRequest() {}

std::string ModifyCustomerGatewayAttributeRequest::getAuthKey() const {
  return authKey_;
}

void ModifyCustomerGatewayAttributeRequest::setAuthKey(const std::string &authKey) {
  authKey_ = authKey;
  setParameter(std::string("AuthKey"), authKey);
}

long ModifyCustomerGatewayAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyCustomerGatewayAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyCustomerGatewayAttributeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyCustomerGatewayAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyCustomerGatewayAttributeRequest::getDescription() const {
  return description_;
}

void ModifyCustomerGatewayAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyCustomerGatewayAttributeRequest::getCustomerGatewayId() const {
  return customerGatewayId_;
}

void ModifyCustomerGatewayAttributeRequest::setCustomerGatewayId(const std::string &customerGatewayId) {
  customerGatewayId_ = customerGatewayId;
  setParameter(std::string("CustomerGatewayId"), customerGatewayId);
}

std::string ModifyCustomerGatewayAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyCustomerGatewayAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyCustomerGatewayAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyCustomerGatewayAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyCustomerGatewayAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyCustomerGatewayAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyCustomerGatewayAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyCustomerGatewayAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyCustomerGatewayAttributeRequest::getName() const {
  return name_;
}

void ModifyCustomerGatewayAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}


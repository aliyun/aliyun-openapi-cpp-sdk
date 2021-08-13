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

#include <alibabacloud/smartag/model/ResetSmartAccessGatewayClientUserPasswordRequest.h>

using AlibabaCloud::Smartag::Model::ResetSmartAccessGatewayClientUserPasswordRequest;

ResetSmartAccessGatewayClientUserPasswordRequest::ResetSmartAccessGatewayClientUserPasswordRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ResetSmartAccessGatewayClientUserPassword") {
  setMethod(HttpRequest::Method::Post);
}

ResetSmartAccessGatewayClientUserPasswordRequest::~ResetSmartAccessGatewayClientUserPasswordRequest() {}

long ResetSmartAccessGatewayClientUserPasswordRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ResetSmartAccessGatewayClientUserPasswordRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ResetSmartAccessGatewayClientUserPasswordRequest::getPassword() const {
  return password_;
}

void ResetSmartAccessGatewayClientUserPasswordRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string ResetSmartAccessGatewayClientUserPasswordRequest::getRegionId() const {
  return regionId_;
}

void ResetSmartAccessGatewayClientUserPasswordRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ResetSmartAccessGatewayClientUserPasswordRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ResetSmartAccessGatewayClientUserPasswordRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ResetSmartAccessGatewayClientUserPasswordRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ResetSmartAccessGatewayClientUserPasswordRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ResetSmartAccessGatewayClientUserPasswordRequest::getOwnerId() const {
  return ownerId_;
}

void ResetSmartAccessGatewayClientUserPasswordRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ResetSmartAccessGatewayClientUserPasswordRequest::getSmartAGId() const {
  return smartAGId_;
}

void ResetSmartAccessGatewayClientUserPasswordRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string ResetSmartAccessGatewayClientUserPasswordRequest::getUserName() const {
  return userName_;
}

void ResetSmartAccessGatewayClientUserPasswordRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}


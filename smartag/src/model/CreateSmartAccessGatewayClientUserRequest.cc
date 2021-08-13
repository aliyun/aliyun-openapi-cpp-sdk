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

#include <alibabacloud/smartag/model/CreateSmartAccessGatewayClientUserRequest.h>

using AlibabaCloud::Smartag::Model::CreateSmartAccessGatewayClientUserRequest;

CreateSmartAccessGatewayClientUserRequest::CreateSmartAccessGatewayClientUserRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "CreateSmartAccessGatewayClientUser") {
  setMethod(HttpRequest::Method::Post);
}

CreateSmartAccessGatewayClientUserRequest::~CreateSmartAccessGatewayClientUserRequest() {}

long CreateSmartAccessGatewayClientUserRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateSmartAccessGatewayClientUserRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateSmartAccessGatewayClientUserRequest::getPassword() const {
  return password_;
}

void CreateSmartAccessGatewayClientUserRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string CreateSmartAccessGatewayClientUserRequest::getRegionId() const {
  return regionId_;
}

void CreateSmartAccessGatewayClientUserRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateSmartAccessGatewayClientUserRequest::getClientIp() const {
  return clientIp_;
}

void CreateSmartAccessGatewayClientUserRequest::setClientIp(const std::string &clientIp) {
  clientIp_ = clientIp;
  setParameter(std::string("ClientIp"), clientIp);
}

std::string CreateSmartAccessGatewayClientUserRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateSmartAccessGatewayClientUserRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long CreateSmartAccessGatewayClientUserRequest::getBandwidth() const {
  return bandwidth_;
}

void CreateSmartAccessGatewayClientUserRequest::setBandwidth(long bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string CreateSmartAccessGatewayClientUserRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateSmartAccessGatewayClientUserRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateSmartAccessGatewayClientUserRequest::getUserMail() const {
  return userMail_;
}

void CreateSmartAccessGatewayClientUserRequest::setUserMail(const std::string &userMail) {
  userMail_ = userMail;
  setParameter(std::string("UserMail"), userMail);
}

long CreateSmartAccessGatewayClientUserRequest::getOwnerId() const {
  return ownerId_;
}

void CreateSmartAccessGatewayClientUserRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateSmartAccessGatewayClientUserRequest::getSmartAGId() const {
  return smartAGId_;
}

void CreateSmartAccessGatewayClientUserRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string CreateSmartAccessGatewayClientUserRequest::getUserName() const {
  return userName_;
}

void CreateSmartAccessGatewayClientUserRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}


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

#include <alibabacloud/smartag/model/DisableSmartAccessGatewayUserRequest.h>

using AlibabaCloud::Smartag::Model::DisableSmartAccessGatewayUserRequest;

DisableSmartAccessGatewayUserRequest::DisableSmartAccessGatewayUserRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DisableSmartAccessGatewayUser") {
  setMethod(HttpRequest::Method::Post);
}

DisableSmartAccessGatewayUserRequest::~DisableSmartAccessGatewayUserRequest() {}

long DisableSmartAccessGatewayUserRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DisableSmartAccessGatewayUserRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DisableSmartAccessGatewayUserRequest::getRegionId() const {
  return regionId_;
}

void DisableSmartAccessGatewayUserRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DisableSmartAccessGatewayUserRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DisableSmartAccessGatewayUserRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DisableSmartAccessGatewayUserRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DisableSmartAccessGatewayUserRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DisableSmartAccessGatewayUserRequest::getOwnerId() const {
  return ownerId_;
}

void DisableSmartAccessGatewayUserRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DisableSmartAccessGatewayUserRequest::getSmartAGId() const {
  return smartAGId_;
}

void DisableSmartAccessGatewayUserRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string DisableSmartAccessGatewayUserRequest::getUserName() const {
  return userName_;
}

void DisableSmartAccessGatewayUserRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}


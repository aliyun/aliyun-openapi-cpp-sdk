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

#include <alibabacloud/smartag/model/UnbindSmartAccessGatewayRequest.h>

using AlibabaCloud::Smartag::Model::UnbindSmartAccessGatewayRequest;

UnbindSmartAccessGatewayRequest::UnbindSmartAccessGatewayRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "UnbindSmartAccessGateway") {
  setMethod(HttpRequest::Method::Post);
}

UnbindSmartAccessGatewayRequest::~UnbindSmartAccessGatewayRequest() {}

long UnbindSmartAccessGatewayRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UnbindSmartAccessGatewayRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UnbindSmartAccessGatewayRequest::getCcnId() const {
  return ccnId_;
}

void UnbindSmartAccessGatewayRequest::setCcnId(const std::string &ccnId) {
  ccnId_ = ccnId;
  setParameter(std::string("CcnId"), ccnId);
}

std::string UnbindSmartAccessGatewayRequest::getRegionId() const {
  return regionId_;
}

void UnbindSmartAccessGatewayRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UnbindSmartAccessGatewayRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UnbindSmartAccessGatewayRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UnbindSmartAccessGatewayRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UnbindSmartAccessGatewayRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UnbindSmartAccessGatewayRequest::getOwnerId() const {
  return ownerId_;
}

void UnbindSmartAccessGatewayRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long UnbindSmartAccessGatewayRequest::getSmartAGUid() const {
  return smartAGUid_;
}

void UnbindSmartAccessGatewayRequest::setSmartAGUid(long smartAGUid) {
  smartAGUid_ = smartAGUid;
  setParameter(std::string("SmartAGUid"), std::to_string(smartAGUid));
}

std::string UnbindSmartAccessGatewayRequest::getSmartAGId() const {
  return smartAGId_;
}

void UnbindSmartAccessGatewayRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}


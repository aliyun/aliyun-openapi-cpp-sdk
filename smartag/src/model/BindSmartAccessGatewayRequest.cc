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

#include <alibabacloud/smartag/model/BindSmartAccessGatewayRequest.h>

using AlibabaCloud::Smartag::Model::BindSmartAccessGatewayRequest;

BindSmartAccessGatewayRequest::BindSmartAccessGatewayRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "BindSmartAccessGateway") {
  setMethod(HttpRequest::Method::Post);
}

BindSmartAccessGatewayRequest::~BindSmartAccessGatewayRequest() {}

long BindSmartAccessGatewayRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void BindSmartAccessGatewayRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string BindSmartAccessGatewayRequest::getCcnId() const {
  return ccnId_;
}

void BindSmartAccessGatewayRequest::setCcnId(const std::string &ccnId) {
  ccnId_ = ccnId;
  setParameter(std::string("CcnId"), ccnId);
}

std::string BindSmartAccessGatewayRequest::getRegionId() const {
  return regionId_;
}

void BindSmartAccessGatewayRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string BindSmartAccessGatewayRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void BindSmartAccessGatewayRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string BindSmartAccessGatewayRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void BindSmartAccessGatewayRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long BindSmartAccessGatewayRequest::getOwnerId() const {
  return ownerId_;
}

void BindSmartAccessGatewayRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long BindSmartAccessGatewayRequest::getSmartAGUid() const {
  return smartAGUid_;
}

void BindSmartAccessGatewayRequest::setSmartAGUid(long smartAGUid) {
  smartAGUid_ = smartAGUid;
  setParameter(std::string("SmartAGUid"), std::to_string(smartAGUid));
}

std::string BindSmartAccessGatewayRequest::getSmartAGId() const {
  return smartAGId_;
}

void BindSmartAccessGatewayRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}


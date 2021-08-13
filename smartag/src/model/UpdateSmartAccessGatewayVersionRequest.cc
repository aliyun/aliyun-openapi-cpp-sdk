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

#include <alibabacloud/smartag/model/UpdateSmartAccessGatewayVersionRequest.h>

using AlibabaCloud::Smartag::Model::UpdateSmartAccessGatewayVersionRequest;

UpdateSmartAccessGatewayVersionRequest::UpdateSmartAccessGatewayVersionRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "UpdateSmartAccessGatewayVersion") {
  setMethod(HttpRequest::Method::Post);
}

UpdateSmartAccessGatewayVersionRequest::~UpdateSmartAccessGatewayVersionRequest() {}

long UpdateSmartAccessGatewayVersionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateSmartAccessGatewayVersionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateSmartAccessGatewayVersionRequest::getRegionId() const {
  return regionId_;
}

void UpdateSmartAccessGatewayVersionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateSmartAccessGatewayVersionRequest::getVersionCode() const {
  return versionCode_;
}

void UpdateSmartAccessGatewayVersionRequest::setVersionCode(const std::string &versionCode) {
  versionCode_ = versionCode;
  setParameter(std::string("VersionCode"), versionCode);
}

std::string UpdateSmartAccessGatewayVersionRequest::getSerialNumber() const {
  return serialNumber_;
}

void UpdateSmartAccessGatewayVersionRequest::setSerialNumber(const std::string &serialNumber) {
  serialNumber_ = serialNumber;
  setParameter(std::string("SerialNumber"), serialNumber);
}

std::string UpdateSmartAccessGatewayVersionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateSmartAccessGatewayVersionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateSmartAccessGatewayVersionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateSmartAccessGatewayVersionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateSmartAccessGatewayVersionRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateSmartAccessGatewayVersionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateSmartAccessGatewayVersionRequest::getVersionType() const {
  return versionType_;
}

void UpdateSmartAccessGatewayVersionRequest::setVersionType(const std::string &versionType) {
  versionType_ = versionType;
  setParameter(std::string("VersionType"), versionType);
}

std::string UpdateSmartAccessGatewayVersionRequest::getSmartAGId() const {
  return smartAGId_;
}

void UpdateSmartAccessGatewayVersionRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}


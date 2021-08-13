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

#include <alibabacloud/smartag/model/DescribeDeviceAutoUpgradePolicyRequest.h>

using AlibabaCloud::Smartag::Model::DescribeDeviceAutoUpgradePolicyRequest;

DescribeDeviceAutoUpgradePolicyRequest::DescribeDeviceAutoUpgradePolicyRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DescribeDeviceAutoUpgradePolicy") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDeviceAutoUpgradePolicyRequest::~DescribeDeviceAutoUpgradePolicyRequest() {}

long DescribeDeviceAutoUpgradePolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDeviceAutoUpgradePolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDeviceAutoUpgradePolicyRequest::getRegionId() const {
  return regionId_;
}

void DescribeDeviceAutoUpgradePolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDeviceAutoUpgradePolicyRequest::getSerialNumber() const {
  return serialNumber_;
}

void DescribeDeviceAutoUpgradePolicyRequest::setSerialNumber(const std::string &serialNumber) {
  serialNumber_ = serialNumber;
  setParameter(std::string("SerialNumber"), serialNumber);
}

std::string DescribeDeviceAutoUpgradePolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDeviceAutoUpgradePolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDeviceAutoUpgradePolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDeviceAutoUpgradePolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDeviceAutoUpgradePolicyRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDeviceAutoUpgradePolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDeviceAutoUpgradePolicyRequest::getVersionType() const {
  return versionType_;
}

void DescribeDeviceAutoUpgradePolicyRequest::setVersionType(const std::string &versionType) {
  versionType_ = versionType;
  setParameter(std::string("VersionType"), versionType);
}

std::string DescribeDeviceAutoUpgradePolicyRequest::getSmartAGId() const {
  return smartAGId_;
}

void DescribeDeviceAutoUpgradePolicyRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}


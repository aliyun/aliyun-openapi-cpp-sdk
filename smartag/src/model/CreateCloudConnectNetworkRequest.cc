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

#include <alibabacloud/smartag/model/CreateCloudConnectNetworkRequest.h>

using AlibabaCloud::Smartag::Model::CreateCloudConnectNetworkRequest;

CreateCloudConnectNetworkRequest::CreateCloudConnectNetworkRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "CreateCloudConnectNetwork") {
  setMethod(HttpRequest::Method::Post);
}

CreateCloudConnectNetworkRequest::~CreateCloudConnectNetworkRequest() {}

long CreateCloudConnectNetworkRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateCloudConnectNetworkRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateCloudConnectNetworkRequest::getDescription() const {
  return description_;
}

void CreateCloudConnectNetworkRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateCloudConnectNetworkRequest::getSnatCidrBlock() const {
  return snatCidrBlock_;
}

void CreateCloudConnectNetworkRequest::setSnatCidrBlock(const std::string &snatCidrBlock) {
  snatCidrBlock_ = snatCidrBlock;
  setParameter(std::string("SnatCidrBlock"), snatCidrBlock);
}

std::string CreateCloudConnectNetworkRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateCloudConnectNetworkRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateCloudConnectNetworkRequest::getRegionId() const {
  return regionId_;
}

void CreateCloudConnectNetworkRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool CreateCloudConnectNetworkRequest::getIsDefault() const {
  return isDefault_;
}

void CreateCloudConnectNetworkRequest::setIsDefault(bool isDefault) {
  isDefault_ = isDefault;
  setParameter(std::string("IsDefault"), isDefault ? "true" : "false");
}

std::string CreateCloudConnectNetworkRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateCloudConnectNetworkRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateCloudConnectNetworkRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateCloudConnectNetworkRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateCloudConnectNetworkRequest::getOwnerId() const {
  return ownerId_;
}

void CreateCloudConnectNetworkRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateCloudConnectNetworkRequest::getName() const {
  return name_;
}

void CreateCloudConnectNetworkRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateCloudConnectNetworkRequest::getCidrBlock() const {
  return cidrBlock_;
}

void CreateCloudConnectNetworkRequest::setCidrBlock(const std::string &cidrBlock) {
  cidrBlock_ = cidrBlock;
  setParameter(std::string("CidrBlock"), cidrBlock);
}


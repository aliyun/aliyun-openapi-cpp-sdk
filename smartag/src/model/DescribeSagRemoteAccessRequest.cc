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

#include <alibabacloud/smartag/model/DescribeSagRemoteAccessRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSagRemoteAccessRequest;

DescribeSagRemoteAccessRequest::DescribeSagRemoteAccessRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DescribeSagRemoteAccess") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSagRemoteAccessRequest::~DescribeSagRemoteAccessRequest() {}

long DescribeSagRemoteAccessRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSagRemoteAccessRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSagRemoteAccessRequest::getRegionId() const {
  return regionId_;
}

void DescribeSagRemoteAccessRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSagRemoteAccessRequest::getSerialNumber() const {
  return serialNumber_;
}

void DescribeSagRemoteAccessRequest::setSerialNumber(const std::string &serialNumber) {
  serialNumber_ = serialNumber;
  setParameter(std::string("SerialNumber"), serialNumber);
}

std::string DescribeSagRemoteAccessRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSagRemoteAccessRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSagRemoteAccessRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSagRemoteAccessRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSagRemoteAccessRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSagRemoteAccessRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeSagRemoteAccessRequest::getSmartAGId() const {
  return smartAGId_;
}

void DescribeSagRemoteAccessRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}


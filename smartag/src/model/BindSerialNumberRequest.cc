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

#include <alibabacloud/smartag/model/BindSerialNumberRequest.h>

using AlibabaCloud::Smartag::Model::BindSerialNumberRequest;

BindSerialNumberRequest::BindSerialNumberRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "BindSerialNumber") {
  setMethod(HttpRequest::Method::Post);
}

BindSerialNumberRequest::~BindSerialNumberRequest() {}

long BindSerialNumberRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void BindSerialNumberRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string BindSerialNumberRequest::getRegionId() const {
  return regionId_;
}

void BindSerialNumberRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string BindSerialNumberRequest::getSerialNumber() const {
  return serialNumber_;
}

void BindSerialNumberRequest::setSerialNumber(const std::string &serialNumber) {
  serialNumber_ = serialNumber;
  setParameter(std::string("SerialNumber"), serialNumber);
}

std::string BindSerialNumberRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void BindSerialNumberRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string BindSerialNumberRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void BindSerialNumberRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long BindSerialNumberRequest::getOwnerId() const {
  return ownerId_;
}

void BindSerialNumberRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string BindSerialNumberRequest::getSmartAGId() const {
  return smartAGId_;
}

void BindSerialNumberRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}


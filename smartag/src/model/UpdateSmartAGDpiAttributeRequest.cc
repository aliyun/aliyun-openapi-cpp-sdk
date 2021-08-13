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

#include <alibabacloud/smartag/model/UpdateSmartAGDpiAttributeRequest.h>

using AlibabaCloud::Smartag::Model::UpdateSmartAGDpiAttributeRequest;

UpdateSmartAGDpiAttributeRequest::UpdateSmartAGDpiAttributeRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "UpdateSmartAGDpiAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateSmartAGDpiAttributeRequest::~UpdateSmartAGDpiAttributeRequest() {}

long UpdateSmartAGDpiAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateSmartAGDpiAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateSmartAGDpiAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateSmartAGDpiAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool UpdateSmartAGDpiAttributeRequest::getDpiEnabled() const {
  return dpiEnabled_;
}

void UpdateSmartAGDpiAttributeRequest::setDpiEnabled(bool dpiEnabled) {
  dpiEnabled_ = dpiEnabled;
  setParameter(std::string("DpiEnabled"), dpiEnabled ? "true" : "false");
}

std::string UpdateSmartAGDpiAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateSmartAGDpiAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool UpdateSmartAGDpiAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateSmartAGDpiAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateSmartAGDpiAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateSmartAGDpiAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateSmartAGDpiAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateSmartAGDpiAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateSmartAGDpiAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateSmartAGDpiAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateSmartAGDpiAttributeRequest::getSmartAGId() const {
  return smartAGId_;
}

void UpdateSmartAGDpiAttributeRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}


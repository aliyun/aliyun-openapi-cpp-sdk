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

#include <alibabacloud/smartag/model/DisableSmartAGDpiMonitorRequest.h>

using AlibabaCloud::Smartag::Model::DisableSmartAGDpiMonitorRequest;

DisableSmartAGDpiMonitorRequest::DisableSmartAGDpiMonitorRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DisableSmartAGDpiMonitor") {
  setMethod(HttpRequest::Method::Post);
}

DisableSmartAGDpiMonitorRequest::~DisableSmartAGDpiMonitorRequest() {}

long DisableSmartAGDpiMonitorRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DisableSmartAGDpiMonitorRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DisableSmartAGDpiMonitorRequest::getClientToken() const {
  return clientToken_;
}

void DisableSmartAGDpiMonitorRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DisableSmartAGDpiMonitorRequest::getRegionId() const {
  return regionId_;
}

void DisableSmartAGDpiMonitorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DisableSmartAGDpiMonitorRequest::getDryRun() const {
  return dryRun_;
}

void DisableSmartAGDpiMonitorRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DisableSmartAGDpiMonitorRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DisableSmartAGDpiMonitorRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DisableSmartAGDpiMonitorRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DisableSmartAGDpiMonitorRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DisableSmartAGDpiMonitorRequest::getOwnerId() const {
  return ownerId_;
}

void DisableSmartAGDpiMonitorRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DisableSmartAGDpiMonitorRequest::getSmartAGId() const {
  return smartAGId_;
}

void DisableSmartAGDpiMonitorRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

